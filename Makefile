#!/usr/bin/make -f

# ---------------------------------------------------------------------------------------------------------------------
# Version details

include VERSION.mk
VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_MICRO)

ONNXRUNTIME_VERSION = 1.19.2

# ---------------------------------------------------------------------------------------------------------------------
# Include base dpf makefile for a few definitions

include deps/dpf/Makefile.base.mk

ifeq ($(CPU_I386_OR_X86_64),true)
ifneq ($(WASM),true)
X86_RTCD = true
endif
endif

# ---------------------------------------------------------------------------------------------------------------------
# Files to build

FILES_DSP = \
	plugin/PluginDSP.cpp \
	deps/rnnoise/src/celt_lpc.c \
	deps/rnnoise/src/denoise.c \
	deps/rnnoise/src/kiss_fft.c \
	deps/rnnoise/src/nnet.c \
	deps/rnnoise/src/nnet_default.c \
	deps/rnnoise/src/parse_lpcnet_weights.c \
	deps/rnnoise/src/pitch.c \
	deps/rnnoise/src/rnn.c \
	deps/rnnoise/src/rnnoise_tables.c \
	deps/rnnoise-model-data/rnnoise_data.c

ifeq ($(X86_RTCD),true)
FILES_DSP += \
	deps/rnnoise/src/x86/nnet_avx2.c \
	deps/rnnoise/src/x86/nnet_sse4_1.c \
	deps/rnnoise/src/x86/x86cpu.c \
	deps/rnnoise/src/x86/x86_dnn_map.c
endif

FILES_DSP += \
	plugin/dfn-processing/DfnModelData.cpp \
	plugin/dfn-processing/DfnOnnxRuntimeProcessor.cpp \
	plugin/dfn-processing/DfnProcessor.cpp \
	plugin/dfn-processing/DryWetMixer.cpp \
	deps/anira/src/backends/BackendBase.cpp \
	deps/anira/src/backends/OnnxRuntimeProcessor.cpp \
	deps/anira/src/InferenceConfig.cpp \
	deps/anira/src/InferenceHandler.cpp \
	deps/anira/src/PrePostProcessor.cpp \
	deps/anira/src/scheduler/Context.cpp \
	deps/anira/src/scheduler/InferenceManager.cpp \
	deps/anira/src/scheduler/InferenceThread.cpp \
	deps/anira/src/scheduler/SessionElement.cpp \
	deps/anira/src/system/HighPriorityThread.cpp \
	deps/anira/src/utils/Buffer.cpp \
	deps/anira/src/utils/JsonConfigLoader.cpp \
	deps/anira/src/utils/RingBuffer.cpp

FILES_UI = \
	plugin/PluginUI.cpp \
	deps/dpf-widgets/opengl/Quantum.cpp

# ---------------------------------------------------------------------------------------------------------------------
# dpf plugin dependencies

ifeq ($(WASM),true)
EXTRA_DSP_DEPENDENCIES = build/deps/onnxruntime/libonnxruntime_webassembly.a
else ifeq ($(WINDOWS),true)
EXTRA_DSP_DEPENDENCIES = build/deps/onnxruntime/lib/onnxruntime.lib
else
EXTRA_DSP_DEPENDENCIES = build/deps/onnxruntime/_deps/re2-build/libre2.a
endif

ifeq ($(WINDOWS),true)
USE_CLAP_BUNDLE = true
clapfiles += $(TARGET_DIR)/$(NAME).clap/onnxruntime.dll
lv2files += $(TARGET_DIR)/$(NAME).lv2/onnxruntime.dll
vst3files += $(TARGET_DIR)/$(NAME).vst3/$(VST3_BINARY_DIR)/onnxruntime.dll
endif

# ---------------------------------------------------------------------------------------------------------------------
# dpf plugin config

NAME = BBBA
MAPI_MODULE_NAME = mapi_bbba

