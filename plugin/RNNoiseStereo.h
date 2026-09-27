// Copyright 2026 Klaus Scheuermann
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once
#include "rnnoise.h"

#ifdef __cplusplus
extern "C" {
#endif
float bbba_rnnoise_process_stereo(DenoiseState* left, DenoiseState* right,
                                float* outLeft, float* outRight,
                                const float* inLeft, const float* inRight);
#ifdef __cplusplus
}
#endif
