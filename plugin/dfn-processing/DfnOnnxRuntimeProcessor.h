#pragma once

#include "DfnInferenceConfig.h"

class DfnOnnxRuntimeProcessor : public anira::BackendBase {
public:
    enum TensorIndex {
        AUDIO_TENSOR = 0,
        STATE_TENSOR = 1,
        ATTEN_LIM_TENSOR = 2
    };

    DfnOnnxRuntimeProcessor(anira::InferenceConfig& inference_config);
    ~DfnOnnxRuntimeProcessor() override;

    void prepare() override;

    void process(std::vector<anira::BufferF>& input, std::vector<anira::BufferF>& output, std::shared_ptr<anira::SessionElement> session) override;

    void set_attenuation_limit(float limit);

private:
    struct Parameter {
        std::atomic<float> attenuation_limit {100.0f};
    } m_parameter;

    Ort::MemoryInfo m_memory_info;
    Ort::ThreadingOptions m_threading_options;
    Ort::Env m_env;
    Ort::AllocatorWithDefaultOptions m_ort_alloc;
    Ort::SessionOptions m_session_options;

    std::unique_ptr<Ort::Session> m_session;

    // Tensor data storage (persistent between calls)
    std::vector<float> m_audio_data;      // [DFN_HOP_SIZE]
    std::vector<float> m_state_data;      // [DFN_STATE_SIZE]
    std::vector<float> m_atten_lim_data;  // [1]

    // ONNX tensors (reused for input and output)
    std::vector<Ort::Value> m_tensors;

    std::vector<Ort::AllocatedStringPtr> m_input_name;
    std::vector<Ort::AllocatedStringPtr> m_output_name;

    std::vector<const char *> m_output_names;
    std::vector<const char *> m_input_names;
};