# include dpf plugins makefile definitions
export DPF_BUILD_DIR = $(CURDIR)/build
export DPF_TARGET_DIR = $(CURDIR)/bin
include deps/dpf/Makefile.plugins.mk

# ---------------------------------------------------------------------------------------------------------------------

ifeq ($(X86_RTCD),true)
BASE_FLAGS += -DCPU_INFO_BY_ASM -DRNN_ENABLE_X86_RTCD

$(BUILD_DIR)/deps/rnnoise/src/x86/nnet_avx2.c.o: BASE_FLAGS += -mavx -mfma -mavx2

$(BUILD_DIR)/deps/rnnoise/src/x86/nnet_sse4_1.c.o: BASE_FLAGS += -msse4.1

endif

# ---------------------------------------------------------------------------------------------------------------------
# tweak build flags

# TESTING for CI
ifeq ($(MACOS),true)
CFLAGS += -UMAC_OS_X_VERSION_MAX_ALLOWED
CFLAGS += -DMAC_OS_X_VERSION_MAX_ALLOWED=MAC_OS_VERSION_11_0
CFLAGS += -UMAC_OS_X_VERSION_MIN_REQUIRED
CFLAGS += -DMAC_OS_X_VERSION_MIN_REQUIRED=MAC_OS_VERSION_11_0
CFLAGS += -mmacosx-version-min=11
CXXFLAGS += -UMAC_OS_X_VERSION_MAX_ALLOWED
CXXFLAGS += -DMAC_OS_X_VERSION_MAX_ALLOWED=MAC_OS_VERSION_11_0
CXXFLAGS += -UMAC_OS_X_VERSION_MIN_REQUIRED
CXXFLAGS += -DMAC_OS_X_VERSION_MIN_REQUIRED=MAC_OS_VERSION_11_0
CXXFLAGS += -mmacosx-version-min=11
LDFLAGS += -mmacosx-version-min=11
endif

ifeq ($(WASM),true)
BASE_FLAGS += -sWASM_WORKERS
endif
BASE_FLAGS += -pthread
BASE_FLAGS += -DDISABLE_DEBUG_FLOAT
BASE_FLAGS += -DFLOAT_APPROX
BASE_FLAGS += -DRNNOISE_EXPORT=
BASE_FLAGS += -Ideps/rnnoise/include
BASE_FLAGS += -Ideps/rnnoise/src
BASE_FLAGS += -fno-finite-math-only
BUILD_C_FLAGS += -Ideps/rnnoise-model-data
BUILD_CXX_FLAGS += -std=gnu++20
BUILD_CXX_FLAGS += -Ideps/anira/include
BUILD_CXX_FLAGS += -Ideps/concurrentqueue
BUILD_CXX_FLAGS += -Ideps/dpf-widgets/opengl
# BUILD_CXX_FLAGS += -Ideps/flatbuffers/include
BUILD_CXX_FLAGS += -Ideps/nlohmann-json/include
# BUILD_CXX_FLAGS += -Ideps/onnxruntime/cmake/external/onnx
# BUILD_CXX_FLAGS += -Ideps/onnxruntime/include/onnxruntime
BUILD_CXX_FLAGS += -Ideps/onnxruntime/include/onnxruntime/core/session
# BUILD_CXX_FLAGS += -Ideps/onnxruntime/onnxruntime
BUILD_CXX_FLAGS += -Iplugin
BUILD_CXX_FLAGS += -Iplugin/dfn-processing

# from anira
BUILD_CXX_FLAGS += -DANIRA_VERSION='"v2.0.3"'
BUILD_CXX_FLAGS += -DENABLE_LOGGING
BUILD_CXX_FLAGS += -DUSE_ONNXRUNTIME
ifeq ($(WINDOWS),true)
BUILD_CXX_FLAGS += -DANIRA_ANIRAWINEXPORTS_H
BUILD_CXX_FLAGS += -DANIRA_API=
endif

