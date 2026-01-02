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

#ifndef _Frees_ptr_opt_
#define _Frees_ptr_opt_
#endif

# build onnxruntime first
# sed -i -e 's/COMPILE_WARNING_AS_ERROR ON/COMPILE_WARNING_AS_ERROR OFF/' deps/onnxruntime/cmake/CMakeLists.txt
# sed -i -e 's/#ifndef _WIN32/#if 1/' deps/onnxruntime/include/onnxruntime/core/session/onnxruntime_c_api.h
# if [ ! -e build/deps/onnxruntime/Makefile ]; then
#     emcmake cmake -S deps/onnxruntime/cmake -B build/deps/onnxruntime -DCMAKE_BUILD_TYPE=Release \
#         -Donnxruntime_BUILD_UNIT_TESTS=OFF \
#         -Donnxruntime_BUILD_WEBASSEMBLY_STATIC_LIB=ON \
#         -Donnxruntime_CROSS_COMPILING=ON \
#         -Donnxruntime_DISABLE_RTTI=ON \
#         -Donnxruntime_ENABLE_CPUINFO=OFF \
#         -Donnxruntime_ENABLE_WEBASSEMBLY_API_EXCEPTION_CATCHING=ON \
#         -Donnxruntime_ENABLE_WEBASSEMBLY_PROFILING=OFF \
#         -Donnxruntime_ENABLE_WEBASSEMBLY_SIMD=ON \
#         -Donnxruntime_ENABLE_WEBASSEMBLY_THREADS=ON \
#         -Donnxruntime_USE_WEBNN=ON

# onnxruntime_USE_JSEP

# # option(onnxruntime_BUILD_WEBASSEMBLY_STATIC_LIB "Enable this option to create WebAssembly static library" OFF)
# # option(onnxruntime_ENABLE_WEBASSEMBLY_THREADS "Enable this option to create WebAssembly byte codes with multi-threads support" OFF)
# option(onnxruntime_ENABLE_WEBASSEMBLY_EXCEPTION_CATCHING "Enable this option to turn on exception catching" OFF)
# # option(onnxruntime_ENABLE_WEBASSEMBLY_API_EXCEPTION_CATCHING "Enable this option to turn on api exception catching" OFF)
# option(onnxruntime_ENABLE_WEBASSEMBLY_EXCEPTION_THROWING "Enable this option to turn on exception throwing even if the build disabled exceptions support" OFF)
# option(onnxruntime_WEBASSEMBLY_RUN_TESTS_IN_BROWSER "Enable this option to run tests in browser instead of Node.js" OFF)
# option(onnxruntime_ENABLE_WEBASSEMBLY_DEBUG_INFO "Enable this option to turn on DWARF format debug info" OFF)
# # option(onnxruntime_ENABLE_WEBASSEMBLY_PROFILING "Enable this option to turn on WebAssembly profiling and preserve function names" OFF)
# option(onnxruntime_ENABLE_WEBASSEMBLY_OUTPUT_OPTIMIZED_MODEL "Enable this option to allow WebAssembly to output optimized model" OFF)
#
# #         --target onnxruntime_webassembly \
# #         --build_wasm \
# #         --disable_rtti \
# #         --enable_wasm_api_exception_catching \
# #         --enable_wasm_profiling \
# #         --enable_wasm_simd \
# #         --enable_wasm_threads \
# #         --skip_submodule_sync \
# #         --skip_tests \
# #         --use_jsep \
# #         --use_webnn
# fi
# cmake --build build/deps/onnxruntime ${MAKE_ARGS}

# and now normal build
env CC=emcc CXX=em++ make mapi ${MAKE_ARGS}
exit 0

# build without SIMD first
make clean
env CC=emcc CXX=em++ make mapi NOOPT=true ${MAKE_ARGS}

# rename for '-nosimd' suffix
mkdir -p bin-nosimd
mv bin/BBBA-nosimd-mapi.js bin-nosimd/BBBA-nosimd-mapi.js
mv bin/BBBA-nosimd-mapi.wasm bin-nosimd/BBBA-nosimd-mapi.wasm

# build with SIMD next
make clean
env CC=emcc CXX=em++ make mapi ${MAKE_ARGS}
