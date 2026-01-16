
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
// Version: 0.24
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
	int iConst1;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	float fConst6;
	FAUSTFLOAT fVslider3;
	float fRec72[2];
	FAUSTFLOAT fVbargraph0;
	float fConst7;
	float fConst8;
	float fConst9;
	int iConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fVec0[2];
	float fConst19;
	float fConst20;
	float fConst21;
	float fRec76[2];
	float fRec75[2];
	float fConst22;
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fVec1[2];
	float fConst27;
	float fRec74[2];
	float fRec73[2];
	float fVec2[2];
	float fVec3[3];
	int iConst28;
	int iConst29;
	float fVec4[5];
	int iConst30;
	int iConst31;
	float fVec5[12];
	int iConst32;
	int iConst33;
	int IOTA0;
	float fVec6[32];
	int iConst34;
	int iConst35;
	float fVec7[64];
	int iConst36;
	int iConst37;
	float fVec8[128];
	int iConst38;
	int iConst39;
	float fVec9[256];
	int iConst40;
	int iConst41;
	float fVec10[512];
	int iConst42;
	float fConst43;
	float fRec67[2];
	float fRec68[2];
	float fRec65[2];
	FAUSTFLOAT fVslider4;
	float fRec64[2];
	float fConst44;
	float fConst45;
	FAUSTFLOAT fVslider5;
	float fRec78[2];
	float fVec11[2];
	FAUSTFLOAT fVslider6;
	float fRec77[2];
	float fVec12[2];
	float fConst46;
	float fConst47;
	float fConst48;
	float fRec59[2];
	float fConst49;
	float fRec60[2];
	float fConst50;
	float fRec54[2];
	float fRec55[2];
	float fConst51;
	float fConst52;
	float fConst53;
	float fRec50[2];
	float fConst54;
	float fRec51[2];
	float fConst55;
	float fConst56;
	float fConst57;
	float fConst58;
	float fRec46[2];
	float fConst59;
	float fRec47[2];
	float fConst60;
	float fConst61;
	float fConst62;
	float fConst63;
	float fRec42[2];
	float fConst64;
	float fRec43[2];
	float fConst65;
	float fConst66;
	float fConst67;
	float fConst68;
	float fRec37[2];
	float fConst69;
	float fRec38[2];
	float fConst70;
	float fRec32[2];
	float fRec33[2];
	float fConst71;
	float fConst72;
	float fConst73;
	float fRec28[2];
	float fConst74;
	float fRec29[2];
	float fConst75;
	float fConst76;
	float fConst77;
	float fConst78;
	float fRec23[2];
	float fConst79;
	float fRec24[2];
	float fConst80;
	float fRec18[2];
	float fRec19[2];
	float fVec13[2];
	float fConst81;
	float fConst82;
	float fConst83;
	float fVec14[2];
	float fRec17[2];
	float fRec16[2];
	float fVec15[2];
	float fRec15[2];
	float fRec14[2];
	float fConst84;
	float fConst85;
	float fRec13[2];
	float fConst86;
	float fRec12[2];
	float fVec16[2];
	float fRec84[2];
	float fRec83[2];
	float fVec17[2];
	float fRec82[2];
	float fRec81[2];
	float fRec80[2];
	float fRec79[2];
	FAUSTFLOAT fVslider7;
	float fConst87;
	float fRec11[2];
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	float fConst88;
	float fRec92[2];
	float fRec93[2];
	float fRec94[2];
	float fVec18[2];
	float fRec91[2];
	float fRec90[2];
	float fVec19[2];
	float fRec89[2];
	float fRec88[2];
	float fRec87[2];
	float fRec86[2];
	FAUSTFLOAT fVslider10;
	float fConst89;
	float fRec85[2];
	float fConst90;
	float fRec116[2];
	float fRec117[2];
	float fRec112[2];
	float fRec113[2];
	float fRec107[2];
	float fRec108[2];
	float fRec102[2];
	float fRec103[2];
	float fVec20[2];
	float fVec21[2];
	float fRec101[2];
	float fRec100[2];
	float fVec22[2];
	float fRec99[2];
	float fRec98[2];
	float fRec97[2];
	float fRec96[2];
	FAUSTFLOAT fVslider11;
	float fConst91;
	float fRec95[2];
	float fRec126[2];
	float fRec127[2];
	float fRec128[2];
	float fVec23[2];
	float fRec125[2];
	float fRec124[2];
	float fVec24[2];
	float fRec123[2];
	float fRec122[2];
	float fRec121[2];
	float fRec120[2];
	FAUSTFLOAT fVslider12;
	float fRec119[2];
	float fConst92;
	float fRec172[2];
	float fRec173[2];
	float fRec168[2];
	float fRec169[2];
	float fRec164[2];
	float fRec165[2];
	float fRec160[2];
	float fRec161[2];
	float fRec155[2];
	float fRec156[2];
	float fRec150[2];
	float fRec151[2];
	float fRec146[2];
	float fRec147[2];
	float fRec141[2];
	float fRec142[2];
	float fRec136[2];
	float fRec137[2];
	float fVec25[2];
	float fVec26[2];
	float fRec135[2];
	float fRec134[2];
	float fVec27[2];
	float fRec133[2];
	float fRec132[2];
	float fRec131[2];
	float fRec130[2];
	FAUSTFLOAT fVslider13;
	float fConst93;
	float fRec129[2];
	float fConst94;
	float fRec182[2];
	float fRec183[2];
	float fRec184[2];
	float fVec28[2];
	float fRec181[2];
	float fRec180[2];
	float fVec29[2];
	float fRec179[2];
	float fRec178[2];
	float fRec177[2];
	float fRec176[2];
	FAUSTFLOAT fVslider14;
	float fConst95;
	float fRec175[2];
	float fConst96;
	float fRec206[2];
	float fRec207[2];
	float fRec202[2];
	float fRec203[2];
	float fRec197[2];
	float fRec198[2];
	float fRec192[2];
	float fRec193[2];
	float fVec30[2];
	float fVec31[2];
	float fRec191[2];
	float fRec190[2];
	float fVec32[2];
	float fRec189[2];
	float fRec188[2];
	float fRec187[2];
	float fRec186[2];
	FAUSTFLOAT fVslider15;
	float fConst97;
	float fRec185[2];
	float fConst98;
	float fRec216[2];
	float fRec217[2];
	float fRec218[2];
	float fVec33[2];
	float fRec215[2];
	float fRec214[2];
	float fVec34[2];
	float fRec213[2];
	float fRec212[2];
	float fRec211[2];
	float fRec210[2];
	FAUSTFLOAT fVslider16;
	float fConst99;
	float fRec209[2];
	float fRec2[3];
	float fConst100;
	float fConst101;
	float fRec1[2];
	FAUSTFLOAT fVslider17;
	float fVec35[2];
	int iConst102;
	float fVec36[3];
	int iConst103;
	float fVec37[5];
	int iConst104;
	int iConst105;
	float fVec38[12];
	int iConst106;
	int iConst107;
	float fVec39[32];
	int iConst108;
	int iConst109;
	float fVec40[64];
	int iConst110;
	int iConst111;
	float fVec41[128];
	int iConst112;
	int iConst113;
	float fVec42[256];
	int iConst114;
	int iConst115;
	float fVec43[512];
	int iConst116;
	int iConst117;
	float fVec44[512];
	int iConst118;
	float fRec0[2];
	float fConst119;
	float fRec220[2];
	float fVec45[2];
	float fVec46[3];
	float fVec47[5];
	float fVec48[12];
	float fVec49[32];
	float fVec50[64];
	float fVec51[128];
	float fVec52[256];
	float fVec53[512];
	float fVec54[512];
	float fRec219[2];
	float fConst120;
	float fRec222[2];
	float fVec55[2];
	float fVec56[3];
	float fVec57[5];
	float fVec58[12];
	float fVec59[32];
	float fVec60[64];
	float fVec61[128];
	float fVec62[256];
	float fVec63[512];
	float fVec64[512];
	float fRec221[2];
	float fConst121;
	float fRec224[2];
	float fVec65[2];
	float fVec66[3];
	float fVec67[5];
	float fVec68[12];
	float fVec69[32];
	float fVec70[64];
	float fVec71[128];
	float fVec72[256];
	float fVec73[512];
	float fVec74[512];
	float fRec223[2];
	float fConst122;
	float fRec226[2];
	float fVec75[2];
	float fVec76[3];
	float fVec77[5];
	float fVec78[12];
	float fVec79[32];
	float fVec80[64];
	float fVec81[128];
	float fVec82[256];
	float fVec83[512];
	float fVec84[512];
	float fRec225[2];
	float fConst123;
	float fRec228[2];
	float fVec85[2];
	float fVec86[3];
	float fVec87[5];
	float fVec88[12];
	float fVec89[32];
	float fVec90[64];
	float fVec91[128];
	float fVec92[256];
	float fVec93[512];
	float fVec94[512];
	float fRec227[2];
	float fConst124;
	float fRec230[2];
	float fVec95[2];
	float fVec96[3];
	float fVec97[5];
	float fVec98[12];
	float fVec99[32];
	float fVec100[64];
	float fVec101[128];
	float fVec102[256];
	float fVec103[512];
	float fVec104[512];
	float fRec229[2];
	float fConst125;
	float fRec232[2];
	float fVec105[2];
	float fVec106[3];
	float fVec107[5];
	float fVec108[12];
	float fVec109[32];
	float fVec110[64];
	float fVec111[128];
	float fVec112[256];
	float fVec113[512];
	float fVec114[512];
	float fRec231[2];
	float fVec115[2048];
	int iConst126;
	float fConst127;
	int iRec235[2];
	float fRec236[2];
	float fConst128;
	float fRec234[2];
	float fConst129;
	float fConst130;
	float fRec233[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fCheckbox0;
	float fRec237[2];
	
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
		m->declare("compile_options", "-a /tmp/tmpc5blj0h3.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("compressors.lib/expanderSC_N_chan:author", "Bart Brouns");
		m->declare("compressors.lib/expanderSC_N_chan:license", "GPLv3");
		m->declare("compressors.lib/expander_N_chan:author", "Bart Brouns");
		m->declare("compressors.lib/expander_N_chan:license", "GPLv3");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_mono:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_expansion_gain_N_chan_db:license", "GPLv3");
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
		m->declare("version", "0.24");
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
		iConst1 = int(std::floor(0.001f * fConst0)) % 2;
		fConst2 = std::exp(-(4e+01f / fConst0));
		fConst3 = std::exp(-(1e+02f / fConst0));
		fConst4 = 0.125f * fConst0;
		fConst5 = 1.1312305e-06f * fConst0;
		fConst6 = 1.0f / fConst0;
		fConst7 = 3.1415927f / fConst0;
		fConst8 = 0.01f * fConst0;
		fConst9 = std::rint(fConst8);
		iConst10 = int(std::floor(0.5f * fConst9)) % 2;
		fConst11 = std::tan(5283.415f / fConst0);
		fConst12 = 1.7803667f * fConst11;
		fConst13 = mydsp_faustpower2_f(fConst11);
		fConst14 = fConst13 + fConst12 + 1.5848527f;
		fConst15 = 2.0f * (fConst13 + -1.0f);
		fConst16 = fConst13 + (1.5848527f - fConst12);
		fConst17 = 1.4142135f * fConst11;
		fConst18 = fConst13 + (1.0f - fConst17);
		fConst19 = fConst13 + -1.5848527f;
		fConst20 = 2.0f * fConst19;
		fConst21 = 1.0f / (fConst13 + fConst17 + 1.0f);
		fConst22 = std::tan(119.806114f / fConst0);
		fConst23 = mydsp_faustpower2_f(fConst22);
		fConst24 = 1.0006541f * (fConst23 + -1.0f);
		fConst25 = 0.50032705f * (fConst23 + 1.0f);
		fConst26 = fConst25 - fConst22;
		fConst27 = 1.0f / (fConst22 + fConst25);
		iConst28 = int(std::floor(fConst9)) % 2;
		iConst29 = int(std::floor(0.25f * fConst9)) % 2;
		iConst30 = iConst28 + 2 * iConst10;
		iConst31 = int(std::floor(0.125f * fConst9)) % 2;
		iConst32 = iConst30 + 4 * iConst29;
		iConst33 = int(std::floor(0.0625f * fConst9)) % 2;
		iConst34 = iConst32 + 8 * iConst31;
		iConst35 = int(std::floor(0.03125f * fConst9)) % 2;
		iConst36 = iConst34 + 16 * iConst33;
		iConst37 = int(std::floor(0.015625f * fConst9)) % 2;
		iConst38 = iConst36 + 32 * iConst35;
		iConst39 = int(std::floor(0.0078125f * fConst9)) % 2;
		iConst40 = iConst38 + 64 * iConst37;
		iConst41 = int(std::floor(0.00390625f * fConst9)) % 2;
		iConst42 = iConst40 + 128 * iConst39;
		fConst43 = 1.0f / std::max<float>(fConst9, 1.1920929e-07f);
		fConst44 = 44.1f / fConst0;
		fConst45 = 1.0f - fConst44;
		fConst46 = std::tan(2513.2742f / fConst0);
		fConst47 = fConst46 * (fConst46 + 1.4142135f) + 1.0f;
		fConst48 = 2.0f / fConst47;
		fConst49 = fConst46 / fConst47;
		fConst50 = 1.0f / fConst47;
		fConst51 = std::tan(628.31854f / fConst0);
		fConst52 = fConst51 * (fConst51 + 1.4142135f) + 1.0f;
		fConst53 = 2.0f / fConst52;
		fConst54 = fConst51 / fConst52;
		fConst55 = 1.0f / fConst52;
		fConst56 = std::tan(314.15927f / fConst0);
		fConst57 = fConst56 * (fConst56 + 1.4142135f) + 1.0f;
		fConst58 = 2.0f / fConst57;
		fConst59 = fConst56 / fConst57;
		fConst60 = 1.0f / fConst57;
		fConst61 = std::tan(1256.6371f / fConst0);
		fConst62 = fConst61 * (fConst61 + 1.4142135f) + 1.0f;
		fConst63 = 2.0f / fConst62;
		fConst64 = fConst61 / fConst62;
		fConst65 = 1.0f / fConst62;
		fConst66 = std::tan(10053.097f / fConst0);
		fConst67 = fConst66 * (fConst66 + 1.4142135f) + 1.0f;
		fConst68 = 2.0f / fConst67;
		fConst69 = fConst66 / fConst67;
		fConst70 = 1.0f / fConst67;
		fConst71 = std::tan(5026.5483f / fConst0);
		fConst72 = fConst71 * (fConst71 + 1.4142135f) + 1.0f;
		fConst73 = 2.0f / fConst72;
		fConst74 = fConst71 / fConst72;
		fConst75 = 1.0f / fConst72;
		fConst76 = std::tan(20106.193f / fConst0);
		fConst77 = fConst76 * (fConst76 + 1.4142135f) + 1.0f;
		fConst78 = 2.0f / fConst77;
		fConst79 = fConst76 / fConst77;
		fConst80 = 1.0f / fConst77;
		fConst81 = 3.9810717f * fConst14;
		fConst82 = 7.9621434f * fConst19;
		fConst83 = 3.9810717f * fConst16;
		fConst84 = std::exp(-(1e+01f / fConst0));
		fConst85 = 1.0f - fConst84;
		fConst86 = 1.0f - fConst3;
		fConst87 = 1.0f - fConst2;
		fConst88 = std::exp(-(2e+01f / fConst0));
		fConst89 = 1.0f - fConst88;
		fConst90 = std::exp(-(13.333333f / fConst0));
		fConst91 = 1.0f - fConst90;
		fConst92 = std::exp(-(8.0f / fConst0));
		fConst93 = 1.0f - fConst92;
		fConst94 = std::exp(-(6.6666665f / fConst0));
		fConst95 = 1.0f - fConst94;
		fConst96 = std::exp(-(5.714286f / fConst0));
		fConst97 = 1.0f - fConst96;
		fConst98 = std::exp(-(5.0f / fConst0));
		fConst99 = 1.0f - fConst98;
		fConst100 = std::exp(-(5e+02f / fConst0));
		fConst101 = std::exp(-(66.666664f / fConst0));
		iConst102 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst103 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst104 = iConst1 + 2 * iConst102;
		iConst105 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst106 = iConst104 + 4 * iConst103;
		iConst107 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst108 = iConst106 + 8 * iConst105;
		iConst109 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst110 = iConst108 + 16 * iConst107;
		iConst111 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst112 = iConst110 + 32 * iConst109;
		iConst113 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst114 = iConst112 + 64 * iConst111;
		iConst115 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst116 = iConst114 + 128 * iConst113;
		iConst117 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst118 = iConst116 + 256 * iConst115;
		fConst119 = std::exp(-(333.33334f / fConst0));
		fConst120 = std::exp(-(2e+02f / fConst0));
		fConst121 = std::exp(-(5e+01f / fConst0));
		fConst122 = std::exp(-(25.0f / fConst0));
		fConst123 = std::exp(-(16.666666f / fConst0));
		fConst124 = std::exp(-(12.5f / fConst0));
		fConst125 = std::exp(-(33.333332f / fConst0));
		iConst126 = int(fConst8);
		fConst127 = std::exp(-(628.31854f / fConst0));
		fConst128 = 1.0f - fConst127;
		fConst129 = std::exp(-(6.2831855f / fConst0));
		fConst130 = 1.0f - fConst129;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-23.0f);
		fVslider1 = FAUSTFLOAT(0.9f);
		fVslider2 = FAUSTFLOAT(1e+02f);
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
			fRec72[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec76[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec75[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec74[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec73[l6] = 0.0f;
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
			fRec67[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec68[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec65[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec64[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec78[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fVec11[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec77[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec12[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec59[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec60[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec54[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec55[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec50[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec51[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec46[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec47[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec42[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec43[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec37[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec38[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec32[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec33[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec28[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec29[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec23[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec24[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec18[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec19[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fVec13[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec14[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec17[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec16[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fVec15[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec15[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec14[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec13[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec12[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fVec16[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec84[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec83[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fVec17[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec82[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec81[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec80[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec79[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec11[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec92[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec93[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec94[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fVec18[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec91[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec90[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fVec19[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec89[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec88[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec87[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec86[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec85[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec116[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec117[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec112[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec113[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec107[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec108[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec102[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec103[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fVec20[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec21[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec101[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec100[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec22[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec99[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec98[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec97[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec96[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec95[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec126[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec127[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec128[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec23[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec125[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec124[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fVec24[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec123[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec122[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec121[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec120[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec119[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec172[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec173[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec168[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec169[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec164[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec165[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec160[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec161[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec155[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec156[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec150[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec151[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec146[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec147[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec141[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec142[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec136[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec137[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fVec25[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec26[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec135[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec134[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fVec27[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec133[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec132[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec131[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec130[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec129[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec182[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec183[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec184[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fVec28[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec181[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec180[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fVec29[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec179[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec178[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec177[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec176[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec175[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec206[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec207[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec202[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec203[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec197[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec198[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec192[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec193[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fVec30[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec31[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec191[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec190[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fVec32[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec189[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec188[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec187[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec186[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec185[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec216[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec217[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec218[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fVec33[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec215[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec214[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fVec34[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec213[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec212[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec211[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec210[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec209[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 3; l174 = l174 + 1) {
			fRec2[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec1[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fVec35[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 3; l177 = l177 + 1) {
			fVec36[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 5; l178 = l178 + 1) {
			fVec37[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 12; l179 = l179 + 1) {
			fVec38[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 32; l180 = l180 + 1) {
			fVec39[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 64; l181 = l181 + 1) {
			fVec40[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 128; l182 = l182 + 1) {
			fVec41[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 256; l183 = l183 + 1) {
			fVec42[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 512; l184 = l184 + 1) {
			fVec43[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 512; l185 = l185 + 1) {
			fVec44[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec0[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec220[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fVec45[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 3; l189 = l189 + 1) {
			fVec46[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 5; l190 = l190 + 1) {
			fVec47[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 12; l191 = l191 + 1) {
			fVec48[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 32; l192 = l192 + 1) {
			fVec49[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 64; l193 = l193 + 1) {
			fVec50[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 128; l194 = l194 + 1) {
			fVec51[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 256; l195 = l195 + 1) {
			fVec52[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 512; l196 = l196 + 1) {
			fVec53[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 512; l197 = l197 + 1) {
			fVec54[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec219[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec222[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fVec55[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 3; l201 = l201 + 1) {
			fVec56[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 5; l202 = l202 + 1) {
			fVec57[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 12; l203 = l203 + 1) {
			fVec58[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 32; l204 = l204 + 1) {
			fVec59[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 64; l205 = l205 + 1) {
			fVec60[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 128; l206 = l206 + 1) {
			fVec61[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 256; l207 = l207 + 1) {
			fVec62[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 512; l208 = l208 + 1) {
			fVec63[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 512; l209 = l209 + 1) {
			fVec64[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec221[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec224[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fVec65[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 3; l213 = l213 + 1) {
			fVec66[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 5; l214 = l214 + 1) {
			fVec67[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 12; l215 = l215 + 1) {
			fVec68[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 32; l216 = l216 + 1) {
			fVec69[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 64; l217 = l217 + 1) {
			fVec70[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 128; l218 = l218 + 1) {
			fVec71[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 256; l219 = l219 + 1) {
			fVec72[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 512; l220 = l220 + 1) {
			fVec73[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 512; l221 = l221 + 1) {
			fVec74[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec223[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec226[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fVec75[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 3; l225 = l225 + 1) {
			fVec76[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 5; l226 = l226 + 1) {
			fVec77[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 12; l227 = l227 + 1) {
			fVec78[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 32; l228 = l228 + 1) {
			fVec79[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 64; l229 = l229 + 1) {
			fVec80[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 128; l230 = l230 + 1) {
			fVec81[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 256; l231 = l231 + 1) {
			fVec82[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 512; l232 = l232 + 1) {
			fVec83[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 512; l233 = l233 + 1) {
			fVec84[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec225[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec228[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fVec85[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 3; l237 = l237 + 1) {
			fVec86[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 5; l238 = l238 + 1) {
			fVec87[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 12; l239 = l239 + 1) {
			fVec88[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 32; l240 = l240 + 1) {
			fVec89[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 64; l241 = l241 + 1) {
			fVec90[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 128; l242 = l242 + 1) {
			fVec91[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 256; l243 = l243 + 1) {
			fVec92[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 512; l244 = l244 + 1) {
			fVec93[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 512; l245 = l245 + 1) {
			fVec94[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec227[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec230[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fVec95[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 3; l249 = l249 + 1) {
			fVec96[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 5; l250 = l250 + 1) {
			fVec97[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 12; l251 = l251 + 1) {
			fVec98[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 32; l252 = l252 + 1) {
			fVec99[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 64; l253 = l253 + 1) {
			fVec100[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 128; l254 = l254 + 1) {
			fVec101[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 256; l255 = l255 + 1) {
			fVec102[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 512; l256 = l256 + 1) {
			fVec103[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 512; l257 = l257 + 1) {
			fVec104[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec229[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec232[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fVec105[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 3; l261 = l261 + 1) {
			fVec106[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 5; l262 = l262 + 1) {
			fVec107[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 12; l263 = l263 + 1) {
			fVec108[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 32; l264 = l264 + 1) {
			fVec109[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 64; l265 = l265 + 1) {
			fVec110[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 128; l266 = l266 + 1) {
			fVec111[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 256; l267 = l267 + 1) {
			fVec112[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 512; l268 = l268 + 1) {
			fVec113[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 512; l269 = l269 + 1) {
			fVec114[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec231[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2048; l271 = l271 + 1) {
			fVec115[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			iRec235[l272] = 0;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec236[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec234[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec233[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec237[l276] = 0.0f;
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
		ui_interface->declare(&fVslider2, "unit", "ms");
		ui_interface->addVerticalSlider("vad_smoo_t", &fVslider2, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1e+01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = float(fVslider0);
		float fSlow1 = fSlow0 + -12.0f;
		float fSlow2 = fSlow0 + -12.5f;
		float fSlow3 = float(fVslider1);
		float fSlow4 = 0.001f * float(fVslider2);
		int iSlow5 = std::fabs(fSlow4) < 1.1920929e-07f;
		float fSlow6 = ((iSlow5) ? 0.0f : std::exp(-(fConst6 / ((iSlow5) ? 1.0f : fSlow4))));
		float fSlow7 = float(fVslider3) * (1.0f - fSlow6);
		float fSlow8 = float(fVslider4);
		float fSlow9 = fConst44 * std::pow(1e+01f, 0.05f * float(fVslider5));
		float fSlow10 = 1.0f / std::tan(fConst7 * float(fVslider6));
		float fSlow11 = 1.0f - fSlow10;
		float fSlow12 = 1.0f / (fSlow10 + 1.0f);
		float fSlow13 = float(fVslider7);
		float fSlow14 = float(fVslider8);
		float fSlow15 = 5e-06f * float(fVslider9) * fSlow14;
		float fSlow16 = float(fVslider10);
		float fSlow17 = float(fVslider11);
		float fSlow18 = float(fVslider12);
		float fSlow19 = float(fVslider13);
		float fSlow20 = float(fVslider14);
		float fSlow21 = float(fVslider15);
		float fSlow22 = float(fVslider16);
		float fSlow23 = fSlow0 + -13.5f;
		float fSlow24 = 0.0001f * fSlow14 * float(fVslider17);
		float fSlow25 = fSlow0 + -18.0f;
		float fSlow26 = fSlow0 + -11.0f;
		float fSlow27 = fSlow0 + -11.5f;
		float fSlow28 = fSlow0 + -17.0f;
		float fSlow29 = fSlow0 + -1e+01f;
		float fSlow30 = fSlow0 + -16.0f;
		float fSlow31 = fSlow0 + -10.5f;
		float fSlow32 = fSlow0 + -9.0f;
		float fSlow33 = fSlow0 + -7.5f;
		float fSlow34 = fSlow0 + -8.5f;
		float fSlow35 = fSlow0 + -15.0f;
		float fSlow36 = fSlow0 + -6.5f;
		float fSlow37 = fSlow0 + -5.5f;
		float fSlow38 = fConst44 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec72[0] = fSlow7 + fSlow6 * fRec72[1];
			float fTemp0 = fRec72[0] * float(fRec72[0] > fSlow3);
			fVbargraph0 = FAUSTFLOAT(fTemp0);
			float fTemp1 = fTemp0;
			float fTemp2 = std::tan(fConst7 * std::min<float>(fConst4, fTemp1 * (fConst5 * std::fabs(fRec65[1]) + 0.1316f)));
			float fTemp3 = fTemp2 + 2.0f;
			float fTemp4 = fTemp2 * fTemp3 + 1.0f;
			fVec0[0] = fConst18 * fRec75[1] - fConst16 * fRec2[2];
			fRec76[0] = fConst21 * (fConst20 * fRec2[2] - (fVec0[1] + fConst15 * fRec76[1]) + fConst14 * fRec2[1]);
			fRec75[0] = fRec76[0];
			fVec1[0] = 0.50032705f * fRec75[1] - fConst26 * fRec73[1];
			fRec74[0] = fConst27 * (fVec1[1] - fConst24 * fRec74[1] - 1.0006541f * fRec75[1] + 0.50032705f * fRec75[0]);
			fRec73[0] = fRec74[0];
			float fTemp5 = mydsp_faustpower2_f(fRec73[0]);
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
			float fTemp13 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow0 + fRec64[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst43 * (((iConst41) ? 0.86000985f * fVec10[(IOTA0 - iConst42) & 511] : 0.0f) + ((iConst39) ? 0.86000985f * fVec9[(IOTA0 - iConst40) & 255] : 0.0f) + ((iConst37) ? 0.86000985f * fVec8[(IOTA0 - iConst38) & 127] : 0.0f) + ((iConst35) ? 0.86000985f * fVec7[(IOTA0 - iConst36) & 63] : 0.0f) + ((iConst33) ? 0.86000985f * fVec6[(IOTA0 - iConst34) & 31] : 0.0f) + ((iConst31) ? 0.86000985f * fVec5[iConst32] : 0.0f) + ((iConst29) ? 0.86000985f * fVec4[iConst30] : 0.0f) + ((iConst28) ? 0.86000985f * fTemp5 : 0.0f) + ((iConst10) ? 0.86000985f * fVec3[iConst28] : 0.0f))))))) - (fRec67[1] * fTemp3 + fRec68[1]);
			float fTemp14 = fTemp2 * fTemp13 / fTemp4;
			fRec67[0] = fRec67[1] + 2.0f * fTemp14;
			float fTemp15 = fRec67[1] + fTemp14;
			float fTemp16 = fTemp2 * fTemp15;
			fRec68[0] = fRec68[1] + 2.0f * fTemp16;
			float fRec69 = fTemp15;
			float fRec70 = fTemp13 / fTemp4;
			float fRec71 = fRec68[1] + fTemp16;
			fRec65[0] = fRec69;
			float fRec66 = fRec71;
			fRec64[0] = fSlow8 * fRec66;
			fRec78[0] = fSlow9 + fConst45 * fRec78[1];
			float fTemp17 = float(input0[i0]);
			float fTemp18 = fTemp17 * fRec78[0];
			fVec11[0] = fTemp18;
			fRec77[0] = -(fSlow12 * (fSlow11 * fRec77[1] - fSlow10 * (fTemp18 - fVec11[1])));
			float fTemp19 = fRec77[0] * std::pow(1e+01f, 0.05f * fRec64[0]);
			fVec12[0] = fTemp19;
			float fTemp20 = fRec59[1] + fConst46 * (fTemp19 - fRec60[1]);
			fRec59[0] = fConst48 * fTemp20 - fRec59[1];
			float fTemp21 = fRec60[1] + fConst49 * fTemp20;
			fRec60[0] = 2.0f * fTemp21 - fRec60[1];
			float fRec61 = fTemp19;
			float fRec62 = fConst50 * fTemp20;
			float fRec63 = fTemp21;
			float fTemp22 = fRec63 + 1.4142135f * fRec62;
			float fTemp23 = fRec54[1] + fConst46 * (fRec61 - (fTemp22 + fRec55[1]));
			fRec54[0] = fConst48 * fTemp23 - fRec54[1];
			float fTemp24 = fRec55[1] + fConst49 * fTemp23;
			fRec55[0] = 2.0f * fTemp24 - fRec55[1];
			float fRec56 = fRec61 - fTemp22;
			float fRec57 = fConst50 * fTemp23;
			float fRec58 = fTemp24;
			float fTemp25 = fRec58 + 1.4142135f * fRec57;
			float fTemp26 = fRec50[1] + fConst51 * (fRec56 - (fTemp25 + fRec51[1]));
			fRec50[0] = fConst53 * fTemp26 - fRec50[1];
			float fTemp27 = fRec51[1] + fConst54 * fTemp26;
			fRec51[0] = 2.0f * fTemp27 - fRec51[1];
			float fRec52 = fRec56 - fTemp25;
			float fRec53 = fConst55 * fTemp26;
			float fTemp28 = 2.828427f * fRec53;
			float fTemp29 = fRec46[1] + fConst56 * (fRec52 - (fTemp28 + fRec47[1]));
			fRec46[0] = fConst58 * fTemp29 - fRec46[1];
			float fTemp30 = fRec47[1] + fConst59 * fTemp29;
			fRec47[0] = 2.0f * fTemp30 - fRec47[1];
			float fRec48 = fRec52 - fTemp28;
			float fRec49 = fConst60 * fTemp29;
			float fTemp31 = 2.828427f * fRec49;
			float fTemp32 = fRec42[1] + fConst61 * (fRec48 - (fTemp31 + fRec43[1]));
			fRec42[0] = fConst63 * fTemp32 - fRec42[1];
			float fTemp33 = fRec43[1] + fConst64 * fTemp32;
			fRec43[0] = 2.0f * fTemp33 - fRec43[1];
			float fRec44 = fRec48 - fTemp31;
			float fRec45 = fConst65 * fTemp32;
			float fTemp34 = 2.828427f * fRec45;
			float fTemp35 = fRec37[1] + fConst66 * (fRec44 - (fTemp34 + fRec38[1]));
			fRec37[0] = fConst68 * fTemp35 - fRec37[1];
			float fTemp36 = fRec38[1] + fConst69 * fTemp35;
			fRec38[0] = 2.0f * fTemp36 - fRec38[1];
			float fRec39 = fRec44 - fTemp34;
			float fRec40 = fConst70 * fTemp35;
			float fRec41 = fTemp36;
			float fTemp37 = fRec41 + 1.4142135f * fRec40;
			float fTemp38 = fRec32[1] + fConst66 * (fRec39 - (fTemp37 + fRec33[1]));
			fRec32[0] = fConst68 * fTemp38 - fRec32[1];
			float fTemp39 = fRec33[1] + fConst69 * fTemp38;
			fRec33[0] = 2.0f * fTemp39 - fRec33[1];
			float fRec34 = fRec39 - fTemp37;
			float fRec35 = fConst70 * fTemp38;
			float fRec36 = fTemp39;
			float fTemp40 = fRec36 + 1.4142135f * fRec35;
			float fTemp41 = fRec28[1] + fConst71 * (fRec34 - (fTemp40 + fRec29[1]));
			fRec28[0] = fConst73 * fTemp41 - fRec28[1];
			float fTemp42 = fRec29[1] + fConst74 * fTemp41;
			fRec29[0] = 2.0f * fTemp42 - fRec29[1];
			float fRec30 = fRec34 - fTemp40;
			float fRec31 = fConst75 * fTemp41;
			float fTemp43 = 2.828427f * fRec31;
			float fTemp44 = fRec23[1] + fConst76 * (fRec30 - (fTemp43 + fRec24[1]));
			fRec23[0] = fConst78 * fTemp44 - fRec23[1];
			float fTemp45 = fRec24[1] + fConst79 * fTemp44;
			fRec24[0] = 2.0f * fTemp45 - fRec24[1];
			float fRec25 = fRec30 - fTemp43;
			float fRec26 = fConst80 * fTemp44;
			float fRec27 = fTemp45;
			float fTemp46 = fRec27 + 1.4142135f * fRec26;
			float fTemp47 = fRec18[1] + fConst76 * (fRec25 - (fTemp46 + fRec19[1]));
			fRec18[0] = fConst78 * fTemp47 - fRec18[1];
			float fTemp48 = fRec19[1] + fConst79 * fTemp47;
			fRec19[0] = 2.0f * fTemp48 - fRec19[1];
			float fRec20 = fRec25 - fTemp46;
			float fRec21 = fConst80 * fTemp47;
			float fRec22 = fTemp48;
			float fTemp49 = fRec20 - (fRec22 + 1.4142135f * fRec21);
			fVec13[0] = fTemp49;
			fVec14[0] = fConst83 * fVec13[1] - fConst18 * fRec16[1];
			fRec17[0] = fConst21 * (fVec14[1] - fConst15 * fRec17[1] + fConst82 * fVec13[1] + fConst81 * fTemp49);
			fRec16[0] = fRec17[0];
			fVec15[0] = 0.50032705f * fRec16[1] - fConst26 * fRec14[1];
			fRec15[0] = fConst27 * (fVec15[1] - fConst24 * fRec15[1] - 1.0006541f * fRec16[1] + 0.50032705f * fRec16[0]);
			fRec14[0] = fRec15[0];
			float fTemp50 = std::fabs(0.92736715f * fRec14[0]);
			fRec13[0] = std::max<float>(fTemp50, fConst84 * fRec13[1] + fConst85 * fTemp50);
			fRec12[0] = fConst86 * fRec13[0] + fConst3 * fRec12[1];
			fVec16[0] = fConst18 * fRec83[1] - fConst16 * fVec12[1];
			fRec84[0] = fConst21 * (fConst20 * fVec12[1] - (fVec16[1] + fConst15 * fRec84[1]) + fConst14 * fTemp19);
			fRec83[0] = fRec84[0];
			fVec17[0] = 0.50032705f * fRec83[1] - fConst26 * fRec81[1];
			fRec82[0] = fConst27 * (fVec17[1] - fConst24 * fRec82[1] - 1.0006541f * fRec83[1] + 0.50032705f * fRec83[0]);
			fRec81[0] = fRec82[0];
			float fTemp51 = std::fabs(0.92736715f * fRec81[0]);
			fRec80[0] = std::max<float>(fTemp51, fConst84 * fRec80[1] + fConst85 * fTemp51);
			fRec79[0] = fConst86 * fRec80[0] + fConst3 * fRec79[1];
			float fTemp52 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec79[0])));
			fRec11[0] = fConst87 * (fSlow13 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec12[0]))))) + fConst2 * fRec11[1];
			float fTemp53 = fTemp49 * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(6.0f, std::max<float>(-12.0f, fRec11[0])));
			float fTemp54 = fRec92[1] + fConst76 * (fRec27 - fRec93[1]);
			fRec92[0] = fConst78 * fTemp54 - fRec92[1];
			float fTemp55 = fRec93[1] + fConst79 * fTemp54;
			fRec93[0] = 2.0f * fTemp55 - fRec93[1];
			fRec94[0] = fTemp55;
			fVec18[0] = fConst83 * fRec94[1] - fConst18 * fRec90[1];
			fRec91[0] = fConst21 * (fVec18[1] - fConst15 * fRec91[1] + fConst82 * fRec94[1] + fConst81 * fRec94[0]);
			fRec90[0] = fRec91[0];
			fVec19[0] = 0.50032705f * fRec90[1] - fConst26 * fRec88[1];
			fRec89[0] = fConst27 * (fVec19[1] - fConst24 * fRec89[1] - 1.0006541f * fRec90[1] + 0.50032705f * fRec90[0]);
			fRec88[0] = fRec89[0];
			float fTemp56 = std::fabs(0.92736715f * fRec88[0]);
			fRec87[0] = std::max<float>(fTemp56, fConst84 * fRec87[1] + fConst85 * fTemp56);
			fRec86[0] = fConst86 * fRec87[0] + fConst3 * fRec86[1];
			fRec85[0] = fConst89 * (fSlow16 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec86[0]))))) + fConst88 * fRec85[1];
			float fTemp57 = fRec94[0] * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(9.0f, std::max<float>(-12.0f, fRec85[0])));
			float fTemp58 = fRec116[1] + fConst66 * (fRec41 - fRec117[1]);
			fRec116[0] = fConst68 * fTemp58 - fRec116[1];
			float fTemp59 = fRec117[1] + fConst69 * fTemp58;
			fRec117[0] = 2.0f * fTemp59 - fRec117[1];
			float fRec118 = fTemp59;
			float fTemp60 = fRec112[1] + fConst76 * (fRec118 - fRec113[1]);
			fRec112[0] = fConst78 * fTemp60 - fRec112[1];
			float fTemp61 = fRec113[1] + fConst79 * fTemp60;
			fRec113[0] = 2.0f * fTemp61 - fRec113[1];
			float fRec114 = fRec118;
			float fRec115 = fConst80 * fTemp60;
			float fTemp62 = 2.828427f * fRec115;
			float fTemp63 = fRec107[1] + fConst71 * (fRec114 - (fTemp62 + fRec108[1]));
			fRec107[0] = fConst73 * fTemp63 - fRec107[1];
			float fTemp64 = fRec108[1] + fConst74 * fTemp63;
			fRec108[0] = 2.0f * fTemp64 - fRec108[1];
			float fRec109 = fRec114 - fTemp62;
			float fRec110 = fConst75 * fTemp63;
			float fRec111 = fTemp64;
			float fTemp65 = fRec111 + 1.4142135f * fRec110;
			float fTemp66 = fRec102[1] + fConst71 * (fRec109 - (fTemp65 + fRec103[1]));
			fRec102[0] = fConst73 * fTemp66 - fRec102[1];
			float fTemp67 = fRec103[1] + fConst74 * fTemp66;
			fRec103[0] = 2.0f * fTemp67 - fRec103[1];
			float fRec104 = fRec109 - fTemp65;
			float fRec105 = fConst75 * fTemp66;
			float fRec106 = fTemp67;
			float fTemp68 = fRec104 - (fRec106 + 1.4142135f * fRec105);
			fVec20[0] = fTemp68;
			fVec21[0] = fConst83 * fVec20[1] - fConst18 * fRec100[1];
			fRec101[0] = fConst21 * (fVec21[1] - fConst15 * fRec101[1] + fConst82 * fVec20[1] + fConst81 * fTemp68);
			fRec100[0] = fRec101[0];
			fVec22[0] = 0.50032705f * fRec100[1] - fConst26 * fRec98[1];
			fRec99[0] = fConst27 * (fVec22[1] - fConst24 * fRec99[1] - 1.0006541f * fRec100[1] + 0.50032705f * fRec100[0]);
			fRec98[0] = fRec99[0];
			float fTemp69 = std::fabs(0.92736715f * fRec98[0]);
			fRec97[0] = std::max<float>(fTemp69, fConst84 * fRec97[1] + fConst85 * fTemp69);
			fRec96[0] = fConst86 * fRec97[0] + fConst3 * fRec96[1];
			fRec95[0] = fConst91 * (fSlow17 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec96[0]))))) + fConst90 * fRec95[1];
			float fTemp70 = fTemp68 * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec95[0])));
			float fTemp71 = fRec126[1] + fConst71 * (fRec111 - fRec127[1]);
			fRec126[0] = fConst73 * fTemp71 - fRec126[1];
			float fTemp72 = fRec127[1] + fConst74 * fTemp71;
			fRec127[0] = 2.0f * fTemp72 - fRec127[1];
			fRec128[0] = fTemp72;
			fVec23[0] = fConst83 * fRec128[1] - fConst18 * fRec124[1];
			fRec125[0] = fConst21 * (fVec23[1] - fConst15 * fRec125[1] + fConst82 * fRec128[1] + fConst81 * fRec128[0]);
			fRec124[0] = fRec125[0];
			fVec24[0] = 0.50032705f * fRec124[1] - fConst26 * fRec122[1];
			fRec123[0] = fConst27 * (fVec24[1] - fConst24 * fRec123[1] - 1.0006541f * fRec124[1] + 0.50032705f * fRec124[0]);
			fRec122[0] = fRec123[0];
			float fTemp73 = std::fabs(0.92736715f * fRec122[0]);
			fRec121[0] = std::max<float>(fTemp73, fConst84 * fRec121[1] + fConst85 * fTemp73);
			fRec120[0] = fConst86 * fRec121[0] + fConst3 * fRec120[1];
			fRec119[0] = fConst85 * (fSlow18 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec120[0]))))) + fConst84 * fRec119[1];
			float fTemp74 = fRec128[0] * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec119[0])));
			float fTemp75 = fRec172[1] + fConst46 * (fRec63 - fRec173[1]);
			fRec172[0] = fConst48 * fTemp75 - fRec172[1];
			float fTemp76 = fRec173[1] + fConst49 * fTemp75;
			fRec173[0] = 2.0f * fTemp76 - fRec173[1];
			float fRec174 = fTemp76;
			float fTemp77 = fRec168[1] + fConst66 * (fRec174 - fRec169[1]);
			fRec168[0] = fConst68 * fTemp77 - fRec168[1];
			float fTemp78 = fRec169[1] + fConst69 * fTemp77;
			fRec169[0] = 2.0f * fTemp78 - fRec169[1];
			float fRec170 = fRec174;
			float fRec171 = fConst70 * fTemp77;
			float fTemp79 = 2.828427f * fRec171;
			float fTemp80 = fRec164[1] + fConst71 * (fRec170 - (fTemp79 + fRec165[1]));
			fRec164[0] = fConst73 * fTemp80 - fRec164[1];
			float fTemp81 = fRec165[1] + fConst74 * fTemp80;
			fRec165[0] = 2.0f * fTemp81 - fRec165[1];
			float fRec166 = fRec170 - fTemp79;
			float fRec167 = fConst75 * fTemp80;
			float fTemp82 = 2.828427f * fRec167;
			float fTemp83 = fRec160[1] + fConst76 * (fRec166 - (fTemp82 + fRec161[1]));
			fRec160[0] = fConst78 * fTemp83 - fRec160[1];
			float fTemp84 = fRec161[1] + fConst79 * fTemp83;
			fRec161[0] = 2.0f * fTemp84 - fRec161[1];
			float fRec162 = fRec166 - fTemp82;
			float fRec163 = fConst80 * fTemp83;
			float fTemp85 = 2.828427f * fRec163;
			float fTemp86 = fRec155[1] + fConst51 * (fRec162 - (fTemp85 + fRec156[1]));
			fRec155[0] = fConst53 * fTemp86 - fRec155[1];
			float fTemp87 = fRec156[1] + fConst54 * fTemp86;
			fRec156[0] = 2.0f * fTemp87 - fRec156[1];
			float fRec157 = fRec162 - fTemp85;
			float fRec158 = fConst55 * fTemp86;
			float fRec159 = fTemp87;
			float fTemp88 = fRec159 + 1.4142135f * fRec158;
			float fTemp89 = fRec150[1] + fConst51 * (fRec157 - (fTemp88 + fRec151[1]));
			fRec150[0] = fConst53 * fTemp89 - fRec150[1];
			float fTemp90 = fRec151[1] + fConst54 * fTemp89;
			fRec151[0] = 2.0f * fTemp90 - fRec151[1];
			float fRec152 = fRec157 - fTemp88;
			float fRec153 = fConst55 * fTemp89;
			float fRec154 = fTemp90;
			float fTemp91 = fRec154 + 1.4142135f * fRec153;
			float fTemp92 = fRec146[1] + fConst56 * (fRec152 - (fTemp91 + fRec147[1]));
			fRec146[0] = fConst58 * fTemp92 - fRec146[1];
			float fTemp93 = fRec147[1] + fConst59 * fTemp92;
			fRec147[0] = 2.0f * fTemp93 - fRec147[1];
			float fRec148 = fRec152 - fTemp91;
			float fRec149 = fConst60 * fTemp92;
			float fTemp94 = 2.828427f * fRec149;
			float fTemp95 = fRec141[1] + fConst61 * (fRec148 - (fTemp94 + fRec142[1]));
			fRec141[0] = fConst63 * fTemp95 - fRec141[1];
			float fTemp96 = fRec142[1] + fConst64 * fTemp95;
			fRec142[0] = 2.0f * fTemp96 - fRec142[1];
			float fRec143 = fRec148 - fTemp94;
			float fRec144 = fConst65 * fTemp95;
			float fRec145 = fTemp96;
			float fTemp97 = fRec145 + 1.4142135f * fRec144;
			float fTemp98 = fRec136[1] + fConst61 * (fRec143 - (fTemp97 + fRec137[1]));
			fRec136[0] = fConst63 * fTemp98 - fRec136[1];
			float fTemp99 = fRec137[1] + fConst64 * fTemp98;
			fRec137[0] = 2.0f * fTemp99 - fRec137[1];
			float fRec138 = fRec143 - fTemp97;
			float fRec139 = fConst65 * fTemp98;
			float fRec140 = fTemp99;
			float fTemp100 = fRec138 - (fRec140 + 1.4142135f * fRec139);
			fVec25[0] = fTemp100;
			fVec26[0] = fConst83 * fVec25[1] - fConst18 * fRec134[1];
			fRec135[0] = fConst21 * (fVec26[1] - fConst15 * fRec135[1] + fConst82 * fVec25[1] + fConst81 * fTemp100);
			fRec134[0] = fRec135[0];
			fVec27[0] = 0.50032705f * fRec134[1] - fConst26 * fRec132[1];
			fRec133[0] = fConst27 * (fVec27[1] - fConst24 * fRec133[1] - 1.0006541f * fRec134[1] + 0.50032705f * fRec134[0]);
			fRec132[0] = fRec133[0];
			float fTemp101 = std::fabs(0.92736715f * fRec132[0]);
			fRec131[0] = std::max<float>(fTemp101, fConst84 * fRec131[1] + fConst85 * fTemp101);
			fRec130[0] = fConst86 * fRec131[0] + fConst3 * fRec130[1];
			fRec129[0] = fConst93 * (fSlow19 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec130[0]))))) + fConst92 * fRec129[1];
			float fTemp102 = fTemp100 * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec129[0])));
			float fTemp103 = fRec182[1] + fConst61 * (fRec145 - fRec183[1]);
			fRec182[0] = fConst63 * fTemp103 - fRec182[1];
			float fTemp104 = fRec183[1] + fConst64 * fTemp103;
			fRec183[0] = 2.0f * fTemp104 - fRec183[1];
			fRec184[0] = fTemp104;
			fVec28[0] = fConst83 * fRec184[1] - fConst18 * fRec180[1];
			fRec181[0] = fConst21 * (fVec28[1] - fConst15 * fRec181[1] + fConst82 * fRec184[1] + fConst81 * fRec184[0]);
			fRec180[0] = fRec181[0];
			fVec29[0] = 0.50032705f * fRec180[1] - fConst26 * fRec178[1];
			fRec179[0] = fConst27 * (fVec29[1] - fConst24 * fRec179[1] - 1.0006541f * fRec180[1] + 0.50032705f * fRec180[0]);
			fRec178[0] = fRec179[0];
			float fTemp105 = std::fabs(0.92736715f * fRec178[0]);
			fRec177[0] = std::max<float>(fTemp105, fConst84 * fRec177[1] + fConst85 * fTemp105);
			fRec176[0] = fConst86 * fRec177[0] + fConst3 * fRec176[1];
			fRec175[0] = fConst95 * (fSlow20 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec176[0]))))) + fConst94 * fRec175[1];
			float fTemp106 = fRec184[0] * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec175[0])));
			float fTemp107 = fRec206[1] + fConst51 * (fRec159 - fRec207[1]);
			fRec206[0] = fConst53 * fTemp107 - fRec206[1];
			float fTemp108 = fRec207[1] + fConst54 * fTemp107;
			fRec207[0] = 2.0f * fTemp108 - fRec207[1];
			float fRec208 = fTemp108;
			float fTemp109 = fRec202[1] + fConst61 * (fRec208 - fRec203[1]);
			fRec202[0] = fConst63 * fTemp109 - fRec202[1];
			float fTemp110 = fRec203[1] + fConst64 * fTemp109;
			fRec203[0] = 2.0f * fTemp110 - fRec203[1];
			float fRec204 = fRec208;
			float fRec205 = fConst65 * fTemp109;
			float fTemp111 = 2.828427f * fRec205;
			float fTemp112 = fRec197[1] + fConst56 * (fRec204 - (fTemp111 + fRec198[1]));
			fRec197[0] = fConst58 * fTemp112 - fRec197[1];
			float fTemp113 = fRec198[1] + fConst59 * fTemp112;
			fRec198[0] = 2.0f * fTemp113 - fRec198[1];
			float fRec199 = fRec204 - fTemp111;
			float fRec200 = fConst60 * fTemp112;
			float fRec201 = fTemp113;
			float fTemp114 = fRec201 + 1.4142135f * fRec200;
			float fTemp115 = fRec192[1] + fConst56 * (fRec199 - (fTemp114 + fRec193[1]));
			fRec192[0] = fConst58 * fTemp115 - fRec192[1];
			float fTemp116 = fRec193[1] + fConst59 * fTemp115;
			fRec193[0] = 2.0f * fTemp116 - fRec193[1];
			float fRec194 = fRec199 - fTemp114;
			float fRec195 = fConst60 * fTemp115;
			float fRec196 = fTemp116;
			float fTemp117 = fRec194 - (fRec196 + 1.4142135f * fRec195);
			fVec30[0] = fTemp117;
			fVec31[0] = fConst83 * fVec30[1] - fConst18 * fRec190[1];
			fRec191[0] = fConst21 * (fVec31[1] - fConst15 * fRec191[1] + fConst82 * fVec30[1] + fConst81 * fTemp117);
			fRec190[0] = fRec191[0];
			fVec32[0] = 0.50032705f * fRec190[1] - fConst26 * fRec188[1];
			fRec189[0] = fConst27 * (fVec32[1] - fConst24 * fRec189[1] - 1.0006541f * fRec190[1] + 0.50032705f * fRec190[0]);
			fRec188[0] = fRec189[0];
			float fTemp118 = std::fabs(0.92736715f * fRec188[0]);
			fRec187[0] = std::max<float>(fTemp118, fConst84 * fRec187[1] + fConst85 * fTemp118);
			fRec186[0] = fConst86 * fRec187[0] + fConst3 * fRec186[1];
			fRec185[0] = fConst97 * (fSlow21 + 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec186[0]))))) + fConst96 * fRec185[1];
			float fTemp119 = fTemp117 * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(9.0f, std::max<float>(-12.0f, fRec185[0])));
			float fTemp120 = fRec216[1] + fConst56 * (fRec201 - fRec217[1]);
			fRec216[0] = fConst58 * fTemp120 - fRec216[1];
			float fTemp121 = fRec217[1] + fConst59 * fTemp120;
			fRec217[0] = 2.0f * fTemp121 - fRec217[1];
			fRec218[0] = fTemp121;
			fVec33[0] = fConst83 * fRec218[1] - fConst18 * fRec214[1];
			fRec215[0] = fConst21 * (fVec33[1] - fConst15 * fRec215[1] + fConst82 * fRec218[1] + fConst81 * fRec218[0]);
			fRec214[0] = fRec215[0];
			fVec34[0] = 0.50032705f * fRec214[1] - fConst26 * fRec212[1];
			fRec213[0] = fConst27 * (fVec34[1] - fConst24 * fRec213[1] - 1.0006541f * fRec214[1] + 0.50032705f * fRec214[0]);
			fRec212[0] = fRec213[0];
			float fTemp122 = std::fabs(0.92736715f * fRec212[0]);
			fRec211[0] = std::max<float>(fTemp122, fConst84 * fRec211[1] + fConst85 * fTemp122);
			fRec210[0] = fConst86 * fRec211[0] + fConst3 * fRec210[1];
			fRec209[0] = fConst99 * (fSlow22 - 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec210[0]))) - fTemp52)) + fConst98 * fRec209[1];
			float fTemp123 = fRec218[0] * std::pow(1e+01f, fSlow15 * fTemp1 * std::min<float>(6.0f, std::max<float>(-12.0f, fRec209[0])));
			fRec2[0] = fTemp123 + fTemp119 + fTemp106 + fTemp102 + fTemp74 + fTemp70 + fTemp57 + fTemp53;
			float fRec3 = fTemp123;
			float fRec4 = fTemp119;
			float fRec5 = fTemp106;
			float fRec6 = fTemp102;
			float fRec7 = fTemp74;
			float fRec8 = fTemp70;
			float fRec9 = fTemp57;
			float fRec10 = fTemp53;
			float fTemp124 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp125 = (fTemp124 > fSlow23) + (fTemp124 > fSlow2);
			float fTemp126 = std::max<float>(0.0f, ((iTemp125 == 0) ? 0.0f : ((iTemp125 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp124 + 13.5f - fSlow0) : fTemp124 + 13.0f - fSlow0)));
			float fTemp127 = ((-(0.75f * fTemp126) > fRec1[1]) ? fConst101 : fConst100);
			fRec1[0] = fRec1[1] * fTemp127 - 0.75f * fTemp126 * (1.0f - fTemp127);
			float fTemp128 = fRec10 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec1[0]))) + 1.5f)))));
			float fTemp129 = std::fabs(fTemp128);
			fVec35[0] = fTemp129;
			float fTemp130 = std::max<float>(fTemp129, fVec35[1]);
			fVec36[0] = fTemp130;
			float fTemp131 = std::max<float>(fTemp130, fVec36[2]);
			fVec37[0] = fTemp131;
			float fTemp132 = std::max<float>(fTemp131, fVec37[4]);
			fVec38[0] = fTemp132;
			float fTemp133 = std::max<float>(fTemp132, fVec38[8]);
			fVec39[IOTA0 & 31] = fTemp133;
			float fTemp134 = std::max<float>(fTemp133, fVec39[(IOTA0 - 16) & 31]);
			fVec40[IOTA0 & 63] = fTemp134;
			float fTemp135 = std::max<float>(fTemp134, fVec40[(IOTA0 - 32) & 63]);
			fVec41[IOTA0 & 127] = fTemp135;
			float fTemp136 = std::max<float>(fTemp135, fVec41[(IOTA0 - 64) & 127]);
			fVec42[IOTA0 & 255] = fTemp136;
			float fTemp137 = std::max<float>(fTemp136, fVec42[(IOTA0 - 128) & 255]);
			fVec43[IOTA0 & 511] = fTemp137;
			fVec44[IOTA0 & 511] = std::max<float>(fTemp137, fVec43[(IOTA0 - 256) & 511]);
			float fTemp138 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp129 : -3.4028235e+38f), ((iConst102) ? fVec36[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec37[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec38[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec39[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec40[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec41[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec42[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec43[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec44[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp139 = (fTemp138 > fSlow25) + (fTemp138 > fSlow1);
			float fTemp140 = 75.0f * (1.0f - 0.5f * fTemp1);
			float fTemp141 = std::fabs(fTemp140);
			int iTemp142 = fTemp140 > 0.0f;
			float fTemp143 = float(2 * iTemp142 + -1);
			float fTemp144 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp139 == 0) ? fTemp138 + 15.0f - fSlow0 : ((iTemp139 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp138 + 12.0f - fSlow0)) : 0.0f)));
			float fTemp145 = ((iTemp142) ? 0.05f : 0.001f);
			int iTemp146 = std::fabs(fTemp145) < 1.1920929e-07f;
			float fTemp147 = ((iTemp142) ? 0.001f : 0.05f);
			int iTemp148 = std::fabs(fTemp147) < 1.1920929e-07f;
			float fTemp149 = ((fTemp144 > fRec0[1]) ? ((iTemp148) ? 0.0f : std::exp(-(fConst6 / ((iTemp148) ? 1.0f : fTemp147)))) : ((iTemp146) ? 0.0f : std::exp(-(fConst6 / ((iTemp146) ? 1.0f : fTemp145)))));
			fRec0[0] = fTemp144 * (1.0f - fTemp149) + fRec0[1] * fTemp149;
			float fTemp150 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp151 = (fTemp150 > fSlow2) + (fTemp150 > fSlow27);
			float fTemp152 = std::max<float>(0.0f, ((iTemp151 == 0) ? 0.0f : ((iTemp151 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp150 + 12.5f - fSlow0) : fTemp150 + 12.0f - fSlow0)));
			float fTemp153 = ((-(0.75f * fTemp152) > fRec220[1]) ? fConst101 : fConst119);
			fRec220[0] = fRec220[1] * fTemp153 - 0.75f * fTemp152 * (1.0f - fTemp153);
			float fTemp154 = fRec9 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec220[0]))) + 1.5f)))));
			float fTemp155 = std::fabs(fTemp154);
			fVec45[0] = fTemp155;
			float fTemp156 = std::max<float>(fTemp155, fVec45[1]);
			fVec46[0] = fTemp156;
			float fTemp157 = std::max<float>(fTemp156, fVec46[2]);
			fVec47[0] = fTemp157;
			float fTemp158 = std::max<float>(fTemp157, fVec47[4]);
			fVec48[0] = fTemp158;
			float fTemp159 = std::max<float>(fTemp158, fVec48[8]);
			fVec49[IOTA0 & 31] = fTemp159;
			float fTemp160 = std::max<float>(fTemp159, fVec49[(IOTA0 - 16) & 31]);
			fVec50[IOTA0 & 63] = fTemp160;
			float fTemp161 = std::max<float>(fTemp160, fVec50[(IOTA0 - 32) & 63]);
			fVec51[IOTA0 & 127] = fTemp161;
			float fTemp162 = std::max<float>(fTemp161, fVec51[(IOTA0 - 64) & 127]);
			fVec52[IOTA0 & 255] = fTemp162;
			float fTemp163 = std::max<float>(fTemp162, fVec52[(IOTA0 - 128) & 255]);
			fVec53[IOTA0 & 511] = fTemp163;
			fVec54[IOTA0 & 511] = std::max<float>(fTemp163, fVec53[(IOTA0 - 256) & 511]);
			float fTemp164 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp155 : -3.4028235e+38f), ((iConst102) ? fVec46[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec47[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec48[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec49[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec50[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec51[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec52[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec53[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec54[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp165 = (fTemp164 > fSlow28) + (fTemp164 > fSlow26);
			float fTemp166 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp165 == 0) ? fTemp164 + 14.0f - fSlow0 : ((iTemp165 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp164 + 11.0f - fSlow0)) : 0.0f)));
			float fTemp167 = ((iTemp142) ? 0.08f : 0.002f);
			int iTemp168 = std::fabs(fTemp167) < 1.1920929e-07f;
			float fTemp169 = ((iTemp142) ? 0.002f : 0.08f);
			int iTemp170 = std::fabs(fTemp169) < 1.1920929e-07f;
			float fTemp171 = ((fTemp166 > fRec219[1]) ? ((iTemp170) ? 0.0f : std::exp(-(fConst6 / ((iTemp170) ? 1.0f : fTemp169)))) : ((iTemp168) ? 0.0f : std::exp(-(fConst6 / ((iTemp168) ? 1.0f : fTemp167)))));
			fRec219[0] = fTemp166 * (1.0f - fTemp171) + fRec219[1] * fTemp171;
			float fTemp172 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp173 = (fTemp172 > fSlow2) + (fTemp172 > fSlow27);
			float fTemp174 = std::max<float>(0.0f, ((iTemp173 == 0) ? 0.0f : ((iTemp173 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp172 + 12.5f - fSlow0) : fTemp172 + 12.0f - fSlow0)));
			float fTemp175 = ((-(0.75f * fTemp174) > fRec222[1]) ? fConst101 : fConst120);
			fRec222[0] = fRec222[1] * fTemp175 - 0.75f * fTemp174 * (1.0f - fTemp175);
			float fTemp176 = fRec8 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec222[0]))) + 1.5f)))));
			float fTemp177 = std::fabs(fTemp176);
			fVec55[0] = fTemp177;
			float fTemp178 = std::max<float>(fTemp177, fVec55[1]);
			fVec56[0] = fTemp178;
			float fTemp179 = std::max<float>(fTemp178, fVec56[2]);
			fVec57[0] = fTemp179;
			float fTemp180 = std::max<float>(fTemp179, fVec57[4]);
			fVec58[0] = fTemp180;
			float fTemp181 = std::max<float>(fTemp180, fVec58[8]);
			fVec59[IOTA0 & 31] = fTemp181;
			float fTemp182 = std::max<float>(fTemp181, fVec59[(IOTA0 - 16) & 31]);
			fVec60[IOTA0 & 63] = fTemp182;
			float fTemp183 = std::max<float>(fTemp182, fVec60[(IOTA0 - 32) & 63]);
			fVec61[IOTA0 & 127] = fTemp183;
			float fTemp184 = std::max<float>(fTemp183, fVec61[(IOTA0 - 64) & 127]);
			fVec62[IOTA0 & 255] = fTemp184;
			float fTemp185 = std::max<float>(fTemp184, fVec62[(IOTA0 - 128) & 255]);
			fVec63[IOTA0 & 511] = fTemp185;
			fVec64[IOTA0 & 511] = std::max<float>(fTemp185, fVec63[(IOTA0 - 256) & 511]);
			float fTemp186 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp177 : -3.4028235e+38f), ((iConst102) ? fVec56[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec57[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec58[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec59[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec60[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec61[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec62[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec63[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec64[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp187 = (fTemp186 > fSlow30) + (fTemp186 > fSlow29);
			float fTemp188 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp187 == 0) ? fTemp186 + 13.0f - fSlow0 : ((iTemp187 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp186 + 1e+01f - fSlow0)) : 0.0f)));
			float fTemp189 = ((iTemp142) ? 0.12f : 0.003f);
			int iTemp190 = std::fabs(fTemp189) < 1.1920929e-07f;
			float fTemp191 = ((iTemp142) ? 0.003f : 0.12f);
			int iTemp192 = std::fabs(fTemp191) < 1.1920929e-07f;
			float fTemp193 = ((fTemp188 > fRec221[1]) ? ((iTemp192) ? 0.0f : std::exp(-(fConst6 / ((iTemp192) ? 1.0f : fTemp191)))) : ((iTemp190) ? 0.0f : std::exp(-(fConst6 / ((iTemp190) ? 1.0f : fTemp189)))));
			fRec221[0] = fTemp188 * (1.0f - fTemp193) + fRec221[1] * fTemp193;
			float fTemp194 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp195 = (fTemp194 > fSlow27) + (fTemp194 > fSlow31);
			float fTemp196 = std::max<float>(0.0f, ((iTemp195 == 0) ? 0.0f : ((iTemp195 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp194 + 11.5f - fSlow0) : fTemp194 + 11.0f - fSlow0)));
			float fTemp197 = ((-(0.75f * fTemp196) > fRec224[1]) ? fConst121 : fConst3);
			fRec224[0] = fRec224[1] * fTemp197 - 0.75f * fTemp196 * (1.0f - fTemp197);
			float fTemp198 = fRec7 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f)))));
			float fTemp199 = std::fabs(fTemp198);
			fVec65[0] = fTemp199;
			float fTemp200 = std::max<float>(fTemp199, fVec65[1]);
			fVec66[0] = fTemp200;
			float fTemp201 = std::max<float>(fTemp200, fVec66[2]);
			fVec67[0] = fTemp201;
			float fTemp202 = std::max<float>(fTemp201, fVec67[4]);
			fVec68[0] = fTemp202;
			float fTemp203 = std::max<float>(fTemp202, fVec68[8]);
			fVec69[IOTA0 & 31] = fTemp203;
			float fTemp204 = std::max<float>(fTemp203, fVec69[(IOTA0 - 16) & 31]);
			fVec70[IOTA0 & 63] = fTemp204;
			float fTemp205 = std::max<float>(fTemp204, fVec70[(IOTA0 - 32) & 63]);
			fVec71[IOTA0 & 127] = fTemp205;
			float fTemp206 = std::max<float>(fTemp205, fVec71[(IOTA0 - 64) & 127]);
			fVec72[IOTA0 & 255] = fTemp206;
			float fTemp207 = std::max<float>(fTemp206, fVec72[(IOTA0 - 128) & 255]);
			fVec73[IOTA0 & 511] = fTemp207;
			fVec74[IOTA0 & 511] = std::max<float>(fTemp207, fVec73[(IOTA0 - 256) & 511]);
			float fTemp208 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp199 : -3.4028235e+38f), ((iConst102) ? fVec66[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec67[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec68[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec69[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec70[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec71[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec72[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec73[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec74[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp209 = (fTemp208 > fSlow30) + (fTemp208 > fSlow29);
			float fTemp210 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp209 == 0) ? fTemp208 + 13.0f - fSlow0 : ((iTemp209 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp208 + 1e+01f - fSlow0)) : 0.0f)));
			float fTemp211 = ((iTemp142) ? 0.16f : 0.004f);
			int iTemp212 = std::fabs(fTemp211) < 1.1920929e-07f;
			float fTemp213 = ((iTemp142) ? 0.004f : 0.16f);
			int iTemp214 = std::fabs(fTemp213) < 1.1920929e-07f;
			float fTemp215 = ((fTemp210 > fRec223[1]) ? ((iTemp214) ? 0.0f : std::exp(-(fConst6 / ((iTemp214) ? 1.0f : fTemp213)))) : ((iTemp212) ? 0.0f : std::exp(-(fConst6 / ((iTemp212) ? 1.0f : fTemp211)))));
			fRec223[0] = fTemp210 * (1.0f - fTemp215) + fRec223[1] * fTemp215;
			float fTemp216 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp217 = (fTemp216 > fSlow34) + (fTemp216 > fSlow33);
			float fTemp218 = std::max<float>(0.0f, ((iTemp217 == 0) ? 0.0f : ((iTemp217 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp216 + 8.5f - fSlow0) : fTemp216 + 8.0f - fSlow0)));
			float fTemp219 = ((-(0.75f * fTemp218) > fRec226[1]) ? fConst122 : fConst101);
			fRec226[0] = fRec226[1] * fTemp219 - 0.75f * fTemp218 * (1.0f - fTemp219);
			float fTemp220 = fRec6 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec226[0]))) + 1.5f)))));
			float fTemp221 = std::fabs(fTemp220);
			fVec75[0] = fTemp221;
			float fTemp222 = std::max<float>(fTemp221, fVec75[1]);
			fVec76[0] = fTemp222;
			float fTemp223 = std::max<float>(fTemp222, fVec76[2]);
			fVec77[0] = fTemp223;
			float fTemp224 = std::max<float>(fTemp223, fVec77[4]);
			fVec78[0] = fTemp224;
			float fTemp225 = std::max<float>(fTemp224, fVec78[8]);
			fVec79[IOTA0 & 31] = fTemp225;
			float fTemp226 = std::max<float>(fTemp225, fVec79[(IOTA0 - 16) & 31]);
			fVec80[IOTA0 & 63] = fTemp226;
			float fTemp227 = std::max<float>(fTemp226, fVec80[(IOTA0 - 32) & 63]);
			fVec81[IOTA0 & 127] = fTemp227;
			float fTemp228 = std::max<float>(fTemp227, fVec81[(IOTA0 - 64) & 127]);
			fVec82[IOTA0 & 255] = fTemp228;
			float fTemp229 = std::max<float>(fTemp228, fVec82[(IOTA0 - 128) & 255]);
			fVec83[IOTA0 & 511] = fTemp229;
			fVec84[IOTA0 & 511] = std::max<float>(fTemp229, fVec83[(IOTA0 - 256) & 511]);
			float fTemp230 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp221 : -3.4028235e+38f), ((iConst102) ? fVec76[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec77[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec78[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec79[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec80[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec81[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec82[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec83[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec84[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp231 = (fTemp230 > fSlow35) + (fTemp230 > fSlow32);
			float fTemp232 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp231 == 0) ? fTemp230 + 12.0f - fSlow0 : ((iTemp231 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp230 + 9.0f - fSlow0)) : 0.0f)));
			float fTemp233 = ((iTemp142) ? 0.2f : 0.005f);
			int iTemp234 = std::fabs(fTemp233) < 1.1920929e-07f;
			float fTemp235 = ((iTemp142) ? 0.005f : 0.2f);
			int iTemp236 = std::fabs(fTemp235) < 1.1920929e-07f;
			float fTemp237 = ((fTemp232 > fRec225[1]) ? ((iTemp236) ? 0.0f : std::exp(-(fConst6 / ((iTemp236) ? 1.0f : fTemp235)))) : ((iTemp234) ? 0.0f : std::exp(-(fConst6 / ((iTemp234) ? 1.0f : fTemp233)))));
			fRec225[0] = fTemp232 * (1.0f - fTemp237) + fRec225[1] * fTemp237;
			float fTemp238 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec5)));
			int iTemp239 = (fTemp238 > fSlow33) + (fTemp238 > fSlow36);
			float fTemp240 = std::max<float>(0.0f, ((iTemp239 == 0) ? 0.0f : ((iTemp239 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp238 + 7.5f - fSlow0) : fTemp238 + 7.0f - fSlow0)));
			float fTemp241 = ((-(0.75f * fTemp240) > fRec228[1]) ? fConst123 : fConst121);
			fRec228[0] = fRec228[1] * fTemp241 - 0.75f * fTemp240 * (1.0f - fTemp241);
			float fTemp242 = fRec5 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec228[0]))) + 1.5f)))));
			float fTemp243 = std::fabs(fTemp242);
			fVec85[0] = fTemp243;
			float fTemp244 = std::max<float>(fTemp243, fVec85[1]);
			fVec86[0] = fTemp244;
			float fTemp245 = std::max<float>(fTemp244, fVec86[2]);
			fVec87[0] = fTemp245;
			float fTemp246 = std::max<float>(fTemp245, fVec87[4]);
			fVec88[0] = fTemp246;
			float fTemp247 = std::max<float>(fTemp246, fVec88[8]);
			fVec89[IOTA0 & 31] = fTemp247;
			float fTemp248 = std::max<float>(fTemp247, fVec89[(IOTA0 - 16) & 31]);
			fVec90[IOTA0 & 63] = fTemp248;
			float fTemp249 = std::max<float>(fTemp248, fVec90[(IOTA0 - 32) & 63]);
			fVec91[IOTA0 & 127] = fTemp249;
			float fTemp250 = std::max<float>(fTemp249, fVec91[(IOTA0 - 64) & 127]);
			fVec92[IOTA0 & 255] = fTemp250;
			float fTemp251 = std::max<float>(fTemp250, fVec92[(IOTA0 - 128) & 255]);
			fVec93[IOTA0 & 511] = fTemp251;
			fVec94[IOTA0 & 511] = std::max<float>(fTemp251, fVec93[(IOTA0 - 256) & 511]);
			float fTemp252 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp243 : -3.4028235e+38f), ((iConst102) ? fVec86[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec87[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec88[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec89[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec90[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec91[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec92[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec93[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec94[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp253 = (fTemp252 > fSlow35) + (fTemp252 > fSlow32);
			float fTemp254 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp253 == 0) ? fTemp252 + 12.0f - fSlow0 : ((iTemp253 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp252 + 9.0f - fSlow0)) : 0.0f)));
			float fTemp255 = ((iTemp142) ? 0.2f : 0.006f);
			int iTemp256 = std::fabs(fTemp255) < 1.1920929e-07f;
			float fTemp257 = ((iTemp142) ? 0.006f : 0.2f);
			int iTemp258 = std::fabs(fTemp257) < 1.1920929e-07f;
			float fTemp259 = ((fTemp254 > fRec227[1]) ? ((iTemp258) ? 0.0f : std::exp(-(fConst6 / ((iTemp258) ? 1.0f : fTemp257)))) : ((iTemp256) ? 0.0f : std::exp(-(fConst6 / ((iTemp256) ? 1.0f : fTemp255)))));
			fRec227[0] = fTemp254 * (1.0f - fTemp259) + fRec227[1] * fTemp259;
			float fTemp260 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec4)));
			int iTemp261 = (fTemp260 > fSlow36) + (fTemp260 > fSlow37);
			float fTemp262 = std::max<float>(0.0f, ((iTemp261 == 0) ? 0.0f : ((iTemp261 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp260 + 6.5f - fSlow0) : fTemp260 + 6.0f - fSlow0)));
			float fTemp263 = ((-(0.75f * fTemp262) > fRec230[1]) ? fConst124 : fConst2);
			fRec230[0] = fRec230[1] * fTemp263 - 0.75f * fTemp262 * (1.0f - fTemp263);
			float fTemp264 = fRec4 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec230[0]))) + 1.5f)))));
			float fTemp265 = std::fabs(fTemp264);
			fVec95[0] = fTemp265;
			float fTemp266 = std::max<float>(fTemp265, fVec95[1]);
			fVec96[0] = fTemp266;
			float fTemp267 = std::max<float>(fTemp266, fVec96[2]);
			fVec97[0] = fTemp267;
			float fTemp268 = std::max<float>(fTemp267, fVec97[4]);
			fVec98[0] = fTemp268;
			float fTemp269 = std::max<float>(fTemp268, fVec98[8]);
			fVec99[IOTA0 & 31] = fTemp269;
			float fTemp270 = std::max<float>(fTemp269, fVec99[(IOTA0 - 16) & 31]);
			fVec100[IOTA0 & 63] = fTemp270;
			float fTemp271 = std::max<float>(fTemp270, fVec100[(IOTA0 - 32) & 63]);
			fVec101[IOTA0 & 127] = fTemp271;
			float fTemp272 = std::max<float>(fTemp271, fVec101[(IOTA0 - 64) & 127]);
			fVec102[IOTA0 & 255] = fTemp272;
			float fTemp273 = std::max<float>(fTemp272, fVec102[(IOTA0 - 128) & 255]);
			fVec103[IOTA0 & 511] = fTemp273;
			fVec104[IOTA0 & 511] = std::max<float>(fTemp273, fVec103[(IOTA0 - 256) & 511]);
			float fTemp274 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp265 : -3.4028235e+38f), ((iConst102) ? fVec96[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec97[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec98[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec99[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec100[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec101[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec102[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec103[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec104[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp275 = (fTemp274 > fSlow35) + (fTemp274 > fSlow32);
			float fTemp276 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp275 == 0) ? fTemp274 + 12.0f - fSlow0 : ((iTemp275 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp274 + 9.0f - fSlow0)) : 0.0f)));
			float fTemp277 = ((iTemp142) ? 0.2f : 0.007f);
			int iTemp278 = std::fabs(fTemp277) < 1.1920929e-07f;
			float fTemp279 = ((iTemp142) ? 0.007f : 0.2f);
			int iTemp280 = std::fabs(fTemp279) < 1.1920929e-07f;
			float fTemp281 = ((fTemp276 > fRec229[1]) ? ((iTemp280) ? 0.0f : std::exp(-(fConst6 / ((iTemp280) ? 1.0f : fTemp279)))) : ((iTemp278) ? 0.0f : std::exp(-(fConst6 / ((iTemp278) ? 1.0f : fTemp277)))));
			fRec229[0] = fTemp276 * (1.0f - fTemp281) + fRec229[1] * fTemp281;
			float fTemp282 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec3)));
			int iTemp283 = (fTemp282 > fSlow36) + (fTemp282 > fSlow37);
			float fTemp284 = std::max<float>(0.0f, ((iTemp283 == 0) ? 0.0f : ((iTemp283 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp282 + 6.5f - fSlow0) : fTemp282 + 6.0f - fSlow0)));
			float fTemp285 = ((-(0.75f * fTemp284) > fRec232[1]) ? fConst84 : fConst125);
			fRec232[0] = fRec232[1] * fTemp285 - 0.75f * fTemp284 * (1.0f - fTemp285);
			float fTemp286 = fRec3 * std::pow(1e+01f, fSlow24 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec232[0]))) + 1.5f)))));
			float fTemp287 = std::fabs(fTemp286);
			fVec105[0] = fTemp287;
			float fTemp288 = std::max<float>(fTemp287, fVec105[1]);
			fVec106[0] = fTemp288;
			float fTemp289 = std::max<float>(fTemp288, fVec106[2]);
			fVec107[0] = fTemp289;
			float fTemp290 = std::max<float>(fTemp289, fVec107[4]);
			fVec108[0] = fTemp290;
			float fTemp291 = std::max<float>(fTemp290, fVec108[8]);
			fVec109[IOTA0 & 31] = fTemp291;
			float fTemp292 = std::max<float>(fTemp291, fVec109[(IOTA0 - 16) & 31]);
			fVec110[IOTA0 & 63] = fTemp292;
			float fTemp293 = std::max<float>(fTemp292, fVec110[(IOTA0 - 32) & 63]);
			fVec111[IOTA0 & 127] = fTemp293;
			float fTemp294 = std::max<float>(fTemp293, fVec111[(IOTA0 - 64) & 127]);
			fVec112[IOTA0 & 255] = fTemp294;
			float fTemp295 = std::max<float>(fTemp294, fVec112[(IOTA0 - 128) & 255]);
			fVec113[IOTA0 & 511] = fTemp295;
			fVec114[IOTA0 & 511] = std::max<float>(fTemp295, fVec113[(IOTA0 - 256) & 511]);
			float fTemp296 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst1) ? fTemp287 : -3.4028235e+38f), ((iConst102) ? fVec106[iConst1] : -3.4028235e+38f)), ((iConst103) ? fVec107[iConst104] : -3.4028235e+38f)), ((iConst105) ? fVec108[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec109[(IOTA0 - iConst108) & 31] : -3.4028235e+38f)), ((iConst109) ? fVec110[(IOTA0 - iConst110) & 63] : -3.4028235e+38f)), ((iConst111) ? fVec111[(IOTA0 - iConst112) & 127] : -3.4028235e+38f)), ((iConst113) ? fVec112[(IOTA0 - iConst114) & 255] : -3.4028235e+38f)), ((iConst115) ? fVec113[(IOTA0 - iConst116) & 511] : -3.4028235e+38f)), ((iConst117) ? fVec114[(IOTA0 - iConst118) & 511] : -3.4028235e+38f))));
			int iTemp297 = (fTemp296 > fSlow35) + (fTemp296 > fSlow32);
			float fTemp298 = std::max<float>(-12.0f, ((iTemp297 == 0) ? fTemp296 + 12.0f - fSlow0 : ((iTemp297 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp296 + 9.0f - fSlow0)) : 0.0f)) * fTemp141) * fTemp143;
			float fTemp299 = ((iTemp142) ? 0.2f : 0.008f);
			int iTemp300 = std::fabs(fTemp299) < 1.1920929e-07f;
			float fTemp301 = ((iTemp142) ? 0.008f : 0.2f);
			int iTemp302 = std::fabs(fTemp301) < 1.1920929e-07f;
			float fTemp303 = ((fTemp298 > fRec231[1]) ? ((iTemp302) ? 0.0f : std::exp(-(fConst6 / ((iTemp302) ? 1.0f : fTemp301)))) : ((iTemp300) ? 0.0f : std::exp(-(fConst6 / ((iTemp300) ? 1.0f : fTemp299)))));
			fRec231[0] = fTemp298 * (1.0f - fTemp303) + fRec231[1] * fTemp303;
			float fTemp304 = fTemp286 * std::pow(1e+01f, 0.05f * fRec231[0]) + fTemp264 * std::pow(1e+01f, 0.05f * fRec229[0]) + fTemp242 * std::pow(1e+01f, 0.05f * fRec227[0]) + fTemp220 * std::pow(1e+01f, 0.05f * fRec225[0]) + fTemp198 * std::pow(1e+01f, 0.05f * fRec223[0]) + fTemp176 * std::pow(1e+01f, 0.05f * fRec221[0]) + fTemp154 * std::pow(1e+01f, 0.05f * fRec219[0]) + fTemp128 * std::pow(1e+01f, 0.05f * fRec0[0]);
			fVec115[IOTA0 & 2047] = fTemp304;
			float fTemp305 = std::fabs(fTemp304);
			int iTemp306 = (fTemp305 >= fRec236[1]) | (float(iRec235[1]) >= fConst8);
			iRec235[0] = ((iTemp306) ? 0 : iRec235[1] + 1);
			fRec236[0] = ((iTemp306) ? fTemp305 : fRec236[1]);
			fRec234[0] = fConst128 * fRec236[0] + fConst127 * fRec234[1];
			float fTemp307 = std::fabs(fRec234[0]);
			fRec233[0] = std::max<float>(fTemp307, fConst129 * fRec233[1] + fConst130 * fTemp307);
			float fTemp308 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec233[0], 1.1920929e-07f));
			fVbargraph1 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp308))));
			fRec237[0] = fSlow38 + fConst45 * fRec237[1];
			output0[i0] = FAUSTFLOAT(fTemp17 * fRec237[0] + (1.0f - fRec237[0]) * fTemp308 * fVec115[(IOTA0 - iConst126) & 2047]);
			fRec72[1] = fRec72[0];
			fVec0[1] = fVec0[0];
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			fVec1[1] = fVec1[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
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
			fRec67[1] = fRec67[0];
			fRec68[1] = fRec68[0];
			fRec65[1] = fRec65[0];
			fRec64[1] = fRec64[0];
			fRec78[1] = fRec78[0];
			fVec11[1] = fVec11[0];
			fRec77[1] = fRec77[0];
			fVec12[1] = fVec12[0];
			fRec59[1] = fRec59[0];
			fRec60[1] = fRec60[0];
			fRec54[1] = fRec54[0];
			fRec55[1] = fRec55[0];
			fRec50[1] = fRec50[0];
			fRec51[1] = fRec51[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec42[1] = fRec42[0];
			fRec43[1] = fRec43[0];
			fRec37[1] = fRec37[0];
			fRec38[1] = fRec38[0];
			fRec32[1] = fRec32[0];
			fRec33[1] = fRec33[0];
			fRec28[1] = fRec28[0];
			fRec29[1] = fRec29[0];
			fRec23[1] = fRec23[0];
			fRec24[1] = fRec24[0];
			fRec18[1] = fRec18[0];
			fRec19[1] = fRec19[0];
			fVec13[1] = fVec13[0];
			fVec14[1] = fVec14[0];
			fRec17[1] = fRec17[0];
			fRec16[1] = fRec16[0];
			fVec15[1] = fVec15[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			fVec16[1] = fVec16[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fVec17[1] = fVec17[0];
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec11[1] = fRec11[0];
			fRec92[1] = fRec92[0];
			fRec93[1] = fRec93[0];
			fRec94[1] = fRec94[0];
			fVec18[1] = fVec18[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fVec19[1] = fVec19[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			fRec116[1] = fRec116[0];
			fRec117[1] = fRec117[0];
			fRec112[1] = fRec112[0];
			fRec113[1] = fRec113[0];
			fRec107[1] = fRec107[0];
			fRec108[1] = fRec108[0];
			fRec102[1] = fRec102[0];
			fRec103[1] = fRec103[0];
			fVec20[1] = fVec20[0];
			fVec21[1] = fVec21[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fVec22[1] = fVec22[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fRec126[1] = fRec126[0];
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fVec23[1] = fVec23[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fVec24[1] = fVec24[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			fRec172[1] = fRec172[0];
			fRec173[1] = fRec173[0];
			fRec168[1] = fRec168[0];
			fRec169[1] = fRec169[0];
			fRec164[1] = fRec164[0];
			fRec165[1] = fRec165[0];
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
			fRec155[1] = fRec155[0];
			fRec156[1] = fRec156[0];
			fRec150[1] = fRec150[0];
			fRec151[1] = fRec151[0];
			fRec146[1] = fRec146[0];
			fRec147[1] = fRec147[0];
			fRec141[1] = fRec141[0];
			fRec142[1] = fRec142[0];
			fRec136[1] = fRec136[0];
			fRec137[1] = fRec137[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			fVec27[1] = fVec27[0];
			fRec133[1] = fRec133[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fRec129[1] = fRec129[0];
			fRec182[1] = fRec182[0];
			fRec183[1] = fRec183[0];
			fRec184[1] = fRec184[0];
			fVec28[1] = fVec28[0];
			fRec181[1] = fRec181[0];
			fRec180[1] = fRec180[0];
			fVec29[1] = fVec29[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			fRec177[1] = fRec177[0];
			fRec176[1] = fRec176[0];
			fRec175[1] = fRec175[0];
			fRec206[1] = fRec206[0];
			fRec207[1] = fRec207[0];
			fRec202[1] = fRec202[0];
			fRec203[1] = fRec203[0];
			fRec197[1] = fRec197[0];
			fRec198[1] = fRec198[0];
			fRec192[1] = fRec192[0];
			fRec193[1] = fRec193[0];
			fVec30[1] = fVec30[0];
			fVec31[1] = fVec31[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			fVec32[1] = fVec32[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec185[1] = fRec185[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fVec33[1] = fVec33[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			fVec34[1] = fVec34[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fRec209[1] = fRec209[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fVec35[1] = fVec35[0];
			fVec36[2] = fVec36[1];
			fVec36[1] = fVec36[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec37[j2] = fVec37[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec38[j3] = fVec38[j3 - 1];
			}
			fRec0[1] = fRec0[0];
			fRec220[1] = fRec220[0];
			fVec45[1] = fVec45[0];
			fVec46[2] = fVec46[1];
			fVec46[1] = fVec46[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec47[j4] = fVec47[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec48[j5] = fVec48[j5 - 1];
			}
			fRec219[1] = fRec219[0];
			fRec222[1] = fRec222[0];
			fVec55[1] = fVec55[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec57[j6] = fVec57[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec58[j7] = fVec58[j7 - 1];
			}
			fRec221[1] = fRec221[0];
			fRec224[1] = fRec224[0];
			fVec65[1] = fVec65[0];
			fVec66[2] = fVec66[1];
			fVec66[1] = fVec66[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec67[j8] = fVec67[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec68[j9] = fVec68[j9 - 1];
			}
			fRec223[1] = fRec223[0];
			fRec226[1] = fRec226[0];
			fVec75[1] = fVec75[0];
			fVec76[2] = fVec76[1];
			fVec76[1] = fVec76[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec77[j10] = fVec77[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec78[j11] = fVec78[j11 - 1];
			}
			fRec225[1] = fRec225[0];
			fRec228[1] = fRec228[0];
			fVec85[1] = fVec85[0];
			fVec86[2] = fVec86[1];
			fVec86[1] = fVec86[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec87[j12] = fVec87[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec88[j13] = fVec88[j13 - 1];
			}
			fRec227[1] = fRec227[0];
			fRec230[1] = fRec230[0];
			fVec95[1] = fVec95[0];
			fVec96[2] = fVec96[1];
			fVec96[1] = fVec96[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec97[j14] = fVec97[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec98[j15] = fVec98[j15 - 1];
			}
			fRec229[1] = fRec229[0];
			fRec232[1] = fRec232[0];
			fVec105[1] = fVec105[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec107[j16] = fVec107[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec108[j17] = fVec108[j17 - 1];
			}
			fRec231[1] = fRec231[0];
			iRec235[1] = iRec235[0];
			fRec236[1] = fRec236[0];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fRec237[1] = fRec237[0];
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