
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba.dsp
// Name: bbba
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.17
//------------------------------------------------------------------------------


#include "DistrhoPlugin.hpp"

#include <algorithm>
#include <memory>

// --------------------------------------------------------------------------------------------------------------------

// inline code when possible
#define FAUSTPP_VIRTUAL inline

// make everything available directly
#define FAUSTPP_PRIVATE public
#define FAUSTPP_PROTECTED public

// match distrho namespace
#define FAUSTPP_BEGIN_NAMESPACE START_NAMESPACE_DISTRHO
#define FAUSTPP_END_NAMESPACE END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

class dsp {
public:
    virtual ~dsp() {}
};

class Meta {
public:
    // dummy
    void declare(...) {}
};

class UI {
public:
    // dummy
    void openHorizontalBox(...) {}
    void openVerticalBox(...) {}
    void openTabBox(...) {}
    void closeBox(...) {}
    void declare(...) {}
    void addButton(...) {}
    void addCheckButton(...) {}
    void addVerticalSlider(...) {}
    void addHorizontalSlider(...) {}
    void addVerticalBargraph(...) {}
    void addHorizontalBargraph(...) {}
};

END_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------


#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#ifndef FAUSTPP_PRIVATE
#   define FAUSTPP_PRIVATE private
#endif
#ifndef FAUSTPP_PROTECTED
#   define FAUSTPP_PROTECTED protected
#endif
#ifndef FAUSTPP_VIRTUAL
#   define FAUSTPP_VIRTUAL virtual
#endif

#ifndef FAUSTPP_BEGIN_NAMESPACE
#   define FAUSTPP_BEGIN_NAMESPACE
#endif
#ifndef FAUSTPP_END_NAMESPACE
#   define FAUSTPP_END_NAMESPACE
#endif

FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

FAUSTPP_END_NAMESPACE
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>
FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

class mydsp : public dsp {
	
 FAUSTPP_PRIVATE:
	
	FAUSTFLOAT fVslider0;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fConst2;
	float fConst3;
	float fConst4;
	FAUSTFLOAT fVslider1;
	float fConst5;
	float fConst6;
	float fConst7;
	int iConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fVec0[2];
	float fConst17;
	float fConst18;
	float fConst19;
	float fRec74[2];
	float fRec73[2];
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fVec1[2];
	float fConst25;
	float fRec72[2];
	float fRec71[2];
	float fVec2[2];
	float fVec3[3];
	int iConst26;
	int iConst27;
	float fVec4[5];
	int iConst28;
	int iConst29;
	float fVec5[12];
	int iConst30;
	int iConst31;
	int IOTA0;
	float fVec6[32];
	int iConst32;
	int iConst33;
	float fVec7[64];
	int iConst34;
	int iConst35;
	float fVec8[128];
	int iConst36;
	int iConst37;
	float fVec9[256];
	int iConst38;
	int iConst39;
	float fVec10[512];
	int iConst40;
	float fConst41;
	float fRec66[2];
	float fRec67[2];
	float fRec64[2];
	FAUSTFLOAT fVslider2;
	float fRec63[2];
	float fConst42;
	float fConst43;
	FAUSTFLOAT fVslider3;
	float fRec76[2];
	float fVec11[2];
	FAUSTFLOAT fVslider4;
	float fRec75[2];
	float fVec12[2];
	float fConst44;
	float fConst45;
	float fConst46;
	float fRec58[2];
	float fConst47;
	float fRec59[2];
	float fConst48;
	float fRec53[2];
	float fRec54[2];
	float fConst49;
	float fConst50;
	float fConst51;
	float fRec49[2];
	float fConst52;
	float fRec50[2];
	float fConst53;
	float fConst54;
	float fConst55;
	float fConst56;
	float fRec45[2];
	float fConst57;
	float fRec46[2];
	float fConst58;
	float fConst59;
	float fConst60;
	float fConst61;
	float fRec41[2];
	float fConst62;
	float fRec42[2];
	float fConst63;
	float fConst64;
	float fConst65;
	float fConst66;
	float fRec36[2];
	float fConst67;
	float fRec37[2];
	float fConst68;
	float fRec31[2];
	float fRec32[2];
	float fConst69;
	float fConst70;
	float fConst71;
	float fRec27[2];
	float fConst72;
	float fRec28[2];
	float fConst73;
	float fConst74;
	float fConst75;
	float fConst76;
	float fRec22[2];
	float fConst77;
	float fRec23[2];
	float fConst78;
	float fRec17[2];
	float fRec18[2];
	float fVec13[2];
	float fConst79;
	float fConst80;
	float fConst81;
	float fVec14[2];
	float fRec16[2];
	float fRec15[2];
	float fVec15[2];
	float fRec14[2];
	float fRec13[2];
	float fConst82;
	float fConst83;
	float fRec12[2];
	float fConst84;
	float fRec11[2];
	float fVec16[2];
	float fRec82[2];
	float fRec81[2];
	float fVec17[2];
	float fRec80[2];
	float fRec79[2];
	float fRec78[2];
	float fRec77[2];
	FAUSTFLOAT fVslider5;
	float fConst85;
	float fRec10[2];
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVslider7;
	float fConst86;
	float fRec90[2];
	float fRec91[2];
	float fRec92[2];
	float fVec18[2];
	float fRec89[2];
	float fRec88[2];
	float fVec19[2];
	float fRec87[2];
	float fRec86[2];
	float fRec85[2];
	float fRec84[2];
	FAUSTFLOAT fVslider8;
	float fConst87;
	float fRec83[2];
	float fConst88;
	float fRec114[2];
	float fRec115[2];
	float fRec110[2];
	float fRec111[2];
	float fRec105[2];
	float fRec106[2];
	float fRec100[2];
	float fRec101[2];
	float fVec20[2];
	float fVec21[2];
	float fRec99[2];
	float fRec98[2];
	float fVec22[2];
	float fRec97[2];
	float fRec96[2];
	float fRec95[2];
	float fRec94[2];
	FAUSTFLOAT fVslider9;
	float fConst89;
	float fRec93[2];
	float fRec124[2];
	float fRec125[2];
	float fRec126[2];
	float fVec23[2];
	float fRec123[2];
	float fRec122[2];
	float fVec24[2];
	float fRec121[2];
	float fRec120[2];
	float fRec119[2];
	float fRec118[2];
	FAUSTFLOAT fVslider10;
	float fRec117[2];
	float fConst90;
	float fRec170[2];
	float fRec171[2];
	float fRec166[2];
	float fRec167[2];
	float fRec162[2];
	float fRec163[2];
	float fRec158[2];
	float fRec159[2];
	float fRec153[2];
	float fRec154[2];
	float fRec148[2];
	float fRec149[2];
	float fRec144[2];
	float fRec145[2];
	float fRec139[2];
	float fRec140[2];
	float fRec134[2];
	float fRec135[2];
	float fVec25[2];
	float fVec26[2];
	float fRec133[2];
	float fRec132[2];
	float fVec27[2];
	float fRec131[2];
	float fRec130[2];
	float fRec129[2];
	float fRec128[2];
	FAUSTFLOAT fVslider11;
	float fConst91;
	float fRec127[2];
	float fConst92;
	float fRec180[2];
	float fRec181[2];
	float fRec182[2];
	float fVec28[2];
	float fRec179[2];
	float fRec178[2];
	float fVec29[2];
	float fRec177[2];
	float fRec176[2];
	float fRec175[2];
	float fRec174[2];
	FAUSTFLOAT fVslider12;
	float fConst93;
	float fRec173[2];
	float fConst94;
	float fRec204[2];
	float fRec205[2];
	float fRec200[2];
	float fRec201[2];
	float fRec195[2];
	float fRec196[2];
	float fRec190[2];
	float fRec191[2];
	float fVec30[2];
	float fVec31[2];
	float fRec189[2];
	float fRec188[2];
	float fVec32[2];
	float fRec187[2];
	float fRec186[2];
	float fRec185[2];
	float fRec184[2];
	FAUSTFLOAT fVslider13;
	float fConst95;
	float fRec183[2];
	float fConst96;
	float fRec214[2];
	float fRec215[2];
	float fRec216[2];
	float fVec33[2];
	float fRec213[2];
	float fRec212[2];
	float fVec34[2];
	float fRec211[2];
	float fRec210[2];
	float fRec209[2];
	float fRec208[2];
	FAUSTFLOAT fVslider14;
	float fConst97;
	float fRec207[2];
	float fRec1[3];
	float fConst98;
	float fConst99;
	float fRec0[2];
	FAUSTFLOAT fVslider15;
	float fConst100;
	float fRec217[2];
	float fConst101;
	float fRec218[2];
	float fConst102;
	float fRec219[2];
	float fConst103;
	float fRec220[2];
	float fConst104;
	float fRec221[2];
	float fConst105;
	float fRec222[2];
	float fConst106;
	float fRec223[2];
	float fVec35[1024];
	int iConst107;
	int iRec226[2];
	float fRec227[2];
	float fConst108;
	float fRec225[2];
	float fRec224[2];
	FAUSTFLOAT fCheckbox0;
	float fRec228[2];
	
