# Metrics and support libraries

The non-Alexa-specific plumbing every Doppler daemon links: a metrics engine,
PID-file singleton + hashing helpers, and the `llog` logging stack. Recovered
from `decomp/metrics-collector.c` (892 functions), `liblab126utils.so.c` (73),
`libllog.so.c` (65), `libllog-android.so.c` (17).

## metrics-collector: event-pair timing engine

A standalone daemon (`com.doppler.metricsCollector`, PID singleton,
`getopt_long` + `daemon()`) that measures durations between named LIPC events.

- Config: `/etc/metrics-collector.conf` defines rules. On load each is logged
  `MetricsEngine:init:reason=RuleAdded,name=%s`.
- A `MetricsRule` pairs a **start event** and an **end event**
  (`cancelMetricInstance:name=%s,startEvent=%s,endEvent=%s`). The engine
  subscribes to LIPC (`LipcSubscribeExt`, `LipcGetEventSource`,
  `LipcGetUInt64Param`); when the start event fires it opens a metric instance,
  when the end event fires it computes the delta and emits it via
  `record_device_metric` (from `libmetrics.so`).
- Guards: a stop earlier than its start is rejected
  (`emitMetricFailed:reason=inconsistentTimes,start=%llu,stop=%llu`); an end
  event with no open instance warns `UnableToFindMetric`.
- Events are indexed in a GLib hash table (`g_str_hash` / `g_str_equal`).

This is how the device turns raw lifecycle events (e.g. a wake-word event and a
"first audio out" event) into a single latency number, complementing the inline
metrics the speech player emits ([speech-audio.md](speech-audio.md)).

## liblab126utils.so: daemon singleton, hashing, version

Shared by every daemon in this image.

- **PID-file singleton**: `lab126_daemon_checksingleton` /
  `lab126_daemon_cleansingleton`, built on `open` + `flock`/`lockf` +
  `write(pid)` + `unlink`. A second instance fails the lock
  (`LockFailed...already running`). This is the `/data/local/tmp/<name>.pid`
  mechanism seen in `alexad` and `alexaspeechplayer`.
- **Hashing**: `getMD5Hash` (OpenSSL EVP: `EVP_md5` / `EVP_DigestInit` /
  `Update` / `Final`, from `libcrypto.so`), `binToHexStr`,
  `lab126_hash_getfasthash`.
- **Version**: `lab126_version_print` / `getmajor` / `getminor` / `getversion`.
- **Time**: `compareTimeSpec`, `computeTimeDifferenceInMillis`.

Depends on `libssl.so` / `libcrypto.so` for the MD5 path.

## libllog.so + libllog-android.so: logging

Amazon's `llog` logging, used through `_llogmsg_print` everywhere (the bitmask
first argument, e.g. `0x8000`, `0x2000000`, is the log level/channel seen
throughout the other decomp).

- `libllog.so`: real implementation. Log level is read from a per-service config
  file and kept live via a LIPC string property
  (`LlogInitLogProperties`, `update_logLevel_configfile`,
  `LlogSetMaskedChangedCallback`, `LipcRegisterStringProperty`). Includes a
  profiler (`LogProfileInit` / `Start` / `Mark` / `Dump`, with a time-skew
  warning) and name helpers (`llog_errno_name`, `llog_h_errno_name`,
  `llog_signal_name`).
- `libllog-android.so`: a 3-function shim (`_llog_set_ident`, `_llogmsg_print`,
  `strdup`) that forwards llog onto Android's `liblog.so` (logcat).

The per-service runtime log level file is `/data/local/logLevel.conf`
(referenced from the other binaries).