# from onnxruntime
ifeq ($(WINDOWS),true)
BUILD_CXX_FLAGS += -D_Frees_ptr_opt_=
endif
# BUILD_CXX_FLAGS += -DEIGEN_MPL2_ONLY
# BUILD_CXX_FLAGS += -DORT_ENABLE_STREAM
# BUILD_CXX_FLAGS += -DORT_NO_RTTI
# BUILD_CXX_FLAGS += -D__STDC_FORMAT_MACROS

# ---------------------------------------------------------------------------------------------------------------------
# extra linker flags

ifeq ($(WASM),true)
EXTRA_DSP_LIBS += -sASYNCIFY
# EXTRA_DSP_LIBS += -fexceptions
# EXTRA_DSP_LIBS += -sASSERTIONS=1
EXTRA_DSP_LIBS += -sAUDIO_WORKLET
EXTRA_DSP_LIBS += -sWASM_WORKERS
EXTRA_DSP_LIBS += -sENVIRONMENT=web,worker
EXTRA_DSP_LIBS += -sINITIAL_MEMORY=128Mb
EXTRA_DSP_LIBS += -sMALLOC=dlmalloc
EXTRA_DSP_LIBS += -sMAXIMUM_MEMORY=4Gb
EXTRA_DSP_LIBS += -sSTACK_SIZE=5Mb
EXTRA_DSP_LIBS += --bind
EXTRA_DSP_LIBS += -Wno-pthreads-mem-growth
# EXTRA_DSP_LIBS += -sEXPORTED_FUNCTIONS="['emval_await']"
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_webassembly.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_providers_webnn.a
else ifeq ($(WINDOWS),true)
EXTRA_DSP_LIBS += build/deps/onnxruntime/lib/onnxruntime.lib
else
EXTRA_DSP_LIBS += -Wl,--start-group
# EXTRA_DSP_LIBS += -Wl,--whole-archive
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/base/libabsl_base.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/base/libabsl_log_severity.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/base/libabsl_malloc_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/base/libabsl_raw_logging_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/base/libabsl_spinlock_wait.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/base/libabsl_strerror.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/base/libabsl_throw_delegate.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/container/libabsl_hashtablez_sampler.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/container/libabsl_raw_hash_set.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/crc/libabsl_crc32c.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/crc/libabsl_crc_cord_state.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/crc/libabsl_crc_cpu_detect.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/crc/libabsl_crc_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_debugging_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_decode_rust_punycode.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_demangle_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_demangle_rust.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_examine_stack.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_failure_signal_handler.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_stacktrace.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_symbolize.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/debugging/libabsl_utf8_for_code_point.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_commandlineflag.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_commandlineflag_internal.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_config.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_internal.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_marshalling.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_parse.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_private_handle_accessor.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_program_name.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_reflection.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_usage.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/flags/libabsl_flags_usage_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/hash/libabsl_city.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/hash/libabsl_hash.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/hash/libabsl_low_level_hash.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_entry.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_globals.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_check_op.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_conditions.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_fnmatch.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_format.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_globals.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_log_sink_set.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_message.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_nullguard.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_internal_proto.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_log_sink.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/log/libabsl_vlog_config_internal.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/numeric/libabsl_int128.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/profiling/libabsl_exponential_biased.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_cord.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_cord_internal.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_cordz_functions.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_cordz_handle.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_cordz_info.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_str_format_internal.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_string_view.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_strings.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/strings/libabsl_strings_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/synchronization/libabsl_graphcycles_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/synchronization/libabsl_kernel_timeout_internal.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/synchronization/libabsl_synchronization.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/time/libabsl_civil_time.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/time/libabsl_time.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/time/libabsl_time_zone.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/types/libabsl_bad_any_cast_impl.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/types/libabsl_bad_optional_access.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/abseil_cpp-build/absl/types/libabsl_bad_variant_access.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/flatbuffers-build/libflatbuffers.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/google_nsync-build/libnsync_cpp.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/onnx-build/libonnx.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/onnx-build/libonnx_proto.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/protobuf-build/libprotobuf-lite.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/protobuf-build/libprotobuf.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/protobuf-build/libprotoc.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/pytorch_clog-build/libclog.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/pytorch_cpuinfo-build/libcpuinfo.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/_deps/re2-build/libre2.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/lib/libgmock.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/lib/libgtest.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnx_test_data_proto.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnx_test_runner_common.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_common.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_flatbuffers.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_framework.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_graph.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_mlas.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_optimizer.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_providers.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_session.a
# EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_test_utils.a
EXTRA_DSP_LIBS += build/deps/onnxruntime/libonnxruntime_util.a
# EXTRA_DSP_LIBS += -Wl,--no-whole-archive
EXTRA_DSP_LIBS += -Wl,--end-group
endif