 public:
	mydsp() {
	}
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.2.0");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/parallelOp:author", "Bart Brouns");
		m->declare("basics.lib/parallelOp:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelOp:licence", "GPL-3.0");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-a /tmp/tmp5l4ms70s.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("compressors.lib/limiter_lad_N:author", "Dario Sanfilippo");
		m->declare("compressors.lib/limiter_lad_N:copyright", "Copyright (C) 2020 Dario Sanfilippo       <sanfilippo.dario@gmail.com>");
		m->declare("compressors.lib/limiter_lad_N:license", "GPLv3 license");
		m->declare("compressors.lib/limiter_lad_mono:author", "Dario Sanfilippo");
		m->declare("compressors.lib/limiter_lad_mono:copyright", "Copyright (C) 2020 Dario Sanfilippo       <sanfilippo.dario@gmail.com>");
		m->declare("compressors.lib/limiter_lad_mono:license", "GPLv3 license");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_mono:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/version", "1.6.0");
		m->declare("filename", "bbba.dsp");
		m->declare("filters.lib/crossover2LR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/crossover2LR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/crossover2LR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/crossover8LR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/crossover8LR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/crossover8LR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/highpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/highpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:author", "Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:copyright", "Copyright (C) 2022 Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:license", "ISC license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/lowpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/lowpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/svf:author", "Oleg Nesterov");
		m->declare("filters.lib/svf:copyright", "Copyright (C) 2020 Oleg Nesterov <oleg@redhat.com>");
		m->declare("filters.lib/svf:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf1s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf1s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf22t:author", "Julius O. Smith III");
		m->declare("filters.lib/tf22t:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf22t:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.7.1");
		m->declare("interpolators.lib/interpolate_linear:author", "Stéphane Letz");
		m->declare("interpolators.lib/interpolate_linear:licence", "MIT");
		m->declare("interpolators.lib/name", "Faust Interpolator Library");
		m->declare("interpolators.lib/version", "1.4.0");
		m->declare("license", "GPLv3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.8.1");
		m->declare("name", "bbba");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("version", "0.17");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 1;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 1;
	}
	
	static void classInit(int sample_rate) {
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = std::exp(-(4e+01f / fConst0));
		fConst2 = std::exp(-(1e+02f / fConst0));
		fConst3 = 0.125f * fConst0;
		fConst4 = 1.1312305e-06f * fConst0;
		fConst5 = 3.1415927f / fConst0;
		fConst6 = 0.01f * fConst0;
		fConst7 = std::rint(fConst6);
		iConst8 = int(std::floor(0.5f * fConst7)) % 2;
		fConst9 = std::tan(5283.415f / fConst0);
		fConst10 = 1.7803667f * fConst9;
		fConst11 = mydsp_faustpower2_f(fConst9);
		fConst12 = fConst11 + fConst10 + 1.5848527f;
		fConst13 = 2.0f * (fConst11 + -1.0f);
		fConst14 = fConst11 + (1.5848527f - fConst10);
		fConst15 = 1.4142135f * fConst9;
		fConst16 = fConst11 + (1.0f - fConst15);
		fConst17 = fConst11 + -1.5848527f;
		fConst18 = 2.0f * fConst17;
		fConst19 = 1.0f / (fConst11 + fConst15 + 1.0f);
		fConst20 = std::tan(119.806114f / fConst0);
		fConst21 = mydsp_faustpower2_f(fConst20);
		fConst22 = 1.0006541f * (fConst21 + -1.0f);
		fConst23 = 0.50032705f * (fConst21 + 1.0f);
		fConst24 = fConst23 - fConst20;
		fConst25 = 1.0f / (fConst20 + fConst23);
		iConst26 = int(std::floor(fConst7)) % 2;
		iConst27 = int(std::floor(0.25f * fConst7)) % 2;
		iConst28 = iConst26 + 2 * iConst8;
		iConst29 = int(std::floor(0.125f * fConst7)) % 2;
		iConst30 = iConst28 + 4 * iConst27;
		iConst31 = int(std::floor(0.0625f * fConst7)) % 2;
		iConst32 = iConst30 + 8 * iConst29;
		iConst33 = int(std::floor(0.03125f * fConst7)) % 2;
		iConst34 = iConst32 + 16 * iConst31;
		iConst35 = int(std::floor(0.015625f * fConst7)) % 2;
		iConst36 = iConst34 + 32 * iConst33;
		iConst37 = int(std::floor(0.0078125f * fConst7)) % 2;
		iConst38 = iConst36 + 64 * iConst35;
		iConst39 = int(std::floor(0.00390625f * fConst7)) % 2;
		iConst40 = iConst38 + 128 * iConst37;
		fConst41 = 1.0f / std::max<float>(fConst7, 1.1920929e-07f);
		fConst42 = 44.1f / fConst0;
		fConst43 = 1.0f - fConst42;
		fConst44 = std::tan(2513.2742f / fConst0);
		fConst45 = fConst44 * (fConst44 + 1.4142135f) + 1.0f;
		fConst46 = 2.0f / fConst45;
		fConst47 = fConst44 / fConst45;
		fConst48 = 1.0f / fConst45;
		fConst49 = std::tan(628.31854f / fConst0);
		fConst50 = fConst49 * (fConst49 + 1.4142135f) + 1.0f;
		fConst51 = 2.0f / fConst50;
		fConst52 = fConst49 / fConst50;
		fConst53 = 1.0f / fConst50;
		fConst54 = std::tan(314.15927f / fConst0);
		fConst55 = fConst54 * (fConst54 + 1.4142135f) + 1.0f;
		fConst56 = 2.0f / fConst55;
		fConst57 = fConst54 / fConst55;
		fConst58 = 1.0f / fConst55;
		fConst59 = std::tan(1256.6371f / fConst0);
		fConst60 = fConst59 * (fConst59 + 1.4142135f) + 1.0f;
		fConst61 = 2.0f / fConst60;
		fConst62 = fConst59 / fConst60;
		fConst63 = 1.0f / fConst60;
		fConst64 = std::tan(10053.097f / fConst0);
		fConst65 = fConst64 * (fConst64 + 1.4142135f) + 1.0f;
		fConst66 = 2.0f / fConst65;
		fConst67 = fConst64 / fConst65;
		fConst68 = 1.0f / fConst65;
		fConst69 = std::tan(5026.5483f / fConst0);
		fConst70 = fConst69 * (fConst69 + 1.4142135f) + 1.0f;
		fConst71 = 2.0f / fConst70;
		fConst72 = fConst69 / fConst70;
		fConst73 = 1.0f / fConst70;
		fConst74 = std::tan(20106.193f / fConst0);
		fConst75 = fConst74 * (fConst74 + 1.4142135f) + 1.0f;
		fConst76 = 2.0f / fConst75;
		fConst77 = fConst74 / fConst75;
		fConst78 = 1.0f / fConst75;
		fConst79 = 3.9810717f * fConst12;
		fConst80 = 7.9621434f * fConst17;
		fConst81 = 3.9810717f * fConst14;
		fConst82 = std::exp(-(1e+01f / fConst0));
		fConst83 = 1.0f - fConst82;
		fConst84 = 1.0f - fConst2;
		fConst85 = 1.0f - fConst1;
		fConst86 = std::exp(-(2e+01f / fConst0));
		fConst87 = 1.0f - fConst86;
		fConst88 = std::exp(-(13.333333f / fConst0));
		fConst89 = 1.0f - fConst88;
		fConst90 = std::exp(-(8.0f / fConst0));
		fConst91 = 1.0f - fConst90;
		fConst92 = std::exp(-(6.6666665f / fConst0));
		fConst93 = 1.0f - fConst92;
		fConst94 = std::exp(-(5.714286f / fConst0));
		fConst95 = 1.0f - fConst94;
		fConst96 = std::exp(-(5.0f / fConst0));
		fConst97 = 1.0f - fConst96;
		fConst98 = std::exp(-(5e+02f / fConst0));
		fConst99 = std::exp(-(66.666664f / fConst0));
		fConst100 = std::exp(-(333.33334f / fConst0));
		fConst101 = std::exp(-(2e+02f / fConst0));
		fConst102 = std::exp(-(5e+01f / fConst0));
		fConst103 = std::exp(-(25.0f / fConst0));
		fConst104 = std::exp(-(16.666666f / fConst0));
		fConst105 = std::exp(-(12.5f / fConst0));
		fConst106 = std::exp(-(33.333332f / fConst0));
		iConst107 = int(0.005f * fConst0);
		fConst108 = 1.0f - fConst98;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-22.0f);
		fVslider1 = FAUSTFLOAT(1.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fVslider4 = FAUSTFLOAT(42.0f);
		fVslider5 = FAUSTFLOAT(-3.0f);
		fVslider6 = FAUSTFLOAT(1e+02f);
		fVslider7 = FAUSTFLOAT(5e+01f);
		fVslider8 = FAUSTFLOAT(-7.0f);
		fVslider9 = FAUSTFLOAT(-1e+01f);
		fVslider10 = FAUSTFLOAT(-9.0f);
		fVslider11 = FAUSTFLOAT(-8.0f);
		fVslider12 = FAUSTFLOAT(-5.0f);
		fVslider13 = FAUSTFLOAT(-5.0f);
		fVslider14 = FAUSTFLOAT(-1e+01f);
		fVslider15 = FAUSTFLOAT(1e+02f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec74[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec73[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec72[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec71[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fVec2[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 3; l7 = l7 + 1) {
			fVec3[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 5; l8 = l8 + 1) {
			fVec4[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 12; l9 = l9 + 1) {
			fVec5[l9] = 0.0f;
		}
		IOTA0 = 0;
		for (int l10 = 0; l10 < 32; l10 = l10 + 1) {
			fVec6[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 64; l11 = l11 + 1) {
			fVec7[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 128; l12 = l12 + 1) {
			fVec8[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 256; l13 = l13 + 1) {
			fVec9[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 512; l14 = l14 + 1) {
			fVec10[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec66[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec67[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec64[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec63[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec76[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fVec11[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec75[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fVec12[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec58[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec59[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec53[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec54[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec49[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec50[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec45[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec46[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec41[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec42[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec36[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec37[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec31[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec32[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec27[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec28[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec22[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec23[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec17[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec18[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fVec13[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec14[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec16[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec15[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec15[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec14[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec13[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec12[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec11[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fVec16[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec82[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec81[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec17[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec80[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec79[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec78[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec77[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec10[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec90[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec91[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec92[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec18[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec89[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec88[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fVec19[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec87[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec86[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec85[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec84[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec83[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec114[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec115[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec110[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec111[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec105[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec106[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec100[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec101[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fVec20[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec21[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec99[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec98[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fVec22[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec97[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec96[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec95[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec94[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec93[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec124[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec125[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec126[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fVec23[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec123[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec122[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fVec24[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec121[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec120[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec119[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec118[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec117[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec170[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec171[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec166[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec167[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec162[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec163[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec158[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec159[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec153[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec154[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec148[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec149[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec144[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec145[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec139[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec140[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec134[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec135[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fVec25[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fVec26[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec133[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec132[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec27[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec131[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec130[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec129[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec128[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec127[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec180[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec181[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec182[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fVec28[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec179[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec178[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec29[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec177[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec176[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec175[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec174[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec173[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec204[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec205[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec200[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec201[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec195[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec196[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec190[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec191[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fVec30[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fVec31[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec189[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec188[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fVec32[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec187[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec186[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec185[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec184[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec183[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec214[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec215[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec216[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fVec33[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec213[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec212[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fVec34[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec211[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec210[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec209[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec208[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec207[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 3; l173 = l173 + 1) {
			fRec1[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec0[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec217[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec218[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec219[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec220[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec221[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec222[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec223[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 1024; l182 = l182 + 1) {
			fVec35[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			iRec226[l183] = 0;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec227[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec225[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec224[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec228[l187] = 0.0f;
		}
	}
	
	FAUSTPP_VIRTUAL void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	FAUSTPP_VIRTUAL void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	FAUSTPP_VIRTUAL mydsp* clone() {
		return new mydsp();
	}
	
	FAUSTPP_VIRTUAL int getSampleRate() {
		return fSampleRate;
	}
	
	FAUSTPP_VIRTUAL void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("bbba");
		ui_interface->declare(0, "1", "");
		ui_interface->openHorizontalBox("Spectral Ballancer");
		ui_interface->openHorizontalBox("Parameters");
		ui_interface->declare(&fVslider7, "1", "");
		ui_interface->declare(&fVslider7, "symbol", "sb_strength");
		ui_interface->declare(&fVslider7, "unit", "%");
		ui_interface->addVerticalSlider("sb_strength", &fVslider7, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider14, "symbol", "sb_target_spectrum_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider14, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider13, "symbol", "sb_target_spectrum_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider13, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider12, "symbol", "sb_target_spectrum_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider12, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider11, "symbol", "sb_target_spectrum_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider11, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider10, "symbol", "sb_target_spectrum_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider10, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider9, "symbol", "sb_target_spectrum_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider9, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "symbol", "sb_target_spectrum_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider8, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "sb_target_spectrum_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider5, FAUSTFLOAT(-3.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->declare(&fVslider3, "1", "");
		ui_interface->declare(&fVslider3, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider6, "2", "");
		ui_interface->declare(&fVslider6, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider6, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider1, "3", "");
		ui_interface->declare(&fVslider1, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-22.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider2, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVslider15, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider15, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider4, "scale", "log");
		ui_interface->declare(&fVslider4, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider4, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = float(fVslider0);
		float fSlow1 = fSlow0 + -12.5f;
		float fSlow2 = float(fVslider1);
		float fSlow3 = float(fVslider2);
		float fSlow4 = fConst42 * std::pow(1e+01f, 0.05f * float(fVslider3));
		float fSlow5 = 1.0f / std::tan(fConst5 * float(fVslider4));
		float fSlow6 = 1.0f - fSlow5;
		float fSlow7 = 1.0f / (fSlow5 + 1.0f);
		float fSlow8 = float(fVslider5);
		float fSlow9 = float(fVslider6);
		float fSlow10 = 5e-06f * fSlow2 * float(fVslider7) * fSlow9;
		float fSlow11 = float(fVslider8);
		float fSlow12 = float(fVslider9);
		float fSlow13 = float(fVslider10);
		float fSlow14 = float(fVslider11);
		float fSlow15 = float(fVslider12);
		float fSlow16 = float(fVslider13);
		float fSlow17 = float(fVslider14);
		float fSlow18 = fSlow0 + -13.5f;
		float fSlow19 = 0.0001f * fSlow9 * float(fVslider15);
		float fSlow20 = fSlow0 + -11.5f;
		float fSlow21 = fSlow0 + -10.5f;
		float fSlow22 = fSlow0 + -7.5f;
		float fSlow23 = fSlow0 + -8.5f;
		float fSlow24 = fSlow0 + -6.5f;
		float fSlow25 = fSlow0 + -5.5f;
		float fSlow26 = fConst42 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = std::tan(fConst5 * std::min<float>(fConst3, fSlow2 * (fConst4 * std::fabs(fRec64[1]) + 0.1316f)));
			float fTemp1 = fTemp0 + 2.0f;
			float fTemp2 = fTemp0 * fTemp1 + 1.0f;
			fVec0[0] = fConst16 * fRec73[1] - fConst14 * fRec1[2];
			fRec74[0] = fConst19 * (fConst18 * fRec1[2] - (fVec0[1] + fConst13 * fRec74[1]) + fConst12 * fRec1[1]);
			fRec73[0] = fRec74[0];
			fVec1[0] = 0.50032705f * fRec73[1] - fConst24 * fRec71[1];
			fRec72[0] = fConst25 * (fVec1[1] - fConst22 * fRec72[1] - 1.0006541f * fRec73[1] + 0.50032705f * fRec73[0]);
			fRec71[0] = fRec72[0];
			float fTemp3 = mydsp_faustpower2_f(fRec71[0]);
			fVec2[0] = fTemp3;
			float fTemp4 = fTemp3 + fVec2[1];
			fVec3[0] = fTemp4;
			float fTemp5 = fTemp4 + fVec3[2];
			fVec4[0] = fTemp5;
			float fTemp6 = fTemp5 + fVec4[4];
			fVec5[0] = fTemp6;
			float fTemp7 = fTemp6 + fVec5[8];
			fVec6[IOTA0 & 31] = fTemp7;
			float fTemp8 = fTemp7 + fVec6[(IOTA0 - 16) & 31];
			fVec7[IOTA0 & 63] = fTemp8;
			float fTemp9 = fTemp8 + fVec7[(IOTA0 - 32) & 63];
			fVec8[IOTA0 & 127] = fTemp9;
			float fTemp10 = fTemp9 + fVec8[(IOTA0 - 64) & 127];
			fVec9[IOTA0 & 255] = fTemp10;
			fVec10[IOTA0 & 511] = fTemp10 + fVec9[(IOTA0 - 128) & 255];
			float fTemp11 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow0 + fRec63[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst41 * (((iConst39) ? 0.86000985f * fVec10[(IOTA0 - iConst40) & 511] : 0.0f) + ((iConst37) ? 0.86000985f * fVec9[(IOTA0 - iConst38) & 255] : 0.0f) + ((iConst35) ? 0.86000985f * fVec8[(IOTA0 - iConst36) & 127] : 0.0f) + ((iConst33) ? 0.86000985f * fVec7[(IOTA0 - iConst34) & 63] : 0.0f) + ((iConst31) ? 0.86000985f * fVec6[(IOTA0 - iConst32) & 31] : 0.0f) + ((iConst29) ? 0.86000985f * fVec5[iConst30] : 0.0f) + ((iConst27) ? 0.86000985f * fVec4[iConst28] : 0.0f) + ((iConst26) ? 0.86000985f * fTemp3 : 0.0f) + ((iConst8) ? 0.86000985f * fVec3[iConst26] : 0.0f))))))) - (fRec66[1] * fTemp1 + fRec67[1]);
			float fTemp12 = fTemp0 * fTemp11 / fTemp2;
			fRec66[0] = fRec66[1] + 2.0f * fTemp12;
			float fTemp13 = fRec66[1] + fTemp12;
			float fTemp14 = fTemp0 * fTemp13;
			fRec67[0] = fRec67[1] + 2.0f * fTemp14;
			float fRec68 = fTemp13;
			float fRec69 = fTemp11 / fTemp2;
			float fRec70 = fRec67[1] + fTemp14;
			fRec64[0] = fRec68;
			float fRec65 = fRec70;
			fRec63[0] = fSlow3 * fRec65;
			fRec76[0] = fSlow4 + fConst43 * fRec76[1];
			float fTemp15 = float(input0[i0]);
			float fTemp16 = fTemp15 * fRec76[0];
			fVec11[0] = fTemp16;
			fRec75[0] = -(fSlow7 * (fSlow6 * fRec75[1] - fSlow5 * (fTemp16 - fVec11[1])));
			float fTemp17 = fRec75[0] * std::pow(1e+01f, 0.05f * fRec63[0]);
			fVec12[0] = fTemp17;
			float fTemp18 = fRec58[1] + fConst44 * (fTemp17 - fRec59[1]);
			fRec58[0] = fConst46 * fTemp18 - fRec58[1];
			float fTemp19 = fRec59[1] + fConst47 * fTemp18;
			fRec59[0] = 2.0f * fTemp19 - fRec59[1];
			float fRec60 = fTemp17;
			float fRec61 = fConst48 * fTemp18;
			float fRec62 = fTemp19;
			float fTemp20 = fRec62 + 1.4142135f * fRec61;
			float fTemp21 = fRec53[1] + fConst44 * (fRec60 - (fTemp20 + fRec54[1]));
			fRec53[0] = fConst46 * fTemp21 - fRec53[1];
			float fTemp22 = fRec54[1] + fConst47 * fTemp21;
			fRec54[0] = 2.0f * fTemp22 - fRec54[1];
			float fRec55 = fRec60 - fTemp20;
			float fRec56 = fConst48 * fTemp21;
			float fRec57 = fTemp22;
			float fTemp23 = fRec57 + 1.4142135f * fRec56;
			float fTemp24 = fRec49[1] + fConst49 * (fRec55 - (fTemp23 + fRec50[1]));
			fRec49[0] = fConst51 * fTemp24 - fRec49[1];
			float fTemp25 = fRec50[1] + fConst52 * fTemp24;
			fRec50[0] = 2.0f * fTemp25 - fRec50[1];
			float fRec51 = fRec55 - fTemp23;
			float fRec52 = fConst53 * fTemp24;
			float fTemp26 = 2.828427f * fRec52;
			float fTemp27 = fRec45[1] + fConst54 * (fRec51 - (fTemp26 + fRec46[1]));
			fRec45[0] = fConst56 * fTemp27 - fRec45[1];
			float fTemp28 = fRec46[1] + fConst57 * fTemp27;
			fRec46[0] = 2.0f * fTemp28 - fRec46[1];
			float fRec47 = fRec51 - fTemp26;
			float fRec48 = fConst58 * fTemp27;
			float fTemp29 = 2.828427f * fRec48;
			float fTemp30 = fRec41[1] + fConst59 * (fRec47 - (fTemp29 + fRec42[1]));
			fRec41[0] = fConst61 * fTemp30 - fRec41[1];
			float fTemp31 = fRec42[1] + fConst62 * fTemp30;
			fRec42[0] = 2.0f * fTemp31 - fRec42[1];
			float fRec43 = fRec47 - fTemp29;
			float fRec44 = fConst63 * fTemp30;
			float fTemp32 = 2.828427f * fRec44;
			float fTemp33 = fRec36[1] + fConst64 * (fRec43 - (fTemp32 + fRec37[1]));
			fRec36[0] = fConst66 * fTemp33 - fRec36[1];
			float fTemp34 = fRec37[1] + fConst67 * fTemp33;
			fRec37[0] = 2.0f * fTemp34 - fRec37[1];
			float fRec38 = fRec43 - fTemp32;
			float fRec39 = fConst68 * fTemp33;
			float fRec40 = fTemp34;
			float fTemp35 = fRec40 + 1.4142135f * fRec39;
			float fTemp36 = fRec31[1] + fConst64 * (fRec38 - (fTemp35 + fRec32[1]));
			fRec31[0] = fConst66 * fTemp36 - fRec31[1];
			float fTemp37 = fRec32[1] + fConst67 * fTemp36;
			fRec32[0] = 2.0f * fTemp37 - fRec32[1];
			float fRec33 = fRec38 - fTemp35;
			float fRec34 = fConst68 * fTemp36;
			float fRec35 = fTemp37;
			float fTemp38 = fRec35 + 1.4142135f * fRec34;
			float fTemp39 = fRec27[1] + fConst69 * (fRec33 - (fTemp38 + fRec28[1]));
			fRec27[0] = fConst71 * fTemp39 - fRec27[1];
			float fTemp40 = fRec28[1] + fConst72 * fTemp39;
			fRec28[0] = 2.0f * fTemp40 - fRec28[1];
			float fRec29 = fRec33 - fTemp38;
			float fRec30 = fConst73 * fTemp39;
			float fTemp41 = 2.828427f * fRec30;
			float fTemp42 = fRec22[1] + fConst74 * (fRec29 - (fTemp41 + fRec23[1]));
			fRec22[0] = fConst76 * fTemp42 - fRec22[1];
			float fTemp43 = fRec23[1] + fConst77 * fTemp42;
			fRec23[0] = 2.0f * fTemp43 - fRec23[1];
			float fRec24 = fRec29 - fTemp41;
			float fRec25 = fConst78 * fTemp42;
			float fRec26 = fTemp43;
			float fTemp44 = fRec26 + 1.4142135f * fRec25;
			float fTemp45 = fRec17[1] + fConst74 * (fRec24 - (fTemp44 + fRec18[1]));
			fRec17[0] = fConst76 * fTemp45 - fRec17[1];
			float fTemp46 = fRec18[1] + fConst77 * fTemp45;
			fRec18[0] = 2.0f * fTemp46 - fRec18[1];
			float fRec19 = fRec24 - fTemp44;
			float fRec20 = fConst78 * fTemp45;
			float fRec21 = fTemp46;
			float fTemp47 = fRec19 - (fRec21 + 1.4142135f * fRec20);
			fVec13[0] = fTemp47;
			fVec14[0] = fConst81 * fVec13[1] - fConst16 * fRec15[1];
			fRec16[0] = fConst19 * (fVec14[1] - fConst13 * fRec16[1] + fConst80 * fVec13[1] + fConst79 * fTemp47);
			fRec15[0] = fRec16[0];
			fVec15[0] = 0.50032705f * fRec15[1] - fConst24 * fRec13[1];
			fRec14[0] = fConst25 * (fVec15[1] - fConst22 * fRec14[1] - 1.0006541f * fRec15[1] + 0.50032705f * fRec15[0]);
			fRec13[0] = fRec14[0];
			float fTemp48 = std::fabs(0.92736715f * fRec13[0]);
			fRec12[0] = std::max<float>(fTemp48, fConst82 * fRec12[1] + fConst83 * fTemp48);
			fRec11[0] = fConst84 * fRec12[0] + fConst2 * fRec11[1];
			fVec16[0] = fConst16 * fRec81[1] - fConst14 * fVec12[1];
			fRec82[0] = fConst19 * (fConst18 * fVec12[1] - (fVec16[1] + fConst13 * fRec82[1]) + fConst12 * fTemp17);
			fRec81[0] = fRec82[0];
			fVec17[0] = 0.50032705f * fRec81[1] - fConst24 * fRec79[1];
			fRec80[0] = fConst25 * (fVec17[1] - fConst22 * fRec80[1] - 1.0006541f * fRec81[1] + 0.50032705f * fRec81[0]);
			fRec79[0] = fRec80[0];
			float fTemp49 = std::fabs(0.92736715f * fRec79[0]);
			fRec78[0] = std::max<float>(fTemp49, fConst82 * fRec78[1] + fConst83 * fTemp49);
			fRec77[0] = fConst84 * fRec78[0] + fConst2 * fRec77[1];
			float fTemp50 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec77[0])));
			fRec10[0] = fConst85 * (fSlow8 + 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec11[0]))))) + fConst1 * fRec10[1];
			float fTemp51 = fTemp47 * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec10[0])));
			float fTemp52 = fRec90[1] + fConst74 * (fRec26 - fRec91[1]);
			fRec90[0] = fConst76 * fTemp52 - fRec90[1];
			float fTemp53 = fRec91[1] + fConst77 * fTemp52;
			fRec91[0] = 2.0f * fTemp53 - fRec91[1];
			fRec92[0] = fTemp53;
			fVec18[0] = fConst81 * fRec92[1] - fConst16 * fRec88[1];
			fRec89[0] = fConst19 * (fVec18[1] - fConst13 * fRec89[1] + fConst80 * fRec92[1] + fConst79 * fRec92[0]);
			fRec88[0] = fRec89[0];
			fVec19[0] = 0.50032705f * fRec88[1] - fConst24 * fRec86[1];
			fRec87[0] = fConst25 * (fVec19[1] - fConst22 * fRec87[1] - 1.0006541f * fRec88[1] + 0.50032705f * fRec88[0]);
			fRec86[0] = fRec87[0];
			float fTemp54 = std::fabs(0.92736715f * fRec86[0]);
			fRec85[0] = std::max<float>(fTemp54, fConst82 * fRec85[1] + fConst83 * fTemp54);
			fRec84[0] = fConst84 * fRec85[0] + fConst2 * fRec84[1];
			fRec83[0] = fConst87 * (fSlow11 + 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec84[0]))))) + fConst86 * fRec83[1];
			float fTemp55 = fRec92[0] * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec83[0])));
			float fTemp56 = fRec114[1] + fConst64 * (fRec40 - fRec115[1]);
			fRec114[0] = fConst66 * fTemp56 - fRec114[1];
			float fTemp57 = fRec115[1] + fConst67 * fTemp56;
			fRec115[0] = 2.0f * fTemp57 - fRec115[1];
			float fRec116 = fTemp57;
			float fTemp58 = fRec110[1] + fConst74 * (fRec116 - fRec111[1]);
			fRec110[0] = fConst76 * fTemp58 - fRec110[1];
			float fTemp59 = fRec111[1] + fConst77 * fTemp58;
			fRec111[0] = 2.0f * fTemp59 - fRec111[1];
			float fRec112 = fRec116;
			float fRec113 = fConst78 * fTemp58;
			float fTemp60 = 2.828427f * fRec113;
			float fTemp61 = fRec105[1] + fConst69 * (fRec112 - (fTemp60 + fRec106[1]));
			fRec105[0] = fConst71 * fTemp61 - fRec105[1];
			float fTemp62 = fRec106[1] + fConst72 * fTemp61;
			fRec106[0] = 2.0f * fTemp62 - fRec106[1];
			float fRec107 = fRec112 - fTemp60;
			float fRec108 = fConst73 * fTemp61;
			float fRec109 = fTemp62;
			float fTemp63 = fRec109 + 1.4142135f * fRec108;
			float fTemp64 = fRec100[1] + fConst69 * (fRec107 - (fTemp63 + fRec101[1]));
			fRec100[0] = fConst71 * fTemp64 - fRec100[1];
			float fTemp65 = fRec101[1] + fConst72 * fTemp64;
			fRec101[0] = 2.0f * fTemp65 - fRec101[1];
			float fRec102 = fRec107 - fTemp63;
			float fRec103 = fConst73 * fTemp64;
			float fRec104 = fTemp65;
			float fTemp66 = fRec102 - (fRec104 + 1.4142135f * fRec103);
			fVec20[0] = fTemp66;
			fVec21[0] = fConst81 * fVec20[1] - fConst16 * fRec98[1];
			fRec99[0] = fConst19 * (fVec21[1] - fConst13 * fRec99[1] + fConst80 * fVec20[1] + fConst79 * fTemp66);
			fRec98[0] = fRec99[0];
			fVec22[0] = 0.50032705f * fRec98[1] - fConst24 * fRec96[1];
			fRec97[0] = fConst25 * (fVec22[1] - fConst22 * fRec97[1] - 1.0006541f * fRec98[1] + 0.50032705f * fRec98[0]);
			fRec96[0] = fRec97[0];
			float fTemp67 = std::fabs(0.92736715f * fRec96[0]);
			fRec95[0] = std::max<float>(fTemp67, fConst82 * fRec95[1] + fConst83 * fTemp67);
			fRec94[0] = fConst84 * fRec95[0] + fConst2 * fRec94[1];
			fRec93[0] = fConst89 * (fSlow12 + 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec94[0]))))) + fConst88 * fRec93[1];
			float fTemp68 = fTemp66 * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec93[0])));
			float fTemp69 = fRec124[1] + fConst69 * (fRec109 - fRec125[1]);
			fRec124[0] = fConst71 * fTemp69 - fRec124[1];
			float fTemp70 = fRec125[1] + fConst72 * fTemp69;
			fRec125[0] = 2.0f * fTemp70 - fRec125[1];
			fRec126[0] = fTemp70;
			fVec23[0] = fConst81 * fRec126[1] - fConst16 * fRec122[1];
			fRec123[0] = fConst19 * (fVec23[1] - fConst13 * fRec123[1] + fConst80 * fRec126[1] + fConst79 * fRec126[0]);
			fRec122[0] = fRec123[0];
			fVec24[0] = 0.50032705f * fRec122[1] - fConst24 * fRec120[1];
			fRec121[0] = fConst25 * (fVec24[1] - fConst22 * fRec121[1] - 1.0006541f * fRec122[1] + 0.50032705f * fRec122[0]);
			fRec120[0] = fRec121[0];
			float fTemp71 = std::fabs(0.92736715f * fRec120[0]);
			fRec119[0] = std::max<float>(fTemp71, fConst82 * fRec119[1] + fConst83 * fTemp71);
			fRec118[0] = fConst84 * fRec119[0] + fConst2 * fRec118[1];
			fRec117[0] = fConst83 * (fSlow13 + 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec118[0]))))) + fConst82 * fRec117[1];
			float fTemp72 = fRec126[0] * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec117[0])));
			float fTemp73 = fRec170[1] + fConst44 * (fRec62 - fRec171[1]);
			fRec170[0] = fConst46 * fTemp73 - fRec170[1];
			float fTemp74 = fRec171[1] + fConst47 * fTemp73;
			fRec171[0] = 2.0f * fTemp74 - fRec171[1];
			float fRec172 = fTemp74;
			float fTemp75 = fRec166[1] + fConst64 * (fRec172 - fRec167[1]);
			fRec166[0] = fConst66 * fTemp75 - fRec166[1];
			float fTemp76 = fRec167[1] + fConst67 * fTemp75;
			fRec167[0] = 2.0f * fTemp76 - fRec167[1];
			float fRec168 = fRec172;
			float fRec169 = fConst68 * fTemp75;
			float fTemp77 = 2.828427f * fRec169;
			float fTemp78 = fRec162[1] + fConst69 * (fRec168 - (fTemp77 + fRec163[1]));
			fRec162[0] = fConst71 * fTemp78 - fRec162[1];
			float fTemp79 = fRec163[1] + fConst72 * fTemp78;
			fRec163[0] = 2.0f * fTemp79 - fRec163[1];
			float fRec164 = fRec168 - fTemp77;
			float fRec165 = fConst73 * fTemp78;
			float fTemp80 = 2.828427f * fRec165;
			float fTemp81 = fRec158[1] + fConst74 * (fRec164 - (fTemp80 + fRec159[1]));
			fRec158[0] = fConst76 * fTemp81 - fRec158[1];
			float fTemp82 = fRec159[1] + fConst77 * fTemp81;
			fRec159[0] = 2.0f * fTemp82 - fRec159[1];
			float fRec160 = fRec164 - fTemp80;
			float fRec161 = fConst78 * fTemp81;
			float fTemp83 = 2.828427f * fRec161;
			float fTemp84 = fRec153[1] + fConst49 * (fRec160 - (fTemp83 + fRec154[1]));
			fRec153[0] = fConst51 * fTemp84 - fRec153[1];
			float fTemp85 = fRec154[1] + fConst52 * fTemp84;
			fRec154[0] = 2.0f * fTemp85 - fRec154[1];
			float fRec155 = fRec160 - fTemp83;
			float fRec156 = fConst53 * fTemp84;
			float fRec157 = fTemp85;
			float fTemp86 = fRec157 + 1.4142135f * fRec156;
			float fTemp87 = fRec148[1] + fConst49 * (fRec155 - (fTemp86 + fRec149[1]));
			fRec148[0] = fConst51 * fTemp87 - fRec148[1];
			float fTemp88 = fRec149[1] + fConst52 * fTemp87;
			fRec149[0] = 2.0f * fTemp88 - fRec149[1];
			float fRec150 = fRec155 - fTemp86;
			float fRec151 = fConst53 * fTemp87;
			float fRec152 = fTemp88;
			float fTemp89 = fRec152 + 1.4142135f * fRec151;
			float fTemp90 = fRec144[1] + fConst54 * (fRec150 - (fTemp89 + fRec145[1]));
			fRec144[0] = fConst56 * fTemp90 - fRec144[1];
			float fTemp91 = fRec145[1] + fConst57 * fTemp90;
			fRec145[0] = 2.0f * fTemp91 - fRec145[1];
			float fRec146 = fRec150 - fTemp89;
			float fRec147 = fConst58 * fTemp90;
			float fTemp92 = 2.828427f * fRec147;
			float fTemp93 = fRec139[1] + fConst59 * (fRec146 - (fTemp92 + fRec140[1]));
			fRec139[0] = fConst61 * fTemp93 - fRec139[1];
			float fTemp94 = fRec140[1] + fConst62 * fTemp93;
			fRec140[0] = 2.0f * fTemp94 - fRec140[1];
			float fRec141 = fRec146 - fTemp92;
			float fRec142 = fConst63 * fTemp93;
			float fRec143 = fTemp94;
			float fTemp95 = fRec143 + 1.4142135f * fRec142;
			float fTemp96 = fRec134[1] + fConst59 * (fRec141 - (fTemp95 + fRec135[1]));
			fRec134[0] = fConst61 * fTemp96 - fRec134[1];
			float fTemp97 = fRec135[1] + fConst62 * fTemp96;
			fRec135[0] = 2.0f * fTemp97 - fRec135[1];
			float fRec136 = fRec141 - fTemp95;
			float fRec137 = fConst63 * fTemp96;
			float fRec138 = fTemp97;
			float fTemp98 = fRec136 - (fRec138 + 1.4142135f * fRec137);
			fVec25[0] = fTemp98;
			fVec26[0] = fConst81 * fVec25[1] - fConst16 * fRec132[1];
			fRec133[0] = fConst19 * (fVec26[1] - fConst13 * fRec133[1] + fConst80 * fVec25[1] + fConst79 * fTemp98);
			fRec132[0] = fRec133[0];
			fVec27[0] = 0.50032705f * fRec132[1] - fConst24 * fRec130[1];
			fRec131[0] = fConst25 * (fVec27[1] - fConst22 * fRec131[1] - 1.0006541f * fRec132[1] + 0.50032705f * fRec132[0]);
			fRec130[0] = fRec131[0];
			float fTemp99 = std::fabs(0.92736715f * fRec130[0]);
			fRec129[0] = std::max<float>(fTemp99, fConst82 * fRec129[1] + fConst83 * fTemp99);
			fRec128[0] = fConst84 * fRec129[0] + fConst2 * fRec128[1];
			fRec127[0] = fConst91 * (fSlow14 + 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec128[0]))))) + fConst90 * fRec127[1];
			float fTemp100 = fTemp98 * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec127[0])));
			float fTemp101 = fRec180[1] + fConst59 * (fRec143 - fRec181[1]);
			fRec180[0] = fConst61 * fTemp101 - fRec180[1];
			float fTemp102 = fRec181[1] + fConst62 * fTemp101;
			fRec181[0] = 2.0f * fTemp102 - fRec181[1];
			fRec182[0] = fTemp102;
			fVec28[0] = fConst81 * fRec182[1] - fConst16 * fRec178[1];
			fRec179[0] = fConst19 * (fVec28[1] - fConst13 * fRec179[1] + fConst80 * fRec182[1] + fConst79 * fRec182[0]);
			fRec178[0] = fRec179[0];
			fVec29[0] = 0.50032705f * fRec178[1] - fConst24 * fRec176[1];
			fRec177[0] = fConst25 * (fVec29[1] - fConst22 * fRec177[1] - 1.0006541f * fRec178[1] + 0.50032705f * fRec178[0]);
			fRec176[0] = fRec177[0];
			float fTemp103 = std::fabs(0.92736715f * fRec176[0]);
			fRec175[0] = std::max<float>(fTemp103, fConst82 * fRec175[1] + fConst83 * fTemp103);
			fRec174[0] = fConst84 * fRec175[0] + fConst2 * fRec174[1];
			fRec173[0] = fConst93 * (fSlow15 + 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec174[0]))))) + fConst92 * fRec173[1];
			float fTemp104 = fRec182[0] * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec173[0])));
			float fTemp105 = fRec204[1] + fConst49 * (fRec157 - fRec205[1]);
			fRec204[0] = fConst51 * fTemp105 - fRec204[1];
			float fTemp106 = fRec205[1] + fConst52 * fTemp105;
			fRec205[0] = 2.0f * fTemp106 - fRec205[1];
			float fRec206 = fTemp106;
			float fTemp107 = fRec200[1] + fConst59 * (fRec206 - fRec201[1]);
			fRec200[0] = fConst61 * fTemp107 - fRec200[1];
			float fTemp108 = fRec201[1] + fConst62 * fTemp107;
			fRec201[0] = 2.0f * fTemp108 - fRec201[1];
			float fRec202 = fRec206;
			float fRec203 = fConst63 * fTemp107;
			float fTemp109 = 2.828427f * fRec203;
			float fTemp110 = fRec195[1] + fConst54 * (fRec202 - (fTemp109 + fRec196[1]));
			fRec195[0] = fConst56 * fTemp110 - fRec195[1];
			float fTemp111 = fRec196[1] + fConst57 * fTemp110;
			fRec196[0] = 2.0f * fTemp111 - fRec196[1];
			float fRec197 = fRec202 - fTemp109;
			float fRec198 = fConst58 * fTemp110;
			float fRec199 = fTemp111;
			float fTemp112 = fRec199 + 1.4142135f * fRec198;
			float fTemp113 = fRec190[1] + fConst54 * (fRec197 - (fTemp112 + fRec191[1]));
			fRec190[0] = fConst56 * fTemp113 - fRec190[1];
			float fTemp114 = fRec191[1] + fConst57 * fTemp113;
			fRec191[0] = 2.0f * fTemp114 - fRec191[1];
			float fRec192 = fRec197 - fTemp112;
			float fRec193 = fConst58 * fTemp113;
			float fRec194 = fTemp114;
			float fTemp115 = fRec192 - (fRec194 + 1.4142135f * fRec193);
			fVec30[0] = fTemp115;
			fVec31[0] = fConst81 * fVec30[1] - fConst16 * fRec188[1];
			fRec189[0] = fConst19 * (fVec31[1] - fConst13 * fRec189[1] + fConst80 * fVec30[1] + fConst79 * fTemp115);
			fRec188[0] = fRec189[0];
			fVec32[0] = 0.50032705f * fRec188[1] - fConst24 * fRec186[1];
			fRec187[0] = fConst25 * (fVec32[1] - fConst22 * fRec187[1] - 1.0006541f * fRec188[1] + 0.50032705f * fRec188[0]);
			fRec186[0] = fRec187[0];
			float fTemp116 = std::fabs(0.92736715f * fRec186[0]);
			fRec185[0] = std::max<float>(fTemp116, fConst82 * fRec185[1] + fConst83 * fTemp116);
			fRec184[0] = fConst84 * fRec185[0] + fConst2 * fRec184[1];
			fRec183[0] = fConst95 * (fSlow16 + 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec184[0]))))) + fConst94 * fRec183[1];
			float fTemp117 = fTemp115 * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec183[0])));
			float fTemp118 = fRec214[1] + fConst54 * (fRec199 - fRec215[1]);
			fRec214[0] = fConst56 * fTemp118 - fRec214[1];
			float fTemp119 = fRec215[1] + fConst57 * fTemp118;
			fRec215[0] = 2.0f * fTemp119 - fRec215[1];
			fRec216[0] = fTemp119;
			fVec33[0] = fConst81 * fRec216[1] - fConst16 * fRec212[1];
			fRec213[0] = fConst19 * (fVec33[1] - fConst13 * fRec213[1] + fConst80 * fRec216[1] + fConst79 * fRec216[0]);
			fRec212[0] = fRec213[0];
			fVec34[0] = 0.50032705f * fRec212[1] - fConst24 * fRec210[1];
			fRec211[0] = fConst25 * (fVec34[1] - fConst22 * fRec211[1] - 1.0006541f * fRec212[1] + 0.50032705f * fRec212[0]);
			fRec210[0] = fRec211[0];
			float fTemp120 = std::fabs(0.92736715f * fRec210[0]);
			fRec209[0] = std::max<float>(fTemp120, fConst82 * fRec209[1] + fConst83 * fTemp120);
			fRec208[0] = fConst84 * fRec209[0] + fConst2 * fRec208[1];
			fRec207[0] = fConst97 * (fSlow17 - 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec208[0]))) - fTemp50)) + fConst96 * fRec207[1];
			float fTemp121 = fRec216[0] * std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec207[0])));
			fRec1[0] = fTemp121 + fTemp117 + fTemp104 + fTemp100 + fTemp72 + fTemp68 + fTemp55 + fTemp51;
			float fRec2 = fTemp121;
			float fRec3 = fTemp117;
			float fRec4 = fTemp104;
			float fRec5 = fTemp100;
			float fRec6 = fTemp72;
			float fRec7 = fTemp68;
			float fRec8 = fTemp55;
			float fRec9 = fTemp51;
			float fTemp122 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp123 = (fTemp122 > fSlow18) + (fTemp122 > fSlow1);
			float fTemp124 = std::max<float>(0.0f, ((iTemp123 == 0) ? 0.0f : ((iTemp123 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp122 + 13.5f - fSlow0) : fTemp122 + 13.0f - fSlow0)));
			float fTemp125 = ((-(0.75f * fTemp124) > fRec0[1]) ? fConst99 : fConst98);
			fRec0[0] = fRec0[1] * fTemp125 - 0.75f * fTemp124 * (1.0f - fTemp125);
			float fTemp126 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp127 = (fTemp126 > fSlow1) + (fTemp126 > fSlow20);
			float fTemp128 = std::max<float>(0.0f, ((iTemp127 == 0) ? 0.0f : ((iTemp127 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp126 + 12.5f - fSlow0) : fTemp126 + 12.0f - fSlow0)));
			float fTemp129 = ((-(0.75f * fTemp128) > fRec217[1]) ? fConst99 : fConst100);
			fRec217[0] = fRec217[1] * fTemp129 - 0.75f * fTemp128 * (1.0f - fTemp129);
			float fTemp130 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp131 = (fTemp130 > fSlow1) + (fTemp130 > fSlow20);
			float fTemp132 = std::max<float>(0.0f, ((iTemp131 == 0) ? 0.0f : ((iTemp131 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp130 + 12.5f - fSlow0) : fTemp130 + 12.0f - fSlow0)));
			float fTemp133 = ((-(0.75f * fTemp132) > fRec218[1]) ? fConst99 : fConst101);
			fRec218[0] = fRec218[1] * fTemp133 - 0.75f * fTemp132 * (1.0f - fTemp133);
			float fTemp134 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp135 = (fTemp134 > fSlow20) + (fTemp134 > fSlow21);
			float fTemp136 = std::max<float>(0.0f, ((iTemp135 == 0) ? 0.0f : ((iTemp135 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp134 + 11.5f - fSlow0) : fTemp134 + 11.0f - fSlow0)));
			float fTemp137 = ((-(0.75f * fTemp136) > fRec219[1]) ? fConst102 : fConst2);
			fRec219[0] = fRec219[1] * fTemp137 - 0.75f * fTemp136 * (1.0f - fTemp137);
			float fTemp138 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec5)));
			int iTemp139 = (fTemp138 > fSlow23) + (fTemp138 > fSlow22);
			float fTemp140 = std::max<float>(0.0f, ((iTemp139 == 0) ? 0.0f : ((iTemp139 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp138 + 8.5f - fSlow0) : fTemp138 + 8.0f - fSlow0)));
			float fTemp141 = ((-(0.75f * fTemp140) > fRec220[1]) ? fConst103 : fConst99);
			fRec220[0] = fRec220[1] * fTemp141 - 0.75f * fTemp140 * (1.0f - fTemp141);
			float fTemp142 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec4)));
			int iTemp143 = (fTemp142 > fSlow22) + (fTemp142 > fSlow24);
			float fTemp144 = std::max<float>(0.0f, ((iTemp143 == 0) ? 0.0f : ((iTemp143 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp142 + 7.5f - fSlow0) : fTemp142 + 7.0f - fSlow0)));
			float fTemp145 = ((-(0.75f * fTemp144) > fRec221[1]) ? fConst104 : fConst102);
			fRec221[0] = fRec221[1] * fTemp145 - 0.75f * fTemp144 * (1.0f - fTemp145);
			float fTemp146 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec3)));
			int iTemp147 = (fTemp146 > fSlow24) + (fTemp146 > fSlow25);
			float fTemp148 = std::max<float>(0.0f, ((iTemp147 == 0) ? 0.0f : ((iTemp147 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp146 + 6.5f - fSlow0) : fTemp146 + 6.0f - fSlow0)));
			float fTemp149 = ((-(0.75f * fTemp148) > fRec222[1]) ? fConst105 : fConst1);
			fRec222[0] = fRec222[1] * fTemp149 - 0.75f * fTemp148 * (1.0f - fTemp149);
			float fTemp150 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec2)));
			int iTemp151 = (fTemp150 > fSlow24) + (fTemp150 > fSlow25);
			float fTemp152 = std::max<float>(0.0f, ((iTemp151 == 0) ? 0.0f : ((iTemp151 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp150 + 6.5f - fSlow0) : fTemp150 + 6.0f - fSlow0)));
			float fTemp153 = ((-(0.75f * fTemp152) > fRec223[1]) ? fConst82 : fConst106);
			fRec223[0] = fRec223[1] * fTemp153 - 0.75f * fTemp152 * (1.0f - fTemp153);
			float fTemp154 = fRec2 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec223[0]))) + 1.5f))))) + fRec3 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec222[0]))) + 1.5f))))) + fRec4 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec221[0]))) + 1.5f))))) + fRec5 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec220[0]))) + 1.5f))))) + fRec6 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec219[0]))) + 1.5f))))) + fRec7 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec218[0]))) + 1.5f))))) + fRec8 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec217[0]))) + 1.5f))))) + fRec9 * std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec0[0]))) + 1.5f)))));
			fVec35[IOTA0 & 1023] = fTemp154;
			float fTemp155 = std::fabs(fTemp154);
			int iTemp156 = (fTemp155 >= fRec227[1]) | (float(iRec226[1]) >= fConst6);
			iRec226[0] = ((iTemp156) ? 0 : iRec226[1] + 1);
			fRec227[0] = ((iTemp156) ? fTemp155 : fRec227[1]);
			fRec225[0] = fConst108 * fRec227[0] + fConst98 * fRec225[1];
			float fTemp157 = std::fabs(fRec225[0]);
			fRec224[0] = std::max<float>(fTemp157, fConst2 * fRec224[1] + fConst84 * fTemp157);
			fRec228[0] = fSlow26 + fConst43 * fRec228[1];
			output0[i0] = FAUSTFLOAT(fTemp15 * fRec228[0] + (1.0f - fRec228[0]) * std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec224[0], 1.1920929e-07f)) * fVec35[(IOTA0 - iConst107) & 1023]);
			fVec0[1] = fVec0[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fVec1[1] = fVec1[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fVec2[1] = fVec2[0];
			fVec3[2] = fVec3[1];
			fVec3[1] = fVec3[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec4[j0] = fVec4[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec5[j1] = fVec5[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec66[1] = fRec66[0];
			fRec67[1] = fRec67[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fRec76[1] = fRec76[0];
			fVec11[1] = fVec11[0];
			fRec75[1] = fRec75[0];
			fVec12[1] = fVec12[0];
			fRec58[1] = fRec58[0];
			fRec59[1] = fRec59[0];
			fRec53[1] = fRec53[0];
			fRec54[1] = fRec54[0];
			fRec49[1] = fRec49[0];
			fRec50[1] = fRec50[0];
			fRec45[1] = fRec45[0];
			fRec46[1] = fRec46[0];
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
			fRec36[1] = fRec36[0];
			fRec37[1] = fRec37[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec22[1] = fRec22[0];
			fRec23[1] = fRec23[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fVec13[1] = fVec13[0];
			fVec14[1] = fVec14[0];
			fRec16[1] = fRec16[0];
			fRec15[1] = fRec15[0];
			fVec15[1] = fVec15[0];
			fRec14[1] = fRec14[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			fRec11[1] = fRec11[0];
			fVec16[1] = fVec16[0];
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			fVec17[1] = fVec17[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			fRec10[1] = fRec10[0];
			fRec90[1] = fRec90[0];
			fRec91[1] = fRec91[0];
			fRec92[1] = fRec92[0];
			fVec18[1] = fVec18[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fVec19[1] = fVec19[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fRec114[1] = fRec114[0];
			fRec115[1] = fRec115[0];
			fRec110[1] = fRec110[0];
			fRec111[1] = fRec111[0];
			fRec105[1] = fRec105[0];
			fRec106[1] = fRec106[0];
			fRec100[1] = fRec100[0];
			fRec101[1] = fRec101[0];
			fVec20[1] = fVec20[0];
			fVec21[1] = fVec21[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fVec22[1] = fVec22[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fRec124[1] = fRec124[0];
			fRec125[1] = fRec125[0];
			fRec126[1] = fRec126[0];
			fVec23[1] = fVec23[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			fVec24[1] = fVec24[0];
			fRec121[1] = fRec121[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fRec117[1] = fRec117[0];
			fRec170[1] = fRec170[0];
			fRec171[1] = fRec171[0];
			fRec166[1] = fRec166[0];
			fRec167[1] = fRec167[0];
			fRec162[1] = fRec162[0];
			fRec163[1] = fRec163[0];
			fRec158[1] = fRec158[0];
			fRec159[1] = fRec159[0];
			fRec153[1] = fRec153[0];
			fRec154[1] = fRec154[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fRec144[1] = fRec144[0];
			fRec145[1] = fRec145[0];
			fRec139[1] = fRec139[0];
			fRec140[1] = fRec140[0];
			fRec134[1] = fRec134[0];
			fRec135[1] = fRec135[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec133[1] = fRec133[0];
			fRec132[1] = fRec132[0];
			fVec27[1] = fVec27[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			fRec180[1] = fRec180[0];
			fRec181[1] = fRec181[0];
			fRec182[1] = fRec182[0];
			fVec28[1] = fVec28[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			fVec29[1] = fVec29[0];
			fRec177[1] = fRec177[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			fRec174[1] = fRec174[0];
			fRec173[1] = fRec173[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fRec200[1] = fRec200[0];
			fRec201[1] = fRec201[0];
			fRec195[1] = fRec195[0];
			fRec196[1] = fRec196[0];
			fRec190[1] = fRec190[0];
			fRec191[1] = fRec191[0];
			fVec30[1] = fVec30[0];
			fVec31[1] = fVec31[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fVec32[1] = fVec32[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fRec183[1] = fRec183[0];
			fRec214[1] = fRec214[0];
			fRec215[1] = fRec215[0];
			fRec216[1] = fRec216[0];
			fVec33[1] = fVec33[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			fVec34[1] = fVec34[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			fRec207[1] = fRec207[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec223[1] = fRec223[0];
			iRec226[1] = iRec226[0];
			fRec227[1] = fRec227[0];
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			fRec228[1] = fRec228[0];
		}
	}

};
FAUSTPP_END_NAMESPACE


#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif



// --------------------------------------------------------------------------------------------------------------------

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class FaustGeneratedPlugin : public Plugin
{
protected:
    std::unique_ptr<mydsp> dsp;

public:
    FaustGeneratedPlugin(const uint32_t extraParameters = 0,
                         const uint32_t extraPrograms = 0,
                         const uint32_t extraStates = 0)
        : Plugin(kParameterCount + extraParameters, kProgramCount + extraPrograms, kStateCount + extraStates)
    {
        dsp = std::make_unique<mydsp>();
        dsp->init(getSampleRate());

        // passive controls are only updated on first run, make sure they have valid values now
        
    }

protected:
   /* -----------------------------------------------------------------------------------------------------------------
    * Information */

    const char* getLabel() const override
    {
        return "bbb_audio";
    }

    const char* getDescription() const override
    {
        return "";
    }

    const char* getMaker() const override
    {
        return "Klaus Scheuermann";
    }

    const char* getHomePage() const override
    {
        return "https://4ohm.de/";
    }

    const char* getLicense() const override
    {
        return "GPLv3+";
    }

    uint32_t getVersion() const override
    {
        return d_version(1, 0, 0);
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Init */

    void initAudioPort(const bool input, const uint32_t index, AudioPort& port) override
    {
        /* make assumptions related to IO.
         * 1 audio port means mono, 2 means stereo.
         */
        
            
        port.groupId = kPortGroupMono;
            
            
        

        // everything else is as default
        Plugin::initAudioPort(input, index, port);
    }

    void initParameter(const uint32_t index, Parameter& param) override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[0];
            param.unit = kParameterUnits[0];
            param.symbol = kParameterSymbols[0];
            param.shortName = "";
            param.ranges.def = kParameterRanges[0].def;
            param.ranges.min = kParameterRanges[0].min;
            param.ranges.max = kParameterRanges[0].max;
            break;
        case kParameter_sb_target_spectrum_0:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[1];
            param.unit = kParameterUnits[1];
            param.symbol = kParameterSymbols[1];
            param.shortName = "";
            param.ranges.def = kParameterRanges[1].def;
            param.ranges.min = kParameterRanges[1].min;
            param.ranges.max = kParameterRanges[1].max;
            break;
        case kParameter_sb_target_spectrum_1:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[2];
            param.unit = kParameterUnits[2];
            param.symbol = kParameterSymbols[2];
            param.shortName = "";
            param.ranges.def = kParameterRanges[2].def;
            param.ranges.min = kParameterRanges[2].min;
            param.ranges.max = kParameterRanges[2].max;
            break;
        case kParameter_sb_target_spectrum_2:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[3];
            param.unit = kParameterUnits[3];
            param.symbol = kParameterSymbols[3];
            param.shortName = "";
            param.ranges.def = kParameterRanges[3].def;
            param.ranges.min = kParameterRanges[3].min;
            param.ranges.max = kParameterRanges[3].max;
            break;
        case kParameter_sb_target_spectrum_3:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[4];
            param.unit = kParameterUnits[4];
            param.symbol = kParameterSymbols[4];
            param.shortName = "";
            param.ranges.def = kParameterRanges[4].def;
            param.ranges.min = kParameterRanges[4].min;
            param.ranges.max = kParameterRanges[4].max;
            break;
        case kParameter_sb_target_spectrum_4:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[5];
            param.unit = kParameterUnits[5];
            param.symbol = kParameterSymbols[5];
            param.shortName = "";
            param.ranges.def = kParameterRanges[5].def;
            param.ranges.min = kParameterRanges[5].min;
            param.ranges.max = kParameterRanges[5].max;
            break;
        case kParameter_sb_target_spectrum_5:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[6];
            param.unit = kParameterUnits[6];
            param.symbol = kParameterSymbols[6];
            param.shortName = "";
            param.ranges.def = kParameterRanges[6].def;
            param.ranges.min = kParameterRanges[6].min;
            param.ranges.max = kParameterRanges[6].max;
            break;
        case kParameter_sb_target_spectrum_6:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[7];
            param.unit = kParameterUnits[7];
            param.symbol = kParameterSymbols[7];
            param.shortName = "";
            param.ranges.def = kParameterRanges[7].def;
            param.ranges.min = kParameterRanges[7].min;
            param.ranges.max = kParameterRanges[7].max;
            break;
        case kParameter_sb_target_spectrum_7:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[8];
            param.unit = kParameterUnits[8];
            param.symbol = kParameterSymbols[8];
            param.shortName = "";
            param.ranges.def = kParameterRanges[8].def;
            param.ranges.min = kParameterRanges[8].min;
            param.ranges.max = kParameterRanges[8].max;
            break;
        case kParameter_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[9];
            param.unit = kParameterUnits[9];
            param.symbol = kParameterSymbols[9];
            param.shortName = "";
            param.ranges.def = kParameterRanges[9].def;
            param.ranges.min = kParameterRanges[9].min;
            param.ranges.max = kParameterRanges[9].max;
            break;
        case kParameter__11:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[10];
            param.unit = kParameterUnits[10];
            param.symbol = kParameterSymbols[10];
            param.shortName = "";
            param.ranges.def = kParameterRanges[10].def;
            param.ranges.min = kParameterRanges[10].min;
            param.ranges.max = kParameterRanges[10].max;
            break;
        case kParameter_sbmb_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[11];
            param.unit = kParameterUnits[11];
            param.symbol = kParameterSymbols[11];
            param.shortName = "";
            param.ranges.def = kParameterRanges[11].def;
            param.ranges.min = kParameterRanges[11].min;
            param.ranges.max = kParameterRanges[11].max;
            break;
        case kParameter_vad_ext:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[12];
            param.unit = kParameterUnits[12];
            param.symbol = kParameterSymbols[12];
            param.shortName = "";
            param.ranges.def = kParameterRanges[12].def;
            param.ranges.min = kParameterRanges[12].min;
            param.ranges.max = kParameterRanges[12].max;
            break;
        case kParameter_leveler_target:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_leveler_scale:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter_mb_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[16];
            param.unit = kParameterUnits[16];
            param.symbol = kParameterSymbols[16];
            param.shortName = "";
            param.ranges.def = kParameterRanges[16].def;
            param.ranges.min = kParameterRanges[16].min;
            param.ranges.max = kParameterRanges[16].max;
            break;
        
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            return dsp->fVslider7;
        case kParameter_sb_target_spectrum_0:
            return dsp->fVslider14;
        case kParameter_sb_target_spectrum_1:
            return dsp->fVslider13;
        case kParameter_sb_target_spectrum_2:
            return dsp->fVslider12;
        case kParameter_sb_target_spectrum_3:
            return dsp->fVslider11;
        case kParameter_sb_target_spectrum_4:
            return dsp->fVslider10;
        case kParameter_sb_target_spectrum_5:
            return dsp->fVslider9;
        case kParameter_sb_target_spectrum_6:
            return dsp->fVslider8;
        case kParameter_sb_target_spectrum_7:
            return dsp->fVslider5;
        case kParameter_bypass:
            return dsp->fCheckbox0;
        case kParameter__11:
            return dsp->fVslider3;
        case kParameter_sbmb_strength:
            return dsp->fVslider6;
        case kParameter_vad_ext:
            return dsp->fVslider1;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter_leveler_scale:
            return dsp->fVslider2;
        case kParameter_mb_strength:
            return dsp->fVslider15;
        case kParameter_pre_lowcut:
            return dsp->fVslider4;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            dsp->fVslider7 = value;
            break;
        case kParameter_sb_target_spectrum_0:
            dsp->fVslider14 = value;
            break;
        case kParameter_sb_target_spectrum_1:
            dsp->fVslider13 = value;
            break;
        case kParameter_sb_target_spectrum_2:
            dsp->fVslider12 = value;
            break;
        case kParameter_sb_target_spectrum_3:
            dsp->fVslider11 = value;
            break;
        case kParameter_sb_target_spectrum_4:
            dsp->fVslider10 = value;
            break;
        case kParameter_sb_target_spectrum_5:
            dsp->fVslider9 = value;
            break;
        case kParameter_sb_target_spectrum_6:
            dsp->fVslider8 = value;
            break;
        case kParameter_sb_target_spectrum_7:
            dsp->fVslider5 = value;
            break;
        case kParameter_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter__11:
            dsp->fVslider3 = value;
            break;
        case kParameter_sbmb_strength:
            dsp->fVslider6 = value;
            break;
        case kParameter_vad_ext:
            dsp->fVslider1 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider0 = value;
            break;
        case kParameter_leveler_scale:
            dsp->fVslider2 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider15 = value;
            break;
        case kParameter_pre_lowcut:
            dsp->fVslider4 = value;
            break;
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Audio/MIDI Processing */

    void run(const float** const inputs, float** const outputs, const uint32_t frames) override
    {
        dsp->compute(frames, const_cast<float**>(inputs), outputs);
    }

    void sampleRateChanged(const double newSampleRate) override
    {
        // retrieve parameter info first
        float params[17] = {
            dsp->fVslider7,
            dsp->fVslider14,
            dsp->fVslider13,
            dsp->fVslider12,
            dsp->fVslider11,
            dsp->fVslider10,
            dsp->fVslider9,
            dsp->fVslider8,
            dsp->fVslider5,
            dsp->fCheckbox0,
            dsp->fVslider3,
            dsp->fVslider6,
            dsp->fVslider1,
            dsp->fVslider0,
            dsp->fVslider2,
            dsp->fVslider15,
            dsp->fVslider4,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider7 = params[0];
        dsp->fVslider14 = params[1];
        dsp->fVslider13 = params[2];
        dsp->fVslider12 = params[3];
        dsp->fVslider11 = params[4];
        dsp->fVslider10 = params[5];
        dsp->fVslider9 = params[6];
        dsp->fVslider8 = params[7];
        dsp->fVslider5 = params[8];
        dsp->fCheckbox0 = params[9];
        dsp->fVslider3 = params[10];
        dsp->fVslider6 = params[11];
        dsp->fVslider1 = params[12];
        dsp->fVslider0 = params[13];
        dsp->fVslider2 = params[14];
        dsp->fVslider15 = params[15];
        dsp->fVslider4 = params[16];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO