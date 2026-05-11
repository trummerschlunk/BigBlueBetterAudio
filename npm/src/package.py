#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import base64
import os
import sys

with open('npm/src/index.js', 'rb') as fh:
    npm_index_js = fh.read()

with open('bin/BBBA-mapi.js', 'rb') as fh:
    npm_index_js = npm_index_js.replace(b'@BBBA_WASM_JS@', base64.b64encode(fh.read()))

with open('bin/BBBA-mapi.wasm', 'rb') as fh:
    npm_index_js = npm_index_js.replace(b'@BBBA_WASM_BLOB@', b'[' + b','.join(f'{b}'.encode() for b in fh.read()) + b']')

with open('bin-nosimd/BBBA-nosimd-mapi.js', 'rb') as fh:
    npm_index_js = npm_index_js.replace(b'@BBBA_NOSIMD_WASM_JS@', base64.b64encode(fh.read()))

with open('bin-nosimd/BBBA-nosimd-mapi.wasm', 'rb') as fh:
    npm_index_js = npm_index_js.replace(b'@BBBA_NOSIMD_WASM_BLOB@', b'[' + b','.join(f'{b}'.encode() for b in fh.read()) + b']')

with open('web/mapi-proc.js', 'rb') as fh:
    npm_index_js = npm_index_js.replace(b'@MAPI_PROC_JS@', base64.b64encode(fh.read()))

with open('npm/dist/index.js', 'wb') as fh:
    fh.write(npm_index_js)
