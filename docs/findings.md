# Findings

REA v6.4.0, Ghidra 12.1.4 provider, running under WSL (Ubuntu 24.04). Target SHA-256 for `alexad`: `8ed1bdf4681fdcf9d5b13dcde447f87a472bcc3a3573709bfb055ec13ed0041b`.

## Device identity

From `system/build.prop`, `ota.prop`, `META-INF/com/android/metadata`:

```
ro.build.fingerprint = Amazon/full_biscuit/biscuit:5.1.1/LVY48F/272.5.6.4_user_564196920:user/release-keys
ro.product.model     = AEOBC
ro.product.device    = biscuit
ro.board.platform    = mt8163
ro.product.cpu.abi   = arm64-v8a  (abilist: armeabi-v7a, armeabi)
version_name         = Fire OS 5.5.0.3 (564196920)
```

The `updater-script` flashes `other-boot`, `other-lk`, `tee1` (TrustZone) and `mmcblk0boot0` (preloader), confirming a MediaTek dual-slot layout.

## alexad

`rea inspect` overview:

```
segments        27
procedures     343
strings        286
```

`rea inspect-native-load-image`:

```
relocations    325  (ARM: R_ARM_ABS32, R_ARM_GLOB_DAT, R_ARM_JUMP_SLOT, R_ARM_RELATIVE)
entry_points   106
```

ELF section map (abridged): `.interp`, `.dynsym` (3120 B), `.dynstr` (8955 B), `.plt` (680 B), `.text` (23648 B, 0x14264 to 0x19ec4), `.ARM.exidx`/`.ARM.extab`, `.rodata`, `.init_array`, `.data.rel.ro`, `.got`. Linked with GNU gold.

### Role

A thin launcher. The functional logic is in `libalexad.so`; `alexad` imports and instantiates the `AlexaDaemon` class (`_ZN11AlexaDaemonC1Ev`). Notable strings:

```
I AlexaDaemonMain:StartingAlexaDaemonMain::Starting AlexaDaemonMain
Creates a bidirectional pipeline to the Alexa proxy server to vend messages.
/data/local/tmp/alexad.pid
E AlexaDaemonMain:ExceptionInMain:reason=%s:
```

So `alexad` owns the persistent bidirectional channel to the Alexa cloud (AVS) and supervises it with exception handling and Amazon's `llog` logging.

### Linked libraries (`DT_NEEDED`)

```
libalexad.so          the actual daemon logic
libglib-2.0.so        event loop / main context
libgio-2.0.so
libgmodule-2.0.so
libgobject-2.0.so
libgnustl_shared.so   GNU C++ STL (gcc)
liblab126utils.so     Lab126 (Amazon hardware division) utilities
libllog.so            Amazon logging
libllog-android.so
libc.so  libm.so
```

## Other targets (extracted, not yet decompiled)

| Binary | Arch | Note |
|---|---|---|
| `alexaspeechplayer` | ARM 32 | speech / TTS playback |
| `amzn_dha_tool` | ARM64 | device-health agent tooling |
| `amzn_dha_hmac` | ARM64 | device-health HMAC crypto |
| `metrics-collector` | ARM 32 | metrics daemon |

Next step for any of these: `rea inspect <path>` then `rea function <path> <address>` for per-function pseudocode.

The `libalexad.so` transport/protocol layer is now analyzed in
[avs-protocol.md](avs-protocol.md): SPDY (spdylay) transport, config-driven
endpoint, the `libauth`+idme+cJSON authentication handshake, Doppler ping
keepalive, the GTFO reconnect supervisor, and the on-device Doppler command set.
