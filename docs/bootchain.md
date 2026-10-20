# Boot chain (preloader, LK, TEE, kernel)

The MediaTek secure boot chain that runs before Fire OS. Codename **biscuit**,
SoC **MT8163**, vendor **Amazon Lab126**. The OTA `updater-script` flashes
`mmcblk0boot0` (preloader), `other-lk` (LK), `tee1` (TrustZone) and `other-boot`
(kernel) into a dual-slot (A/B) layout.

## Decompilation note

Unlike the Fire OS binaries, the boot images are not ELF files. `preloader.img`
and `lk.bin` are raw MediaTek load images: a GFH header (preloader) or a 0x200
MTK image header (LK) followed by raw ARM code. Loaded into Ghidra as a flat
`BinaryLoader` image with the explicit processor (`ARM:LE:32:v7`) and the correct
base address, auto-analysis (which follows ARM/Thumb mode switches) recovers full
pseudocode:

| Image | Base | Functions | Output |
|---|---|--:|---|
| `preloader` | `0x00200000` | 397 | `decomp/preloader.c` |
| `lk` | `0x41E00000` | 983 | `decomp/lk.c` |
| `tz` | - | 0 | `decomp/tz.c` |

The base addresses come from the images themselves: LK's reset vector table sits
at `0x41E00000`, the preloader's code (after the GFH header block, ending at file
offset `0x300`) loads at `0x00200000`.

`tz.img` is different: it holds **two** MTK sub-images (each with the standard
`0x58881688` header), an `ATF` partition at offset `0x0` (0xb400 bytes) and a
`TEE` partition at `0xb600` (0x275800 bytes). After its MTK header, each sub-image
is an `EET KTM ` container: a ~0x240-byte plaintext header (magic + body sizes
`0xb1c0` / `0x2755c0`) followed by an **encrypted** body. The encryption is
established by measurement, not assumed. The payload starts at file offset
`0x440` (the EET KTM header's own content-offset field is `0x240`, after the
`0x200` MTK header), so the carving is header-aware:

- **Entropy**: 7.9-8.0 bits/byte end to end (2 KB windows), the signature of
  ciphertext or compressed data, where ARM/AArch64 code sits around 5-6.
- **Byte histogram / chi-square**: the ATF body's histogram is flat (`0x00` aside,
  every value ~200-210 times over 45 KB); chi-square against uniform is 212 over
  256 bins, squarely in the random range (compiled code scores in the tens of
  thousands).
- **Not compressed**: zlib, raw deflate, gzip, lzma and bz2 all reject the body,
  so the high entropy is encryption, not a reversible packer.
- **Every disassembler configuration fails**: imported into Ghidra as
  `AARCH64:LE:64:v8A`, `ARM:LE:32:v7` and `ARM:LE:32:v8T` (Thumb), base 0 and
  header-carved. AArch64 yields **0 functions**; ARM and Thumb yield 7-8 but all
  are hallucinations placed on the exception vectors, full of `halt_baddata()`
  and reads of uninitialized registers, no real code.

So the shipped TEE is ciphertext: it carries no decompilable code and is
recovered only with the decryption key, which is not in the image (on MediaTek
the TEE/ATF is decrypted at load from a SoC-fused key). This is the limit of what
the OTA image yields, short of the hardware key. The chain below is therefore
documented from the decompiled preloader/LK plus the images' string tables
(`extract/images/`).

## Stage 1: preloader (MT65xx Preloader, MT8163)

The on-chip boot ROM loads the preloader from the eMMC boot partition. The
preloader brings up DRAM (extensive DRAMC calibration strings) and secure memory
(`SRAMROM Secure Addr/Control`, `MPU LOCK`, `set secure memory protection`), then
loads and verifies the next stage.

**LK verification (RSA-2048 / PSS / SHA-256):**

