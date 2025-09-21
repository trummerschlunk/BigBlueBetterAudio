This html file shows how to use the [mapi](https://github.com/DISTRHO/MAPI) interface of compiled BBBA.

Building BBBA for web requires the use of emscripten.
Assuming emscripten is installed and setup, building is as simple as:

```sh
# use known good version
/path/to/emsdk/emsdk install 3.1.27
/path/to/emsdk/emsdk activate 3.1.27

# import emscripten build environment
source /path/to/emsdk/emsdk_env.sh

# change dir to BBBA
cd /path/to/BBBA

# update DPF
git submodule update --init --recursive

# re-gen C++ code from faust dsp files
make pregen

# build
env CC=emcc CXX=em++ make NOOPT=true mapi
```

The `NOOPT=true` disables optimizations, so that the wasm files can be loaded on browsers that do not support SIMD (such as old WebKit versions).

For trying it locally simply run after building:

```
emrun bin/index.html
```
