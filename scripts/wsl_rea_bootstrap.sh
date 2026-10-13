#!/bin/bash
# Build a user-space Linux toolchain in WSL to run REA's ELF/Ghidra analysis. No sudo.
set -e
ROOT="$HOME/rea-echo"
mkdir -p "$ROOT"; cd "$ROOT"
log(){ echo "[$(date +%H:%M:%S)] $*"; }

# 1. Node 22 (REA needs >=22.19)
if [ ! -x "$ROOT/node/bin/node" ] || ! "$ROOT/node/bin/node" -v 2>/dev/null | grep -q '^v22'; then
  log "resolving node 22..."
  NV=$(curl -s https://nodejs.org/dist/index.json | grep -oE '"version":"v22\.[0-9]+\.[0-9]+"' | head -1 | grep -oE 'v22\.[0-9.]+')
  log "node $NV"
  curl -sL "https://nodejs.org/dist/$NV/node-$NV-linux-x64.tar.xz" -o node.tar.xz
  rm -rf node && mkdir node && tar -xf node.tar.xz -C node --strip-components=1
  rm node.tar.xz
fi
export PATH="$ROOT/node/bin:$PATH"
log "node $(node -v) npm $(npm -v)"

# 2. JDK 21 (Ghidra needs it)
if [ ! -x "$ROOT/jdk/bin/java" ]; then
  log "downloading Temurin JDK 21..."
  curl -sL "https://api.adoptium.net/v3/binary/latest/21/ga/linux/x64/jdk/hotspot/normal/eclipse" -o jdk.tar.gz
  rm -rf jdk && mkdir jdk && tar -xf jdk.tar.gz -C jdk --strip-components=1
  rm jdk.tar.gz
fi
export JAVA_HOME="$ROOT/jdk"; export PATH="$JAVA_HOME/bin:$PATH"
log "java: $(java -version 2>&1 | head -1)"

# 3. Ghidra (reuse the zip already downloaded on the Windows side)
if [ ! -d "$ROOT/ghidra_12.1.4_PUBLIC" ]; then
  log "extracting Ghidra..."
  unzip -q /mnt/c/Users/kil/ghidra/ghidra_12.1.4.zip -d "$ROOT"
fi
export GHIDRA_INSTALL_DIR="$ROOT/ghidra_12.1.4_PUBLIC"
log "ghidra: $GHIDRA_INSTALL_DIR"

# 4. REA
if [ ! -x "$ROOT/node/bin/rea" ]; then
  log "installing rea-agents..."
  npm i -g rea-agents >/dev/null 2>&1 || npm i -g rea-agents
fi
log "rea: $(rea --version 2>/dev/null | tail -1)"

# 5. doctor
log "=== rea doctor ==="
rea doctor 2>/dev/null | grep -iE 'name: ghidra|ok: (true|false)|classification' | head -20 || true
echo "BOOTSTRAP_DONE"