```
VERIFY_LK
RSA2048 signature of LK: (lk_size %d, lk_img_size %d)
Decoded RSA2048 signature of LK:
SHA256 of LK:
check header, err(signature 0x%llx!=0x%llx)
fail to do hw sha256 for lk data / fail to do pss decode for lk data
```

LK is hashed with hardware SHA-256 and its RSA-2048 signature is PSS-decoded and
checked before control transfers.

**RPMB-gated:** `Device is RPMB provisioned, need to verify LK`,
`RPMB key is successfully programmed`. The Replay-Protected Memory Block key
state gates whether LK must be verified.

**Unlock path (RSA-PSS, code in idme):**

```
VERIFY_PSS_UNLOCK
Device is unlocked with RSA-PSS unlock signature
Can't decode unlock code from IDME
RSA-PSS signature length is wrong %d, expected 256
Authentication key not yet programmed
```

The device-unlock code is stored in **idme** and verified with an RSA-PSS
signature (256-byte). This is the same idme partition the Alexa stack reads for
DSN/deviceType ([avs-protocol.md](avs-protocol.md)).

**TEE/ATF load:** `bldr load tee part`, `TEE start entry : 0x%x`,
`TEE load fail` / `TEE verify fail` / `ATF verify fail` (ARM Trusted Firmware).

**USB download agent:** the preloader also speaks the MediaTek DA protocol over
USB CDC ACM (`USB CDC ACM for preloader`, `usbdl_verify_da: DA authenticated` /
`DA validation fail` / `DA validation disabled`, `Tool connection is unlocked`).
This is the flash/recovery entry point, itself authenticated.

## Stage 2: LK (Little Kernel / aboot) - BISCUIT

LK loads and authenticates the Android boot image using an **X.509 certificate
chain**, not a bare RSA signature:

```
Android Boot Image / Diagnostic Boot Image
ERROR: Boot image failed authentication
Certificate verified against %s CA
ERROR: Hash not found in image certificate
ERROR: Unable to parse certificate from image
ERROR: Certificate verify failed: %d
```

Signing CAs are split production vs engineering:

```
Common Kernel Signing Production CA0
Common Kernel Signing Engineering CA0
Amazon Lab126
Authentication failed on engineering device with production certificate
```

LK then builds the kernel cmdline, injecting the security posture:

```
androidboot.secure_cpu=%s
androidboot.selinux=enforce | permissive
androidboot.unlocked_kernel=%s
androidboot.rpmb_state=%d
androidboot.prod=0 | 1
androidboot.slot_suffix=%s        (A/B slots)
androidboot.serialno= / androidboot.lk_build_desc=%s
```

A **diagnostic boot image** path exists that disables SELinux
(`!!!! booting into dkernel disable selinux !!!!`). On failure LK falls back to
fastboot (`Falling back to fastboot`, `=> FASTBOOT mode...`).

## Stage 3: TEE (TrustZone)

`tee1` / `tz.img`. Opaque: not decompilable here. This is the secure world that
hosts the Amazon Keymaster behind DHA attestation ([attestation.md](attestation.md))
and the signing used by the AVS auth handshake. ATF (ARM Trusted Firmware) is
loaded alongside it by the preloader.

## Stage 4: kernel (boot.img)

Linux for `mediatek,mt8163` (Android 5.1.1 / Fire OS 5.5.0.3). Cmdline
`console=ttyS0,921600n1 root=/dev/ram initrd=0x44000200,0x200000`; a large MT8163
device tree. From here Fire OS and the Alexa stack
([decompilation.md](decompilation.md)) take over.

## Chain of trust, summarized

```
BootROM -> preloader       (on-chip, immutable)
preloader -> LK            RSA-2048/PSS + HW SHA-256, RPMB-gated, idme unlock
LK -> boot.img (kernel)    X.509 cert chain vs Lab126 Production/Engineering CA
preloader -> TEE/ATF       separate verified load (TEE verify fail / ATF verify fail)
```
