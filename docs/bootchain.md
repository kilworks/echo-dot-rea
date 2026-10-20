# Boot chain (preloader, LK, TEE, kernel)

The MediaTek secure boot chain that runs before Fire OS. Codename **biscuit**,
SoC **MT8163**, vendor **Amazon Lab126**. The OTA `updater-script` flashes
`mmcblk0boot0` (preloader), `other-lk` (LK), `tee1` (TrustZone) and `other-boot`
(kernel) into a dual-slot (A/B) layout.

## Decompilation note

Unlike the Fire OS binaries, the boot images are not ELF files. `preloader.img`
and `lk.bin` are raw MediaTek load images; Ghidra loaded them as flat blobs and
recovered essentially no structured pseudocode (only thunks in `preloader.c` /
`lk.c`). `tz.code.bin` disassembled to **zero** functions, an opaque TEE blob.
So this chain is documented from the images' own string tables
(`extract/images/`), which is where the real evidence is.

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
