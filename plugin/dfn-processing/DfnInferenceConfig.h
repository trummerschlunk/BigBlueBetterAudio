#pragma once

#include "anira/anira.h"
#include "DfnModelData.hpp"

#define USE_BINARY_LOADING

// Model input/output names:
// Inputs:  "input_frame" [480], "states" [45304], "atten_lim_db" [1]
// Outputs: "enhanced_audio_frame" [480], "new_states" [45304], "lsnr" [1]

constexpr size_t DFN_HOP_SIZE = 480;
constexpr size_t DFN_FFT_SIZE = 960;
constexpr size_t DFN_STATE_SIZE = 45304;
constexpr size_t DFN_MODEL_LATENCY = DFN_FFT_SIZE + DFN_HOP_SIZE;

inline anira::InferenceConfig& getDfnConfig() {
    static std::vector<anira::ModelData> model_data = {
#ifdef USE_BINARY_LOADING
        {reinterpret_cast<void*>(const_cast<unsigned char*>(DfnModelData::dfnData)), DfnModelData::dfnDataSize, anira::InferenceBackend::CUSTOM},
#else
        {std::string(DFN_MODEL_PATH_STR), anira::InferenceBackend::CUSTOM},
#endif
    };

    static std::vector<anira::TensorShape> tensor_shape = {
        {{{DFN_HOP_SIZE}}, {{DFN_HOP_SIZE}}, anira::InferenceBackend::CUSTOM},
    };

    static anira::ProcessingSpec processing_spec(
        {1},                    // preprocess_input_channels
        {1},                    // postprocess_output_channels
        {DFN_HOP_SIZE},         // preprocess_input_size
        {DFN_HOP_SIZE},         // postprocess_output_size
        {DFN_MODEL_LATENCY}     // internal_model_latency (480 samples)
    );

    static anira::InferenceConfig config(
        model_data,
        tensor_shape,
        processing_spec,
        10.f,      // max_inference_time
        5,        // warm_up
        true,     // session_exclusive_processor
        0.f,      // blocking_ratio
        1         // num_parallel_processors
    );

    return config;
}

