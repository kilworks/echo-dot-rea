# On-device messaging bus (libalexaservice.so + libalexamessageparsingutil.so)

How Alexa components on the device talk to each other and to `alexad`. This is
the layer beneath the SPDY transport in [avs-protocol.md](avs-protocol.md):
`alexad` bridges this on-device bus to the cloud. Recovered from
`decomp/libalexaservice.so.c` (2845 functions, 345 named) and
`decomp/libalexamessageparsingutil.so.c` (337 functions), cross-checked against
the binaries' string tables. Both libraries keep their C++ symbols.

## libalexaservice.so = the `AlexaMessaging` library

Everything lives in the `AlexaMessaging::` namespace. Three concerns: a message
object model, a LIPC endpoint that moves them, and a shared-memory queue for
bulk attachments.

### Message object model

A message is a tree of typed parts, each serializable to and from JSON (cJSON,
`libcjson.so`):

```
Message
  MessageProtocolVersion   protocol version envelope
  MessageIdentifier        messageId (orderable: operator<)
  MessageType              type name (toString / getName)
  MessageBody              contentType + value
  MessageAttachment        contentType + value (bulk payload ref)
  MessageVoiceRequest      voice request identifier
  + getRequestReplyContext, getPriority, isUnidirectional
```

Every part implements `constructFromJSON` (parse) and `getJSON` (emit). The
parse paths are defensively coded: the string table enumerates every rejection,
e.g. `Message:constructFromJSONFailed:reason={nullJSON,noHeaders,nullHeaderKey,
invalidIdentifier,invalidType,invalidBody,invalidAttachment,invalidVoiceRequest,
invalidProtocolVersion,jsonParseFailed}`. Serialized form uses the keys
`alexaMessage`, `bodyHeader`, `messageAckEvent`. Message ids are UUIDs
(`boost::uuids::detail::sha1`).

### LIPC endpoint: `AlexaMessagingEndpoint`

The endpoint is the only thing that touches the wire. It opens LIPC
(`LipcOpenEx`), subscribes (`LipcSubscribeExt`), and registers a hasharray
property (`LipcRegisterHasharrayProperty`). A message is marshalled into a LIPC
**hasharray** (a typed key/value bag): `LipcHasharrayNew`, then
`LipcHasharrayPutString` / `LipcHasharrayPutInt` / `LipcHasharrayAddHash`, read
back with the matching `Get*`. So the on-device wire format is a LIPC hasharray
whose values are the JSON-encoded message parts.

Send paths:

- `sendMessageEx` - fire and forget. Logged `sendMessageEx::Entered`.
- `sendMessageWithAttachment` - message plus a shared-memory attachment.
- `sendSyncMessageEx` - blocks on a `SyncMessageCondition` (a condition
  variable) until the peer replies or it times out
  (`error=alexaDReplyTimeOut,messageId=%s`); rejects `nullMessage`.

Reliable delivery is by explicit ack: `messageTxAckCallback` fires on
`event=receivedMsgAck,messageId=%s,result=%d`, and `waitForMessageAck` blocks a
sender on a given messageId. `notifyTxStatus` /
`convertMessageSendingResultToString` surface the result.

### Attachment transport: shared-memory queues

Audio and other bulk payloads do not go through LIPC. They move through a
shared-memory queue (`ShmQ` API: `ShmQCreate`, `ShmQOpen`, `ShmQRead`,
`ShmQHangUp`, `ShmQGetHangUpType`, `ShmQClose`, `ShmQDelete`) wrapped as a
C++ stream:

```
AlexaMessageAttachmentWriterShmQueue   producer side
AlexaMessageAttachmentReaderShmQueue   consumer side
AlexaMessageAttachmentReaderFile       file-backed alternative (ifstream)
Shm::ShmqIOStreamDevice                boost::iostreams device over ShmQ
```

The LIPC message carries the control metadata and a reference to the queue; the
bytes stream over shared memory. Hang-up is explicit, with a typed reason
(`getHangUpType:reason=invalidHangUpType,type=%d`).

### Threading

Handlers do not run on the LIPC callback thread. `AlexaMessageHandlerThreaded`
and `AlexaMessageHandlerPooled` dispatch `onMessage` /
`onMessageWithAttachment` onto a `ThreadPool` fed by a `WorkQueue`
(`WorkQueue::enqueue(): Finish was requested.` on shutdown). Concurrency sizing
uses `boost::thread::hardware_concurrency`.

## libalexamessageparsingutil.so = metadata helpers

A small, focused library (337 functions, 52 named) that parses two metadata
blocks out of message JSON. No LIPC, no transport: pure parsing.

### `IdentifiersMetadata`

Parses the identifiers block and exposes:

```
getASRStreamId / getASRUtteranceId   the speech-recognition stream + utterance
getDeviceRequestId
getDSN                               device serial, read via idme_get_property
obfuscateASRId                       redacts the ASR id for logging
isValid
```

`obfuscateASRId` is a privacy measure: the ASR identifier is obfuscated before
it reaches logs. `getDSN` reads the serial straight from the idme partition
(`idme_get_property`), same source the auth handshake uses
([avs-protocol.md](avs-protocol.md)); failure logs `getDSNFailed:status=%d`.

### `TimingInformationMetadata`

Parses the per-utterance timing block used for user-perceived-latency metrics:

```
getDeviceTimeMS
getEndOfSpeechOffsetMS
getUtteranceEndTimeMS
getOperationName
getAdditionalMetrics
getInt64FromJSON                     typed int64 extractor (nullJSON/nullKey guards)
```

These feed the UPL metrics emitted by the speech player
([speech-audio.md](speech-audio.md)) and `metrics-collector`.

## Dependencies

```
libcjson.so    JSON (de)serialization of every message part
liblipc         LIPC hasharray transport (Lab126 IPC)
libidme.so      DSN read in IdentifiersMetadata
boost           threads, iostreams (ShmQ stream), uuids (message ids)
```
