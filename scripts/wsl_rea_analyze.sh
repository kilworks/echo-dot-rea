#!/bin/bash
# Run REA's native ELF analysis on the Echo Dot alexad daemon via Ghidra (Linux).
set -e
ROOT="$HOME/rea-echo"
export PATH="$ROOT/node/bin:$ROOT/jdk/bin:$PATH"
export JAVA_HOME="$ROOT/jdk"
export GHIDRA_INSTALL_DIR="$ROOT/ghidra_12.1.4_PUBLIC"
TARGET="${1:-/mnt/c/Users/kil/echo-re/targets/alexad}"
OUT="/mnt/c/Users/kil/echo-re"
log(){ echo "[$(date +%H:%M:%S)] $*"; }

log "load-image on $TARGET (first run = Ghidra import+analysis, slow)..."
rea inspect-native-load-image "$TARGET" --format json 2>/dev/null > "$OUT/rea_loadimage_alexad.json"
log "load-image bytes: $(wc -c < "$OUT/rea_loadimage_alexad.json")"

log "inspect (overview with evidence)..."
rea inspect "$TARGET" --format json 2>/dev/null > "$OUT/rea_nativeinspect_alexad.json" || log "inspect failed"
log "inspect bytes: $(wc -c < "$OUT/rea_nativeinspect_alexad.json" 2>/dev/null || echo 0)"

echo "ANALYZE_DONE"