EXTRA_DSP_LIBS += -pthread

# ---------------------------------------------------------------------------------------------------------------------
# default plugin targets

all: au clap jack ladspa lv2_gen vst3

ifneq ($(CROSS_COMPILING),true)
lv2_gen: lv2_sep deps/dpf/utils/lv2_ttl_generator
	@$(CURDIR)/deps/dpf/utils/generate-ttl.sh

deps/dpf/utils/lv2_ttl_generator:
	$(MAKE) -C deps/dpf/utils/lv2-ttl-generator
else
lv2_gen:
endif

# extra resources for mapi builds
mapi: bin/index.html bin/mapi-proc.js bin/service.js

mapi: BUILD_CXX_FLAGS += -DSIMPLIFIED_MAPI_BUILD

bin/index.html: web/index.html
	mkdir -p bin
	ln -sf $(abspath $<) $@

bin/mapi-proc.js: web/mapi-proc.js
	mkdir -p bin
	ln -sf $(abspath $<) $@

bin/service.js: web/service.js
	mkdir -p bin
	ln -sf $(abspath $<) $@

%/onnxruntime.dll: build/deps/onnxruntime/lib/onnxruntime.lib lv2_sep
	-@mkdir -p "$(shell dirname $@)"
	cp -v build/deps/onnxruntime/lib/onnxruntime.dll $@

# ---------------------------------------------------------------------------------------------------------------------
# clean target

clean: clean_bbba

