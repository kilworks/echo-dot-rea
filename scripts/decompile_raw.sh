#!/bin/bash
# Decompile a raw (non-ELF) ARM image via Ghidra headless: BinaryLoader +
# explicit processor + base address, full auto-analysis (handles ARM/Thumb
# switching), then DecompileAll.
ROOT="$HOME/rea-echo"
export JAVA_HOME="$ROOT/jdk"; export PATH="$JAVA_HOME/bin:$PATH"
GH="$ROOT/ghidra_12.1.4_PUBLIC/support/analyzeHeadless"
SCRIPTDIR="/mnt/c/Users/kil/echo-re-repo/scripts"
OUT="/mnt/c/Users/kil/echo-re/decomp"
PROJ="$ROOT/gproj_raw"
mkdir -p "$OUT" "$PROJ"

IMG="$1"; NAME="$2"; BASE="$3"
rm -rf "$PROJ"/*
"$GH" "$PROJ" p_$NAME -import "$IMG" \
  -processor ARM:LE:32:v7 \
  -loader BinaryLoader -loader-baseAddr "$BASE" \
  -scriptPath "$SCRIPTDIR" \
  -postScript DecompileAll.java "$OUT/$NAME.c" -deleteProject 2>&1 \
  | grep -E "DECOMPILED|ERROR|Exception|Analyzing|bytes" | head -8
echo "  -> $OUT/$NAME.c ($(wc -l < "$OUT/$NAME.c" 2>/dev/null || echo 0) lines)"
