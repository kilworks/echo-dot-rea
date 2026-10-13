#!/bin/bash
IMG="/mnt/c/Users/kil/echo-re/extract/system.img"
T="/mnt/c/Users/kil/echo-re/targets"
mkdir -p "$T"
for l in libalexad.so libalexamessageparsingutil.so libalexaservice.so libalexaspeechplayerimpl.so liblab126utils.so libllog.so libllog-android.so; do
  debugfs -R "dump /lib/$l $T/$l" "$IMG" 2>/dev/null
done
ls -la "$T"
echo "=== types ==="
file "$T"/*.so