clean_bbba:
	$(MAKE) clean -C deps/dpf/utils/lv2-ttl-generator
	rm -f deps/dpf/utils/*.d
	rm -f deps/rnnoise/src/*.d
	rm -f deps/rnnoise/src/*.o
	rm -f deps/rnnoise/src/x86/*.d
	rm -f deps/rnnoise/src/x86/*.o
	rm -f deps/speexdsp/libspeexdsp/*.d
	rm -f deps/speexdsp/libspeexdsp/*.o
	rm -rf bin build deps/dpf/build

# ---------------------------------------------------------------------------------------------------------------------
# faustpp target, building it ourselves if not available from the system

ifeq ($(shell command -v faustpp 1>/dev/null && echo true),true)
FAUSTPP_TARGET =
FAUSTPP_EXEC = faustpp
else
FAUSTPP_TARGET = build/faustpp/faustpp$(APP_EXT)
FAUSTPP_EXEC = $(CURDIR)/$(FAUSTPP_TARGET)
endif

faustpp:

# never rebuild faustpp
ifneq ($(FAUSTPP_TARGET),)
ifeq ($(wildcard $(FAUSTPP_TARGET)),)
faustpp: $(FAUSTPP_TARGET)
.PHONY: faustpp
endif
endif

# ---------------------------------------------------------------------------------------------------------------------
# rules for custom faustpp build

FAUSTPP_CMAKE_ARGS  = -G 'Unix Makefiles'
ifeq ($(DEBUG),true)
FAUSTPP_CMAKE_ARGS += -DCMAKE_BUILD_TYPE=Debug
else
FAUSTPP_CMAKE_ARGS += -DCMAKE_BUILD_TYPE=Release
endif
ifeq ($(WINDOWS),true)
FAUSTPP_CMAKE_ARGS += -DCMAKE_SYSTEM_NAME=Windows
endif

faustpp/CMakeLists.txt:
	git clone --recursive https://github.com/falkTX/faustpp.git --depth=1 -b use-internal=boost

build/faustpp/Makefile: faustpp/CMakeLists.txt
	cmake -Bbuild/faustpp -Sfaustpp -DCMAKE_POLICY_VERSION_MINIMUM=3.5 -DFAUSTPP_USE_INTERNAL_BOOST=ON $(FAUSTPP_CMAKE_ARGS)

build/faustpp/faustpp$(APP_EXT): build/faustpp/Makefile
	$(MAKE) -C build/faustpp

# ---------------------------------------------------------------------------------------------------------------------
# rules for faust dsp to plugin code conversion

FAUSTPP_RUN = \
	$(FAUSTPP_EXEC) \
	-Dbrand="Klaus Scheuermann" \
	-Dhomepage="https://4ohm.de/" \
	-Dlabel="bbb_audio" \
	-Dlicense="GPLv3+" \
	-Dlicenseurl="http://spdx.org/licenses/GPL-3.0-or-later.html" \
	-Dlv2uri="https://github.com/trummerschlunk/BigBlueBetterAudio" \
	-Dversion_major=$(VERSION_MAJOR) \
	-Dversion_minor=$(VERSION_MINOR) \
	-Dversion_micro=$(VERSION_MICRO)

pregen: faustpp
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) dsp/bbba.dsp -a plugin/template/FaustPluginInfo.h -o plugin/pregen/FaustPluginInfo.h
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) dsp/bbba.dsp -a plugin/template/FaustPlugin.cpp   -o plugin/pregen/FaustPlugin.cpp
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) dsp/bbba_gui.dsp -a plugin/template/FaustPluginInfo.h -o plugin/pregen-gui/FaustPluginInfo.h
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) dsp/bbba_gui.dsp -a plugin/template/FaustPlugin.cpp   -o plugin/pregen-gui/FaustPlugin.cpp

.PHONY: pregen

# ---------------------------------------------------------------------------------------------------------------------
# rules for custom onnxruntime build

ONNXRUNTIME_FLAGS = -G 'Unix Makefiles' \
	-DCMAKE_POLICY_VERSION_MINIMUM=3.5 \
	-Donnxruntime_BUILD_UNIT_TESTS=OFF \
	-Donnxruntime_DISABLE_RTTI=ON \
	-Donnxruntime_ENABLE_CPUINFO=OFF \
	-Donnxruntime_ENABLE_LTO=OFF

ifeq ($(DEBUG),true)
ONNXRUNTIME_FLAGS += -DCMAKE_BUILD_TYPE=Debug
else ifeq ($(SKIP_STRIPPING),true)
ONNXRUNTIME_FLAGS += -DCMAKE_BUILD_TYPE=RelWithDebugInfo
else
ONNXRUNTIME_FLAGS += -DCMAKE_BUILD_TYPE=Release
endif

ifeq ($(CROSS_COMPILING),true)
ONNXRUNTIME_FLAGS += -Donnxruntime_CROSS_COMPILING=ON
endif

ifeq ($(MACOS),true)
# make sure macOS target matches ours
SPACE =
SPACE +=
ifneq (,$(findstring -arch$(SPACE),$(CXXFLAGS)))
ONNXRUNTIME_FLAGS += -DCMAKE_OSX_ARCHITECTURES='$(subst $(SPACE),;,$(subst -arch=,,$(filter -arch=%,$(subst -arch$(SPACE),-arch=,$(CXXFLAGS)))))'
endif
ifneq (,$(findstring -mmacosx-version-min=,$(CXXFLAGS)))
export MACOSX_DEPLOYMENT_TARGET = $(lastword $(subst -mmacosx-version-min=,,$(filter -mmacosx-version-min=%,$(CXXFLAGS))))
ONNXRUNTIME_FLAGS += -DCMAKE_OSX_DEPLOYMENT_TARGET=$(MACOSX_DEPLOYMENT_TARGET)
endif
ONNXRUNTIME_FLAGS += -DCMAKE_OSX_SYSROOT="macosx"
endif

ifeq ($(WASM),true)
# -DCMAKE_CROSSCOMPILING_EMULATOR
ONNXRUNTIME_FLAGS += \
	-DCMAKE_TOOLCHAIN_FILE=$(CURDIR)/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake \
	-Donnxruntime_BUILD_WEBASSEMBLY_STATIC_LIB=ON \
	-Donnxruntime_ENABLE_WEBASSEMBLY_API_EXCEPTION_CATCHING=ON \
	-Donnxruntime_ENABLE_WEBASSEMBLY_PROFILING=OFF \
	-Donnxruntime_ENABLE_WEBASSEMBLY_SIMD=ON \
	-Donnxruntime_ENABLE_WEBASSEMBLY_THREADS=ON \
	-Donnxruntime_USE_WEBNN=ON
endif

ifeq ($(WINDOWS),true)
ONNXRUNTIME_FLAGS += \
	-DCMAKE_SYSTEM_NAME=Windows
endif

ifeq ($(WASM),true)
build/deps/onnxruntime/libonnxruntime_webassembly.a: build/deps/onnxruntime/Makefile
	$(MAKE) -C build/deps/onnxruntime
# 	--emsdk_version
# 	./deps/onnxruntime/build.sh \
# 		--build_dir $(CURDIR)/build/deps/onnxruntime \
# 		--config Release \
# 		--build_wasm_static_lib \
# 		--enable_wasm_simd \
# 		--enable_wasm_threads \
# 		--disable_wasm_exception_catching \
# 		--disable_rtti \
# 		--skip_tests \
# 		--parallel

build/deps/onnxruntime/Makefile: deps/onnxruntime/cmake/CMakeLists.txt
	sed -i -e 's|eigen-e7248b26a1ed53fa030c5c459f7ea095dfd276ac.zip;be8be39fdbc6e60e94fa7870b280707069b5b81a|eigen-e7248b26a1ed53fa030c5c459f7ea095dfd276ac.zip;32b145f525a8308d7ab1c09388b2e288312d8eba|' deps/onnxruntime/cmake/deps.txt
	sed -i -e 's|COMPILE_WARNING_AS_ERROR ON|COMPILE_WARNING_AS_ERROR OFF|' deps/onnxruntime/cmake/CMakeLists.txt
	env cmake -S deps/onnxruntime/cmake -B build/deps/onnxruntime \
		-DCMAKE_BUILD_TYPE=Release \
		-DCMAKE_TLS_VERIFY=ON \
		-DCMAKE_TOOLCHAIN_FILE=$(CURDIR)/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake \
		-DFETCHCONTENT_QUIET=OFF \
		-Donnxruntime_ARMNN_BN_USE_CPU=ON \
		-Donnxruntime_ARMNN_RELU_USE_CPU=ON \
		-Donnxruntime_BUILD_JAVA=OFF \
		-Donnxruntime_BUILD_MS_EXPERIMENTAL_OPS=OFF \
		-Donnxruntime_BUILD_NODEJS=OFF \
		-Donnxruntime_BUILD_UNIT_TESTS=OFF \
		-Donnxruntime_BUILD_WEBASSEMBLY_STATIC_LIB=ON \
		-Donnxruntime_DISABLE_CONTRIB_OPS=OFF \
		-Donnxruntime_DISABLE_EXCEPTIONS=OFF \
		-Donnxruntime_DISABLE_RTTI=ON \
		-Donnxruntime_CROSS_COMPILING=ON \
		-Donnxruntime_EMSCRIPTEN_SETTINGS="MALLOC=dlmalloc;WASM_WORKERS=1;STACK_SIZE=5Mb" \
		-Donnxruntime_ENABLE_CPU_FP16_OPS=OFF \
		-Donnxruntime_ENABLE_CPUINFO=OFF \
		-Donnxruntime_ENABLE_LAZY_TENSOR=OFF \
		-Donnxruntime_ENABLE_LTO=OFF \
		-Donnxruntime_ENABLE_PYTHON=OFF \
		-Donnxruntime_ENABLE_WEBASSEMBLY_API_EXCEPTION_CATCHING=OFF \
		-Donnxruntime_ENABLE_WEBASSEMBLY_DEBUG_INFO=OFF \
		-Donnxruntime_ENABLE_WEBASSEMBLY_EXCEPTION_CATCHING=OFF \
		-Donnxruntime_ENABLE_WEBASSEMBLY_EXCEPTION_THROWING=OFF \
		-Donnxruntime_ENABLE_WEBASSEMBLY_PROFILING=OFF \
		-Donnxruntime_ENABLE_WEBASSEMBLY_SIMD=ON \
		-Donnxruntime_ENABLE_WEBASSEMBLY_THREADS=ON \
		-Donnxruntime_GENERATE_TEST_REPORTS=ON \
		-Donnxruntime_TVM_USE_HASH=OFF \
		-Donnxruntime_USE_MIMALLOC=OFF \
		-Donnxruntime_USE_TENSORRT_BUILTIN_PARSER=ON \
		-Donnxruntime_USE_WEBNN=OFF \
		-Donnxruntime_WEBASSEMBLY_RUN_TESTS_IN_BROWSER=OFF
else ifeq ($(WINDOWS),true)
build/deps/onnxruntime/lib/onnxruntime.lib: build/deps/onnxruntime-win-x64-$(ONNXRUNTIME_VERSION).zip
	rm -rf build/deps/onnxruntime build/deps/onnxruntime-win-x64-$(ONNXRUNTIME_VERSION)
	unzip $< -d build/deps
	mv build/deps/onnxruntime-win-x64-$(ONNXRUNTIME_VERSION) build/deps/onnxruntime
	touch $@

build/deps/onnxruntime-win-x64-$(ONNXRUNTIME_VERSION).zip:
	wget -O $@ https://github.com/microsoft/onnxruntime/releases/download/v$(ONNXRUNTIME_VERSION)/onnxruntime-win-x64-$(ONNXRUNTIME_VERSION).zip
else
build/deps/onnxruntime/Makefile: deps/onnxruntime/cmake/CMakeLists.txt
	sed -i -e 's|eigen-e7248b26a1ed53fa030c5c459f7ea095dfd276ac.zip;be8be39fdbc6e60e94fa7870b280707069b5b81a|eigen-e7248b26a1ed53fa030c5c459f7ea095dfd276ac.zip;32b145f525a8308d7ab1c09388b2e288312d8eba|' deps/onnxruntime/cmake/deps.txt
	sed -i -e 's|COMPILE_WARNING_AS_ERROR ON|COMPILE_WARNING_AS_ERROR OFF|' deps/onnxruntime/cmake/CMakeLists.txt
	env cmake -S deps/onnxruntime/cmake -B build/deps/onnxruntime $(ONNXRUNTIME_FLAGS)

build/deps/onnxruntime/_deps/re2-build/libre2.a: build/deps/onnxruntime/libonnxruntime_session.a
	$(MAKE) -C build/deps/onnxruntime/_deps/re2-build

build/deps/onnxruntime/libonnxruntime_session.a: build/deps/onnxruntime/Makefile
	$(MAKE) -C build/deps/onnxruntime
endif
