#!/usr/bin/make -f

# include version details
include VERSION.mk
VERSION = $(VERSION_MAJOR).$(VERSION_MINOR).$(VERSION_MICRO)

# dpf plugin config
NAME = BBBA
FILES_DSP = plugin/Plugin.cpp
MAPI_MODULE_NAME = mapi_bbba

# include dpf plugins makefile definitions
include dpf/Makefile.plugins.mk

# tweak build flags
BUILD_CXX_FLAGS += -Iplugin

# default plugin targets
all: au clap ladspa lv2_gen lv2_sep vst2 vst3

# lv2 ttl generator, using pregen files
lv2_gen: bin/$(NAME).lv2/manifest.ttl bin/$(NAME).lv2/plugin.ttl

bin/$(NAME).lv2/%.ttl: pregen/$(NAME).lv2/%.ttl
	mkdir -p bin/$(NAME).lv2
	sed -e "s/@libext@/$(LIB_EXT)/g" $< > $@

# extra resources for mapi builds
mapi: bin/index.html

bin/index.html: web/mapi-example-usage.html
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
	-Dlicense="GPLv3+" \
	-Dlicenseurl="http://spdx.org/licenses/GPL-3.0-or-later.html" \
	-Dlibext=\@libext\@ \
	-Dversion_major=$(VERSION_MAJOR) \
	-Dversion_minor=$(VERSION_MINOR) \
	-Dversion_micro=$(VERSION_MICRO) \
	-Dbinary_name="$(NAME)" \
	-Dlabel="bbb_audio" \
	-Dlv2uri="https://github.com/trummerschlunk/BigBlueBetterAudio" \
	dsp/bbba.dsp

pregen: faustpp
	mkdir -p pregen/$(NAME).lv2
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) -a template/DistrhoPluginInfo.h -o pregen/DistrhoPluginInfo.h
	$(FAUSTPP_RUN) $(FAUSTPP_OPTS) -a template/Plugin.cpp          -o pregen/Plugin.cpp
	$(FAUSTPP_RUN)                 -a template/LV2/manifest.ttl    -o pregen/$(NAME).lv2/manifest.ttl
	$(FAUSTPP_RUN)                 -a template/LV2/plugin.ttl      -o pregen/$(NAME).lv2/plugin.ttl

.PHONY: pregen
