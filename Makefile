#!/usr/bin/make -f

# ---------------------------------------------------------------------------------------------------------------------
# Version details

include VERSION.mk
VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_MICRO)

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

FILES_UI = \
	plugin/PluginUI.cpp \
	deps/dpf-widgets/opengl/Quantum.cpp

# ---------------------------------------------------------------------------------------------------------------------
# dpf plugin config

NAME = BBBA
MAPI_MODULE_NAME = mapi_bbba

# include dpf plugins makefile definitions
export DPF_BUILD_DIR = $(CURDIR)/build
export DPF_TARGET_DIR = $(CURDIR)/bin
include deps/dpf/Makefile.plugins.mk

# tweak build flags
BASE_FLAGS += -DDISABLE_DEBUG_FLOAT
BASE_FLAGS += -DFLOAT_APPROX
BASE_FLAGS += -DRNNOISE_EXPORT=
BASE_FLAGS += -Ideps/rnnoise/include
BASE_FLAGS += -Ideps/rnnoise/src
BUILD_C_FLAGS += -Ideps/rnnoise-model-data
BUILD_CXX_FLAGS += -std=gnu++14
BUILD_CXX_FLAGS += -Ideps/dpf-widgets/opengl
BUILD_CXX_FLAGS += -Iplugin

ifeq ($(X86_RTCD),true)
BASE_FLAGS += -DCPU_INFO_BY_ASM -DRNN_ENABLE_X86_RTCD

$(BUILD_DIR)/deps/rnnoise/src/x86/nnet_avx2.c.o: BASE_FLAGS += -mavx -mfma -mavx2

$(BUILD_DIR)/deps/rnnoise/src/x86/nnet_sse4_1.c.o: BASE_FLAGS += -msse4.1

endif

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

mapi: BUILD_CXX_FLAGS += -DSIMPLIFIED_NOOICE

bin/index.html: web/index.html
	ln -sf $(abspath $<) $@

bin/mapi-proc.js: web/mapi-proc.js
	ln -sf $(abspath $<) $@

bin/service.js: web/service.js
	ln -sf $(abspath $<) $@

# ---------------------------------------------------------------------------------------------------------------------
# clean target

clean: clean_bbba

clean_bbba:
	$(MAKE) clean -C deps/dpf/utils/lv2-ttl-generator
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
	-Dversion_micro=$(VERSION_MICRO) \
	dsp/bbba.dsp

pregen: faustpp
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) -a plugin/template/FaustPluginInfo.h -o plugin/pregen/FaustPluginInfo.h
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) -a plugin/template/FaustPlugin.cpp   -o plugin/pregen/FaustPlugin.cpp

.PHONY: pregen
