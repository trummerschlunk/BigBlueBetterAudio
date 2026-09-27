// Copyright 2026 Klaus Scheuermann
// SPDX-License-Identifier: GPL-3.0-or-later

// Compile upstream's implementation here to access its private FFT analysis
// and synthesis helpers without changing the submodule or the mono WASM path.
#include "../deps/rnnoise/src/denoise.c"
#include "RNNoiseStereo.h"

float bbba_rnnoise_process_stereo(DenoiseState* left, DenoiseState* right,
                                float* outLeft, float* outRight,
                                const float* inLeft, const float* inRight)
{
    DenoiseState* states[2] = {left, right};
    const float* inputs[2] = {inLeft, inRight};
    float* outputs[2] = {outLeft, outRight};
    kiss_fft_cpx X[2][FREQ_SIZE], P[FREQ_SIZE];
    float Ex[2][NB_BANDS], Ep[NB_BANDS], Exp[NB_BANDS];
    float gains[2][NB_BANDS] = {{0}}, linked[NB_BANDS], gf[FREQ_SIZE] = {0};
    float vad = 0;
    static const float a_hp[2] = {-1.99599f, 0.99600f};
    static const float b_hp[2] = {-2, 1};

    // Separate analysis avoids cancellation for wide/anti-phase inputs.
    // The less attenuated estimate wins in each band, protecting speech on
    // either side; precisely the same resulting mask is applied to both.
    for (int c = 0; c < 2; ++c) {
        float x[FRAME_SIZE], features[NB_FEATURES], probability = 0;
        DenoiseState* st = states[c];
        rnn_biquad(x, st->mem_hp_x, inputs[c], b_hp, a_hp, FRAME_SIZE);
        const int silence = rnn_compute_frame_features(st, X[c], P, Ex[c], Ep, Exp, features, x);
        if (!silence)
            compute_rnn(&st->model, &st->rnn, gains[c], &probability, features, st->arch);
        vad = MAX16(vad, probability);
    }
    for (int i = 0; i < NB_BANDS; ++i) {
        linked[i] = MAX16(MAX16(gains[0][i], gains[1][i]),
                         .6f * MAX16(left->lastg[i], right->lastg[i]));
        // Use joint energy for release compensation: a silent channel must
        // not hold the other channel's suppression open.
        const float previous = left->delayed_Ex[i] + right->delayed_Ex[i];
        const float current = Ex[0][i] + Ex[1][i];
        left->lastg[i] = right->lastg[i] =
            MIN16(1.f, linked[i] * (previous + 1e-3f) / (current + 1e-3f));
    }
    interp_band_gain(gf, linked);
    for (int c = 0; c < 2; ++c) {
        DenoiseState* st = states[c];
        // Do not add RNNoise's independent pitch-reconstruction signals:
        // a common multiplicative mask preserves the stereo phase/image.
        for (int i = 0; i < FREQ_SIZE; ++i) {
            st->delayed_X[i].r *= gf[i];
            st->delayed_X[i].i *= gf[i];
        }
        frame_synthesis(st, outputs[c], st->delayed_X);
        RNN_COPY(st->delayed_X, X[c], FREQ_SIZE);
        RNN_COPY(st->delayed_Ex, Ex[c], NB_BANDS);
    }
    return vad;
}
