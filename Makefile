#!/usr/bin/make -f

# include version details
include VERSION.mk
VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_MICRO)

# ---------------------------------------------------------------------------------------------------------------------
# dpf plugin config

NAME = BBBA
FILES_DSP = plugin/Plugin.cpp
MAPI_MODULE_NAME = mapi_bbba

# include dpf plugins makefile definitions
DPF_TARGET_DIR = $(CURDIR)/bin
DGL_BUILD_DIR = $(CURDIR)/build
include deps/dpf/Makefile.plugins.mk

# tweak build flags
BUILD_CXX_FLAGS += -std=gnu++14
BUILD_CXX_FLAGS += -Iplugin

# ---------------------------------------------------------------------------------------------------------------------
# default plugin targets

all: au clap ladspa lv2_gen lv2_sep vst2 vst3

ifneq ($(CROSS_COMPILING),true)
lv2_gen: lv2_sep deps/dpf/utils/lv2_ttl_generator
	@$(CURDIR)/deps/dpf/utils/generate-ttl.sh

deps/dpf/utils/lv2_ttl_generator:
	$(MAKE) -C deps/dpf/utils/lv2-ttl-generator
else
lv2_gen:
endif

# extra resources for mapi builds
mapi: bin/index.html bin/mapi-proc.js

bin/index.html: web/mapi-example-usage.html
	cp $< $@

bin/mapi-proc.js: web/mapi-proc.js
	cp $< $@

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
