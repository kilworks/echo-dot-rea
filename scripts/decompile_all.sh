#!/bin/bash
# Decompile every function of each Echo target via Ghidra headless.
ROOT="$HOME/rea-echo"
export JAVA_HOME="$ROOT/jdk"; export PATH="$JAVA_HOME/bin:$PATH"
GH="$ROOT/ghidra_12.1.4_PUBLIC/support/analyzeHeadless"
SCRIPTDIR="/mnt/c/Users/kil/AppData/Local/Temp/claude/C--Users-kil/e8d0ba32-3f15-42ac-be8a-436daf3b5749/scratchpad"
T="/mnt/c/Users/kil/echo-re/targets"
OUT="/mnt/c/Users/kil/echo-re/decomp"
PROJ="$ROOT/gproj"
mkdir -p "$OUT" "$PROJ"
TARGETS="${*:-amzn_dha_hmac}"
for b in $TARGETS; do
  [ -f "$T/$b" ] || { echo "SKIP missing $b"; continue; }
  echo "=== $b ==="
  rm -rf "$PROJ"/*
  "$GH" "$PROJ" p_$b -import "$T/$b" -scriptPath "$SCRIPTDIR" \
    -postScript DecompileAll.java "$OUT/$b.c" -deleteProject 2>&1 \
    | grep -E "DECOMPILED|ERROR|Exception" | head -5
  echo "  -> $OUT/$b.c ($(wc -l < "$OUT/$b.c" 2>/dev/null || echo 0) lines)"
done
echo DECOMP_ALL_DONE
