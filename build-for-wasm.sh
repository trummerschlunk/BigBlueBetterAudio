#!/bin/bash

set -e
cd $(dirname "${0}")

# make emscripten quiet
export EMSDK_QUIET=1

# use a known good emscripten version
export EMSDK_VERSION=3.1.59

# use parallel builds
if [ "$(uname -s)" = "Darwin" ]; then
    MAKE_ARGS="-j $(sysctl -n hw.logicalcpu)"
elif command -v nproc > /dev/null; then
    MAKE_ARGS="-j $(nproc)"
fi

# setup emscripten
if [ ! -e "emsdk" ]; then
    git clone --depth=1 https://github.com/emscripten-core/emsdk.git
    "./emsdk/emsdk" install ${EMSDK_VERSION}
    "./emsdk/emsdk" activate ${EMSDK_VERSION}
fi

# activate emscripten environment
source "${PWD}/emsdk/emsdk_env.sh"

# now build
env CC=emcc CXX=em++ make mapi ${MAKE_ARGS}
