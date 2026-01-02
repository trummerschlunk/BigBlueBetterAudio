#include "DfnOnnxRuntimeProcessor.h"

DfnOnnxRuntimeProcessor::DfnOnnxRuntimeProcessor(anira::InferenceConfig& inference_config)
    : BackendBase(inference_config),
      m_memory_info(Ort::MemoryInfo::CreateCpu(OrtDeviceAllocator, OrtMemTypeCPU))
#if 1
    , m_env((const OrtThreadingOptions*)&m_threading_options)
#endif
{
    m_session_options.SetInterOpNumThreads(1);
    m_session_options.SetIntraOpNumThreads(1);

    if (m_inference_config.is_model_binary(anira::InferenceBackend::CUSTOM)) {
        const anira::ModelData* model_data = m_inference_config.get_model_data(anira::InferenceBackend::CUSTOM);
        assert(model_data && "Model data not found for binary model!");
        m_session = std::make_unique<Ort::Session>(m_env, model_data->m_data, model_data->m_size, m_session_options);
    } else {
#ifdef _WIN32
        std::string modelpath_str = m_inference_config.get_model_path(anira::InferenceBackend::CUSTOM);
        std::wstring modelpath = std::wstring(modelpath_str.begin(), modelpath_str.end());
#else
        std::string modelpath = m_inference_config.get_model_path(anira::InferenceBackend::CUSTOM);
#endif
        m_session = std::make_unique<Ort::Session>(m_env, modelpath.c_str(), m_session_options);
    }
    
    // Get input/output names from model
    m_input_names.resize(m_session->GetInputCount());
    m_output_names.resize(m_session->GetOutputCount());
    m_input_name.clear();
    m_output_name.clear();

    for (size_t i = 0; i < m_session->GetInputCount(); ++i) {
        m_input_name.emplace_back(m_session->GetInputNameAllocated(i, m_ort_alloc));
        m_input_names[i] = m_input_name[i].get();
    }
    for (size_t i = 0; i < m_session->GetOutputCount(); ++i) {
        m_output_name.emplace_back(m_session->GetOutputNameAllocated(i, m_ort_alloc));
        m_output_names[i] = m_output_name[i].get();
    }

    m_audio_data.resize(DFN_HOP_SIZE, 0.0f);
    m_state_data.resize(DFN_STATE_SIZE, 0.0f);
    m_atten_lim_data.resize(1, 0.0f);

    std::array<int64_t, 1> audio_shape = {static_cast<int64_t>(DFN_HOP_SIZE)};
    std::array<int64_t, 1> state_shape = {static_cast<int64_t>(DFN_STATE_SIZE)};
    std::array<int64_t, 1> param_shape = {1};

    m_tensors.emplace_back(Ort::Value::CreateTensor<float>(
        m_memory_info, m_audio_data.data(), m_audio_data.size(),
        audio_shape.data(), audio_shape.size()));

    m_tensors.emplace_back(Ort::Value::CreateTensor<float>(
        m_memory_info, m_state_data.data(), m_state_data.size(),
        state_shape.data(), state_shape.size()));

    m_tensors.emplace_back(Ort::Value::CreateTensor<float>(
        m_memory_info, m_atten_lim_data.data(), m_atten_lim_data.size(),
        param_shape.data(), param_shape.size()));

    for (size_t i = 0; i < m_inference_config.m_warm_up; i++) {
        try {
            m_tensors = m_session->Run(Ort::RunOptions{nullptr},
                m_input_names.data(), m_tensors.data(), m_input_names.size(),
                m_output_names.data(), m_output_names.size());
        } catch (Ort::Exception &e) {
            LOG_ERROR << e.what() << std::endl;
        }
    }
}

DfnOnnxRuntimeProcessor::~DfnOnnxRuntimeProcessor() {
    m_session.reset();
}

void DfnOnnxRuntimeProcessor::prepare() {
    std::fill(m_state_data.begin(), m_state_data.end(), 0.0f);
}

void DfnOnnxRuntimeProcessor::process(std::vector<anira::BufferF>& input, std::vector<anira::BufferF>& output, std::shared_ptr<anira::SessionElement>) {
    auto* audio_ptr = m_tensors[AUDIO_TENSOR].GetTensorMutableData<float>();
    for (size_t i = 0; i < DFN_HOP_SIZE && i < input[0].get_num_samples(); ++i) {
        audio_ptr[i] = input[0].data()[i];
    }

    auto* atten_ptr = m_tensors[ATTEN_LIM_TENSOR].GetTensorMutableData<float>();
    atten_ptr[0] = m_parameter.attenuation_limit.load(std::memory_order_acquire);

    try {
        m_tensors = m_session->Run(Ort::RunOptions{nullptr},
            m_input_names.data(), m_tensors.data(), m_input_names.size(),
            m_output_names.data(), m_output_names.size());
    } catch (Ort::Exception &e) {
        LOG_ERROR << e.what() << std::endl;
    }

    const auto* output_audio_ptr = m_tensors[AUDIO_TENSOR].GetTensorData<float>();
    for (size_t i = 0; i < DFN_HOP_SIZE && i < output[0].get_num_samples(); ++i) {
        output[0].get_memory_block()[i] = output_audio_ptr[i];
    }
}

void DfnOnnxRuntimeProcessor::set_attenuation_limit(float limit) {
    m_parameter.attenuation_limit.store(limit, std::memory_order_release);
}


