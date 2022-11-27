#!/usr/bin/env bash
export PATH="/usr/local/opt/llvm@14/bin:$PATH"
export LDFLAGS="-L/usr/local/opt/llvm@14/lib"
export CPPFLAGS="-I/usr/local/opt/llvm@14/include"