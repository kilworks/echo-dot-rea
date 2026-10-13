#!/bin/bash
set -e
ROOT="$HOME/rea-echo"
export PATH="$ROOT/node/bin:$ROOT/jdk/bin:$PATH"
export JAVA_HOME="$ROOT/jdk"; export GHIDRA_INSTALL_DIR="$ROOT/ghidra_12.1.4_PUBLIC"
T="/mnt/c/Users/kil/echo-re/targets/alexad"; OUT="/mnt/c/Users/kil/echo-re"
rea search "$T" ".*" --kind procedures --format json 2>/dev/null > "$OUT/rea_procs_alexad.json"
rea search "$T" ".*" --kind strings    --format json 2>/dev/null > "$OUT/rea_strings_alexad.json"
echo "procs: $(wc -c < "$OUT/rea_procs_alexad.json")  strings: $(wc -c < "$OUT/rea_strings_alexad.json")"
echo SEARCH_DONE
