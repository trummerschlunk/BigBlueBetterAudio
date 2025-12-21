
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
// Version: 0.22
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
	FAUSTFLOAT fVslider2;
	float fConst5;
	FAUSTFLOAT fVslider3;
	float fRec71[2];
	FAUSTFLOAT fVbargraph0;
	float fConst6;
	float fConst7;
	float fConst8;
	int iConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fVec0[2];
	float fConst18;
	float fConst19;
	float fConst20;
	float fRec75[2];
	float fRec74[2];
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fConst25;
	float fVec1[2];
	float fConst26;
	float fRec73[2];
	float fRec72[2];
	float fVec2[2];
	float fVec3[3];
	int iConst27;
	int iConst28;
	float fVec4[5];
	int iConst29;
	int iConst30;
	float fVec5[12];
	int iConst31;
	int iConst32;
	int IOTA0;
	float fVec6[32];
	int iConst33;
	int iConst34;
	float fVec7[64];
	int iConst35;
	int iConst36;
	float fVec8[128];
	int iConst37;
	int iConst38;
	float fVec9[256];
	int iConst39;
	int iConst40;
	float fVec10[512];
	int iConst41;
	float fConst42;
	float fRec66[2];
	float fRec67[2];
	float fRec64[2];
	FAUSTFLOAT fVslider4;
	float fRec63[2];
	float fConst43;
	float fConst44;
	FAUSTFLOAT fVslider5;
	float fRec77[2];
	float fVec11[2];
	FAUSTFLOAT fVslider6;
	float fRec76[2];
	float fVec12[2];
	float fConst45;
	float fConst46;
	float fConst47;
	float fRec58[2];
	float fConst48;
	float fRec59[2];
	float fConst49;
	float fRec53[2];
	float fRec54[2];
	float fConst50;
	float fConst51;
	float fConst52;
	float fRec49[2];
	float fConst53;
	float fRec50[2];
	float fConst54;
	float fConst55;
	float fConst56;
	float fConst57;
	float fRec45[2];
	float fConst58;
	float fRec46[2];
	float fConst59;
	float fConst60;
	float fConst61;
	float fConst62;
	float fRec41[2];
	float fConst63;
	float fRec42[2];
	float fConst64;
	float fConst65;
	float fConst66;
	float fConst67;
	float fRec36[2];
	float fConst68;
	float fRec37[2];
	float fConst69;
	float fRec31[2];
	float fRec32[2];
	float fConst70;
	float fConst71;
	float fConst72;
	float fRec27[2];
	float fConst73;
	float fRec28[2];
	float fConst74;
	float fConst75;
	float fConst76;
	float fConst77;
	float fRec22[2];
	float fConst78;
	float fRec23[2];
	float fConst79;
	float fRec17[2];
	float fRec18[2];
	float fVec13[2];
	float fConst80;
	float fConst81;
	float fConst82;
	float fVec14[2];
	float fRec16[2];
	float fRec15[2];
	float fVec15[2];
	float fRec14[2];
	float fRec13[2];
	float fConst83;
	float fConst84;
	float fRec12[2];
	float fConst85;
	float fRec11[2];
	float fVec16[2];
	float fRec83[2];
	float fRec82[2];
	float fVec17[2];
	float fRec81[2];
	float fRec80[2];
	float fRec79[2];
	float fRec78[2];
	FAUSTFLOAT fVslider7;
	float fConst86;
	float fRec10[2];
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	float fConst87;
	float fRec91[2];
	float fRec92[2];
	float fRec93[2];
	float fVec18[2];
	float fRec90[2];
	float fRec89[2];
	float fVec19[2];
	float fRec88[2];
	float fRec87[2];
	float fRec86[2];
	float fRec85[2];
	FAUSTFLOAT fVslider10;
	float fConst88;
	float fRec84[2];
	float fConst89;
	float fRec115[2];
	float fRec116[2];
	float fRec111[2];
	float fRec112[2];
	float fRec106[2];
	float fRec107[2];
	float fRec101[2];
	float fRec102[2];
	float fVec20[2];
	float fVec21[2];
	float fRec100[2];
	float fRec99[2];
	float fVec22[2];
	float fRec98[2];
	float fRec97[2];
	float fRec96[2];
	float fRec95[2];
	FAUSTFLOAT fVslider11;
	float fConst90;
	float fRec94[2];
	float fRec125[2];
	float fRec126[2];
	float fRec127[2];
	float fVec23[2];
	float fRec124[2];
	float fRec123[2];
	float fVec24[2];
	float fRec122[2];
	float fRec121[2];
	float fRec120[2];
	float fRec119[2];
	FAUSTFLOAT fVslider12;
	float fRec118[2];
	float fConst91;
	float fRec171[2];
	float fRec172[2];
	float fRec167[2];
	float fRec168[2];
	float fRec163[2];
	float fRec164[2];
	float fRec159[2];
	float fRec160[2];
	float fRec154[2];
	float fRec155[2];
	float fRec149[2];
	float fRec150[2];
	float fRec145[2];
	float fRec146[2];
	float fRec140[2];
	float fRec141[2];
	float fRec135[2];
	float fRec136[2];
	float fVec25[2];
	float fVec26[2];
	float fRec134[2];
	float fRec133[2];
	float fVec27[2];
	float fRec132[2];
	float fRec131[2];
	float fRec130[2];
	float fRec129[2];
	FAUSTFLOAT fVslider13;
	float fConst92;
	float fRec128[2];
	float fConst93;
	float fRec181[2];
	float fRec182[2];
	float fRec183[2];
	float fVec28[2];
	float fRec180[2];
	float fRec179[2];
	float fVec29[2];
	float fRec178[2];
	float fRec177[2];
	float fRec176[2];
	float fRec175[2];
	FAUSTFLOAT fVslider14;
	float fConst94;
	float fRec174[2];
	float fConst95;
	float fRec205[2];
	float fRec206[2];
	float fRec201[2];
	float fRec202[2];
	float fRec196[2];
	float fRec197[2];
	float fRec191[2];
	float fRec192[2];
	float fVec30[2];
	float fVec31[2];
	float fRec190[2];
	float fRec189[2];
	float fVec32[2];
	float fRec188[2];
	float fRec187[2];
	float fRec186[2];
	float fRec185[2];
	FAUSTFLOAT fVslider15;
	float fConst96;
	float fRec184[2];
	float fConst97;
	float fRec215[2];
	float fRec216[2];
	float fRec217[2];
	float fVec33[2];
	float fRec214[2];
	float fRec213[2];
	float fVec34[2];
	float fRec212[2];
	float fRec211[2];
	float fRec210[2];
	float fRec209[2];
	FAUSTFLOAT fVslider16;
	float fConst98;
	float fRec208[2];
	float fRec1[3];
	float fConst99;
	float fConst100;
	float fRec0[2];
	FAUSTFLOAT fVslider17;
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
	float fConst107;
	float fRec224[2];
	float fVec35[2048];
	int iConst108;
	float fConst109;
	int iRec227[2];
	float fRec228[2];
	float fConst110;
	float fRec226[2];
	float fConst111;
	float fConst112;
	float fRec225[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fCheckbox0;
	float fRec229[2];
	
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
		m->declare("compile_options", "-a /tmp/tmpm6blkt8y.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("version", "0.22");
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
		fConst5 = 1.0f / fConst0;
		fConst6 = 3.1415927f / fConst0;
		fConst7 = 0.01f * fConst0;
		fConst8 = std::rint(fConst7);
		iConst9 = int(std::floor(0.5f * fConst8)) % 2;
		fConst10 = std::tan(5283.415f / fConst0);
		fConst11 = 1.7803667f * fConst10;
		fConst12 = mydsp_faustpower2_f(fConst10);
		fConst13 = fConst12 + fConst11 + 1.5848527f;
		fConst14 = 2.0f * (fConst12 + -1.0f);
		fConst15 = fConst12 + (1.5848527f - fConst11);
		fConst16 = 1.4142135f * fConst10;
		fConst17 = fConst12 + (1.0f - fConst16);
		fConst18 = fConst12 + -1.5848527f;
		fConst19 = 2.0f * fConst18;
		fConst20 = 1.0f / (fConst12 + fConst16 + 1.0f);
		fConst21 = std::tan(119.806114f / fConst0);
		fConst22 = mydsp_faustpower2_f(fConst21);
		fConst23 = 1.0006541f * (fConst22 + -1.0f);
		fConst24 = 0.50032705f * (fConst22 + 1.0f);
		fConst25 = fConst24 - fConst21;
		fConst26 = 1.0f / (fConst21 + fConst24);
		iConst27 = int(std::floor(fConst8)) % 2;
		iConst28 = int(std::floor(0.25f * fConst8)) % 2;
		iConst29 = iConst27 + 2 * iConst9;
		iConst30 = int(std::floor(0.125f * fConst8)) % 2;
		iConst31 = iConst29 + 4 * iConst28;
		iConst32 = int(std::floor(0.0625f * fConst8)) % 2;
		iConst33 = iConst31 + 8 * iConst30;
		iConst34 = int(std::floor(0.03125f * fConst8)) % 2;
		iConst35 = iConst33 + 16 * iConst32;
		iConst36 = int(std::floor(0.015625f * fConst8)) % 2;
		iConst37 = iConst35 + 32 * iConst34;
		iConst38 = int(std::floor(0.0078125f * fConst8)) % 2;
		iConst39 = iConst37 + 64 * iConst36;
		iConst40 = int(std::floor(0.00390625f * fConst8)) % 2;
		iConst41 = iConst39 + 128 * iConst38;
		fConst42 = 1.0f / std::max<float>(fConst8, 1.1920929e-07f);
		fConst43 = 44.1f / fConst0;
		fConst44 = 1.0f - fConst43;
		fConst45 = std::tan(2513.2742f / fConst0);
		fConst46 = fConst45 * (fConst45 + 1.4142135f) + 1.0f;
		fConst47 = 2.0f / fConst46;
		fConst48 = fConst45 / fConst46;
		fConst49 = 1.0f / fConst46;
		fConst50 = std::tan(628.31854f / fConst0);
		fConst51 = fConst50 * (fConst50 + 1.4142135f) + 1.0f;
		fConst52 = 2.0f / fConst51;
		fConst53 = fConst50 / fConst51;
		fConst54 = 1.0f / fConst51;
		fConst55 = std::tan(314.15927f / fConst0);
		fConst56 = fConst55 * (fConst55 + 1.4142135f) + 1.0f;
		fConst57 = 2.0f / fConst56;
		fConst58 = fConst55 / fConst56;
		fConst59 = 1.0f / fConst56;
		fConst60 = std::tan(1256.6371f / fConst0);
		fConst61 = fConst60 * (fConst60 + 1.4142135f) + 1.0f;
		fConst62 = 2.0f / fConst61;
		fConst63 = fConst60 / fConst61;
		fConst64 = 1.0f / fConst61;
		fConst65 = std::tan(10053.097f / fConst0);
		fConst66 = fConst65 * (fConst65 + 1.4142135f) + 1.0f;
		fConst67 = 2.0f / fConst66;
		fConst68 = fConst65 / fConst66;
		fConst69 = 1.0f / fConst66;
		fConst70 = std::tan(5026.5483f / fConst0);
		fConst71 = fConst70 * (fConst70 + 1.4142135f) + 1.0f;
		fConst72 = 2.0f / fConst71;
		fConst73 = fConst70 / fConst71;
		fConst74 = 1.0f / fConst71;
		fConst75 = std::tan(20106.193f / fConst0);
		fConst76 = fConst75 * (fConst75 + 1.4142135f) + 1.0f;
		fConst77 = 2.0f / fConst76;
		fConst78 = fConst75 / fConst76;
		fConst79 = 1.0f / fConst76;
		fConst80 = 3.9810717f * fConst13;
		fConst81 = 7.9621434f * fConst18;
		fConst82 = 3.9810717f * fConst15;
		fConst83 = std::exp(-(1e+01f / fConst0));
		fConst84 = 1.0f - fConst83;
		fConst85 = 1.0f - fConst2;
		fConst86 = 1.0f - fConst1;
		fConst87 = std::exp(-(2e+01f / fConst0));
		fConst88 = 1.0f - fConst87;
		fConst89 = std::exp(-(13.333333f / fConst0));
		fConst90 = 1.0f - fConst89;
		fConst91 = std::exp(-(8.0f / fConst0));
		fConst92 = 1.0f - fConst91;
		fConst93 = std::exp(-(6.6666665f / fConst0));
		fConst94 = 1.0f - fConst93;
		fConst95 = std::exp(-(5.714286f / fConst0));
		fConst96 = 1.0f - fConst95;
		fConst97 = std::exp(-(5.0f / fConst0));
		fConst98 = 1.0f - fConst97;
		fConst99 = std::exp(-(5e+02f / fConst0));
		fConst100 = std::exp(-(66.666664f / fConst0));
		fConst101 = std::exp(-(333.33334f / fConst0));
		fConst102 = std::exp(-(2e+02f / fConst0));
		fConst103 = std::exp(-(5e+01f / fConst0));
		fConst104 = std::exp(-(25.0f / fConst0));
		fConst105 = std::exp(-(16.666666f / fConst0));
		fConst106 = std::exp(-(12.5f / fConst0));
		fConst107 = std::exp(-(33.333332f / fConst0));
		iConst108 = int(fConst7);
		fConst109 = std::exp(-(628.31854f / fConst0));
		fConst110 = 1.0f - fConst109;
		fConst111 = std::exp(-(6.2831855f / fConst0));
		fConst112 = 1.0f - fConst111;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-23.0f);
		fVslider1 = FAUSTFLOAT(0.9f);
		fVslider2 = FAUSTFLOAT(0.1f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(1.0f);
		fVslider5 = FAUSTFLOAT(0.0f);
		fVslider6 = FAUSTFLOAT(42.0f);
		fVslider7 = FAUSTFLOAT(-4.0f);
		fVslider8 = FAUSTFLOAT(8e+01f);
		fVslider9 = FAUSTFLOAT(5e+01f);
		fVslider10 = FAUSTFLOAT(-7.0f);
		fVslider11 = FAUSTFLOAT(-1e+01f);
		fVslider12 = FAUSTFLOAT(-9.0f);
		fVslider13 = FAUSTFLOAT(-8.0f);
		fVslider14 = FAUSTFLOAT(-5.0f);
		fVslider15 = FAUSTFLOAT(-5.0f);
		fVslider16 = FAUSTFLOAT(-1e+01f);
		fVslider17 = FAUSTFLOAT(8e+01f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec71[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec75[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec74[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec73[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec72[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 3; l8 = l8 + 1) {
			fVec3[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 5; l9 = l9 + 1) {
			fVec4[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 12; l10 = l10 + 1) {
			fVec5[l10] = 0.0f;
		}
		IOTA0 = 0;
		for (int l11 = 0; l11 < 32; l11 = l11 + 1) {
			fVec6[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 64; l12 = l12 + 1) {
			fVec7[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 128; l13 = l13 + 1) {
			fVec8[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 256; l14 = l14 + 1) {
			fVec9[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 512; l15 = l15 + 1) {
			fVec10[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec66[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec67[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec64[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec63[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec77[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fVec11[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec76[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec12[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec58[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec59[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec53[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec54[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec49[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec50[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec45[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec46[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec41[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec42[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec36[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec37[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec31[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec32[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec27[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec28[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec22[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec23[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec17[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec18[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec13[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec14[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec16[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec15[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fVec15[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec14[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec13[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec12[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec11[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fVec16[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec83[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec82[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fVec17[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec81[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec80[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec79[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec78[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec10[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec91[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec92[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec93[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fVec18[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec90[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec89[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fVec19[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec88[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec87[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec86[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec85[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec84[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec115[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec116[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec111[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec112[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec106[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec107[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec101[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec102[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec20[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec21[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec100[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec99[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec22[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec98[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec97[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec96[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec95[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec94[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec125[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec126[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec127[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec23[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec124[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec123[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec24[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec122[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec121[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec120[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec119[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec118[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec171[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec172[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec167[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec168[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec163[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec164[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec159[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec160[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec154[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec155[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec149[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec150[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec145[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec146[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec140[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec141[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec135[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec136[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fVec25[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec26[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec134[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec133[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec27[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec132[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec131[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec130[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec129[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec128[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec181[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec182[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec183[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fVec28[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec180[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec179[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fVec29[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec178[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec177[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec176[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec175[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec174[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec205[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec206[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec201[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec202[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec196[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec197[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec191[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec192[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fVec30[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec31[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec190[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec189[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fVec32[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec188[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec187[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec186[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec185[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec184[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec215[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec216[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec217[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fVec33[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec214[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec213[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fVec34[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec212[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec211[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec210[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec209[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec208[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fRec1[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec0[l175] = 0.0f;
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
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec224[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2048; l183 = l183 + 1) {
			fVec35[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			iRec227[l184] = 0;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec228[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec226[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec225[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec229[l188] = 0.0f;
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
		ui_interface->declare(&fVslider9, "1", "");
		ui_interface->declare(&fVslider9, "symbol", "sb_strength");
		ui_interface->declare(&fVslider9, "unit", "%");
		ui_interface->addVerticalSlider("sb_strength", &fVslider9, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider16, "symbol", "sb_target_spectrum_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider16, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider15, "symbol", "sb_target_spectrum_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider15, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider14, "symbol", "sb_target_spectrum_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider14, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider13, "symbol", "sb_target_spectrum_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider13, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider12, "symbol", "sb_target_spectrum_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider12, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider11, "symbol", "sb_target_spectrum_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider11, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider10, "symbol", "sb_target_spectrum_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider10, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "symbol", "sb_target_spectrum_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider7, FAUSTFLOAT(-4.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->declare(&fVslider5, "1", "");
		ui_interface->declare(&fVslider5, "symbol", "pre_gain");
		ui_interface->declare(&fVslider5, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider8, "2", "");
		ui_interface->declare(&fVslider8, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider8, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph1, "99", "");
		ui_interface->declare(&fVbargraph1, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph1, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph0, "symbol", "vad_meter");
		ui_interface->addVerticalBargraph("vad_meter", &fVbargraph0, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider4, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider4, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVslider17, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider17, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider6, "scale", "log");
		ui_interface->declare(&fVslider6, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider6, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider1, "symbol", "vad_gate_thresh");
		ui_interface->addVerticalSlider("vad_g_thr", &fVslider1, FAUSTFLOAT(0.9f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider2, "symbol", "vad_smoothing_time");
		ui_interface->addVerticalSlider("vad_smoo_t", &fVslider2, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
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
		int iSlow4 = std::fabs(fSlow3) < 1.1920929e-07f;
		float fSlow5 = ((iSlow4) ? 0.0f : std::exp(-(fConst5 / ((iSlow4) ? 1.0f : fSlow3))));
		float fSlow6 = float(fVslider3) * (1.0f - fSlow5);
		float fSlow7 = float(fVslider4);
		float fSlow8 = fConst43 * std::pow(1e+01f, 0.05f * float(fVslider5));
		float fSlow9 = 1.0f / std::tan(fConst6 * float(fVslider6));
		float fSlow10 = 1.0f - fSlow9;
		float fSlow11 = 1.0f / (fSlow9 + 1.0f);
		float fSlow12 = float(fVslider7);
		float fSlow13 = float(fVslider8);
		float fSlow14 = 5e-06f * float(fVslider9) * fSlow13;
		float fSlow15 = float(fVslider10);
		float fSlow16 = float(fVslider11);
		float fSlow17 = float(fVslider12);
		float fSlow18 = float(fVslider13);
		float fSlow19 = float(fVslider14);
		float fSlow20 = float(fVslider15);
		float fSlow21 = float(fVslider16);
		float fSlow22 = fSlow0 + -13.5f;
		float fSlow23 = 0.0001f * fSlow13 * float(fVslider17);
		float fSlow24 = fSlow0 + -11.5f;
		float fSlow25 = fSlow0 + -10.5f;
		float fSlow26 = fSlow0 + -7.5f;
		float fSlow27 = fSlow0 + -8.5f;
		float fSlow28 = fSlow0 + -6.5f;
		float fSlow29 = fSlow0 + -5.5f;
		float fSlow30 = fConst43 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec71[0] = fSlow6 + fSlow5 * fRec71[1];
			float fTemp0 = fRec71[0] * float(fRec71[0] > fSlow2);
			fVbargraph0 = FAUSTFLOAT(fTemp0);
			float fTemp1 = fTemp0;
			float fTemp2 = std::tan(fConst6 * std::min<float>(fConst3, fTemp1 * (fConst4 * std::fabs(fRec64[1]) + 0.1316f)));
			float fTemp3 = fTemp2 + 2.0f;
			float fTemp4 = fTemp2 * fTemp3 + 1.0f;
			fVec0[0] = fConst17 * fRec74[1] - fConst15 * fRec1[2];
			fRec75[0] = fConst20 * (fConst19 * fRec1[2] - (fVec0[1] + fConst14 * fRec75[1]) + fConst13 * fRec1[1]);
			fRec74[0] = fRec75[0];
			fVec1[0] = 0.50032705f * fRec74[1] - fConst25 * fRec72[1];
			fRec73[0] = fConst26 * (fVec1[1] - fConst23 * fRec73[1] - 1.0006541f * fRec74[1] + 0.50032705f * fRec74[0]);
			fRec72[0] = fRec73[0];
			float fTemp5 = mydsp_faustpower2_f(fRec72[0]);
			fVec2[0] = fTemp5;
			float fTemp6 = fTemp5 + fVec2[1];
			fVec3[0] = fTemp6;
			float fTemp7 = fTemp6 + fVec3[2];
			fVec4[0] = fTemp7;
			float fTemp8 = fTemp7 + fVec4[4];
			fVec5[0] = fTemp8;
			float fTemp9 = fTemp8 + fVec5[8];
			fVec6[IOTA0 & 31] = fTemp9;
			float fTemp10 = fTemp9 + fVec6[(IOTA0 - 16) & 31];
			fVec7[IOTA0 & 63] = fTemp10;
			float fTemp11 = fTemp10 + fVec7[(IOTA0 - 32) & 63];
			fVec8[IOTA0 & 127] = fTemp11;
			float fTemp12 = fTemp11 + fVec8[(IOTA0 - 64) & 127];
			fVec9[IOTA0 & 255] = fTemp12;
			fVec10[IOTA0 & 511] = fTemp12 + fVec9[(IOTA0 - 128) & 255];
			float fTemp13 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow0 + fRec63[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst42 * (((iConst40) ? 0.86000985f * fVec10[(IOTA0 - iConst41) & 511] : 0.0f) + ((iConst38) ? 0.86000985f * fVec9[(IOTA0 - iConst39) & 255] : 0.0f) + ((iConst36) ? 0.86000985f * fVec8[(IOTA0 - iConst37) & 127] : 0.0f) + ((iConst34) ? 0.86000985f * fVec7[(IOTA0 - iConst35) & 63] : 0.0f) + ((iConst32) ? 0.86000985f * fVec6[(IOTA0 - iConst33) & 31] : 0.0f) + ((iConst30) ? 0.86000985f * fVec5[iConst31] : 0.0f) + ((iConst28) ? 0.86000985f * fVec4[iConst29] : 0.0f) + ((iConst27) ? 0.86000985f * fTemp5 : 0.0f) + ((iConst9) ? 0.86000985f * fVec3[iConst27] : 0.0f))))))) - (fRec66[1] * fTemp3 + fRec67[1]);
			float fTemp14 = fTemp2 * fTemp13 / fTemp4;
			fRec66[0] = fRec66[1] + 2.0f * fTemp14;
			float fTemp15 = fRec66[1] + fTemp14;
			float fTemp16 = fTemp2 * fTemp15;
			fRec67[0] = fRec67[1] + 2.0f * fTemp16;
			float fRec68 = fTemp15;
			float fRec69 = fTemp13 / fTemp4;
			float fRec70 = fRec67[1] + fTemp16;
			fRec64[0] = fRec68;
			float fRec65 = fRec70;
			fRec63[0] = fSlow7 * fRec65;
			fRec77[0] = fSlow8 + fConst44 * fRec77[1];
			float fTemp17 = float(input0[i0]);
			float fTemp18 = fTemp17 * fRec77[0];
			fVec11[0] = fTemp18;
			fRec76[0] = -(fSlow11 * (fSlow10 * fRec76[1] - fSlow9 * (fTemp18 - fVec11[1])));
			float fTemp19 = fRec76[0] * std::pow(1e+01f, 0.05f * fRec63[0]);
			fVec12[0] = fTemp19;
			float fTemp20 = fRec58[1] + fConst45 * (fTemp19 - fRec59[1]);
			fRec58[0] = fConst47 * fTemp20 - fRec58[1];
			float fTemp21 = fRec59[1] + fConst48 * fTemp20;
			fRec59[0] = 2.0f * fTemp21 - fRec59[1];
			float fRec60 = fTemp19;
			float fRec61 = fConst49 * fTemp20;
			float fRec62 = fTemp21;
			float fTemp22 = fRec62 + 1.4142135f * fRec61;
			float fTemp23 = fRec53[1] + fConst45 * (fRec60 - (fTemp22 + fRec54[1]));
			fRec53[0] = fConst47 * fTemp23 - fRec53[1];
			float fTemp24 = fRec54[1] + fConst48 * fTemp23;
			fRec54[0] = 2.0f * fTemp24 - fRec54[1];
			float fRec55 = fRec60 - fTemp22;
			float fRec56 = fConst49 * fTemp23;
			float fRec57 = fTemp24;
			float fTemp25 = fRec57 + 1.4142135f * fRec56;
			float fTemp26 = fRec49[1] + fConst50 * (fRec55 - (fTemp25 + fRec50[1]));
			fRec49[0] = fConst52 * fTemp26 - fRec49[1];
			float fTemp27 = fRec50[1] + fConst53 * fTemp26;
			fRec50[0] = 2.0f * fTemp27 - fRec50[1];
			float fRec51 = fRec55 - fTemp25;
			float fRec52 = fConst54 * fTemp26;
			float fTemp28 = 2.828427f * fRec52;
			float fTemp29 = fRec45[1] + fConst55 * (fRec51 - (fTemp28 + fRec46[1]));
			fRec45[0] = fConst57 * fTemp29 - fRec45[1];
			float fTemp30 = fRec46[1] + fConst58 * fTemp29;
			fRec46[0] = 2.0f * fTemp30 - fRec46[1];
			float fRec47 = fRec51 - fTemp28;
			float fRec48 = fConst59 * fTemp29;
			float fTemp31 = 2.828427f * fRec48;
			float fTemp32 = fRec41[1] + fConst60 * (fRec47 - (fTemp31 + fRec42[1]));
			fRec41[0] = fConst62 * fTemp32 - fRec41[1];
			float fTemp33 = fRec42[1] + fConst63 * fTemp32;
			fRec42[0] = 2.0f * fTemp33 - fRec42[1];
			float fRec43 = fRec47 - fTemp31;
			float fRec44 = fConst64 * fTemp32;
			float fTemp34 = 2.828427f * fRec44;
			float fTemp35 = fRec36[1] + fConst65 * (fRec43 - (fTemp34 + fRec37[1]));
			fRec36[0] = fConst67 * fTemp35 - fRec36[1];
			float fTemp36 = fRec37[1] + fConst68 * fTemp35;
			fRec37[0] = 2.0f * fTemp36 - fRec37[1];
			float fRec38 = fRec43 - fTemp34;
			float fRec39 = fConst69 * fTemp35;
			float fRec40 = fTemp36;
			float fTemp37 = fRec40 + 1.4142135f * fRec39;
			float fTemp38 = fRec31[1] + fConst65 * (fRec38 - (fTemp37 + fRec32[1]));
			fRec31[0] = fConst67 * fTemp38 - fRec31[1];
			float fTemp39 = fRec32[1] + fConst68 * fTemp38;
			fRec32[0] = 2.0f * fTemp39 - fRec32[1];
			float fRec33 = fRec38 - fTemp37;
			float fRec34 = fConst69 * fTemp38;
			float fRec35 = fTemp39;
			float fTemp40 = fRec35 + 1.4142135f * fRec34;
			float fTemp41 = fRec27[1] + fConst70 * (fRec33 - (fTemp40 + fRec28[1]));
			fRec27[0] = fConst72 * fTemp41 - fRec27[1];
			float fTemp42 = fRec28[1] + fConst73 * fTemp41;
			fRec28[0] = 2.0f * fTemp42 - fRec28[1];
			float fRec29 = fRec33 - fTemp40;
			float fRec30 = fConst74 * fTemp41;
			float fTemp43 = 2.828427f * fRec30;
			float fTemp44 = fRec22[1] + fConst75 * (fRec29 - (fTemp43 + fRec23[1]));
			fRec22[0] = fConst77 * fTemp44 - fRec22[1];
			float fTemp45 = fRec23[1] + fConst78 * fTemp44;
			fRec23[0] = 2.0f * fTemp45 - fRec23[1];
			float fRec24 = fRec29 - fTemp43;
			float fRec25 = fConst79 * fTemp44;
			float fRec26 = fTemp45;
			float fTemp46 = fRec26 + 1.4142135f * fRec25;
			float fTemp47 = fRec17[1] + fConst75 * (fRec24 - (fTemp46 + fRec18[1]));
			fRec17[0] = fConst77 * fTemp47 - fRec17[1];
			float fTemp48 = fRec18[1] + fConst78 * fTemp47;
			fRec18[0] = 2.0f * fTemp48 - fRec18[1];
			float fRec19 = fRec24 - fTemp46;
			float fRec20 = fConst79 * fTemp47;
			float fRec21 = fTemp48;
			float fTemp49 = fRec19 - (fRec21 + 1.4142135f * fRec20);
			fVec13[0] = fTemp49;
			fVec14[0] = fConst82 * fVec13[1] - fConst17 * fRec15[1];
			fRec16[0] = fConst20 * (fVec14[1] - fConst14 * fRec16[1] + fConst81 * fVec13[1] + fConst80 * fTemp49);
			fRec15[0] = fRec16[0];
			fVec15[0] = 0.50032705f * fRec15[1] - fConst25 * fRec13[1];
			fRec14[0] = fConst26 * (fVec15[1] - fConst23 * fRec14[1] - 1.0006541f * fRec15[1] + 0.50032705f * fRec15[0]);
			fRec13[0] = fRec14[0];
			float fTemp50 = std::fabs(0.92736715f * fRec13[0]);
			fRec12[0] = std::max<float>(fTemp50, fConst83 * fRec12[1] + fConst84 * fTemp50);
			fRec11[0] = fConst85 * fRec12[0] + fConst2 * fRec11[1];
			fVec16[0] = fConst17 * fRec82[1] - fConst15 * fVec12[1];
			fRec83[0] = fConst20 * (fConst19 * fVec12[1] - (fVec16[1] + fConst14 * fRec83[1]) + fConst13 * fTemp19);
			fRec82[0] = fRec83[0];
			fVec17[0] = 0.50032705f * fRec82[1] - fConst25 * fRec80[1];
			fRec81[0] = fConst26 * (fVec17[1] - fConst23 * fRec81[1] - 1.0006541f * fRec82[1] + 0.50032705f * fRec82[0]);
			fRec80[0] = fRec81[0];
			float fTemp51 = std::fabs(0.92736715f * fRec80[0]);
			fRec79[0] = std::max<float>(fTemp51, fConst83 * fRec79[1] + fConst84 * fTemp51);
			fRec78[0] = fConst85 * fRec79[0] + fConst2 * fRec78[1];
			float fTemp52 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec78[0])));
			fRec10[0] = fConst86 * (fSlow12 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec11[0]))))) + fConst1 * fRec10[1];
			float fTemp53 = fTemp49 * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec10[0])));
			float fTemp54 = fRec91[1] + fConst75 * (fRec26 - fRec92[1]);
			fRec91[0] = fConst77 * fTemp54 - fRec91[1];
			float fTemp55 = fRec92[1] + fConst78 * fTemp54;
			fRec92[0] = 2.0f * fTemp55 - fRec92[1];
			fRec93[0] = fTemp55;
			fVec18[0] = fConst82 * fRec93[1] - fConst17 * fRec89[1];
			fRec90[0] = fConst20 * (fVec18[1] - fConst14 * fRec90[1] + fConst81 * fRec93[1] + fConst80 * fRec93[0]);
			fRec89[0] = fRec90[0];
			fVec19[0] = 0.50032705f * fRec89[1] - fConst25 * fRec87[1];
			fRec88[0] = fConst26 * (fVec19[1] - fConst23 * fRec88[1] - 1.0006541f * fRec89[1] + 0.50032705f * fRec89[0]);
			fRec87[0] = fRec88[0];
			float fTemp56 = std::fabs(0.92736715f * fRec87[0]);
			fRec86[0] = std::max<float>(fTemp56, fConst83 * fRec86[1] + fConst84 * fTemp56);
			fRec85[0] = fConst85 * fRec86[0] + fConst2 * fRec85[1];
			fRec84[0] = fConst88 * (fSlow15 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec85[0]))))) + fConst87 * fRec84[1];
			float fTemp57 = fRec93[0] * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec84[0])));
			float fTemp58 = fRec115[1] + fConst65 * (fRec40 - fRec116[1]);
			fRec115[0] = fConst67 * fTemp58 - fRec115[1];
			float fTemp59 = fRec116[1] + fConst68 * fTemp58;
			fRec116[0] = 2.0f * fTemp59 - fRec116[1];
			float fRec117 = fTemp59;
			float fTemp60 = fRec111[1] + fConst75 * (fRec117 - fRec112[1]);
			fRec111[0] = fConst77 * fTemp60 - fRec111[1];
			float fTemp61 = fRec112[1] + fConst78 * fTemp60;
			fRec112[0] = 2.0f * fTemp61 - fRec112[1];
			float fRec113 = fRec117;
			float fRec114 = fConst79 * fTemp60;
			float fTemp62 = 2.828427f * fRec114;
			float fTemp63 = fRec106[1] + fConst70 * (fRec113 - (fTemp62 + fRec107[1]));
			fRec106[0] = fConst72 * fTemp63 - fRec106[1];
			float fTemp64 = fRec107[1] + fConst73 * fTemp63;
			fRec107[0] = 2.0f * fTemp64 - fRec107[1];
			float fRec108 = fRec113 - fTemp62;
			float fRec109 = fConst74 * fTemp63;
			float fRec110 = fTemp64;
			float fTemp65 = fRec110 + 1.4142135f * fRec109;
			float fTemp66 = fRec101[1] + fConst70 * (fRec108 - (fTemp65 + fRec102[1]));
			fRec101[0] = fConst72 * fTemp66 - fRec101[1];
			float fTemp67 = fRec102[1] + fConst73 * fTemp66;
			fRec102[0] = 2.0f * fTemp67 - fRec102[1];
			float fRec103 = fRec108 - fTemp65;
			float fRec104 = fConst74 * fTemp66;
			float fRec105 = fTemp67;
			float fTemp68 = fRec103 - (fRec105 + 1.4142135f * fRec104);
			fVec20[0] = fTemp68;
			fVec21[0] = fConst82 * fVec20[1] - fConst17 * fRec99[1];
			fRec100[0] = fConst20 * (fVec21[1] - fConst14 * fRec100[1] + fConst81 * fVec20[1] + fConst80 * fTemp68);
			fRec99[0] = fRec100[0];
			fVec22[0] = 0.50032705f * fRec99[1] - fConst25 * fRec97[1];
			fRec98[0] = fConst26 * (fVec22[1] - fConst23 * fRec98[1] - 1.0006541f * fRec99[1] + 0.50032705f * fRec99[0]);
			fRec97[0] = fRec98[0];
			float fTemp69 = std::fabs(0.92736715f * fRec97[0]);
			fRec96[0] = std::max<float>(fTemp69, fConst83 * fRec96[1] + fConst84 * fTemp69);
			fRec95[0] = fConst85 * fRec96[0] + fConst2 * fRec95[1];
			fRec94[0] = fConst90 * (fSlow16 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec95[0]))))) + fConst89 * fRec94[1];
			float fTemp70 = fTemp68 * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec94[0])));
			float fTemp71 = fRec125[1] + fConst70 * (fRec110 - fRec126[1]);
			fRec125[0] = fConst72 * fTemp71 - fRec125[1];
			float fTemp72 = fRec126[1] + fConst73 * fTemp71;
			fRec126[0] = 2.0f * fTemp72 - fRec126[1];
			fRec127[0] = fTemp72;
			fVec23[0] = fConst82 * fRec127[1] - fConst17 * fRec123[1];
			fRec124[0] = fConst20 * (fVec23[1] - fConst14 * fRec124[1] + fConst81 * fRec127[1] + fConst80 * fRec127[0]);
			fRec123[0] = fRec124[0];
			fVec24[0] = 0.50032705f * fRec123[1] - fConst25 * fRec121[1];
			fRec122[0] = fConst26 * (fVec24[1] - fConst23 * fRec122[1] - 1.0006541f * fRec123[1] + 0.50032705f * fRec123[0]);
			fRec121[0] = fRec122[0];
			float fTemp73 = std::fabs(0.92736715f * fRec121[0]);
			fRec120[0] = std::max<float>(fTemp73, fConst83 * fRec120[1] + fConst84 * fTemp73);
			fRec119[0] = fConst85 * fRec120[0] + fConst2 * fRec119[1];
			fRec118[0] = fConst84 * (fSlow17 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec119[0]))))) + fConst83 * fRec118[1];
			float fTemp74 = fRec127[0] * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec118[0])));
			float fTemp75 = fRec171[1] + fConst45 * (fRec62 - fRec172[1]);
			fRec171[0] = fConst47 * fTemp75 - fRec171[1];
			float fTemp76 = fRec172[1] + fConst48 * fTemp75;
			fRec172[0] = 2.0f * fTemp76 - fRec172[1];
			float fRec173 = fTemp76;
			float fTemp77 = fRec167[1] + fConst65 * (fRec173 - fRec168[1]);
			fRec167[0] = fConst67 * fTemp77 - fRec167[1];
			float fTemp78 = fRec168[1] + fConst68 * fTemp77;
			fRec168[0] = 2.0f * fTemp78 - fRec168[1];
			float fRec169 = fRec173;
			float fRec170 = fConst69 * fTemp77;
			float fTemp79 = 2.828427f * fRec170;
			float fTemp80 = fRec163[1] + fConst70 * (fRec169 - (fTemp79 + fRec164[1]));
			fRec163[0] = fConst72 * fTemp80 - fRec163[1];
			float fTemp81 = fRec164[1] + fConst73 * fTemp80;
			fRec164[0] = 2.0f * fTemp81 - fRec164[1];
			float fRec165 = fRec169 - fTemp79;
			float fRec166 = fConst74 * fTemp80;
			float fTemp82 = 2.828427f * fRec166;
			float fTemp83 = fRec159[1] + fConst75 * (fRec165 - (fTemp82 + fRec160[1]));
			fRec159[0] = fConst77 * fTemp83 - fRec159[1];
			float fTemp84 = fRec160[1] + fConst78 * fTemp83;
			fRec160[0] = 2.0f * fTemp84 - fRec160[1];
			float fRec161 = fRec165 - fTemp82;
			float fRec162 = fConst79 * fTemp83;
			float fTemp85 = 2.828427f * fRec162;
			float fTemp86 = fRec154[1] + fConst50 * (fRec161 - (fTemp85 + fRec155[1]));
			fRec154[0] = fConst52 * fTemp86 - fRec154[1];
			float fTemp87 = fRec155[1] + fConst53 * fTemp86;
			fRec155[0] = 2.0f * fTemp87 - fRec155[1];
			float fRec156 = fRec161 - fTemp85;
			float fRec157 = fConst54 * fTemp86;
			float fRec158 = fTemp87;
			float fTemp88 = fRec158 + 1.4142135f * fRec157;
			float fTemp89 = fRec149[1] + fConst50 * (fRec156 - (fTemp88 + fRec150[1]));
			fRec149[0] = fConst52 * fTemp89 - fRec149[1];
			float fTemp90 = fRec150[1] + fConst53 * fTemp89;
			fRec150[0] = 2.0f * fTemp90 - fRec150[1];
			float fRec151 = fRec156 - fTemp88;
			float fRec152 = fConst54 * fTemp89;
			float fRec153 = fTemp90;
			float fTemp91 = fRec153 + 1.4142135f * fRec152;
			float fTemp92 = fRec145[1] + fConst55 * (fRec151 - (fTemp91 + fRec146[1]));
			fRec145[0] = fConst57 * fTemp92 - fRec145[1];
			float fTemp93 = fRec146[1] + fConst58 * fTemp92;
			fRec146[0] = 2.0f * fTemp93 - fRec146[1];
			float fRec147 = fRec151 - fTemp91;
			float fRec148 = fConst59 * fTemp92;
			float fTemp94 = 2.828427f * fRec148;
			float fTemp95 = fRec140[1] + fConst60 * (fRec147 - (fTemp94 + fRec141[1]));
			fRec140[0] = fConst62 * fTemp95 - fRec140[1];
			float fTemp96 = fRec141[1] + fConst63 * fTemp95;
			fRec141[0] = 2.0f * fTemp96 - fRec141[1];
			float fRec142 = fRec147 - fTemp94;
			float fRec143 = fConst64 * fTemp95;
			float fRec144 = fTemp96;
			float fTemp97 = fRec144 + 1.4142135f * fRec143;
			float fTemp98 = fRec135[1] + fConst60 * (fRec142 - (fTemp97 + fRec136[1]));
			fRec135[0] = fConst62 * fTemp98 - fRec135[1];
			float fTemp99 = fRec136[1] + fConst63 * fTemp98;
			fRec136[0] = 2.0f * fTemp99 - fRec136[1];
			float fRec137 = fRec142 - fTemp97;
			float fRec138 = fConst64 * fTemp98;
			float fRec139 = fTemp99;
			float fTemp100 = fRec137 - (fRec139 + 1.4142135f * fRec138);
			fVec25[0] = fTemp100;
			fVec26[0] = fConst82 * fVec25[1] - fConst17 * fRec133[1];
			fRec134[0] = fConst20 * (fVec26[1] - fConst14 * fRec134[1] + fConst81 * fVec25[1] + fConst80 * fTemp100);
			fRec133[0] = fRec134[0];
			fVec27[0] = 0.50032705f * fRec133[1] - fConst25 * fRec131[1];
			fRec132[0] = fConst26 * (fVec27[1] - fConst23 * fRec132[1] - 1.0006541f * fRec133[1] + 0.50032705f * fRec133[0]);
			fRec131[0] = fRec132[0];
			float fTemp101 = std::fabs(0.92736715f * fRec131[0]);
			fRec130[0] = std::max<float>(fTemp101, fConst83 * fRec130[1] + fConst84 * fTemp101);
			fRec129[0] = fConst85 * fRec130[0] + fConst2 * fRec129[1];
			fRec128[0] = fConst92 * (fSlow18 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec129[0]))))) + fConst91 * fRec128[1];
			float fTemp102 = fTemp100 * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec128[0])));
			float fTemp103 = fRec181[1] + fConst60 * (fRec144 - fRec182[1]);
			fRec181[0] = fConst62 * fTemp103 - fRec181[1];
			float fTemp104 = fRec182[1] + fConst63 * fTemp103;
			fRec182[0] = 2.0f * fTemp104 - fRec182[1];
			fRec183[0] = fTemp104;
			fVec28[0] = fConst82 * fRec183[1] - fConst17 * fRec179[1];
			fRec180[0] = fConst20 * (fVec28[1] - fConst14 * fRec180[1] + fConst81 * fRec183[1] + fConst80 * fRec183[0]);
			fRec179[0] = fRec180[0];
			fVec29[0] = 0.50032705f * fRec179[1] - fConst25 * fRec177[1];
			fRec178[0] = fConst26 * (fVec29[1] - fConst23 * fRec178[1] - 1.0006541f * fRec179[1] + 0.50032705f * fRec179[0]);
			fRec177[0] = fRec178[0];
			float fTemp105 = std::fabs(0.92736715f * fRec177[0]);
			fRec176[0] = std::max<float>(fTemp105, fConst83 * fRec176[1] + fConst84 * fTemp105);
			fRec175[0] = fConst85 * fRec176[0] + fConst2 * fRec175[1];
			fRec174[0] = fConst94 * (fSlow19 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec175[0]))))) + fConst93 * fRec174[1];
			float fTemp106 = fRec183[0] * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec174[0])));
			float fTemp107 = fRec205[1] + fConst50 * (fRec158 - fRec206[1]);
			fRec205[0] = fConst52 * fTemp107 - fRec205[1];
			float fTemp108 = fRec206[1] + fConst53 * fTemp107;
			fRec206[0] = 2.0f * fTemp108 - fRec206[1];
			float fRec207 = fTemp108;
			float fTemp109 = fRec201[1] + fConst60 * (fRec207 - fRec202[1]);
			fRec201[0] = fConst62 * fTemp109 - fRec201[1];
			float fTemp110 = fRec202[1] + fConst63 * fTemp109;
			fRec202[0] = 2.0f * fTemp110 - fRec202[1];
			float fRec203 = fRec207;
			float fRec204 = fConst64 * fTemp109;
			float fTemp111 = 2.828427f * fRec204;
			float fTemp112 = fRec196[1] + fConst55 * (fRec203 - (fTemp111 + fRec197[1]));
			fRec196[0] = fConst57 * fTemp112 - fRec196[1];
			float fTemp113 = fRec197[1] + fConst58 * fTemp112;
			fRec197[0] = 2.0f * fTemp113 - fRec197[1];
			float fRec198 = fRec203 - fTemp111;
			float fRec199 = fConst59 * fTemp112;
			float fRec200 = fTemp113;
			float fTemp114 = fRec200 + 1.4142135f * fRec199;
			float fTemp115 = fRec191[1] + fConst55 * (fRec198 - (fTemp114 + fRec192[1]));
			fRec191[0] = fConst57 * fTemp115 - fRec191[1];
			float fTemp116 = fRec192[1] + fConst58 * fTemp115;
			fRec192[0] = 2.0f * fTemp116 - fRec192[1];
			float fRec193 = fRec198 - fTemp114;
			float fRec194 = fConst59 * fTemp115;
			float fRec195 = fTemp116;
			float fTemp117 = fRec193 - (fRec195 + 1.4142135f * fRec194);
			fVec30[0] = fTemp117;
			fVec31[0] = fConst82 * fVec30[1] - fConst17 * fRec189[1];
			fRec190[0] = fConst20 * (fVec31[1] - fConst14 * fRec190[1] + fConst81 * fVec30[1] + fConst80 * fTemp117);
			fRec189[0] = fRec190[0];
			fVec32[0] = 0.50032705f * fRec189[1] - fConst25 * fRec187[1];
			fRec188[0] = fConst26 * (fVec32[1] - fConst23 * fRec188[1] - 1.0006541f * fRec189[1] + 0.50032705f * fRec189[0]);
			fRec187[0] = fRec188[0];
			float fTemp118 = std::fabs(0.92736715f * fRec187[0]);
			fRec186[0] = std::max<float>(fTemp118, fConst83 * fRec186[1] + fConst84 * fTemp118);
			fRec185[0] = fConst85 * fRec186[0] + fConst2 * fRec185[1];
			fRec184[0] = fConst96 * (fSlow20 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec185[0]))))) + fConst95 * fRec184[1];
			float fTemp119 = fTemp117 * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec184[0])));
			float fTemp120 = fRec215[1] + fConst55 * (fRec200 - fRec216[1]);
			fRec215[0] = fConst57 * fTemp120 - fRec215[1];
			float fTemp121 = fRec216[1] + fConst58 * fTemp120;
			fRec216[0] = 2.0f * fTemp121 - fRec216[1];
			fRec217[0] = fTemp121;
			fVec33[0] = fConst82 * fRec217[1] - fConst17 * fRec213[1];
			fRec214[0] = fConst20 * (fVec33[1] - fConst14 * fRec214[1] + fConst81 * fRec217[1] + fConst80 * fRec217[0]);
			fRec213[0] = fRec214[0];
			fVec34[0] = 0.50032705f * fRec213[1] - fConst25 * fRec211[1];
			fRec212[0] = fConst26 * (fVec34[1] - fConst23 * fRec212[1] - 1.0006541f * fRec213[1] + 0.50032705f * fRec213[0]);
			fRec211[0] = fRec212[0];
			float fTemp122 = std::fabs(0.92736715f * fRec211[0]);
			fRec210[0] = std::max<float>(fTemp122, fConst83 * fRec210[1] + fConst84 * fTemp122);
			fRec209[0] = fConst85 * fRec210[0] + fConst2 * fRec209[1];
			fRec208[0] = fConst98 * (fSlow21 - 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec209[0]))) - fTemp52)) + fConst97 * fRec208[1];
			float fTemp123 = fRec217[0] * std::pow(1e+01f, fSlow14 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec208[0])));
			fRec1[0] = fTemp123 + fTemp119 + fTemp106 + fTemp102 + fTemp74 + fTemp70 + fTemp57 + fTemp53;
			float fRec2 = fTemp123;
			float fRec3 = fTemp119;
			float fRec4 = fTemp106;
			float fRec5 = fTemp102;
			float fRec6 = fTemp74;
			float fRec7 = fTemp70;
			float fRec8 = fTemp57;
			float fRec9 = fTemp53;
			float fTemp124 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp125 = (fTemp124 > fSlow22) + (fTemp124 > fSlow1);
			float fTemp126 = std::max<float>(0.0f, ((iTemp125 == 0) ? 0.0f : ((iTemp125 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp124 + 13.5f - fSlow0) : fTemp124 + 13.0f - fSlow0)));
			float fTemp127 = ((-(0.75f * fTemp126) > fRec0[1]) ? fConst100 : fConst99);
			fRec0[0] = fRec0[1] * fTemp127 - 0.75f * fTemp126 * (1.0f - fTemp127);
			float fTemp128 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp129 = (fTemp128 > fSlow1) + (fTemp128 > fSlow24);
			float fTemp130 = std::max<float>(0.0f, ((iTemp129 == 0) ? 0.0f : ((iTemp129 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp128 + 12.5f - fSlow0) : fTemp128 + 12.0f - fSlow0)));
			float fTemp131 = ((-(0.75f * fTemp130) > fRec218[1]) ? fConst100 : fConst101);
			fRec218[0] = fRec218[1] * fTemp131 - 0.75f * fTemp130 * (1.0f - fTemp131);
			float fTemp132 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp133 = (fTemp132 > fSlow1) + (fTemp132 > fSlow24);
			float fTemp134 = std::max<float>(0.0f, ((iTemp133 == 0) ? 0.0f : ((iTemp133 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp132 + 12.5f - fSlow0) : fTemp132 + 12.0f - fSlow0)));
			float fTemp135 = ((-(0.75f * fTemp134) > fRec219[1]) ? fConst100 : fConst102);
			fRec219[0] = fRec219[1] * fTemp135 - 0.75f * fTemp134 * (1.0f - fTemp135);
			float fTemp136 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp137 = (fTemp136 > fSlow24) + (fTemp136 > fSlow25);
			float fTemp138 = std::max<float>(0.0f, ((iTemp137 == 0) ? 0.0f : ((iTemp137 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp136 + 11.5f - fSlow0) : fTemp136 + 11.0f - fSlow0)));
			float fTemp139 = ((-(0.75f * fTemp138) > fRec220[1]) ? fConst103 : fConst2);
			fRec220[0] = fRec220[1] * fTemp139 - 0.75f * fTemp138 * (1.0f - fTemp139);
			float fTemp140 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec5)));
			int iTemp141 = (fTemp140 > fSlow27) + (fTemp140 > fSlow26);
			float fTemp142 = std::max<float>(0.0f, ((iTemp141 == 0) ? 0.0f : ((iTemp141 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp140 + 8.5f - fSlow0) : fTemp140 + 8.0f - fSlow0)));
			float fTemp143 = ((-(0.75f * fTemp142) > fRec221[1]) ? fConst104 : fConst100);
			fRec221[0] = fRec221[1] * fTemp143 - 0.75f * fTemp142 * (1.0f - fTemp143);
			float fTemp144 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec4)));
			int iTemp145 = (fTemp144 > fSlow26) + (fTemp144 > fSlow28);
			float fTemp146 = std::max<float>(0.0f, ((iTemp145 == 0) ? 0.0f : ((iTemp145 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp144 + 7.5f - fSlow0) : fTemp144 + 7.0f - fSlow0)));
			float fTemp147 = ((-(0.75f * fTemp146) > fRec222[1]) ? fConst105 : fConst103);
			fRec222[0] = fRec222[1] * fTemp147 - 0.75f * fTemp146 * (1.0f - fTemp147);
			float fTemp148 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec3)));
			int iTemp149 = (fTemp148 > fSlow28) + (fTemp148 > fSlow29);
			float fTemp150 = std::max<float>(0.0f, ((iTemp149 == 0) ? 0.0f : ((iTemp149 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp148 + 6.5f - fSlow0) : fTemp148 + 6.0f - fSlow0)));
			float fTemp151 = ((-(0.75f * fTemp150) > fRec223[1]) ? fConst106 : fConst1);
			fRec223[0] = fRec223[1] * fTemp151 - 0.75f * fTemp150 * (1.0f - fTemp151);
			float fTemp152 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec2)));
			int iTemp153 = (fTemp152 > fSlow28) + (fTemp152 > fSlow29);
			float fTemp154 = std::max<float>(0.0f, ((iTemp153 == 0) ? 0.0f : ((iTemp153 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp152 + 6.5f - fSlow0) : fTemp152 + 6.0f - fSlow0)));
			float fTemp155 = ((-(0.75f * fTemp154) > fRec224[1]) ? fConst83 : fConst107);
			fRec224[0] = fRec224[1] * fTemp155 - 0.75f * fTemp154 * (1.0f - fTemp155);
			float fTemp156 = fRec2 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f))))) + fRec3 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec223[0]))) + 1.5f))))) + fRec4 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec222[0]))) + 1.5f))))) + fRec5 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec221[0]))) + 1.5f))))) + fRec6 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec220[0]))) + 1.5f))))) + fRec7 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec219[0]))) + 1.5f))))) + fRec8 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec218[0]))) + 1.5f))))) + fRec9 * std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec0[0]))) + 1.5f)))));
			fVec35[IOTA0 & 2047] = fTemp156;
			float fTemp157 = std::fabs(fTemp156);
			int iTemp158 = (fTemp157 >= fRec228[1]) | (float(iRec227[1]) >= fConst7);
			iRec227[0] = ((iTemp158) ? 0 : iRec227[1] + 1);
			fRec228[0] = ((iTemp158) ? fTemp157 : fRec228[1]);
			fRec226[0] = fConst110 * fRec228[0] + fConst109 * fRec226[1];
			float fTemp159 = std::fabs(fRec226[0]);
			fRec225[0] = std::max<float>(fTemp159, fConst111 * fRec225[1] + fConst112 * fTemp159);
			float fTemp160 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec225[0], 1.1920929e-07f));
			fVbargraph1 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp160))));
			fRec229[0] = fSlow30 + fConst44 * fRec229[1];
			output0[i0] = FAUSTFLOAT(fTemp17 * fRec229[0] + (1.0f - fRec229[0]) * fTemp160 * fVec35[(IOTA0 - iConst108) & 2047]);
			fRec71[1] = fRec71[0];
			fVec0[1] = fVec0[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fVec1[1] = fVec1[0];
			fRec73[1] = fRec73[0];
			fRec72[1] = fRec72[0];
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
			fRec77[1] = fRec77[0];
			fVec11[1] = fVec11[0];
			fRec76[1] = fRec76[0];
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
			fRec83[1] = fRec83[0];
			fRec82[1] = fRec82[0];
			fVec17[1] = fVec17[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fRec10[1] = fRec10[0];
			fRec91[1] = fRec91[0];
			fRec92[1] = fRec92[0];
			fRec93[1] = fRec93[0];
			fVec18[1] = fVec18[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fVec19[1] = fVec19[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec115[1] = fRec115[0];
			fRec116[1] = fRec116[0];
			fRec111[1] = fRec111[0];
			fRec112[1] = fRec112[0];
			fRec106[1] = fRec106[0];
			fRec107[1] = fRec107[0];
			fRec101[1] = fRec101[0];
			fRec102[1] = fRec102[0];
			fVec20[1] = fVec20[0];
			fVec21[1] = fVec21[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fVec22[1] = fVec22[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fRec125[1] = fRec125[0];
			fRec126[1] = fRec126[0];
			fRec127[1] = fRec127[0];
			fVec23[1] = fVec23[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fVec24[1] = fVec24[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fRec171[1] = fRec171[0];
			fRec172[1] = fRec172[0];
			fRec167[1] = fRec167[0];
			fRec168[1] = fRec168[0];
			fRec163[1] = fRec163[0];
			fRec164[1] = fRec164[0];
			fRec159[1] = fRec159[0];
			fRec160[1] = fRec160[0];
			fRec154[1] = fRec154[0];
			fRec155[1] = fRec155[0];
			fRec149[1] = fRec149[0];
			fRec150[1] = fRec150[0];
			fRec145[1] = fRec145[0];
			fRec146[1] = fRec146[0];
			fRec140[1] = fRec140[0];
			fRec141[1] = fRec141[0];
			fRec135[1] = fRec135[0];
			fRec136[1] = fRec136[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fVec27[1] = fVec27[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fRec181[1] = fRec181[0];
			fRec182[1] = fRec182[0];
			fRec183[1] = fRec183[0];
			fVec28[1] = fVec28[0];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fVec29[1] = fVec29[0];
			fRec178[1] = fRec178[0];
			fRec177[1] = fRec177[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			fRec174[1] = fRec174[0];
			fRec205[1] = fRec205[0];
			fRec206[1] = fRec206[0];
			fRec201[1] = fRec201[0];
			fRec202[1] = fRec202[0];
			fRec196[1] = fRec196[0];
			fRec197[1] = fRec197[0];
			fRec191[1] = fRec191[0];
			fRec192[1] = fRec192[0];
			fVec30[1] = fVec30[0];
			fVec31[1] = fVec31[0];
			fRec190[1] = fRec190[0];
			fRec189[1] = fRec189[0];
			fVec32[1] = fVec32[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fRec215[1] = fRec215[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fVec33[1] = fVec33[0];
			fRec214[1] = fRec214[0];
			fRec213[1] = fRec213[0];
			fVec34[1] = fVec34[0];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			iRec227[1] = iRec227[0];
			fRec228[1] = fRec228[0];
			fRec226[1] = fRec226[0];
			fRec225[1] = fRec225[0];
			fRec229[1] = fRec229[0];
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
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph0 = 0;
        
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
        case kParameter_pre_gain:
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
        case kParameter_vad_gate_thresh:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter_vad_smoothing_time:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[18];
            param.unit = kParameterUnits[18];
            param.symbol = kParameterSymbols[18];
            param.shortName = "";
            param.ranges.def = kParameterRanges[18].def;
            param.ranges.min = kParameterRanges[18].min;
            param.ranges.max = kParameterRanges[18].max;
            break;
        
        case kParameter_limiter_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[19];
            param.unit = kParameterUnits[19];
            param.symbol = kParameterSymbols[19];
            param.shortName = "";
            param.ranges.def = kParameterRanges[19].def;
            param.ranges.min = kParameterRanges[19].min;
            param.ranges.max = kParameterRanges[19].max;
            break;
        case kParameter_vad_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[20];
            param.unit = kParameterUnits[20];
            param.symbol = kParameterSymbols[20];
            param.shortName = "";
            param.ranges.def = kParameterRanges[20].def;
            param.ranges.min = kParameterRanges[20].min;
            param.ranges.max = kParameterRanges[20].max;
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
            return dsp->fVslider9;
        case kParameter_sb_target_spectrum_0:
            return dsp->fVslider16;
        case kParameter_sb_target_spectrum_1:
            return dsp->fVslider15;
        case kParameter_sb_target_spectrum_2:
            return dsp->fVslider14;
        case kParameter_sb_target_spectrum_3:
            return dsp->fVslider13;
        case kParameter_sb_target_spectrum_4:
            return dsp->fVslider12;
        case kParameter_sb_target_spectrum_5:
            return dsp->fVslider11;
        case kParameter_sb_target_spectrum_6:
            return dsp->fVslider10;
        case kParameter_sb_target_spectrum_7:
            return dsp->fVslider7;
        case kParameter_bypass:
            return dsp->fCheckbox0;
        case kParameter_pre_gain:
            return dsp->fVslider5;
        case kParameter_sbmb_strength:
            return dsp->fVslider8;
        case kParameter_vad_ext:
            return dsp->fVslider3;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter_leveler_scale:
            return dsp->fVslider4;
        case kParameter_mb_strength:
            return dsp->fVslider17;
        case kParameter_pre_lowcut:
            return dsp->fVslider6;
        case kParameter_vad_gate_thresh:
            return dsp->fVslider1;
        case kParameter_vad_smoothing_time:
            return dsp->fVslider2;
        case kParameter_limiter_gain:
            return dsp->fVbargraph1;
        case kParameter_vad_meter:
            return dsp->fVbargraph0;
        
        default:
            return 0.0f;
        }
    }

    void setParameterValue(const uint32_t index, const float value) override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            dsp->fVslider9 = value;
            break;
        case kParameter_sb_target_spectrum_0:
            dsp->fVslider16 = value;
            break;
        case kParameter_sb_target_spectrum_1:
            dsp->fVslider15 = value;
            break;
        case kParameter_sb_target_spectrum_2:
            dsp->fVslider14 = value;
            break;
        case kParameter_sb_target_spectrum_3:
            dsp->fVslider13 = value;
            break;
        case kParameter_sb_target_spectrum_4:
            dsp->fVslider12 = value;
            break;
        case kParameter_sb_target_spectrum_5:
            dsp->fVslider11 = value;
            break;
        case kParameter_sb_target_spectrum_6:
            dsp->fVslider10 = value;
            break;
        case kParameter_sb_target_spectrum_7:
            dsp->fVslider7 = value;
            break;
        case kParameter_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_pre_gain:
            dsp->fVslider5 = value;
            break;
        case kParameter_sbmb_strength:
            dsp->fVslider8 = value;
            break;
        case kParameter_vad_ext:
            dsp->fVslider3 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider0 = value;
            break;
        case kParameter_leveler_scale:
            dsp->fVslider4 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider17 = value;
            break;
        case kParameter_pre_lowcut:
            dsp->fVslider6 = value;
            break;
        case kParameter_vad_gate_thresh:
            dsp->fVslider1 = value;
            break;
        case kParameter_vad_smoothing_time:
            dsp->fVslider2 = value;
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
        float params[19] = {
            dsp->fVslider9,
            dsp->fVslider16,
            dsp->fVslider15,
            dsp->fVslider14,
            dsp->fVslider13,
            dsp->fVslider12,
            dsp->fVslider11,
            dsp->fVslider10,
            dsp->fVslider7,
            dsp->fCheckbox0,
            dsp->fVslider5,
            dsp->fVslider8,
            dsp->fVslider3,
            dsp->fVslider0,
            dsp->fVslider4,
            dsp->fVslider17,
            dsp->fVslider6,
            dsp->fVslider1,
            dsp->fVslider2,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider9 = params[0];
        dsp->fVslider16 = params[1];
        dsp->fVslider15 = params[2];
        dsp->fVslider14 = params[3];
        dsp->fVslider13 = params[4];
        dsp->fVslider12 = params[5];
        dsp->fVslider11 = params[6];
        dsp->fVslider10 = params[7];
        dsp->fVslider7 = params[8];
        dsp->fCheckbox0 = params[9];
        dsp->fVslider5 = params[10];
        dsp->fVslider8 = params[11];
        dsp->fVslider3 = params[12];
        dsp->fVslider0 = params[13];
        dsp->fVslider4 = params[14];
        dsp->fVslider17 = params[15];
        dsp->fVslider6 = params[16];
        dsp->fVslider1 = params[17];
        dsp->fVslider2 = params[18];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO