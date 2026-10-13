# echo-dot-rea

Reverse engineering an Amazon Echo Dot (2nd gen) with [REA](https://github.com/morluto/rea), without opening the device, soldering, or touching its network. The entry point is the public OTA firmware, extracted and analyzed statically.

## Target

Echo Dot 2nd gen, codename `biscuit`, model `AEOBC`.

| Property | Value |
|---|---|
| OS | Fire OS 5.5.0.3 (Android 5.1.1, build `272.5.6.4_user_564196920`) |
| SoC | MediaTek MT8163 (ARM64 kernel, 32-bit `armeabi-v7a` userland) |
| Boot chain | `preloader` to `lk` (Little Kernel) to `tz` (TrustZone/TEE) to `boot` |
| OTA | Signed with SignApk, dual-slot block image update (`other-system`/`other-boot`) |

## Why firmware and not the device

The Echo Dot exposes no data path. Bluetooth is audio only (A2DP sink), there is no ADB, and the barrel/micro-USB is power only. Short of an eMMC/UART teardown, the only non-invasive source of the device code is the OTA image, which Amazon still serves in the clear from its CloudFront CDN.

## Pipeline

1. Download the OTA `.bin` from Amazon's CDN (`d1s31zyz7dcc2d.cloudfront.net/.../update-kindle-*_biscuit-*.bin`). URLs come from the XDA "Echo Dot 2nd Gen OTA Urls" thread; read it through `web.archive.org` since XDA returns 403 to automated fetches.
2. The `.bin` is a ZIP (SignApk). Unzip it. The system partition ships as `system.new.dat` + `system.transfer.list` (Android block-OTA format).
3. Convert that pair to a raw ext4 image with [`scripts/sdat2img.py`](scripts/sdat2img.py).
4. Pull the Android `/system` tree from the ext4 image with `debugfs` (read only, no root). See [`docs/extraction.md`](docs/extraction.md).
5. Run REA on the extracted binaries. On Windows, REA's Ghidra provider only accepts PE, so ELF analysis runs under WSL with the toolchain built by [`scripts/wsl_rea_bootstrap.sh`](scripts/wsl_rea_bootstrap.sh).

## Findings: `alexad`

`alexad` (`/system/bin/alexad`, ARM 32-bit, stripped) is the Alexa daemon. REA via Ghidra recovered 27 segments, 343 procedures, 286 strings, 325 ARM relocations, 106 entry points.

It is a thin launcher. The real logic lives in `libalexad.so`; `alexad` instantiates the `AlexaDaemon` class and, per an embedded string, "Creates a bidirectional pipeline to the Alexa proxy server to vend messages", which is the device's persistent link to the Alexa cloud (AVS).

Linked libraries: `libalexad.so`, GLib/GIO/GObject (event loop), `libgnustl_shared.so` (C++ STL), `liblab126utils.so` (Lab126, Amazon's hardware division), `libllog*` (Amazon logging).

Other device binaries of interest, extracted and ready for the same workflow: `alexaspeechplayer`, `amzn_dha_tool` and `amzn_dha_hmac` (device-health crypto, ARM64), `metrics-collector`.

See [`docs/findings.md`](docs/findings.md) for the full REA evidence.

## Legal

For personal security research on hardware I own. Firmware images and extracted binaries are Amazon's property and are not redistributed here: this repo holds only the tooling, the method, and derived analysis. Obtain the OTA from Amazon's CDN yourself.
