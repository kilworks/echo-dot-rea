# Decompilation

Every function of every Echo-specific binary, decompiled to C pseudocode. The decompiler is Ghidra 12.1.4, driven headless by [`scripts/DecompileAll.java`](../scripts/DecompileAll.java) through [`scripts/decompile_all.sh`](../scripts/decompile_all.sh). This is the same engine REA wraps; running it headless gives an exhaustive pass over all functions Ghidra discovers, including the unnamed ones in these stripped binaries.

Pseudocode output lives in [`decomp/`](../decomp), one `.c` per binary.

## Coverage

12 binaries, 10,494 functions, 100% decompiled.

| Binary | Arch | Functions | Pseudocode |
|---|---|--:|---|
| `libalexad.so` | ARM32 | 3522 | `decomp/libalexad.so.c` |
| `libalexaservice.so` | ARM32 | 2845 | `decomp/libalexaservice.so.c` |
| `libalexaspeechplayerimpl.so` | ARM32 | 2118 | `decomp/libalexaspeechplayerimpl.so.c` |
| `metrics-collector` | ARM32 | 892 | `decomp/metrics-collector.c` |
| `libalexamessageparsingutil.so` | ARM32 | 337 | `decomp/libalexamessageparsingutil.so.c` |
| `alexad` | ARM32 | 284 | `decomp/alexad.c` |
| `alexaspeechplayer` | ARM32 | 264 | `decomp/alexaspeechplayer.c` |
| `liblab126utils.so` | ARM32 | 73 | `decomp/liblab126utils.so.c` |
| `libllog.so` | ARM32 | 65 | `decomp/libllog.so.c` |
| `amzn_dha_tool` | ARM64 | 53 | `decomp/amzn_dha_tool.c` |
| `amzn_dha_hmac` | ARM64 | 24 | `decomp/amzn_dha_hmac.c` |
| `libllog-android.so` | ARM32 | 17 | `decomp/libllog-android.so.c` |

Boot chain, loaded as raw MediaTek images (not ELF), so Ghidra recovered
disassembly/thunks rather than pseudocode. Documented from image strings in
[bootchain.md](bootchain.md).

| Image | Arch | Recovered | Output |
|---|---|--:|---|
| `preloader` | ARM32 | raw blob, thunks only | `decomp/preloader.c` |
| `lk` | ARM32 | raw blob, thunks only | `decomp/lk.c` |
| `tz` | ARM | 0 functions (opaque TEE) | `decomp/tz.c` |

Function names are `FUN_<addr>` where the binary is stripped; the logic, control flow, string references and library calls are recovered. Named symbols survive only for exported/imported functions.

## Architecture recovered from the pseudocode and strings

Each subsystem below has a dedicated deep-dive: [avs-protocol.md](avs-protocol.md),
[messaging-lipc.md](messaging-lipc.md), [speech-audio.md](speech-audio.md),
[metrics-and-support.md](metrics-and-support.md), [attestation.md](attestation.md),
[bootchain.md](bootchain.md).

### The daemon: `alexad` + `libalexad.so`

`alexad` is a launcher; `libalexad.so` holds the `AlexaDaemon` class. It owns the persistent connection to the Alexa cloud ("Alexa proxy server") with its own reconnection logic:

```
AlexaDaemon.OnConnect / AlexaDaemonDisconnect
AlexaDaemon:connectBackoff:timeoutMS=...
AlexaDaemon:connectionLoopActive / connectionLoopGTFO
AlexaDaemon:ClientStreamDelegate{Close,Metrics}  (per-client streams, byte counters)
AlexaAuthenticator:startAuthentication / checkAuthentication
```

A `/data/local/dont_perform_registration_tasks` flag gates device registration.

### On-device bus: `libalexaservice.so` + `libalexamessageparsingutil.so`

Alexa components do not each open their own socket. They talk over **LIPC** (Lab126 Inter-Process Communication) through an `AlexaMessagingEndpoint`:

```
AlexaMessagingEndpoint:initialize / sendMessageEx / sendMessageWithAttachment
LipcOpenEx, LipcRegisterHasharrayProperties, LipcSubscribeExt  (init path)
messageTxAckCallback / waitForMessageAck  (reliable message acks by messageId)
AlexaMessageAttachment{Reader,Writer}ShmQueue  (shared-memory attachment transport)
```

Large payloads (audio) move through shared-memory queues (`ShmQ`), with control messages acked over LIPC.

### Voice out: `alexaspeechplayer` + `libalexaspeechplayerimpl.so`

The `AlexaSpeechPlayer` drives `SpeechSynthesizer` / `AudioPlayer`, streams the ASR encoder, tracks Bluetooth output state, and emits user-perceived-latency metrics per utterance (`messageId`/`utteranceId`).

### Device attestation: `amzn_dha_tool` + `amzn_dha_hmac`

DHA = Device Health Attestation. `amzn_dha_tool` provisions a DHA key through the **Amazon Keymaster** device and computes a 256-bit HMAC over the device serial (DSN); `amzn_dha_hmac` exposes it via the `ro.amzn_dha.hmac` property. This is how the device proves its identity to Amazon.

```
amzn_dha_tool --create   Provisions Amazon DHA onto the device
amzn_dha_tool --display  Displays the public modulus of the Amazon DHA and its HMAC
amzn_dha_tool --test     Self-test of the provisioned DHA
WARNING: DSN is "0", this might result in incorrect HMAC!
```

### Support: `liblab126utils.so`, `libllog*.so`, `metrics-collector`

Lab126 utility helpers, Amazon's `llog` logging (level from `/data/local/logLevel.conf`), and a standalone metrics daemon.

## Reproduce

```bash
# Ghidra 12.1.x + JDK 21 on Linux (see scripts/wsl_rea_bootstrap.sh)
bash scripts/decompile_all.sh alexad libalexad.so libalexaservice.so   # ...etc
# each run: analyzeHeadless imports the ELF, auto-analyzes, runs DecompileAll.java
```
