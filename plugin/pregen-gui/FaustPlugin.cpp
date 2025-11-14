
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: bbba_gui.dsp
// Name: bbba
// Description: 
// Author: Klaus Scheuermann
// Copyright: 
// License: GPLv3+
// Version: 0.18
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
	
	int fSampleRate;
	float fConst0;
	float fConst1;
	int iConst2;
	float fConst3;
	FAUSTFLOAT fVslider0;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	FAUSTFLOAT fVslider1;
	float fConst8;
	float fConst9;
	float fConst10;
	int iConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fVec0[2];
	float fConst20;
	float fConst21;
	float fConst22;
	float fRec79[2];
	float fRec78[2];
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fConst27;
	float fVec1[2];
	float fConst28;
	float fRec77[2];
	float fRec76[2];
	float fVec2[2];
	float fVec3[3];
	int iConst29;
	int iConst30;
	float fVec4[5];
	int iConst31;
	int iConst32;
	float fVec5[12];
	int iConst33;
	int iConst34;
	int IOTA0;
	float fVec6[32];
	int iConst35;
	int iConst36;
	float fVec7[64];
	int iConst37;
	int iConst38;
	float fVec8[128];
	int iConst39;
	int iConst40;
	float fVec9[256];
	int iConst41;
	int iConst42;
	float fVec10[512];
	int iConst43;
	float fConst44;
	float fRec71[2];
	float fRec72[2];
	float fRec69[2];
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVbargraph0;
	float fRec68[2];
	float fConst45;
	float fConst46;
	FAUSTFLOAT fVslider3;
	float fRec81[2];
	float fRec82[2];
	FAUSTFLOAT fVbargraph1;
	float fVec11[2];
	FAUSTFLOAT fVslider4;
	float fRec80[2];
	float fVec12[2];
	float fConst47;
	float fConst48;
	float fConst49;
	float fRec63[2];
	float fConst50;
	float fRec64[2];
	float fConst51;
	float fRec58[2];
	float fRec59[2];
	float fConst52;
	float fConst53;
	float fConst54;
	float fRec54[2];
	float fConst55;
	float fRec55[2];
	float fConst56;
	float fConst57;
	float fConst58;
	float fConst59;
	float fRec50[2];
	float fConst60;
	float fRec51[2];
	float fConst61;
	float fConst62;
	float fConst63;
	float fConst64;
	float fRec46[2];
	float fConst65;
	float fRec47[2];
	float fConst66;
	float fConst67;
	float fConst68;
	float fConst69;
	float fRec41[2];
	float fConst70;
	float fRec42[2];
	float fConst71;
	float fRec36[2];
	float fRec37[2];
	float fConst72;
	float fConst73;
	float fConst74;
	float fRec32[2];
	float fConst75;
	float fRec33[2];
	float fConst76;
	float fConst77;
	float fConst78;
	float fConst79;
	float fRec27[2];
	float fConst80;
	float fRec28[2];
	float fConst81;
	float fRec22[2];
	float fRec23[2];
	float fVec13[2];
	float fConst82;
	float fConst83;
	float fConst84;
	float fVec14[2];
	float fRec21[2];
	float fRec20[2];
	float fVec15[2];
	float fRec19[2];
	float fRec18[2];
	float fConst85;
	float fConst86;
	float fRec17[2];
	float fConst87;
	float fRec16[2];
	float fVec16[2];
	float fRec88[2];
	float fRec87[2];
	float fVec17[2];
	float fRec86[2];
	float fRec85[2];
	float fRec84[2];
	float fRec83[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fVslider5;
	float fConst88;
	float fRec15[2];
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVbargraph3;
	float fConst89;
	float fRec96[2];
	float fRec97[2];
	float fRec98[2];
	float fVec18[2];
	float fRec95[2];
	float fRec94[2];
	float fVec19[2];
	float fRec93[2];
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVslider8;
	float fConst90;
	float fRec89[2];
	FAUSTFLOAT fVbargraph5;
	float fConst91;
	float fRec120[2];
	float fRec121[2];
	float fRec116[2];
	float fRec117[2];
	float fRec111[2];
	float fRec112[2];
	float fRec106[2];
	float fRec107[2];
	float fVec20[2];
	float fVec21[2];
	float fRec105[2];
	float fRec104[2];
	float fVec22[2];
	float fRec103[2];
	float fRec102[2];
	float fRec101[2];
	float fRec100[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fVslider9;
	float fConst92;
	float fRec99[2];
	FAUSTFLOAT fVbargraph7;
	float fRec130[2];
	float fRec131[2];
	float fRec132[2];
	float fVec23[2];
	float fRec129[2];
	float fRec128[2];
	float fVec24[2];
	float fRec127[2];
	float fRec126[2];
	float fRec125[2];
	float fRec124[2];
	FAUSTFLOAT fVbargraph8;
	FAUSTFLOAT fVslider10;
	float fRec123[2];
	FAUSTFLOAT fVbargraph9;
	float fConst93;
	float fRec176[2];
	float fRec177[2];
	float fRec172[2];
	float fRec173[2];
	float fRec168[2];
	float fRec169[2];
	float fRec164[2];
	float fRec165[2];
	float fRec159[2];
	float fRec160[2];
	float fRec154[2];
	float fRec155[2];
	float fRec150[2];
	float fRec151[2];
	float fRec145[2];
	float fRec146[2];
	float fRec140[2];
	float fRec141[2];
	float fVec25[2];
	float fVec26[2];
	float fRec139[2];
	float fRec138[2];
	float fVec27[2];
	float fRec137[2];
	float fRec136[2];
	float fRec135[2];
	float fRec134[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fVslider11;
	float fConst94;
	float fRec133[2];
	FAUSTFLOAT fVbargraph11;
	float fConst95;
	float fRec186[2];
	float fRec187[2];
	float fRec188[2];
	float fVec28[2];
	float fRec185[2];
	float fRec184[2];
	float fVec29[2];
	float fRec183[2];
	float fRec182[2];
	float fRec181[2];
	float fRec180[2];
	FAUSTFLOAT fVbargraph12;
	FAUSTFLOAT fVslider12;
	float fConst96;
	float fRec179[2];
	FAUSTFLOAT fVbargraph13;
	float fConst97;
	float fRec210[2];
	float fRec211[2];
	float fRec206[2];
	float fRec207[2];
	float fRec201[2];
	float fRec202[2];
	float fRec196[2];
	float fRec197[2];
	float fVec30[2];
	float fVec31[2];
	float fRec195[2];
	float fRec194[2];
	float fVec32[2];
	float fRec193[2];
	float fRec192[2];
	float fRec191[2];
	float fRec190[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider13;
	float fConst98;
	float fRec189[2];
	FAUSTFLOAT fVbargraph15;
	float fConst99;
	float fRec220[2];
	float fRec221[2];
	float fRec222[2];
	float fVec33[2];
	float fRec219[2];
	float fRec218[2];
	float fVec34[2];
	float fRec217[2];
	float fRec216[2];
	float fRec215[2];
	float fRec214[2];
	FAUSTFLOAT fVbargraph16;
	FAUSTFLOAT fVslider14;
	float fConst100;
	float fRec213[2];
	FAUSTFLOAT fVbargraph17;
	float fRec6[3];
	float fConst101;
	float fConst102;
	float fRec5[2];
	FAUSTFLOAT fVslider15;
	FAUSTFLOAT fVbargraph18;
	float fConst103;
	float fRec223[2];
	FAUSTFLOAT fVbargraph19;
	float fConst104;
	float fRec224[2];
	FAUSTFLOAT fVbargraph20;
	float fConst105;
	float fRec225[2];
	FAUSTFLOAT fVbargraph21;
	float fConst106;
	float fRec226[2];
	FAUSTFLOAT fVbargraph22;
	float fConst107;
	float fRec227[2];
	FAUSTFLOAT fVbargraph23;
	float fConst108;
	float fRec228[2];
	FAUSTFLOAT fVbargraph24;
	float fConst109;
	float fRec229[2];
	FAUSTFLOAT fVbargraph25;
	float fVec35[2048];
	int iConst110;
	float fConst111;
	int iRec232[2];
	float fRec233[2];
	float fConst112;
	float fRec231[2];
	float fConst113;
	float fConst114;
	float fRec230[2];
	FAUSTFLOAT fVbargraph26;
	FAUSTFLOAT fCheckbox0;
	float fRec234[2];
	float fRec4[2];
	FAUSTFLOAT fVbargraph27;
	float fVec36[2];
	float fVec37[2];
	float fRec3[2];
	float fRec2[2];
	float fVec38[2];
	float fRec1[2];
	float fRec0[2];
	float fVec39[2];
	float fVec40[3];
	int iConst115;
	int iConst116;
	float fVec41[5];
	int iConst117;
	int iConst118;
	float fVec42[12];
	int iConst119;
	int iConst120;
	float fVec43[32];
	int iConst121;
	int iConst122;
	float fVec44[64];
	int iConst123;
	int iConst124;
	float fVec45[128];
	int iConst125;
	int iConst126;
	float fVec46[256];
	int iConst127;
	int iConst128;
	float fVec47[512];
	int iConst129;
	int iConst130;
	float fVec48[1024];
	int iConst131;
	int iConst132;
	float fVec49[2048];
	int iConst133;
	int iConst134;
	float fVec50[4096];
	int iConst135;
	int iConst136;
	float fVec51[8192];
	int iConst137;
	int iConst138;
	float fVec52[16384];
	int iConst139;
	int iConst140;
	float fVec53[32768];
	int iConst141;
	int iConst142;
	float fVec54[65536];
	int iConst143;
	int iConst144;
	float fVec55[131072];
	int iConst145;
	int iConst146;
	float fVec56[262144];
	int iConst147;
	float fConst148;
	FAUSTFLOAT fVbargraph28;
	
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
		m->declare("compile_options", "-a /tmp/tmpo0p297yl.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_mono:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/version", "1.6.0");
		m->declare("filename", "bbba_gui.dsp");
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
		m->declare("version", "0.18");
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
		fConst1 = std::rint(3.0f * fConst0);
		iConst2 = int(std::floor(0.5f * fConst1)) % 2;
		fConst3 = 2e+01f / fConst0;
		fConst4 = std::exp(-(4e+01f / fConst0));
		fConst5 = std::exp(-(1e+02f / fConst0));
		fConst6 = 0.125f * fConst0;
		fConst7 = 1.1312305e-06f * fConst0;
		fConst8 = 3.1415927f / fConst0;
		fConst9 = 0.01f * fConst0;
		fConst10 = std::rint(fConst9);
		iConst11 = int(std::floor(0.5f * fConst10)) % 2;
		fConst12 = std::tan(5283.415f / fConst0);
		fConst13 = 1.7803667f * fConst12;
		fConst14 = mydsp_faustpower2_f(fConst12);
		fConst15 = fConst14 + fConst13 + 1.5848527f;
		fConst16 = 2.0f * (fConst14 + -1.0f);
		fConst17 = fConst14 + (1.5848527f - fConst13);
		fConst18 = 1.4142135f * fConst12;
		fConst19 = fConst14 + (1.0f - fConst18);
		fConst20 = fConst14 + -1.5848527f;
		fConst21 = 2.0f * fConst20;
		fConst22 = 1.0f / (fConst14 + fConst18 + 1.0f);
		fConst23 = std::tan(119.806114f / fConst0);
		fConst24 = mydsp_faustpower2_f(fConst23);
		fConst25 = 1.0006541f * (fConst24 + -1.0f);
		fConst26 = 0.50032705f * (fConst24 + 1.0f);
		fConst27 = fConst26 - fConst23;
		fConst28 = 1.0f / (fConst23 + fConst26);
		iConst29 = int(std::floor(fConst10)) % 2;
		iConst30 = int(std::floor(0.25f * fConst10)) % 2;
		iConst31 = iConst29 + 2 * iConst11;
		iConst32 = int(std::floor(0.125f * fConst10)) % 2;
		iConst33 = iConst31 + 4 * iConst30;
		iConst34 = int(std::floor(0.0625f * fConst10)) % 2;
		iConst35 = iConst33 + 8 * iConst32;
		iConst36 = int(std::floor(0.03125f * fConst10)) % 2;
		iConst37 = iConst35 + 16 * iConst34;
		iConst38 = int(std::floor(0.015625f * fConst10)) % 2;
		iConst39 = iConst37 + 32 * iConst36;
		iConst40 = int(std::floor(0.0078125f * fConst10)) % 2;
		iConst41 = iConst39 + 64 * iConst38;
		iConst42 = int(std::floor(0.00390625f * fConst10)) % 2;
		iConst43 = iConst41 + 128 * iConst40;
		fConst44 = 1.0f / std::max<float>(fConst10, 1.1920929e-07f);
		fConst45 = 44.1f / fConst0;
		fConst46 = 1.0f - fConst45;
		fConst47 = std::tan(2513.2742f / fConst0);
		fConst48 = fConst47 * (fConst47 + 1.4142135f) + 1.0f;
		fConst49 = 2.0f / fConst48;
		fConst50 = fConst47 / fConst48;
		fConst51 = 1.0f / fConst48;
		fConst52 = std::tan(628.31854f / fConst0);
		fConst53 = fConst52 * (fConst52 + 1.4142135f) + 1.0f;
		fConst54 = 2.0f / fConst53;
		fConst55 = fConst52 / fConst53;
		fConst56 = 1.0f / fConst53;
		fConst57 = std::tan(314.15927f / fConst0);
		fConst58 = fConst57 * (fConst57 + 1.4142135f) + 1.0f;
		fConst59 = 2.0f / fConst58;
		fConst60 = fConst57 / fConst58;
		fConst61 = 1.0f / fConst58;
		fConst62 = std::tan(1256.6371f / fConst0);
		fConst63 = fConst62 * (fConst62 + 1.4142135f) + 1.0f;
		fConst64 = 2.0f / fConst63;
		fConst65 = fConst62 / fConst63;
		fConst66 = 1.0f / fConst63;
		fConst67 = std::tan(10053.097f / fConst0);
		fConst68 = fConst67 * (fConst67 + 1.4142135f) + 1.0f;
		fConst69 = 2.0f / fConst68;
		fConst70 = fConst67 / fConst68;
		fConst71 = 1.0f / fConst68;
		fConst72 = std::tan(5026.5483f / fConst0);
		fConst73 = fConst72 * (fConst72 + 1.4142135f) + 1.0f;
		fConst74 = 2.0f / fConst73;
		fConst75 = fConst72 / fConst73;
		fConst76 = 1.0f / fConst73;
		fConst77 = std::tan(20106.193f / fConst0);
		fConst78 = fConst77 * (fConst77 + 1.4142135f) + 1.0f;
		fConst79 = 2.0f / fConst78;
		fConst80 = fConst77 / fConst78;
		fConst81 = 1.0f / fConst78;
		fConst82 = 3.9810717f * fConst15;
		fConst83 = 7.9621434f * fConst20;
		fConst84 = 3.9810717f * fConst17;
		fConst85 = std::exp(-(1e+01f / fConst0));
		fConst86 = 1.0f - fConst85;
		fConst87 = 1.0f - fConst5;
		fConst88 = 1.0f - fConst4;
		fConst89 = std::exp(-fConst3);
		fConst90 = 1.0f - fConst89;
		fConst91 = std::exp(-(13.333333f / fConst0));
		fConst92 = 1.0f - fConst91;
		fConst93 = std::exp(-(8.0f / fConst0));
		fConst94 = 1.0f - fConst93;
		fConst95 = std::exp(-(6.6666665f / fConst0));
		fConst96 = 1.0f - fConst95;
		fConst97 = std::exp(-(5.714286f / fConst0));
		fConst98 = 1.0f - fConst97;
		fConst99 = std::exp(-(5.0f / fConst0));
		fConst100 = 1.0f - fConst99;
		fConst101 = std::exp(-(5e+02f / fConst0));
		fConst102 = std::exp(-(66.666664f / fConst0));
		fConst103 = std::exp(-(333.33334f / fConst0));
		fConst104 = std::exp(-(2e+02f / fConst0));
		fConst105 = std::exp(-(5e+01f / fConst0));
		fConst106 = std::exp(-(25.0f / fConst0));
		fConst107 = std::exp(-(16.666666f / fConst0));
		fConst108 = std::exp(-(12.5f / fConst0));
		fConst109 = std::exp(-(33.333332f / fConst0));
		iConst110 = int(fConst9);
		fConst111 = std::exp(-(628.31854f / fConst0));
		fConst112 = 1.0f - fConst111;
		fConst113 = std::exp(-(6.2831855f / fConst0));
		fConst114 = 1.0f - fConst113;
		iConst115 = int(std::floor(fConst1)) % 2;
		iConst116 = int(std::floor(0.25f * fConst1)) % 2;
		iConst117 = iConst115 + 2 * iConst2;
		iConst118 = int(std::floor(0.125f * fConst1)) % 2;
		iConst119 = iConst117 + 4 * iConst116;
		iConst120 = int(std::floor(0.0625f * fConst1)) % 2;
		iConst121 = iConst119 + 8 * iConst118;
		iConst122 = int(std::floor(0.03125f * fConst1)) % 2;
		iConst123 = iConst121 + 16 * iConst120;
		iConst124 = int(std::floor(0.015625f * fConst1)) % 2;
		iConst125 = iConst123 + 32 * iConst122;
		iConst126 = int(std::floor(0.0078125f * fConst1)) % 2;
		iConst127 = iConst125 + 64 * iConst124;
		iConst128 = int(std::floor(0.00390625f * fConst1)) % 2;
		iConst129 = iConst127 + 128 * iConst126;
		iConst130 = int(std::floor(0.001953125f * fConst1)) % 2;
		iConst131 = iConst129 + 256 * iConst128;
		iConst132 = int(std::floor(0.0009765625f * fConst1)) % 2;
		iConst133 = iConst131 + 512 * iConst130;
		iConst134 = int(std::floor(0.00048828125f * fConst1)) % 2;
		iConst135 = iConst133 + 1024 * iConst132;
		iConst136 = int(std::floor(0.00024414062f * fConst1)) % 2;
		iConst137 = iConst135 + 2048 * iConst134;
		iConst138 = int(std::floor(0.00012207031f * fConst1)) % 2;
		iConst139 = iConst137 + 4096 * iConst136;
		iConst140 = int(std::floor(6.1035156e-05f * fConst1)) % 2;
		iConst141 = iConst139 + 8192 * iConst138;
		iConst142 = int(std::floor(3.0517578e-05f * fConst1)) % 2;
		iConst143 = iConst141 + 16384 * iConst140;
		iConst144 = int(std::floor(1.5258789e-05f * fConst1)) % 2;
		iConst145 = iConst143 + 32768 * iConst142;
		iConst146 = int(std::floor(7.6293945e-06f * fConst1)) % 2;
		iConst147 = iConst145 + 65536 * iConst144;
		fConst148 = 1.0f / std::max<float>(fConst1, 1.1920929e-07f);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-23.0f);
		fVslider1 = FAUSTFLOAT(1.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fVslider4 = FAUSTFLOAT(42.0f);
		fVslider5 = FAUSTFLOAT(-3.0f);
		fVslider6 = FAUSTFLOAT(8e+01f);
		fVslider7 = FAUSTFLOAT(5e+01f);
		fVslider8 = FAUSTFLOAT(-7.0f);
		fVslider9 = FAUSTFLOAT(-1e+01f);
		fVslider10 = FAUSTFLOAT(-9.0f);
		fVslider11 = FAUSTFLOAT(-8.0f);
		fVslider12 = FAUSTFLOAT(-5.0f);
		fVslider13 = FAUSTFLOAT(-5.0f);
		fVslider14 = FAUSTFLOAT(-1e+01f);
		fVslider15 = FAUSTFLOAT(8e+01f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec79[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec78[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec77[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec76[l5] = 0.0f;
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
			fRec71[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec72[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec69[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec68[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec81[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec82[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fVec11[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec80[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec12[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec63[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec64[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec58[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec59[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec54[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec55[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec50[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec51[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec46[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec47[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec41[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec42[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec36[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec37[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec32[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec33[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec27[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec28[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec22[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec23[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec13[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec14[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec21[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec20[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fVec15[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec19[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec18[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec17[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec16[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fVec16[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec88[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec87[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fVec17[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec86[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec85[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec84[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec83[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec15[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec96[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec97[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec98[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fVec18[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec95[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec94[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fVec19[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec93[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec92[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec91[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec90[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec89[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec120[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec121[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec116[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec117[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec111[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec112[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec106[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec107[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec20[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec21[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec105[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec104[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec22[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec103[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec102[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec101[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec100[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec99[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec130[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec131[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec132[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec23[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec129[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec128[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec24[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec127[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec126[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec125[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec124[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec123[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec176[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec177[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec172[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec173[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec168[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec169[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec164[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec165[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec159[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec160[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec154[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec155[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec150[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec151[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec145[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec146[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec140[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec141[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fVec25[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec26[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec139[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec138[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec27[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec137[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec136[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec135[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec134[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec133[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec186[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec187[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec188[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fVec28[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec185[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec184[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fVec29[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec183[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec182[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec181[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec180[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec179[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec210[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec211[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec206[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec207[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec201[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec202[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec196[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec197[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fVec30[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec31[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec195[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec194[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fVec32[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec193[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec192[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec191[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec190[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec189[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec220[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec221[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec222[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fVec33[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec219[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec218[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fVec34[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec217[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec216[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec215[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec214[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec213[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fRec6[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec5[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec223[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec224[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec225[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec226[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec227[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec228[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec229[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2048; l183 = l183 + 1) {
			fVec35[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			iRec232[l184] = 0;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec233[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec231[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec230[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec234[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec4[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fVec36[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fVec37[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec3[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec2[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fVec38[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec1[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec0[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fVec39[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 3; l198 = l198 + 1) {
			fVec40[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 5; l199 = l199 + 1) {
			fVec41[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 12; l200 = l200 + 1) {
			fVec42[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 32; l201 = l201 + 1) {
			fVec43[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 64; l202 = l202 + 1) {
			fVec44[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 128; l203 = l203 + 1) {
			fVec45[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 256; l204 = l204 + 1) {
			fVec46[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 512; l205 = l205 + 1) {
			fVec47[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 1024; l206 = l206 + 1) {
			fVec48[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2048; l207 = l207 + 1) {
			fVec49[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 4096; l208 = l208 + 1) {
			fVec50[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 8192; l209 = l209 + 1) {
			fVec51[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 16384; l210 = l210 + 1) {
			fVec52[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 32768; l211 = l211 + 1) {
			fVec53[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 65536; l212 = l212 + 1) {
			fVec54[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 131072; l213 = l213 + 1) {
			fVec55[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 262144; l214 = l214 + 1) {
			fVec56[l214] = 0.0f;
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
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph16, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph16, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph14, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph14, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph12, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph10, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph8, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph6, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph4, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph2, "1", "");
		ui_interface->declare(&fVbargraph2, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph2, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph3, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
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
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider6, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider1, "3", "");
		ui_interface->declare(&fVslider1, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph26, "99", "");
		ui_interface->declare(&fVbargraph26, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph1, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph1, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph28, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph28, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs", &fVbargraph28, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph27, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph27, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph0, "8", "");
		ui_interface->declare(&fVbargraph0, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph0, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph0, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider2, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph25, "2", "");
		ui_interface->declare(&fVbargraph25, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph25, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph24, "2", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph24, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph23, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph22, "2", "");
		ui_interface->declare(&fVbargraph22, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph22, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph21, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph20, "2", "");
		ui_interface->declare(&fVbargraph20, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph20, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph20, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph19, "2", "");
		ui_interface->declare(&fVbargraph19, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph19, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph19, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph18, "2", "");
		ui_interface->declare(&fVbargraph18, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph18, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVslider15, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider15, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
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
		float fSlow4 = fConst45 * std::pow(1e+01f, 0.05f * float(fVslider3));
		float fSlow5 = 1.0f / std::tan(fConst8 * float(fVslider4));
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
		float fSlow26 = fConst45 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = std::tan(fConst8 * std::min<float>(fConst6, fSlow2 * (fConst7 * std::fabs(fRec69[1]) + 0.1316f)));
			float fTemp1 = fTemp0 + 2.0f;
			float fTemp2 = fTemp0 * fTemp1 + 1.0f;
			fVec0[0] = fConst19 * fRec78[1] - fConst17 * fRec6[2];
			fRec79[0] = fConst22 * (fConst21 * fRec6[2] - (fVec0[1] + fConst16 * fRec79[1]) + fConst15 * fRec6[1]);
			fRec78[0] = fRec79[0];
			fVec1[0] = 0.50032705f * fRec78[1] - fConst27 * fRec76[1];
			fRec77[0] = fConst28 * (fVec1[1] - fConst25 * fRec77[1] - 1.0006541f * fRec78[1] + 0.50032705f * fRec78[0]);
			fRec76[0] = fRec77[0];
			float fTemp3 = mydsp_faustpower2_f(fRec76[0]);
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
			float fTemp11 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow0 + fRec68[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst44 * (((iConst42) ? 0.86000985f * fVec10[(IOTA0 - iConst43) & 511] : 0.0f) + ((iConst40) ? 0.86000985f * fVec9[(IOTA0 - iConst41) & 255] : 0.0f) + ((iConst38) ? 0.86000985f * fVec8[(IOTA0 - iConst39) & 127] : 0.0f) + ((iConst36) ? 0.86000985f * fVec7[(IOTA0 - iConst37) & 63] : 0.0f) + ((iConst34) ? 0.86000985f * fVec6[(IOTA0 - iConst35) & 31] : 0.0f) + ((iConst32) ? 0.86000985f * fVec5[iConst33] : 0.0f) + ((iConst30) ? 0.86000985f * fVec4[iConst31] : 0.0f) + ((iConst29) ? 0.86000985f * fTemp3 : 0.0f) + ((iConst11) ? 0.86000985f * fVec3[iConst29] : 0.0f))))))) - (fRec71[1] * fTemp1 + fRec72[1]);
			float fTemp12 = fTemp0 * fTemp11 / fTemp2;
			fRec71[0] = fRec71[1] + 2.0f * fTemp12;
			float fTemp13 = fRec71[1] + fTemp12;
			float fTemp14 = fTemp0 * fTemp13;
			fRec72[0] = fRec72[1] + 2.0f * fTemp14;
			float fRec73 = fTemp13;
			float fRec74 = fTemp11 / fTemp2;
			float fRec75 = fRec72[1] + fTemp14;
			fRec69[0] = fRec73;
			float fRec70 = fRec75;
			float fTemp15 = fSlow3 * fRec70;
			fVbargraph0 = FAUSTFLOAT(fTemp15);
			fRec68[0] = fTemp15;
			fRec81[0] = fSlow4 + fConst46 * fRec81[1];
			float fTemp16 = float(input0[i0]);
			fRec82[0] = std::max<float>(fRec82[1] - fConst3, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp16))))));
			fVbargraph1 = FAUSTFLOAT(fRec82[0]);
			float fTemp17 = fTemp16;
			float fTemp18 = fTemp17 * fRec81[0];
			fVec11[0] = fTemp18;
			fRec80[0] = -(fSlow7 * (fSlow6 * fRec80[1] - fSlow5 * (fTemp18 - fVec11[1])));
			float fTemp19 = fRec80[0] * std::pow(1e+01f, 0.05f * fRec68[0]);
			fVec12[0] = fTemp19;
			float fTemp20 = fRec63[1] + fConst47 * (fTemp19 - fRec64[1]);
			fRec63[0] = fConst49 * fTemp20 - fRec63[1];
			float fTemp21 = fRec64[1] + fConst50 * fTemp20;
			fRec64[0] = 2.0f * fTemp21 - fRec64[1];
			float fRec65 = fTemp19;
			float fRec66 = fConst51 * fTemp20;
			float fRec67 = fTemp21;
			float fTemp22 = fRec67 + 1.4142135f * fRec66;
			float fTemp23 = fRec58[1] + fConst47 * (fRec65 - (fTemp22 + fRec59[1]));
			fRec58[0] = fConst49 * fTemp23 - fRec58[1];
			float fTemp24 = fRec59[1] + fConst50 * fTemp23;
			fRec59[0] = 2.0f * fTemp24 - fRec59[1];
			float fRec60 = fRec65 - fTemp22;
			float fRec61 = fConst51 * fTemp23;
			float fRec62 = fTemp24;
			float fTemp25 = fRec62 + 1.4142135f * fRec61;
			float fTemp26 = fRec54[1] + fConst52 * (fRec60 - (fTemp25 + fRec55[1]));
			fRec54[0] = fConst54 * fTemp26 - fRec54[1];
			float fTemp27 = fRec55[1] + fConst55 * fTemp26;
			fRec55[0] = 2.0f * fTemp27 - fRec55[1];
			float fRec56 = fRec60 - fTemp25;
			float fRec57 = fConst56 * fTemp26;
			float fTemp28 = 2.828427f * fRec57;
			float fTemp29 = fRec50[1] + fConst57 * (fRec56 - (fTemp28 + fRec51[1]));
			fRec50[0] = fConst59 * fTemp29 - fRec50[1];
			float fTemp30 = fRec51[1] + fConst60 * fTemp29;
			fRec51[0] = 2.0f * fTemp30 - fRec51[1];
			float fRec52 = fRec56 - fTemp28;
			float fRec53 = fConst61 * fTemp29;
			float fTemp31 = 2.828427f * fRec53;
			float fTemp32 = fRec46[1] + fConst62 * (fRec52 - (fTemp31 + fRec47[1]));
			fRec46[0] = fConst64 * fTemp32 - fRec46[1];
			float fTemp33 = fRec47[1] + fConst65 * fTemp32;
			fRec47[0] = 2.0f * fTemp33 - fRec47[1];
			float fRec48 = fRec52 - fTemp31;
			float fRec49 = fConst66 * fTemp32;
			float fTemp34 = 2.828427f * fRec49;
			float fTemp35 = fRec41[1] + fConst67 * (fRec48 - (fTemp34 + fRec42[1]));
			fRec41[0] = fConst69 * fTemp35 - fRec41[1];
			float fTemp36 = fRec42[1] + fConst70 * fTemp35;
			fRec42[0] = 2.0f * fTemp36 - fRec42[1];
			float fRec43 = fRec48 - fTemp34;
			float fRec44 = fConst71 * fTemp35;
			float fRec45 = fTemp36;
			float fTemp37 = fRec45 + 1.4142135f * fRec44;
			float fTemp38 = fRec36[1] + fConst67 * (fRec43 - (fTemp37 + fRec37[1]));
			fRec36[0] = fConst69 * fTemp38 - fRec36[1];
			float fTemp39 = fRec37[1] + fConst70 * fTemp38;
			fRec37[0] = 2.0f * fTemp39 - fRec37[1];
			float fRec38 = fRec43 - fTemp37;
			float fRec39 = fConst71 * fTemp38;
			float fRec40 = fTemp39;
			float fTemp40 = fRec40 + 1.4142135f * fRec39;
			float fTemp41 = fRec32[1] + fConst72 * (fRec38 - (fTemp40 + fRec33[1]));
			fRec32[0] = fConst74 * fTemp41 - fRec32[1];
			float fTemp42 = fRec33[1] + fConst75 * fTemp41;
			fRec33[0] = 2.0f * fTemp42 - fRec33[1];
			float fRec34 = fRec38 - fTemp40;
			float fRec35 = fConst76 * fTemp41;
			float fTemp43 = 2.828427f * fRec35;
			float fTemp44 = fRec27[1] + fConst77 * (fRec34 - (fTemp43 + fRec28[1]));
			fRec27[0] = fConst79 * fTemp44 - fRec27[1];
			float fTemp45 = fRec28[1] + fConst80 * fTemp44;
			fRec28[0] = 2.0f * fTemp45 - fRec28[1];
			float fRec29 = fRec34 - fTemp43;
			float fRec30 = fConst81 * fTemp44;
			float fRec31 = fTemp45;
			float fTemp46 = fRec31 + 1.4142135f * fRec30;
			float fTemp47 = fRec22[1] + fConst77 * (fRec29 - (fTemp46 + fRec23[1]));
			fRec22[0] = fConst79 * fTemp47 - fRec22[1];
			float fTemp48 = fRec23[1] + fConst80 * fTemp47;
			fRec23[0] = 2.0f * fTemp48 - fRec23[1];
			float fRec24 = fRec29 - fTemp46;
			float fRec25 = fConst81 * fTemp47;
			float fRec26 = fTemp48;
			float fTemp49 = fRec24 - (fRec26 + 1.4142135f * fRec25);
			fVec13[0] = fTemp49;
			fVec14[0] = fConst84 * fVec13[1] - fConst19 * fRec20[1];
			fRec21[0] = fConst22 * (fVec14[1] - fConst16 * fRec21[1] + fConst83 * fVec13[1] + fConst82 * fTemp49);
			fRec20[0] = fRec21[0];
			fVec15[0] = 0.50032705f * fRec20[1] - fConst27 * fRec18[1];
			fRec19[0] = fConst28 * (fVec15[1] - fConst25 * fRec19[1] - 1.0006541f * fRec20[1] + 0.50032705f * fRec20[0]);
			fRec18[0] = fRec19[0];
			float fTemp50 = std::fabs(0.92736715f * fRec18[0]);
			fRec17[0] = std::max<float>(fTemp50, fConst85 * fRec17[1] + fConst86 * fTemp50);
			fRec16[0] = fConst87 * fRec17[0] + fConst5 * fRec16[1];
			fVec16[0] = fConst19 * fRec87[1] - fConst17 * fVec12[1];
			fRec88[0] = fConst22 * (fConst21 * fVec12[1] - (fVec16[1] + fConst16 * fRec88[1]) + fConst15 * fTemp19);
			fRec87[0] = fRec88[0];
			fVec17[0] = 0.50032705f * fRec87[1] - fConst27 * fRec85[1];
			fRec86[0] = fConst28 * (fVec17[1] - fConst25 * fRec86[1] - 1.0006541f * fRec87[1] + 0.50032705f * fRec87[0]);
			fRec85[0] = fRec86[0];
			float fTemp51 = std::fabs(0.92736715f * fRec85[0]);
			fRec84[0] = std::max<float>(fTemp51, fConst85 * fRec84[1] + fConst86 * fTemp51);
			fRec83[0] = fConst87 * fRec84[0] + fConst5 * fRec83[1];
			float fTemp52 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec83[0])));
			float fTemp53 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec16[0]))));
			fVbargraph2 = FAUSTFLOAT(-fTemp53);
			fRec15[0] = fConst88 * (fSlow8 - -fTemp53) + fConst4 * fRec15[1];
			float fTemp54 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec15[0])));
			fVbargraph3 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp54)));
			float fTemp55 = fTemp49 * fTemp54;
			float fTemp56 = fRec96[1] + fConst77 * (fRec31 - fRec97[1]);
			fRec96[0] = fConst79 * fTemp56 - fRec96[1];
			float fTemp57 = fRec97[1] + fConst80 * fTemp56;
			fRec97[0] = 2.0f * fTemp57 - fRec97[1];
			fRec98[0] = fTemp57;
			fVec18[0] = fConst84 * fRec98[1] - fConst19 * fRec94[1];
			fRec95[0] = fConst22 * (fVec18[1] - fConst16 * fRec95[1] + fConst83 * fRec98[1] + fConst82 * fRec98[0]);
			fRec94[0] = fRec95[0];
			fVec19[0] = 0.50032705f * fRec94[1] - fConst27 * fRec92[1];
			fRec93[0] = fConst28 * (fVec19[1] - fConst25 * fRec93[1] - 1.0006541f * fRec94[1] + 0.50032705f * fRec94[0]);
			fRec92[0] = fRec93[0];
			float fTemp58 = std::fabs(0.92736715f * fRec92[0]);
			fRec91[0] = std::max<float>(fTemp58, fConst85 * fRec91[1] + fConst86 * fTemp58);
			fRec90[0] = fConst87 * fRec91[0] + fConst5 * fRec90[1];
			float fTemp59 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec90[0]))));
			fVbargraph4 = FAUSTFLOAT(-fTemp59);
			fRec89[0] = fConst90 * (fSlow11 - -fTemp59) + fConst89 * fRec89[1];
			float fTemp60 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec89[0])));
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp60)));
			float fTemp61 = fRec98[0] * fTemp60;
			float fTemp62 = fRec120[1] + fConst67 * (fRec45 - fRec121[1]);
			fRec120[0] = fConst69 * fTemp62 - fRec120[1];
			float fTemp63 = fRec121[1] + fConst70 * fTemp62;
			fRec121[0] = 2.0f * fTemp63 - fRec121[1];
			float fRec122 = fTemp63;
			float fTemp64 = fRec116[1] + fConst77 * (fRec122 - fRec117[1]);
			fRec116[0] = fConst79 * fTemp64 - fRec116[1];
			float fTemp65 = fRec117[1] + fConst80 * fTemp64;
			fRec117[0] = 2.0f * fTemp65 - fRec117[1];
			float fRec118 = fRec122;
			float fRec119 = fConst81 * fTemp64;
			float fTemp66 = 2.828427f * fRec119;
			float fTemp67 = fRec111[1] + fConst72 * (fRec118 - (fTemp66 + fRec112[1]));
			fRec111[0] = fConst74 * fTemp67 - fRec111[1];
			float fTemp68 = fRec112[1] + fConst75 * fTemp67;
			fRec112[0] = 2.0f * fTemp68 - fRec112[1];
			float fRec113 = fRec118 - fTemp66;
			float fRec114 = fConst76 * fTemp67;
			float fRec115 = fTemp68;
			float fTemp69 = fRec115 + 1.4142135f * fRec114;
			float fTemp70 = fRec106[1] + fConst72 * (fRec113 - (fTemp69 + fRec107[1]));
			fRec106[0] = fConst74 * fTemp70 - fRec106[1];
			float fTemp71 = fRec107[1] + fConst75 * fTemp70;
			fRec107[0] = 2.0f * fTemp71 - fRec107[1];
			float fRec108 = fRec113 - fTemp69;
			float fRec109 = fConst76 * fTemp70;
			float fRec110 = fTemp71;
			float fTemp72 = fRec108 - (fRec110 + 1.4142135f * fRec109);
			fVec20[0] = fTemp72;
			fVec21[0] = fConst84 * fVec20[1] - fConst19 * fRec104[1];
			fRec105[0] = fConst22 * (fVec21[1] - fConst16 * fRec105[1] + fConst83 * fVec20[1] + fConst82 * fTemp72);
			fRec104[0] = fRec105[0];
			fVec22[0] = 0.50032705f * fRec104[1] - fConst27 * fRec102[1];
			fRec103[0] = fConst28 * (fVec22[1] - fConst25 * fRec103[1] - 1.0006541f * fRec104[1] + 0.50032705f * fRec104[0]);
			fRec102[0] = fRec103[0];
			float fTemp73 = std::fabs(0.92736715f * fRec102[0]);
			fRec101[0] = std::max<float>(fTemp73, fConst85 * fRec101[1] + fConst86 * fTemp73);
			fRec100[0] = fConst87 * fRec101[0] + fConst5 * fRec100[1];
			float fTemp74 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec100[0]))));
			fVbargraph6 = FAUSTFLOAT(-fTemp74);
			fRec99[0] = fConst92 * (fSlow12 - -fTemp74) + fConst91 * fRec99[1];
			float fTemp75 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec99[0])));
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp75)));
			float fTemp76 = fTemp72 * fTemp75;
			float fTemp77 = fRec130[1] + fConst72 * (fRec115 - fRec131[1]);
			fRec130[0] = fConst74 * fTemp77 - fRec130[1];
			float fTemp78 = fRec131[1] + fConst75 * fTemp77;
			fRec131[0] = 2.0f * fTemp78 - fRec131[1];
			fRec132[0] = fTemp78;
			fVec23[0] = fConst84 * fRec132[1] - fConst19 * fRec128[1];
			fRec129[0] = fConst22 * (fVec23[1] - fConst16 * fRec129[1] + fConst83 * fRec132[1] + fConst82 * fRec132[0]);
			fRec128[0] = fRec129[0];
			fVec24[0] = 0.50032705f * fRec128[1] - fConst27 * fRec126[1];
			fRec127[0] = fConst28 * (fVec24[1] - fConst25 * fRec127[1] - 1.0006541f * fRec128[1] + 0.50032705f * fRec128[0]);
			fRec126[0] = fRec127[0];
			float fTemp79 = std::fabs(0.92736715f * fRec126[0]);
			fRec125[0] = std::max<float>(fTemp79, fConst85 * fRec125[1] + fConst86 * fTemp79);
			fRec124[0] = fConst87 * fRec125[0] + fConst5 * fRec124[1];
			float fTemp80 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec124[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp80);
			fRec123[0] = fConst86 * (fSlow13 - -fTemp80) + fConst85 * fRec123[1];
			float fTemp81 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec123[0])));
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp81)));
			float fTemp82 = fRec132[0] * fTemp81;
			float fTemp83 = fRec176[1] + fConst47 * (fRec67 - fRec177[1]);
			fRec176[0] = fConst49 * fTemp83 - fRec176[1];
			float fTemp84 = fRec177[1] + fConst50 * fTemp83;
			fRec177[0] = 2.0f * fTemp84 - fRec177[1];
			float fRec178 = fTemp84;
			float fTemp85 = fRec172[1] + fConst67 * (fRec178 - fRec173[1]);
			fRec172[0] = fConst69 * fTemp85 - fRec172[1];
			float fTemp86 = fRec173[1] + fConst70 * fTemp85;
			fRec173[0] = 2.0f * fTemp86 - fRec173[1];
			float fRec174 = fRec178;
			float fRec175 = fConst71 * fTemp85;
			float fTemp87 = 2.828427f * fRec175;
			float fTemp88 = fRec168[1] + fConst72 * (fRec174 - (fTemp87 + fRec169[1]));
			fRec168[0] = fConst74 * fTemp88 - fRec168[1];
			float fTemp89 = fRec169[1] + fConst75 * fTemp88;
			fRec169[0] = 2.0f * fTemp89 - fRec169[1];
			float fRec170 = fRec174 - fTemp87;
			float fRec171 = fConst76 * fTemp88;
			float fTemp90 = 2.828427f * fRec171;
			float fTemp91 = fRec164[1] + fConst77 * (fRec170 - (fTemp90 + fRec165[1]));
			fRec164[0] = fConst79 * fTemp91 - fRec164[1];
			float fTemp92 = fRec165[1] + fConst80 * fTemp91;
			fRec165[0] = 2.0f * fTemp92 - fRec165[1];
			float fRec166 = fRec170 - fTemp90;
			float fRec167 = fConst81 * fTemp91;
			float fTemp93 = 2.828427f * fRec167;
			float fTemp94 = fRec159[1] + fConst52 * (fRec166 - (fTemp93 + fRec160[1]));
			fRec159[0] = fConst54 * fTemp94 - fRec159[1];
			float fTemp95 = fRec160[1] + fConst55 * fTemp94;
			fRec160[0] = 2.0f * fTemp95 - fRec160[1];
			float fRec161 = fRec166 - fTemp93;
			float fRec162 = fConst56 * fTemp94;
			float fRec163 = fTemp95;
			float fTemp96 = fRec163 + 1.4142135f * fRec162;
			float fTemp97 = fRec154[1] + fConst52 * (fRec161 - (fTemp96 + fRec155[1]));
			fRec154[0] = fConst54 * fTemp97 - fRec154[1];
			float fTemp98 = fRec155[1] + fConst55 * fTemp97;
			fRec155[0] = 2.0f * fTemp98 - fRec155[1];
			float fRec156 = fRec161 - fTemp96;
			float fRec157 = fConst56 * fTemp97;
			float fRec158 = fTemp98;
			float fTemp99 = fRec158 + 1.4142135f * fRec157;
			float fTemp100 = fRec150[1] + fConst57 * (fRec156 - (fTemp99 + fRec151[1]));
			fRec150[0] = fConst59 * fTemp100 - fRec150[1];
			float fTemp101 = fRec151[1] + fConst60 * fTemp100;
			fRec151[0] = 2.0f * fTemp101 - fRec151[1];
			float fRec152 = fRec156 - fTemp99;
			float fRec153 = fConst61 * fTemp100;
			float fTemp102 = 2.828427f * fRec153;
			float fTemp103 = fRec145[1] + fConst62 * (fRec152 - (fTemp102 + fRec146[1]));
			fRec145[0] = fConst64 * fTemp103 - fRec145[1];
			float fTemp104 = fRec146[1] + fConst65 * fTemp103;
			fRec146[0] = 2.0f * fTemp104 - fRec146[1];
			float fRec147 = fRec152 - fTemp102;
			float fRec148 = fConst66 * fTemp103;
			float fRec149 = fTemp104;
			float fTemp105 = fRec149 + 1.4142135f * fRec148;
			float fTemp106 = fRec140[1] + fConst62 * (fRec147 - (fTemp105 + fRec141[1]));
			fRec140[0] = fConst64 * fTemp106 - fRec140[1];
			float fTemp107 = fRec141[1] + fConst65 * fTemp106;
			fRec141[0] = 2.0f * fTemp107 - fRec141[1];
			float fRec142 = fRec147 - fTemp105;
			float fRec143 = fConst66 * fTemp106;
			float fRec144 = fTemp107;
			float fTemp108 = fRec142 - (fRec144 + 1.4142135f * fRec143);
			fVec25[0] = fTemp108;
			fVec26[0] = fConst84 * fVec25[1] - fConst19 * fRec138[1];
			fRec139[0] = fConst22 * (fVec26[1] - fConst16 * fRec139[1] + fConst83 * fVec25[1] + fConst82 * fTemp108);
			fRec138[0] = fRec139[0];
			fVec27[0] = 0.50032705f * fRec138[1] - fConst27 * fRec136[1];
			fRec137[0] = fConst28 * (fVec27[1] - fConst25 * fRec137[1] - 1.0006541f * fRec138[1] + 0.50032705f * fRec138[0]);
			fRec136[0] = fRec137[0];
			float fTemp109 = std::fabs(0.92736715f * fRec136[0]);
			fRec135[0] = std::max<float>(fTemp109, fConst85 * fRec135[1] + fConst86 * fTemp109);
			fRec134[0] = fConst87 * fRec135[0] + fConst5 * fRec134[1];
			float fTemp110 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec134[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp110);
			fRec133[0] = fConst94 * (fSlow14 - -fTemp110) + fConst93 * fRec133[1];
			float fTemp111 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec133[0])));
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp111)));
			float fTemp112 = fTemp108 * fTemp111;
			float fTemp113 = fRec186[1] + fConst62 * (fRec149 - fRec187[1]);
			fRec186[0] = fConst64 * fTemp113 - fRec186[1];
			float fTemp114 = fRec187[1] + fConst65 * fTemp113;
			fRec187[0] = 2.0f * fTemp114 - fRec187[1];
			fRec188[0] = fTemp114;
			fVec28[0] = fConst84 * fRec188[1] - fConst19 * fRec184[1];
			fRec185[0] = fConst22 * (fVec28[1] - fConst16 * fRec185[1] + fConst83 * fRec188[1] + fConst82 * fRec188[0]);
			fRec184[0] = fRec185[0];
			fVec29[0] = 0.50032705f * fRec184[1] - fConst27 * fRec182[1];
			fRec183[0] = fConst28 * (fVec29[1] - fConst25 * fRec183[1] - 1.0006541f * fRec184[1] + 0.50032705f * fRec184[0]);
			fRec182[0] = fRec183[0];
			float fTemp115 = std::fabs(0.92736715f * fRec182[0]);
			fRec181[0] = std::max<float>(fTemp115, fConst85 * fRec181[1] + fConst86 * fTemp115);
			fRec180[0] = fConst87 * fRec181[0] + fConst5 * fRec180[1];
			float fTemp116 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec180[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp116);
			fRec179[0] = fConst96 * (fSlow15 - -fTemp116) + fConst95 * fRec179[1];
			float fTemp117 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec179[0])));
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp117)));
			float fTemp118 = fRec188[0] * fTemp117;
			float fTemp119 = fRec210[1] + fConst52 * (fRec163 - fRec211[1]);
			fRec210[0] = fConst54 * fTemp119 - fRec210[1];
			float fTemp120 = fRec211[1] + fConst55 * fTemp119;
			fRec211[0] = 2.0f * fTemp120 - fRec211[1];
			float fRec212 = fTemp120;
			float fTemp121 = fRec206[1] + fConst62 * (fRec212 - fRec207[1]);
			fRec206[0] = fConst64 * fTemp121 - fRec206[1];
			float fTemp122 = fRec207[1] + fConst65 * fTemp121;
			fRec207[0] = 2.0f * fTemp122 - fRec207[1];
			float fRec208 = fRec212;
			float fRec209 = fConst66 * fTemp121;
			float fTemp123 = 2.828427f * fRec209;
			float fTemp124 = fRec201[1] + fConst57 * (fRec208 - (fTemp123 + fRec202[1]));
			fRec201[0] = fConst59 * fTemp124 - fRec201[1];
			float fTemp125 = fRec202[1] + fConst60 * fTemp124;
			fRec202[0] = 2.0f * fTemp125 - fRec202[1];
			float fRec203 = fRec208 - fTemp123;
			float fRec204 = fConst61 * fTemp124;
			float fRec205 = fTemp125;
			float fTemp126 = fRec205 + 1.4142135f * fRec204;
			float fTemp127 = fRec196[1] + fConst57 * (fRec203 - (fTemp126 + fRec197[1]));
			fRec196[0] = fConst59 * fTemp127 - fRec196[1];
			float fTemp128 = fRec197[1] + fConst60 * fTemp127;
			fRec197[0] = 2.0f * fTemp128 - fRec197[1];
			float fRec198 = fRec203 - fTemp126;
			float fRec199 = fConst61 * fTemp127;
			float fRec200 = fTemp128;
			float fTemp129 = fRec198 - (fRec200 + 1.4142135f * fRec199);
			fVec30[0] = fTemp129;
			fVec31[0] = fConst84 * fVec30[1] - fConst19 * fRec194[1];
			fRec195[0] = fConst22 * (fVec31[1] - fConst16 * fRec195[1] + fConst83 * fVec30[1] + fConst82 * fTemp129);
			fRec194[0] = fRec195[0];
			fVec32[0] = 0.50032705f * fRec194[1] - fConst27 * fRec192[1];
			fRec193[0] = fConst28 * (fVec32[1] - fConst25 * fRec193[1] - 1.0006541f * fRec194[1] + 0.50032705f * fRec194[0]);
			fRec192[0] = fRec193[0];
			float fTemp130 = std::fabs(0.92736715f * fRec192[0]);
			fRec191[0] = std::max<float>(fTemp130, fConst85 * fRec191[1] + fConst86 * fTemp130);
			fRec190[0] = fConst87 * fRec191[0] + fConst5 * fRec190[1];
			float fTemp131 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec190[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp131);
			fRec189[0] = fConst98 * (fSlow16 - -fTemp131) + fConst97 * fRec189[1];
			float fTemp132 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec189[0])));
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp132)));
			float fTemp133 = fTemp129 * fTemp132;
			float fTemp134 = fRec220[1] + fConst57 * (fRec205 - fRec221[1]);
			fRec220[0] = fConst59 * fTemp134 - fRec220[1];
			float fTemp135 = fRec221[1] + fConst60 * fTemp134;
			fRec221[0] = 2.0f * fTemp135 - fRec221[1];
			fRec222[0] = fTemp135;
			fVec33[0] = fConst84 * fRec222[1] - fConst19 * fRec218[1];
			fRec219[0] = fConst22 * (fVec33[1] - fConst16 * fRec219[1] + fConst83 * fRec222[1] + fConst82 * fRec222[0]);
			fRec218[0] = fRec219[0];
			fVec34[0] = 0.50032705f * fRec218[1] - fConst27 * fRec216[1];
			fRec217[0] = fConst28 * (fVec34[1] - fConst25 * fRec217[1] - 1.0006541f * fRec218[1] + 0.50032705f * fRec218[0]);
			fRec216[0] = fRec217[0];
			float fTemp136 = std::fabs(0.92736715f * fRec216[0]);
			fRec215[0] = std::max<float>(fTemp136, fConst85 * fRec215[1] + fConst86 * fTemp136);
			fRec214[0] = fConst87 * fRec215[0] + fConst5 * fRec214[1];
			float fTemp137 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec214[0]))) - fTemp52);
			fVbargraph16 = FAUSTFLOAT(fTemp137);
			fRec213[0] = fConst100 * (fSlow17 - fTemp137) + fConst99 * fRec213[1];
			float fTemp138 = std::pow(1e+01f, fSlow10 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec213[0])));
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp138)));
			float fTemp139 = fRec222[0] * fTemp138;
			fRec6[0] = fTemp139 + fTemp133 + fTemp118 + fTemp112 + fTemp82 + fTemp76 + fTemp61 + fTemp55;
			float fRec7 = fTemp139;
			float fRec8 = fTemp133;
			float fRec9 = fTemp118;
			float fRec10 = fTemp112;
			float fRec11 = fTemp82;
			float fRec12 = fTemp76;
			float fRec13 = fTemp61;
			float fRec14 = fTemp55;
			float fTemp140 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec14)));
			int iTemp141 = (fTemp140 > fSlow18) + (fTemp140 > fSlow1);
			float fTemp142 = std::max<float>(0.0f, ((iTemp141 == 0) ? 0.0f : ((iTemp141 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp140 + 13.5f - fSlow0) : fTemp140 + 13.0f - fSlow0)));
			float fTemp143 = ((-(0.75f * fTemp142) > fRec5[1]) ? fConst102 : fConst101);
			fRec5[0] = fRec5[1] * fTemp143 - 0.75f * fTemp142 * (1.0f - fTemp143);
			float fTemp144 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec5[0]))) + 1.5f)))));
			fVbargraph18 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp144)));
			float fTemp145 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec13)));
			int iTemp146 = (fTemp145 > fSlow1) + (fTemp145 > fSlow20);
			float fTemp147 = std::max<float>(0.0f, ((iTemp146 == 0) ? 0.0f : ((iTemp146 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp145 + 12.5f - fSlow0) : fTemp145 + 12.0f - fSlow0)));
			float fTemp148 = ((-(0.75f * fTemp147) > fRec223[1]) ? fConst102 : fConst103);
			fRec223[0] = fRec223[1] * fTemp148 - 0.75f * fTemp147 * (1.0f - fTemp148);
			float fTemp149 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec223[0]))) + 1.5f)))));
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp149)));
			float fTemp150 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec12)));
			int iTemp151 = (fTemp150 > fSlow1) + (fTemp150 > fSlow20);
			float fTemp152 = std::max<float>(0.0f, ((iTemp151 == 0) ? 0.0f : ((iTemp151 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp150 + 12.5f - fSlow0) : fTemp150 + 12.0f - fSlow0)));
			float fTemp153 = ((-(0.75f * fTemp152) > fRec224[1]) ? fConst102 : fConst104);
			fRec224[0] = fRec224[1] * fTemp153 - 0.75f * fTemp152 * (1.0f - fTemp153);
			float fTemp154 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f)))));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp154)));
			float fTemp155 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec11)));
			int iTemp156 = (fTemp155 > fSlow20) + (fTemp155 > fSlow21);
			float fTemp157 = std::max<float>(0.0f, ((iTemp156 == 0) ? 0.0f : ((iTemp156 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp155 + 11.5f - fSlow0) : fTemp155 + 11.0f - fSlow0)));
			float fTemp158 = ((-(0.75f * fTemp157) > fRec225[1]) ? fConst105 : fConst5);
			fRec225[0] = fRec225[1] * fTemp158 - 0.75f * fTemp157 * (1.0f - fTemp158);
			float fTemp159 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec225[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp159)));
			float fTemp160 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp161 = (fTemp160 > fSlow23) + (fTemp160 > fSlow22);
			float fTemp162 = std::max<float>(0.0f, ((iTemp161 == 0) ? 0.0f : ((iTemp161 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp160 + 8.5f - fSlow0) : fTemp160 + 8.0f - fSlow0)));
			float fTemp163 = ((-(0.75f * fTemp162) > fRec226[1]) ? fConst106 : fConst102);
			fRec226[0] = fRec226[1] * fTemp163 - 0.75f * fTemp162 * (1.0f - fTemp163);
			float fTemp164 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec226[0]))) + 1.5f)))));
			fVbargraph22 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp164)));
			float fTemp165 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp166 = (fTemp165 > fSlow22) + (fTemp165 > fSlow24);
			float fTemp167 = std::max<float>(0.0f, ((iTemp166 == 0) ? 0.0f : ((iTemp166 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp165 + 7.5f - fSlow0) : fTemp165 + 7.0f - fSlow0)));
			float fTemp168 = ((-(0.75f * fTemp167) > fRec227[1]) ? fConst107 : fConst105);
			fRec227[0] = fRec227[1] * fTemp168 - 0.75f * fTemp167 * (1.0f - fTemp168);
			float fTemp169 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec227[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp169)));
			float fTemp170 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp171 = (fTemp170 > fSlow24) + (fTemp170 > fSlow25);
			float fTemp172 = std::max<float>(0.0f, ((iTemp171 == 0) ? 0.0f : ((iTemp171 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp170 + 6.5f - fSlow0) : fTemp170 + 6.0f - fSlow0)));
			float fTemp173 = ((-(0.75f * fTemp172) > fRec228[1]) ? fConst108 : fConst4);
			fRec228[0] = fRec228[1] * fTemp173 - 0.75f * fTemp172 * (1.0f - fTemp173);
			float fTemp174 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec228[0]))) + 1.5f)))));
			fVbargraph24 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp174)));
			float fTemp175 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp176 = (fTemp175 > fSlow24) + (fTemp175 > fSlow25);
			float fTemp177 = std::max<float>(0.0f, ((iTemp176 == 0) ? 0.0f : ((iTemp176 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp175 + 6.5f - fSlow0) : fTemp175 + 6.0f - fSlow0)));
			float fTemp178 = ((-(0.75f * fTemp177) > fRec229[1]) ? fConst85 : fConst109);
			fRec229[0] = fRec229[1] * fTemp178 - 0.75f * fTemp177 * (1.0f - fTemp178);
			float fTemp179 = std::pow(1e+01f, fSlow19 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec229[0]))) + 1.5f)))));
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp179)));
			float fTemp180 = fRec7 * fTemp179 + fRec8 * fTemp174 + fRec9 * fTemp169 + fRec10 * fTemp164 + fRec11 * fTemp159 + fRec12 * fTemp154 + fRec13 * fTemp149 + fRec14 * fTemp144;
			fVec35[IOTA0 & 2047] = fTemp180;
			float fTemp181 = std::fabs(fTemp180);
			int iTemp182 = (fTemp181 >= fRec233[1]) | (float(iRec232[1]) >= fConst9);
			iRec232[0] = ((iTemp182) ? 0 : iRec232[1] + 1);
			fRec233[0] = ((iTemp182) ? fTemp181 : fRec233[1]);
			fRec231[0] = fConst112 * fRec233[0] + fConst111 * fRec231[1];
			float fTemp183 = std::fabs(fRec231[0]);
			fRec230[0] = std::max<float>(fTemp183, fConst113 * fRec230[1] + fConst114 * fTemp183);
			float fTemp184 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec230[0], 1.1920929e-07f));
			fVbargraph26 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp184))));
			fRec234[0] = fSlow26 + fConst46 * fRec234[1];
			float fTemp185 = fTemp17 * fRec234[0] + (1.0f - fRec234[0]) * fTemp184 * fVec35[(IOTA0 - iConst110) & 2047];
			fRec4[0] = std::max<float>(fRec4[1] - fConst3, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp185))))));
			fVbargraph27 = FAUSTFLOAT(fRec4[0]);
			float fTemp186 = fTemp185;
			fVec36[0] = fTemp186;
			fVec37[0] = fConst19 * fRec2[1] - fConst17 * fVec36[1];
			fRec3[0] = fConst22 * (fConst21 * fVec36[1] - (fVec37[1] + fConst16 * fRec3[1]) + fConst15 * fTemp186);
			fRec2[0] = fRec3[0];
			fVec38[0] = 0.50032705f * fRec2[1] - fConst27 * fRec0[1];
			fRec1[0] = fConst28 * (fVec38[1] - fConst25 * fRec1[1] - 1.0006541f * fRec2[1] + 0.50032705f * fRec2[0]);
			fRec0[0] = fRec1[0];
			float fTemp187 = mydsp_faustpower2_f(fRec0[0]);
			fVec39[0] = fTemp187;
			float fTemp188 = fTemp187 + fVec39[1];
			fVec40[0] = fTemp188;
			float fTemp189 = fTemp188 + fVec40[2];
			fVec41[0] = fTemp189;
			float fTemp190 = fTemp189 + fVec41[4];
			fVec42[0] = fTemp190;
			float fTemp191 = fTemp190 + fVec42[8];
			fVec43[IOTA0 & 31] = fTemp191;
			float fTemp192 = fTemp191 + fVec43[(IOTA0 - 16) & 31];
			fVec44[IOTA0 & 63] = fTemp192;
			float fTemp193 = fTemp192 + fVec44[(IOTA0 - 32) & 63];
			fVec45[IOTA0 & 127] = fTemp193;
			float fTemp194 = fTemp193 + fVec45[(IOTA0 - 64) & 127];
			fVec46[IOTA0 & 255] = fTemp194;
			float fTemp195 = fTemp194 + fVec46[(IOTA0 - 128) & 255];
			fVec47[IOTA0 & 511] = fTemp195;
			float fTemp196 = fTemp195 + fVec47[(IOTA0 - 256) & 511];
			fVec48[IOTA0 & 1023] = fTemp196;
			float fTemp197 = fTemp196 + fVec48[(IOTA0 - 512) & 1023];
			fVec49[IOTA0 & 2047] = fTemp197;
			float fTemp198 = fTemp197 + fVec49[(IOTA0 - 1024) & 2047];
			fVec50[IOTA0 & 4095] = fTemp198;
			float fTemp199 = fTemp198 + fVec50[(IOTA0 - 2048) & 4095];
			fVec51[IOTA0 & 8191] = fTemp199;
			float fTemp200 = fTemp199 + fVec51[(IOTA0 - 4096) & 8191];
			fVec52[IOTA0 & 16383] = fTemp200;
			float fTemp201 = fTemp200 + fVec52[(IOTA0 - 8192) & 16383];
			fVec53[IOTA0 & 32767] = fTemp201;
			float fTemp202 = fTemp201 + fVec53[(IOTA0 - 16384) & 32767];
			fVec54[IOTA0 & 65535] = fTemp202;
			float fTemp203 = fTemp202 + fVec54[(IOTA0 - 32768) & 65535];
			fVec55[IOTA0 & 131071] = fTemp203;
			fVec56[IOTA0 & 262143] = fTemp203 + fVec55[(IOTA0 - 65536) & 131071];
			fVbargraph28 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst148 * (((iConst146) ? 0.86000985f * fVec56[(IOTA0 - iConst147) & 262143] : 0.0f) + ((iConst144) ? 0.86000985f * fVec55[(IOTA0 - iConst145) & 131071] : 0.0f) + ((iConst142) ? 0.86000985f * fVec54[(IOTA0 - iConst143) & 65535] : 0.0f) + ((iConst140) ? 0.86000985f * fVec53[(IOTA0 - iConst141) & 32767] : 0.0f) + ((iConst138) ? 0.86000985f * fVec52[(IOTA0 - iConst139) & 16383] : 0.0f) + ((iConst136) ? 0.86000985f * fVec51[(IOTA0 - iConst137) & 8191] : 0.0f) + ((iConst134) ? 0.86000985f * fVec50[(IOTA0 - iConst135) & 4095] : 0.0f) + ((iConst132) ? 0.86000985f * fVec49[(IOTA0 - iConst133) & 2047] : 0.0f) + ((iConst130) ? 0.86000985f * fVec48[(IOTA0 - iConst131) & 1023] : 0.0f) + ((iConst128) ? 0.86000985f * fVec47[(IOTA0 - iConst129) & 511] : 0.0f) + ((iConst126) ? 0.86000985f * fVec46[(IOTA0 - iConst127) & 255] : 0.0f) + ((iConst124) ? 0.86000985f * fVec45[(IOTA0 - iConst125) & 127] : 0.0f) + ((iConst122) ? 0.86000985f * fVec44[(IOTA0 - iConst123) & 63] : 0.0f) + ((iConst120) ? 0.86000985f * fVec43[(IOTA0 - iConst121) & 31] : 0.0f) + ((iConst118) ? 0.86000985f * fVec42[iConst119] : 0.0f) + ((iConst116) ? 0.86000985f * fVec41[iConst117] : 0.0f) + ((iConst115) ? 0.86000985f * fTemp187 : 0.0f) + ((iConst2) ? 0.86000985f * fVec40[iConst115] : 0.0f)))) + -0.691f);
			output0[i0] = FAUSTFLOAT(fTemp186);
			fVec0[1] = fVec0[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fVec1[1] = fVec1[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
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
			fRec71[1] = fRec71[0];
			fRec72[1] = fRec72[0];
			fRec69[1] = fRec69[0];
			fRec68[1] = fRec68[0];
			fRec81[1] = fRec81[0];
			fRec82[1] = fRec82[0];
			fVec11[1] = fVec11[0];
			fRec80[1] = fRec80[0];
			fVec12[1] = fVec12[0];
			fRec63[1] = fRec63[0];
			fRec64[1] = fRec64[0];
			fRec58[1] = fRec58[0];
			fRec59[1] = fRec59[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fRec50[1] = fRec50[0];
			fRec51[1] = fRec51[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
			fRec36[1] = fRec36[0];
			fRec37[1] = fRec37[0];
			fRec32[1] = fRec32[0];
			fRec33[1] = fRec33[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec22[1] = fRec22[0];
			fRec23[1] = fRec23[0];
			fVec13[1] = fVec13[0];
			fVec14[1] = fVec14[0];
			fRec21[1] = fRec21[0];
			fRec20[1] = fRec20[0];
			fVec15[1] = fVec15[0];
			fRec19[1] = fRec19[0];
			fRec18[1] = fRec18[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
			fVec16[1] = fVec16[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fVec17[1] = fVec17[0];
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fRec15[1] = fRec15[0];
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
			fRec98[1] = fRec98[0];
			fVec18[1] = fVec18[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fVec19[1] = fVec19[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
			fRec116[1] = fRec116[0];
			fRec117[1] = fRec117[0];
			fRec111[1] = fRec111[0];
			fRec112[1] = fRec112[0];
			fRec106[1] = fRec106[0];
			fRec107[1] = fRec107[0];
			fVec20[1] = fVec20[0];
			fVec21[1] = fVec21[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fVec22[1] = fVec22[0];
			fRec103[1] = fRec103[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fRec132[1] = fRec132[0];
			fVec23[1] = fVec23[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fVec24[1] = fVec24[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fRec172[1] = fRec172[0];
			fRec173[1] = fRec173[0];
			fRec168[1] = fRec168[0];
			fRec169[1] = fRec169[0];
			fRec164[1] = fRec164[0];
			fRec165[1] = fRec165[0];
			fRec159[1] = fRec159[0];
			fRec160[1] = fRec160[0];
			fRec154[1] = fRec154[0];
			fRec155[1] = fRec155[0];
			fRec150[1] = fRec150[0];
			fRec151[1] = fRec151[0];
			fRec145[1] = fRec145[0];
			fRec146[1] = fRec146[0];
			fRec140[1] = fRec140[0];
			fRec141[1] = fRec141[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec139[1] = fRec139[0];
			fRec138[1] = fRec138[0];
			fVec27[1] = fVec27[0];
			fRec137[1] = fRec137[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fRec186[1] = fRec186[0];
			fRec187[1] = fRec187[0];
			fRec188[1] = fRec188[0];
			fVec28[1] = fVec28[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fVec29[1] = fVec29[0];
			fRec183[1] = fRec183[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fRec210[1] = fRec210[0];
			fRec211[1] = fRec211[0];
			fRec206[1] = fRec206[0];
			fRec207[1] = fRec207[0];
			fRec201[1] = fRec201[0];
			fRec202[1] = fRec202[0];
			fRec196[1] = fRec196[0];
			fRec197[1] = fRec197[0];
			fVec30[1] = fVec30[0];
			fVec31[1] = fVec31[0];
			fRec195[1] = fRec195[0];
			fRec194[1] = fRec194[0];
			fVec32[1] = fVec32[0];
			fRec193[1] = fRec193[0];
			fRec192[1] = fRec192[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			fRec189[1] = fRec189[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fVec33[1] = fVec33[0];
			fRec219[1] = fRec219[0];
			fRec218[1] = fRec218[0];
			fVec34[1] = fVec34[0];
			fRec217[1] = fRec217[0];
			fRec216[1] = fRec216[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			fRec213[1] = fRec213[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
			iRec232[1] = iRec232[0];
			fRec233[1] = fRec233[0];
			fRec231[1] = fRec231[0];
			fRec230[1] = fRec230[0];
			fRec234[1] = fRec234[0];
			fRec4[1] = fRec4[0];
			fVec36[1] = fVec36[0];
			fVec37[1] = fVec37[0];
			fRec3[1] = fRec3[0];
			fRec2[1] = fRec2[0];
			fVec38[1] = fVec38[0];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fVec39[1] = fVec39[0];
			fVec40[2] = fVec40[1];
			fVec40[1] = fVec40[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec41[j2] = fVec41[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec42[j3] = fVec42[j3 - 1];
			}
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
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph18 = 0;
        
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
        
        case kParameter_sb_meter__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter_sb_meter__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[18];
            param.unit = kParameterUnits[18];
            param.symbol = kParameterSymbols[18];
            param.shortName = "";
            param.ranges.def = kParameterRanges[18].def;
            param.ranges.min = kParameterRanges[18].min;
            param.ranges.max = kParameterRanges[18].max;
            break;
        case kParameter_sb_meter__2:
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
        case kParameter_sb_meter__3:
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
        case kParameter_sb_meter__4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[21];
            param.unit = kParameterUnits[21];
            param.symbol = kParameterSymbols[21];
            param.shortName = "";
            param.ranges.def = kParameterRanges[21].def;
            param.ranges.min = kParameterRanges[21].min;
            param.ranges.max = kParameterRanges[21].max;
            break;
        case kParameter_sb_meter__5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[22];
            param.unit = kParameterUnits[22];
            param.symbol = kParameterSymbols[22];
            param.shortName = "";
            param.ranges.def = kParameterRanges[22].def;
            param.ranges.min = kParameterRanges[22].min;
            param.ranges.max = kParameterRanges[22].max;
            break;
        case kParameter_sb_meter__6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[23];
            param.unit = kParameterUnits[23];
            param.symbol = kParameterSymbols[23];
            param.shortName = "";
            param.ranges.def = kParameterRanges[23].def;
            param.ranges.min = kParameterRanges[23].min;
            param.ranges.max = kParameterRanges[23].max;
            break;
        case kParameter_sb_meter__7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[24];
            param.unit = kParameterUnits[24];
            param.symbol = kParameterSymbols[24];
            param.shortName = "";
            param.ranges.def = kParameterRanges[24].def;
            param.ranges.min = kParameterRanges[24].min;
            param.ranges.max = kParameterRanges[24].max;
            break;
        case kParameter_sb_gain__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[25];
            param.unit = kParameterUnits[25];
            param.symbol = kParameterSymbols[25];
            param.shortName = "";
            param.ranges.def = kParameterRanges[25].def;
            param.ranges.min = kParameterRanges[25].min;
            param.ranges.max = kParameterRanges[25].max;
            break;
        case kParameter_sb_gain__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[26];
            param.unit = kParameterUnits[26];
            param.symbol = kParameterSymbols[26];
            param.shortName = "";
            param.ranges.def = kParameterRanges[26].def;
            param.ranges.min = kParameterRanges[26].min;
            param.ranges.max = kParameterRanges[26].max;
            break;
        case kParameter_sb_gain__2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[27];
            param.unit = kParameterUnits[27];
            param.symbol = kParameterSymbols[27];
            param.shortName = "";
            param.ranges.def = kParameterRanges[27].def;
            param.ranges.min = kParameterRanges[27].min;
            param.ranges.max = kParameterRanges[27].max;
            break;
        case kParameter_sb_gain__3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[28];
            param.unit = kParameterUnits[28];
            param.symbol = kParameterSymbols[28];
            param.shortName = "";
            param.ranges.def = kParameterRanges[28].def;
            param.ranges.min = kParameterRanges[28].min;
            param.ranges.max = kParameterRanges[28].max;
            break;
        case kParameter_sb_gain__4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[29];
            param.unit = kParameterUnits[29];
            param.symbol = kParameterSymbols[29];
            param.shortName = "";
            param.ranges.def = kParameterRanges[29].def;
            param.ranges.min = kParameterRanges[29].min;
            param.ranges.max = kParameterRanges[29].max;
            break;
        case kParameter_sb_gain__5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[30];
            param.unit = kParameterUnits[30];
            param.symbol = kParameterSymbols[30];
            param.shortName = "";
            param.ranges.def = kParameterRanges[30].def;
            param.ranges.min = kParameterRanges[30].min;
            param.ranges.max = kParameterRanges[30].max;
            break;
        case kParameter_sb_gain__6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[31];
            param.unit = kParameterUnits[31];
            param.symbol = kParameterSymbols[31];
            param.shortName = "";
            param.ranges.def = kParameterRanges[31].def;
            param.ranges.min = kParameterRanges[31].min;
            param.ranges.max = kParameterRanges[31].max;
            break;
        case kParameter_sb_gain__7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[32];
            param.unit = kParameterUnits[32];
            param.symbol = kParameterSymbols[32];
            param.shortName = "";
            param.ranges.def = kParameterRanges[32].def;
            param.ranges.min = kParameterRanges[32].min;
            param.ranges.max = kParameterRanges[32].max;
            break;
        case kParameter_limiter_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[33];
            param.unit = kParameterUnits[33];
            param.symbol = kParameterSymbols[33];
            param.shortName = "";
            param.ranges.def = kParameterRanges[33].def;
            param.ranges.min = kParameterRanges[33].min;
            param.ranges.max = kParameterRanges[33].max;
            break;
        case kParameter_input_peak_channel_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[34];
            param.unit = kParameterUnits[34];
            param.symbol = kParameterSymbols[34];
            param.shortName = "";
            param.ranges.def = kParameterRanges[34].def;
            param.ranges.min = kParameterRanges[34].min;
            param.ranges.max = kParameterRanges[34].max;
            break;
        case kParameter_lufs_out_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[35];
            param.unit = kParameterUnits[35];
            param.symbol = kParameterSymbols[35];
            param.shortName = "";
            param.ranges.def = kParameterRanges[35].def;
            param.ranges.min = kParameterRanges[35].min;
            param.ranges.max = kParameterRanges[35].max;
            break;
        case kParameter_output_peak_channel_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[36];
            param.unit = kParameterUnits[36];
            param.symbol = kParameterSymbols[36];
            param.shortName = "";
            param.ranges.def = kParameterRanges[36].def;
            param.ranges.min = kParameterRanges[36].min;
            param.ranges.max = kParameterRanges[36].max;
            break;
        case kParameter_leveler_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[37];
            param.unit = kParameterUnits[37];
            param.symbol = kParameterSymbols[37];
            param.shortName = "";
            param.ranges.def = kParameterRanges[37].def;
            param.ranges.min = kParameterRanges[37].min;
            param.ranges.max = kParameterRanges[37].max;
            break;
        case kParameter_mb_comp_gain_0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[38];
            param.unit = kParameterUnits[38];
            param.symbol = kParameterSymbols[38];
            param.shortName = "";
            param.ranges.def = kParameterRanges[38].def;
            param.ranges.min = kParameterRanges[38].min;
            param.ranges.max = kParameterRanges[38].max;
            break;
        case kParameter_mb_comp_gain_1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[39];
            param.unit = kParameterUnits[39];
            param.symbol = kParameterSymbols[39];
            param.shortName = "";
            param.ranges.def = kParameterRanges[39].def;
            param.ranges.min = kParameterRanges[39].min;
            param.ranges.max = kParameterRanges[39].max;
            break;
        case kParameter_mb_comp_gain_2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[40];
            param.unit = kParameterUnits[40];
            param.symbol = kParameterSymbols[40];
            param.shortName = "";
            param.ranges.def = kParameterRanges[40].def;
            param.ranges.min = kParameterRanges[40].min;
            param.ranges.max = kParameterRanges[40].max;
            break;
        case kParameter_mb_comp_gain_3:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[41];
            param.unit = kParameterUnits[41];
            param.symbol = kParameterSymbols[41];
            param.shortName = "";
            param.ranges.def = kParameterRanges[41].def;
            param.ranges.min = kParameterRanges[41].min;
            param.ranges.max = kParameterRanges[41].max;
            break;
        case kParameter_mb_comp_gain_4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[42];
            param.unit = kParameterUnits[42];
            param.symbol = kParameterSymbols[42];
            param.shortName = "";
            param.ranges.def = kParameterRanges[42].def;
            param.ranges.min = kParameterRanges[42].min;
            param.ranges.max = kParameterRanges[42].max;
            break;
        case kParameter_mb_comp_gain_5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[43];
            param.unit = kParameterUnits[43];
            param.symbol = kParameterSymbols[43];
            param.shortName = "";
            param.ranges.def = kParameterRanges[43].def;
            param.ranges.min = kParameterRanges[43].min;
            param.ranges.max = kParameterRanges[43].max;
            break;
        case kParameter_mb_comp_gain_6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[44];
            param.unit = kParameterUnits[44];
            param.symbol = kParameterSymbols[44];
            param.shortName = "";
            param.ranges.def = kParameterRanges[44].def;
            param.ranges.min = kParameterRanges[44].min;
            param.ranges.max = kParameterRanges[44].max;
            break;
        case kParameter_mb_comp_gain_7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[45];
            param.unit = kParameterUnits[45];
            param.symbol = kParameterSymbols[45];
            param.shortName = "";
            param.ranges.def = kParameterRanges[45].def;
            param.ranges.min = kParameterRanges[45].min;
            param.ranges.max = kParameterRanges[45].max;
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
        case kParameter_sb_meter__0:
            return dsp->fVbargraph16;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph14;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph12;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph10;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph8;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph6;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph4;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph2;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph17;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph15;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph13;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph11;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph9;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph7;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph5;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph3;
        case kParameter_limiter_gain:
            return dsp->fVbargraph26;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph1;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph28;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph27;
        case kParameter_leveler_gain:
            return dsp->fVbargraph0;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph25;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph24;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph23;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph22;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph21;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph20;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph19;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph18;
        
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