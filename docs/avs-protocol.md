# The Alexa transport protocol (libalexad.so)

Follow-up to [decompilation.md](decompilation.md): what `libalexad.so` actually
does on the wire. Recovered from the 3522-function Ghidra pseudocode
(`decomp/libalexad.so.c`) cross-checked against the binary's own string table.
Symbols are **not** stripped in this library: the C++ class and method names
(`AlexaDaemon`, `SpdyClient`, `AlexaAuthenticator`, `AlexaLipc`) survive, and the
log format strings name every state and failure reason.

Source path baked into the binary:
`vendor/amazon/doppler/projd/bin/alexad/src/AlexaDaemon.cpp`. Internal codename
for the whole stack is **Doppler** (`com.amazon.dee.doppler`, `com.doppler.alexad`).

## Transport: SPDY, not HTTP/2

The persistent channel to the "Alexa proxy server" is **SPDY**, carried by
`libspdylay.so` (the spdylay C library, nghttp2's predecessor) wrapped in
Amazon's `libspdyclient.so`. The daemon drives it through two classes:

- `SpdyClient` , the connection (`createStream`, `sendStreamReply`, `isConnected`,
  `getSrcIP`/`getSrcPort`/`getDestIP`/`getDestPort`, `setPingInterval`,
  `signalDisconnect`, suspend/resume hooks).
- `SpdyStream` , one request/response stream (`getStreamId`, `writeBlock`,
  `closeStream`, `setDelegate`, `getStreamDirection`).

The SPDY wire framing itself (`SpdyStream::writeBlock`, `SpdyClient::createStream`)
did **not** decompile: Ghidra emits `halt_baddata()` on these, an ARM/Thumb mode
misdetection on code linked in from `libspdyclient.so`/`libspdylay.so`. The
framing lives in those libraries; `libalexad.so` only holds the orchestration
above them. SPDY control-frame dispatch is present in `libalexad.so` though:
the failure path `processControlFrameFailed:reason=invalidState,type=%d`.

## Message model: AlexaMessaging <-> SPDY headers + body

On-device, everything is an `AlexaMessaging::Message` (type, identifier/messageId,
body). The daemon converts in both directions:

- `AlexaDaemon::convertMessageToHeaders` , outbound message to SPDY stream headers
  plus body. Fails `nullMessage`.
- `AlexaDaemon::convertHeadersToMessage` , inbound SPDY headers to a message.
  Fails `nullHeaders` / `missingHeaderOrBody`, warns `unknownKey,key=%s` on an
  unrecognized header key.

So each Alexa directive/event rides as a SPDY stream: key/value headers carry the
metadata, the body carries the payload. Large audio attachments do not go here;
they move over the LIPC shared-memory queues documented in
[decompilation.md](decompilation.md). Send entry points:
`AlexaDaemon::sendMessageToServer` (logged
`status=starting,messageId=%s,messageType=%s` then `status=success`) and
`sendDataMessageToServer`.

## Connection bring-up: `tryConnect`

`AlexaDaemon::tryConnect` is a strict precondition chain. Each gate has its own
`connectFailed:reason=...` log; a disconnect request aborts at any stage
(`disconnectReqIn{HasNetwork,ServerInfo,CredentialsCheck,SpdyClient,Auth}`):

1. `isConnected()` - bail early if already up.
2. `AlexaLipc::isRegistered()` - device must be registered
   (`missingCredentialsOrNotRegistered`). Credentials checked separately by
   `AlexaLipc::hasCredentials()` via `LipcGetIntProperty`.
3. `AlexaLipc::hasNetworkConnection()` - `noNetworkConnection` otherwise.
4. `getServerInfo()` - resolve endpoint (`getServerInfoFailed`).
5. `AlexaLipc::getPingIntervals()` - fetch keepalive intervals, register
   `setPingIntervalChangedCallback`.
6. `SpdyClient::isConnected()` - establish the SPDY socket (`spdyFailure`).
7. `authenticate()` - `authFailure` otherwise.

### Endpoint comes from dynamic config, not hardcoded

`AlexaDaemon::getServerInfo` reads two dynamic-config keys via
`getDynamicConfigValue`: **`url.alexa`** (host) and **`url.alexa.port`** (port).
No AVS hostname is baked into the binary; it is provisioned at runtime. Failure
logs `getDynamicConfigValueFailed,key=%s,error=%d`.

## Authentication: `AlexaAuthenticator` + libauth + idme

`AlexaDaemon::authenticate` instantiates an `AlexaAuthenticator` bound to the
`SpdyClient`, checks `isValid()`, then calls `startAuthentication` and waits on a
**15000 ms** timeout for the state to reach "authenticated" (state 3).
Timeout logs `authenticateFailed:reason=authenticationTimedOut`.

`AlexaAuthenticator::startAuthentication(shared_ptr<SpdyClient>)` builds the
handshake, opening a SPDY stream to the path **`/?operation=auth`**:

1. `libauth_getProxyHeaders(...)` (from `libauth.so`, after `libauth_init`)
   returns a GLib hash table; three header values are pulled with
   `g_hash_table_lookup`. A null on any aborts.
2. A `host:port` string is split on `:` (`find_first_of(0x3a)` + two `substr`).
3. `idme_get_property(...)` (from `libidme.so`) reads two 32-byte device-identity
   values from the idme partition: the **device serial number** and **device
   type**. A missing DSN logs `startAuthenticationFailed:reason=getDSNFailed`.
4. A `cJSON` object is assembled and serialized as the auth request body.

The auth JSON field names, straight from the string table:

```
deviceSerialNumber
deviceType
deviceSoftwareVersion          (via libsoftwareversion.so / getSoftwareVersion)
deviceAuthenticationToken
dopplerSignedAuthenticationInfo   (signed blob)
authenticationAlgorithm
protocolVersion / protocol_version
```

Distinct `startAuthenticationFailed` reasons enumerate the required inputs:
`nullSpdyClient`, `nullDeviceInfo`, `nullAuthRequest`, `nullRoot`, `getDSNFailed`.
The signing key behind `dopplerSignedAuthenticationInfo` is not in this library;
it comes from `libauth.so` / `com.lab126.DeviceAuthenticationService`, and
ultimately the same Keymaster/TrustZone path as the DHA attestation in
[findings.md](findings.md).

## Keepalive: Doppler power ping intervals

SPDY PING keepalive interval is settings-driven and differs by power state, via
`SpdyClient::setPingInterval` fed from these LIPC/settings keys:

```
com_amazon_doppler_power_ping_intervalInSec           (awake)
com_amazon_doppler_power_ping_intervalInSleepInSec    (asleep)
+ ...Changed variants -> setPingIntervalChangedCallback
```

## Connection supervisor: `connectionLoop` + GTFO

`AlexaDaemon::connectionLoop` (593 lines) is a lock-free state machine (atomic
state read behind `DataMemoryBarrier`, `switch` over states 0-5) running under a
`powerd::WakeLock`. It calls `tryConnect`, records metrics (`alexa_record_metrics`),
and on failure backs off: `connectBackoff:timeoutMS=%lld`, or
`noBackoff:reason=reconnectingWithNoBackoff` for an immediate retry. An invalid
state logs `connectionLoopError:reason=invalidState,state=%d`.

Graceful teardown is handled by a subsystem the code calls **GTFO**
(`AlexaGTFO`, the `connectionLoopGTFO` / `connectBackoff` pairing): it waits for
the current dialog session to go idle before disconnecting, honoring four
server-supplied parameters parsed from a message body: `gracePeriod`,
`dialogSessionIdleTime`, `reconnectWindow`, `reconnectJitter`. This is what makes
reconnects jittered rather than thundering-herd.

## On-device command set (Doppler commands)

Inbound commands dispatched over LIPC, by message type:

```
doppler.command.negotiation             -> NegotiationCommand
doppler.command.refreshclouddevicestates-> UpdateCloudDeviceStatesCommand
doppler.command.stop  /  .stop.lipc
doppler.command.urlplayback
```

Routing is table-driven: `AlexaDaemon::getClientNameByRoutable` maps a
`MessageType` to a handler client name through a Lab126 **Registry**
(`RegOpenRegistry` -> `RegGetDefaultHandlerIdFor` -> `RegGetPropertyValue`),
logged `getClientNameByRoutable:messageType=%s,clientName=%s`. Other handlers
seen in strings: `AlexaThinkingMode`, `AlexaASRStreamIDHandler` (ASR stream ids),
`AlexaPowerState`, `AlexaRefreshCloudState`.

## Network-layer packet filtering

Once connected, `AlexaLipc::setupPacketFiltering` installs a unicast filter
keyed on `srcIP`/`destIP`/`destPort`/protocol via `LipcRegisterHasharrayProperties`
(logged `setupPacketFiltering:srcIP=%s,destIp=%s,destPort=%u`). This steers the
AVS connection at the network layer, almost certainly so the device can wake only
on packets from the known Alexa endpoint rather than any inbound traffic, a power
optimization consistent with the WakeLock/suspend plumbing around `connectionLoop`.

## Library dependencies specific to this layer

```
libspdyclient.so   Amazon SPDY client wrapper
libspdylay.so      SPDY protocol (spdylay)
libauth.so         device auth / proxy headers / signed auth info
libidme.so         idme partition (DSN, deviceType) read
libsoftwareversion.so  device software version
libalexaservice.so / libalexamessagingparsingutil.so  LIPC + message parsing
```

## What is still opaque

- SPDY wire framing bytes (in `libspdylay.so`/`libspdyclient.so`, not decompiled
  here; `SpdyStream::writeBlock` is a `halt_baddata` veneer).
- The signing of `dopplerSignedAuthenticationInfo` and the three `libauth`
  proxy-header values (inside `libauth.so`, backed by TrustZone/Keymaster).
- The runtime values of `url.alexa` / `url.alexa.port` (dynamic config, device
  state, not in the image).
