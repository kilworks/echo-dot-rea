# Voice output and audio (alexaspeechplayer + libalexaspeechplayerimpl.so)

The TTS / audio-playback daemon. It renders Alexa's speech and audio, streams
the microphone encoder up for ASR, and arbitrates against Bluetooth and power
state. Recovered from `decomp/alexaspeechplayer.c` (264 functions) and
`decomp/libalexaspeechplayerimpl.so.c` (2118 functions, 136 named). Internal
name `com.doppler.alexaSpeechPlayer`; a sibling audio encoder daemon is
`com.doppler.audioencoderd`.

## alexaspeechplayer: the launcher

A thin daemon, same shape as `alexad`: `lab126_daemon_checksingleton` (PID-file
singleton via [liblab126utils](metrics-and-support.md)), `_llog_set_ident`,
`gst_init` (GStreamer), then it constructs `AlexaSpeechPlayer` and calls
`initialize`. PID at `/data/local/tmp/alexaspeechplayer.pid`. All logic is in the
impl library.

## The media pipeline is GStreamer

Playback is built on GStreamer 1.0 (`libgstreamer-1.0.so`, `libgstbase-1.0.so`),
assembled from composable sections under `Media::Playback`:

```
Pipeline / PlaybackStreamQueue        the playing graph + its queue
AppStreamSourcePipelineSection        source: app-fed stream
MP3DecodePipelineSection              decode: MP3
MixerSinkPipelineSection              sink: system mixer
OpenSLESSinkPipelineSection           sink: Android OpenSL ES
```

`PlaybackStream` supports `createConcatenation` and `createGaplessConsecutive`,
so consecutive TTS/audio segments play gaplessly. The queue tracks allowed vs
cancelled streams (`allowPlaybackStream`, `cancelPlaybackStream`,
`cancelAllowedPlaybackStreams`, `cancelAllStreams`, `isIdle`) and tears down with
`Pipeline::teardown`. Audio format is parsed from an `AudioMetaData` JSON block
(sample rate, channels), rejecting `JsonParsingError` /
`audioFormatObjectMissing` / `emptyMessage`.

## Message handling: the Conductor framework

Inbound messages arrive through `Conductor::ConductorMessageHandler`, which
registers five callbacks: `setPreprocessMessageCallback`,
`setPreprocessMessageWithAttachmentCallback`, `setHandleMessageCallback`,
`setCancelMessageCallback`, `setPauseResumeMessageCallback`. These map to the
player's lifecycle, logged per messageId:

```
preprocessMessage:messageId=%s        prepare (fetch audio category etc.)
handleMessage:messageId=%s,utteranceId=%s   play
pauseResumeMessage:messageId=%s,state=%d
cancelMessage:messageId=%s
onBeganPlaying / onCompleted / onError:messageId=%s
```

Replies go back over `AlexaMessaging::AlexaMessagingEndpoint::sendMessage`
(see [messaging-lipc.md](messaging-lipc.md)) and
`ConductorMessagingEndpoint::sendMessageHandled`.

## ASR: microphone encoder stream

The player owns the uplink audio-encoder state, subscribed over LIPC:

```
audioEncoderState / audioEncoderStateChanged
encoderStreamingStarted
asrStateCallback / asrStreamStateCallback
reopenASRStream (lipcOpenStreamFailed on error)
wwModelCallback  (wake-word model; subscribeToWWModelFailed)
```

When the ASR stream opens it drops any in-flight TTS
(`asrStreamOpenDroppingTTS`): listening wins over speaking. Stream/utterance ids
come from `IdentifiersMetadata` ([messaging-lipc.md](messaging-lipc.md)).

## Arbitration: Bluetooth and power

- **Bluetooth**: `btStateHandler` tracks the BT "Doppler mediator" state; if
  hands-free profile is active, TTS is dropped (`HFPActiveDroppingTTS`,
  `isHFPActive`). Media role is chosen by `getMediaRole` / `IsTTSSolicited`.
- **Power**: `powerd::WakeLock::acquire`/`release` and
  `powerd::PowerManager::userActivity` hold the device awake while audio plays
  and register user activity.
- **Voice state**: `AlexaVoiceState` builds the device-state JSON (speaking /
  idle), published via `publishDeviceState` and the refresh-device-state payload.

## Metrics: UPL and stutter

The player is heavily instrumented for user-perceived latency:

- `metrics::MetricTimeEvent` (emit over LIPC), `record_device_metric`,
  `timeMetric:id=%s,time=%llu,type=absolute`, `FirstDataToAudioOutput`,
  `emitAdditionalMetrics:metric=%s,value=%llu`. Timing fields come from
  `TimingInformationMetadata` ([messaging-lipc.md](messaging-lipc.md)).
- **Stutter detection**: `ttsStutterHandler` watches the pipeline for
  underruns; on a gap it logs `stutterDetected` and emits
  `recordedStutterMetric:metricName=%s,timeOfStutter=%llums`, unless TTS already
  finished (`skipStutterReport:reason=ttsAlreadyFinished`).
- `ThinkingModeUtil` ends "thinking mode" (the spinner/earcon) when playback
  starts.

## Dependencies

```
libgstreamer-1.0.so / libgstbase-1.0.so   media pipeline
libglib/gio/gobject/gmodule               GStreamer + event loop
libalexaspeechplayerimpl.so               all the logic
liblab126utils.so / libllog*.so           singleton, logging
(OpenSL ES)                               Android audio sink
```
