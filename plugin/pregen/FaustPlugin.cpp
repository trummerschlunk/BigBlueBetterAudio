
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
// Version: 0.26
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
	FAUSTFLOAT fCheckbox0;
	float fConst2;
	float fRec0[2];
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fConst27;
	float fConst28;
	float fConst29;
	float fConst30;
	float fConst31;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	float fRec57[2];
	float fVec0[2];
	float fRec56[2];
	FAUSTFLOAT fVslider2;
	float fConst32;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst33;
	float fRec66[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVbargraph0;
	float fConst34;
	FAUSTFLOAT fVslider6;
	float fConst35;
	float fConst36;
	float fConst37;
	int iConst38;
	float fConst39;
	float fConst40;
	float fConst41;
	float fConst42;
	float fConst43;
	float fConst44;
	float fConst45;
	float fConst46;
	float fConst47;
	float fConst48;
	float fConst49;
	float fConst50;
	float fConst51;
	float fVec1[2];
	float fConst52;
	float fConst53;
	float fRec70[2];
	float fRec69[2];
	float fConst54;
	float fVec2[2];
	float fConst55;
	float fRec68[2];
	float fRec67[2];
	float fVec3[2];
	float fVec4[3];
	float fVec5[5];
	float fVec6[12];
	int IOTA0;
	float fVec7[32];
	float fVec8[64];
	float fVec9[128];
	float fVec10[256];
	float fVec11[512];
	int iConst56;
	int iConst57;
	int iConst58;
	int iConst59;
	int iConst60;
	int iConst61;
	int iConst62;
	int iConst63;
	int iConst64;
	int iConst65;
	int iConst66;
	int iConst67;
	int iConst68;
	int iConst69;
	int iConst70;
	float fRec61[2];
	float fRec62[2];
	float fRec59[2];
	float fRec58[2];
	float fVec12[2];
	float fRec51[2];
	float fConst71;
	float fRec52[2];
	float fConst72;
	float fRec48[2];
	float fRec49[2];
	float fRec44[2];
	float fConst73;
	float fRec45[2];
	float fConst74;
	float fRec40[2];
	float fConst75;
	float fRec41[2];
	float fConst76;
	float fRec36[2];
	float fConst77;
	float fRec37[2];
	float fConst78;
	float fRec31[2];
	float fConst79;
	float fRec32[2];
	float fConst80;
	float fRec28[2];
	float fRec29[2];
	float fRec24[2];
	float fConst81;
	float fRec25[2];
	float fConst82;
	float fRec19[2];
	float fConst83;
	float fRec20[2];
	float fConst84;
	float fRec16[2];
	float fRec17[2];
	float fRec18[2];
	float fConst85;
	float fConst86;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	float fConst87;
	float fConst88;
	float fConst89;
	float fVec13[2];
	float fConst90;
	float fConst91;
	float fRec77[2];
	float fRec76[2];
	float fVec14[2];
	float fRec75[2];
	float fRec74[2];
	float fConst92;
	float fConst93;
	float fRec73[2];
	float fRec72[2];
	float fVec15[2];
	float fRec83[2];
	float fRec82[2];
	float fVec16[2];
	float fRec81[2];
	float fRec80[2];
	float fRec79[2];
	float fRec78[2];
	float fRec71[2];
	float fRec84[2];
	float fRec85[2];
	float fVec17[2];
	float fConst94;
	float fConst95;
	FAUSTFLOAT fVslider10;
	float fVec18[2];
	float fRec95[2];
	float fRec94[2];
	float fVec19[2];
	float fRec93[2];
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	float fRec89[2];
	float fRec108[2];
	float fRec109[2];
	float fRec104[2];
	float fRec105[2];
	float fRec99[2];
	float fRec100[2];
	float fRec96[2];
	float fRec97[2];
	float fRec98[2];
	float fConst96;
	float fConst97;
	FAUSTFLOAT fVslider11;
	float fVec20[2];
	float fRec119[2];
	float fRec118[2];
	float fVec21[2];
	float fRec117[2];
	float fRec116[2];
	float fRec115[2];
	float fRec114[2];
	float fRec113[2];
	float fRec120[2];
	float fRec121[2];
	float fVec22[2];
	float fConst98;
	float fConst99;
	FAUSTFLOAT fVslider12;
	float fVec23[2];
	float fRec131[2];
	float fRec130[2];
	float fVec24[2];
	float fRec129[2];
	float fRec128[2];
	float fRec127[2];
	float fRec126[2];
	float fRec125[2];
	float fRec164[2];
	float fRec165[2];
	float fRec160[2];
	float fRec161[2];
	float fRec156[2];
	float fRec157[2];
	float fRec152[2];
	float fRec153[2];
	float fRec147[2];
	float fRec148[2];
	float fRec144[2];
	float fRec145[2];
	float fRec140[2];
	float fRec141[2];
	float fRec135[2];
	float fRec136[2];
	float fRec132[2];
	float fRec133[2];
	float fRec134[2];
	float fConst100;
	FAUSTFLOAT fVslider13;
	float fVec25[2];
	float fRec175[2];
	float fRec174[2];
	float fVec26[2];
	float fRec173[2];
	float fRec172[2];
	float fRec171[2];
	float fRec170[2];
	float fRec169[2];
	float fRec176[2];
	float fRec177[2];
	float fVec27[2];
	float fConst101;
	float fConst102;
	FAUSTFLOAT fVslider14;
	float fVec28[2];
	float fRec187[2];
	float fRec186[2];
	float fVec29[2];
	float fRec185[2];
	float fRec184[2];
	float fRec183[2];
	float fRec182[2];
	float fRec181[2];
	float fRec200[2];
	float fRec201[2];
	float fRec196[2];
	float fRec197[2];
	float fRec191[2];
	float fRec192[2];
	float fRec188[2];
	float fRec189[2];
	float fRec190[2];
	float fConst103;
	float fConst104;
	FAUSTFLOAT fVslider15;
	float fVec30[2];
	float fRec211[2];
	float fRec210[2];
	float fVec31[2];
	float fRec209[2];
	float fRec208[2];
	float fRec207[2];
	float fRec206[2];
	float fRec205[2];
	float fRec212[2];
	float fRec213[2];
	float fVec32[2];
	float fConst105;
	float fConst106;
	FAUSTFLOAT fVslider16;
	float fVec33[2];
	float fRec223[2];
	float fRec222[2];
	float fVec34[2];
	float fRec221[2];
	float fRec220[2];
	float fRec219[2];
	float fRec218[2];
	float fRec217[2];
	float fRec7[3];
	FAUSTFLOAT fVslider17;
	float fConst107;
	float fRec224[2];
	int iConst108;
	float fVec35[2];
	int iConst109;
	float fVec36[3];
	int iConst110;
	float fVec37[5];
	int iConst111;
	int iConst112;
	float fVec38[12];
	int iConst113;
	int iConst114;
	float fVec39[32];
	int iConst115;
	int iConst116;
	float fVec40[64];
	int iConst117;
	int iConst118;
	float fVec41[128];
	int iConst119;
	int iConst120;
	float fVec42[256];
	int iConst121;
	int iConst122;
	float fVec43[512];
	int iConst123;
	int iConst124;
	float fVec44[512];
	int iConst125;
	FAUSTFLOAT fVslider18;
	float fRec225[2];
	float fConst126;
	float fRec226[2];
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
	float fRec227[2];
	float fConst127;
	float fConst128;
	float fRec228[2];
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
	float fRec229[2];
	float fConst129;
	float fConst130;
	float fRec230[2];
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
	float fRec231[2];
	float fRec232[2];
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
	float fRec233[2];
	float fConst131;
	float fRec234[2];
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
	float fRec235[2];
	float fConst132;
	float fRec236[2];
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
	float fRec237[2];
	float fConst133;
	float fRec238[2];
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
	float fRec239[2];
	float fVec115[2];
	float fRec6[2];
	float fConst134;
	float fConst135;
	float fRec5[3];
	float fVec116[2048];
	int iRec3[2];
	float fRec4[2];
	float fRec2[2];
	float fConst136;
	float fConst137;
	float fRec1[2];
	FAUSTFLOAT fVbargraph1;
	int iConst138;
	
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
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/25556-md.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("filters.lib/fir:author", "Julius O. Smith III");
		m->declare("filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/fir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/highpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/highpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/highpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/iir:author", "Julius O. Smith III");
		m->declare("filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/iir:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:author", "Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:copyright", "Copyright (C) 2022 Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:license", "ISC license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
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
		m->declare("filters.lib/tf2:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/tf2s:author", "Julius O. Smith III");
		m->declare("filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/tf2s:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.6.0");
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
		m->declare("version", "0.26");
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
		fConst1 = 44.1f / fConst0;
		fConst2 = 1.0f - fConst1;
		fConst3 = std::tan(37699.113f / fConst0);
		fConst4 = 1.0f / fConst3;
		fConst5 = 1.0f / ((fConst4 + 1.0f) / fConst3 + 1.0f);
		fConst6 = std::exp(-(628.31854f / fConst0));
		fConst7 = 1.0f - fConst6;
		fConst8 = 1.0f / (fConst4 + 1.0f);
		fConst9 = 1.0f - fConst4;
		fConst10 = std::tan(314.15927f / fConst0);
		fConst11 = fConst10 * (fConst10 + 1.4142135f) + 1.0f;
		fConst12 = 2.0f / fConst11;
		fConst13 = std::tan(1256.6371f / fConst0);
		fConst14 = fConst13 * (fConst13 + 1.4142135f) + 1.0f;
		fConst15 = 2.0f / fConst14;
		fConst16 = std::tan(628.31854f / fConst0);
		fConst17 = fConst16 * (fConst16 + 1.4142135f) + 1.0f;
		fConst18 = 2.0f / fConst17;
		fConst19 = std::tan(20106.193f / fConst0);
		fConst20 = fConst19 * (fConst19 + 1.4142135f) + 1.0f;
		fConst21 = 2.0f / fConst20;
		fConst22 = std::tan(5026.5483f / fConst0);
		fConst23 = fConst22 * (fConst22 + 1.4142135f) + 1.0f;
		fConst24 = 2.0f / fConst23;
		fConst25 = std::tan(10053.097f / fConst0);
		fConst26 = fConst25 * (fConst25 + 1.4142135f) + 1.0f;
		fConst27 = 2.0f / fConst26;
		fConst28 = std::tan(2513.2742f / fConst0);
		fConst29 = fConst28 * (fConst28 + 1.4142135f) + 1.0f;
		fConst30 = 2.0f / fConst29;
		fConst31 = 3.1415927f / fConst0;
		fConst32 = 0.125f * fConst0;
		fConst33 = 1.0f / fConst0;
		fConst34 = 1.1312305e-06f * fConst0;
		fConst35 = 0.01f * fConst0;
		fConst36 = std::rint(fConst35);
		fConst37 = 1.0f / std::max<float>(fConst36, 1.1920929e-07f);
		iConst38 = int(std::floor(0.00390625f * fConst36)) % 2;
		fConst39 = std::tan(119.806114f / fConst0);
		fConst40 = mydsp_faustpower2_f(fConst39);
		fConst41 = 0.50032705f * (fConst40 + 1.0f);
		fConst42 = 1.0f / (fConst39 + fConst41);
		fConst43 = std::tan(5283.415f / fConst0);
		fConst44 = mydsp_faustpower2_f(fConst43);
		fConst45 = 1.4142135f * fConst43;
		fConst46 = 1.0f / (fConst44 + fConst45 + 1.0f);
		fConst47 = fConst44 + -1.5848527f;
		fConst48 = 2.0f * fConst47;
		fConst49 = fConst44 + (1.0f - fConst45);
		fConst50 = 1.7803667f * fConst43;
		fConst51 = fConst44 + (1.5848527f - fConst50);
		fConst52 = 2.0f * (fConst44 + -1.0f);
		fConst53 = fConst44 + fConst50 + 1.5848527f;
		fConst54 = fConst41 - fConst39;
		fConst55 = 1.0006541f * (fConst40 + -1.0f);
		iConst56 = int(std::floor(fConst36)) % 2;
		iConst57 = int(std::floor(0.5f * fConst36)) % 2;
		iConst58 = iConst56 + 2 * iConst57;
		iConst59 = int(std::floor(0.25f * fConst36)) % 2;
		iConst60 = iConst58 + 4 * iConst59;
		iConst61 = int(std::floor(0.125f * fConst36)) % 2;
		iConst62 = iConst60 + 8 * iConst61;
		iConst63 = int(std::floor(0.0625f * fConst36)) % 2;
		iConst64 = iConst62 + 16 * iConst63;
		iConst65 = int(std::floor(0.03125f * fConst36)) % 2;
		iConst66 = iConst64 + 32 * iConst65;
		iConst67 = int(std::floor(0.015625f * fConst36)) % 2;
		iConst68 = iConst66 + 64 * iConst67;
		iConst69 = int(std::floor(0.0078125f * fConst36)) % 2;
		iConst70 = iConst68 + 128 * iConst69;
		fConst71 = fConst28 / fConst29;
		fConst72 = 1.0f / fConst29;
		fConst73 = fConst25 / fConst26;
		fConst74 = 1.0f / fConst26;
		fConst75 = fConst22 / fConst23;
		fConst76 = 1.0f / fConst23;
		fConst77 = fConst19 / fConst20;
		fConst78 = 1.0f / fConst20;
		fConst79 = fConst16 / fConst17;
		fConst80 = 1.0f / fConst17;
		fConst81 = fConst13 / fConst14;
		fConst82 = 1.0f / fConst14;
		fConst83 = fConst10 / fConst11;
		fConst84 = 1.0f / fConst11;
		fConst85 = std::exp(-(5.0f / fConst0));
		fConst86 = 0.0001f * (1.0f - fConst85);
		fConst87 = std::exp(-(1e+02f / fConst0));
		fConst88 = 1.0f - fConst87;
		fConst89 = 3.9810717f * fConst51;
		fConst90 = 7.9621434f * fConst47;
		fConst91 = 3.9810717f * fConst53;
		fConst92 = std::exp(-(1e+01f / fConst0));
		fConst93 = 1.0f - fConst92;
		fConst94 = std::exp(-(5.714286f / fConst0));
		fConst95 = 0.0001f * (1.0f - fConst94);
		fConst96 = std::exp(-(6.6666665f / fConst0));
		fConst97 = 0.0001f * (1.0f - fConst96);
		fConst98 = std::exp(-(8.0f / fConst0));
		fConst99 = 0.0001f * (1.0f - fConst98);
		fConst100 = 0.0001f * fConst93;
		fConst101 = std::exp(-(13.333333f / fConst0));
		fConst102 = 0.0001f * (1.0f - fConst101);
		fConst103 = std::exp(-(2e+01f / fConst0));
		fConst104 = 0.0001f * (1.0f - fConst103);
		fConst105 = std::exp(-(4e+01f / fConst0));
		fConst106 = 0.0001f * (1.0f - fConst105);
		fConst107 = std::exp(-(33.333332f / fConst0));
		iConst108 = int(std::floor(0.001f * fConst0)) % 2;
		iConst109 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst110 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst111 = iConst108 + 2 * iConst109;
		iConst112 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst113 = iConst111 + 4 * iConst110;
		iConst114 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst115 = iConst113 + 8 * iConst112;
		iConst116 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst117 = iConst115 + 16 * iConst114;
		iConst118 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst119 = iConst117 + 32 * iConst116;
		iConst120 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst121 = iConst119 + 64 * iConst118;
		iConst122 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst123 = iConst121 + 128 * iConst120;
		iConst124 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst125 = iConst123 + 256 * iConst122;
		fConst126 = std::exp(-(12.5f / fConst0));
		fConst127 = std::exp(-(5e+01f / fConst0));
		fConst128 = std::exp(-(16.666666f / fConst0));
		fConst129 = std::exp(-(66.666664f / fConst0));
		fConst130 = std::exp(-(25.0f / fConst0));
		fConst131 = std::exp(-(2e+02f / fConst0));
		fConst132 = std::exp(-(333.33334f / fConst0));
		fConst133 = std::exp(-(5e+02f / fConst0));
		fConst134 = (fConst4 + -1.0f) / fConst3 + 1.0f;
		fConst135 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst3));
		fConst136 = std::exp(-(6.2831855f / fConst0));
		fConst137 = 1.0f - fConst136;
		iConst138 = int(fConst35);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider0 = FAUSTFLOAT(42.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(5e+01f);
		fVslider5 = FAUSTFLOAT(0.9f);
		fVslider6 = FAUSTFLOAT(-23.0f);
		fVslider7 = FAUSTFLOAT(8e+01f);
		fVslider8 = FAUSTFLOAT(5e+01f);
		fVslider9 = FAUSTFLOAT(-1e+01f);
		fVslider10 = FAUSTFLOAT(-5.0f);
		fVslider11 = FAUSTFLOAT(-5.0f);
		fVslider12 = FAUSTFLOAT(-8.0f);
		fVslider13 = FAUSTFLOAT(-9.0f);
		fVslider14 = FAUSTFLOAT(-1e+01f);
		fVslider15 = FAUSTFLOAT(-7.0f);
		fVslider16 = FAUSTFLOAT(-4.0f);
		fVslider17 = FAUSTFLOAT(5e+01f);
		fVslider18 = FAUSTFLOAT(1.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec57[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fVec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec56[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec66[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fVec1[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec70[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec69[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec2[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec68[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec67[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fVec3[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 3; l12 = l12 + 1) {
			fVec4[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 5; l13 = l13 + 1) {
			fVec5[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 12; l14 = l14 + 1) {
			fVec6[l14] = 0.0f;
		}
		IOTA0 = 0;
		for (int l15 = 0; l15 < 32; l15 = l15 + 1) {
			fVec7[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 64; l16 = l16 + 1) {
			fVec8[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 128; l17 = l17 + 1) {
			fVec9[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 256; l18 = l18 + 1) {
			fVec10[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 512; l19 = l19 + 1) {
			fVec11[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec61[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec62[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec59[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec58[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fVec12[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec51[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec52[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec48[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec49[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec44[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec45[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec40[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec41[l32] = 0.0f;
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
			fRec28[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec29[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec24[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec25[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec19[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec20[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec16[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec17[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec18[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec13[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec77[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec76[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fVec14[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec75[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec74[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec73[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec72[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fVec15[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec83[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec82[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fVec16[l57] = 0.0f;
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
			fRec78[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec71[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec84[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec85[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fVec17[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec18[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec95[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec94[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fVec19[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec93[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec92[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec91[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec90[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec89[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec108[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec109[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec104[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec105[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec99[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec100[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec96[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec97[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec98[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec20[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec119[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec118[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fVec21[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec117[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec116[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec115[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec114[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec113[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec120[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec121[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec22[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec23[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec131[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec130[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fVec24[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec129[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec128[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec127[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec126[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec125[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec164[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec165[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec160[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec161[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec156[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec157[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec152[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec153[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec147[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec148[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec144[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec145[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec140[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec141[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec135[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec136[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec132[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec133[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec134[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec25[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec175[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec174[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec26[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec173[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec172[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec171[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec170[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec169[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec176[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec177[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fVec27[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fVec28[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec187[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec186[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fVec29[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec185[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec184[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec183[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec182[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec181[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec200[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec201[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec196[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec197[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec191[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec192[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec188[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec189[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec190[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec30[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec211[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec210[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fVec31[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec209[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec208[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec207[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec206[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec205[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec212[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec213[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fVec32[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec33[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec223[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec222[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fVec34[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec221[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec220[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec219[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec218[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec217[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 3; l175 = l175 + 1) {
			fRec7[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec224[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fVec35[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 3; l178 = l178 + 1) {
			fVec36[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 5; l179 = l179 + 1) {
			fVec37[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 12; l180 = l180 + 1) {
			fVec38[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 32; l181 = l181 + 1) {
			fVec39[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 64; l182 = l182 + 1) {
			fVec40[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 128; l183 = l183 + 1) {
			fVec41[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 256; l184 = l184 + 1) {
			fVec42[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 512; l185 = l185 + 1) {
			fVec43[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 512; l186 = l186 + 1) {
			fVec44[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec225[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec226[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fVec45[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 3; l190 = l190 + 1) {
			fVec46[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 5; l191 = l191 + 1) {
			fVec47[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 12; l192 = l192 + 1) {
			fVec48[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 32; l193 = l193 + 1) {
			fVec49[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 64; l194 = l194 + 1) {
			fVec50[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 128; l195 = l195 + 1) {
			fVec51[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 256; l196 = l196 + 1) {
			fVec52[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 512; l197 = l197 + 1) {
			fVec53[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 512; l198 = l198 + 1) {
			fVec54[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec227[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec228[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fVec55[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 3; l202 = l202 + 1) {
			fVec56[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 5; l203 = l203 + 1) {
			fVec57[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 12; l204 = l204 + 1) {
			fVec58[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 32; l205 = l205 + 1) {
			fVec59[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 64; l206 = l206 + 1) {
			fVec60[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 128; l207 = l207 + 1) {
			fVec61[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 256; l208 = l208 + 1) {
			fVec62[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 512; l209 = l209 + 1) {
			fVec63[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 512; l210 = l210 + 1) {
			fVec64[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec229[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec230[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fVec65[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 3; l214 = l214 + 1) {
			fVec66[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 5; l215 = l215 + 1) {
			fVec67[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 12; l216 = l216 + 1) {
			fVec68[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 32; l217 = l217 + 1) {
			fVec69[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 64; l218 = l218 + 1) {
			fVec70[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 128; l219 = l219 + 1) {
			fVec71[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 256; l220 = l220 + 1) {
			fVec72[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 512; l221 = l221 + 1) {
			fVec73[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 512; l222 = l222 + 1) {
			fVec74[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec231[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec232[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fVec75[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 3; l226 = l226 + 1) {
			fVec76[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 5; l227 = l227 + 1) {
			fVec77[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 12; l228 = l228 + 1) {
			fVec78[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 32; l229 = l229 + 1) {
			fVec79[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 64; l230 = l230 + 1) {
			fVec80[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 128; l231 = l231 + 1) {
			fVec81[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 256; l232 = l232 + 1) {
			fVec82[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 512; l233 = l233 + 1) {
			fVec83[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 512; l234 = l234 + 1) {
			fVec84[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec233[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec234[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fVec85[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 3; l238 = l238 + 1) {
			fVec86[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 5; l239 = l239 + 1) {
			fVec87[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 12; l240 = l240 + 1) {
			fVec88[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 32; l241 = l241 + 1) {
			fVec89[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 64; l242 = l242 + 1) {
			fVec90[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 128; l243 = l243 + 1) {
			fVec91[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 256; l244 = l244 + 1) {
			fVec92[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 512; l245 = l245 + 1) {
			fVec93[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 512; l246 = l246 + 1) {
			fVec94[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec235[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec236[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fVec95[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 3; l250 = l250 + 1) {
			fVec96[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 5; l251 = l251 + 1) {
			fVec97[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 12; l252 = l252 + 1) {
			fVec98[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 32; l253 = l253 + 1) {
			fVec99[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 64; l254 = l254 + 1) {
			fVec100[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 128; l255 = l255 + 1) {
			fVec101[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 256; l256 = l256 + 1) {
			fVec102[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 512; l257 = l257 + 1) {
			fVec103[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 512; l258 = l258 + 1) {
			fVec104[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec237[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec238[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fVec105[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 3; l262 = l262 + 1) {
			fVec106[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 5; l263 = l263 + 1) {
			fVec107[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 12; l264 = l264 + 1) {
			fVec108[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 32; l265 = l265 + 1) {
			fVec109[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 64; l266 = l266 + 1) {
			fVec110[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 128; l267 = l267 + 1) {
			fVec111[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 256; l268 = l268 + 1) {
			fVec112[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 512; l269 = l269 + 1) {
			fVec113[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 512; l270 = l270 + 1) {
			fVec114[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec239[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fVec115[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec6[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 3; l274 = l274 + 1) {
			fRec5[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2048; l275 = l275 + 1) {
			fVec116[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			iRec3[l276] = 0;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec4[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec2[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fRec1[l279] = 0.0f;
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
		ui_interface->declare(&fVslider8, "1", "");
		ui_interface->declare(&fVslider8, "symbol", "sb_strength");
		ui_interface->declare(&fVslider8, "unit", "%");
		ui_interface->addVerticalSlider("sb_strength", &fVslider8, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider9, "symbol", "sb_target_spectrum_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider9, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider10, "symbol", "sb_target_spectrum_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider10, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider11, "symbol", "sb_target_spectrum_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider11, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider12, "symbol", "sb_target_spectrum_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider12, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider13, "symbol", "sb_target_spectrum_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider13, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider14, "symbol", "sb_target_spectrum_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider14, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider15, "symbol", "sb_target_spectrum_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider15, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider16, "symbol", "sb_target_spectrum_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider16, FAUSTFLOAT(-4.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fVslider18, "symbol", "voice_isolation_intensity");
		ui_interface->addVerticalSlider("VIintense", &fVslider18, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "pre_gain");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider7, "2", "");
		ui_interface->declare(&fVslider7, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider7, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph1, "99", "");
		ui_interface->declare(&fVbargraph1, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph1, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph0, "symbol", "vad_meter");
		ui_interface->addVerticalBargraph("vad_meter", &fVbargraph0, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "symbol", "leveler_target");
		ui_interface->declare(&fVslider6, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider6, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider2, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVslider17, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider17, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider0, "scale", "log");
		ui_interface->declare(&fVslider0, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider0, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "vad_gate_thresh");
		ui_interface->addVerticalSlider("vad_g_thr", &fVslider5, FAUSTFLOAT(0.9f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider4, "symbol", "vad_smoothing_time");
		ui_interface->declare(&fVslider4, "unit", "ms");
		ui_interface->addVerticalSlider("vad_smoo_t", &fVslider4, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1e+01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = fConst1 * float(fCheckbox0);
		float fSlow1 = 1.0f / std::tan(fConst31 * float(fVslider0));
		float fSlow2 = 1.0f / (fSlow1 + 1.0f);
		float fSlow3 = 1.0f - fSlow1;
		float fSlow4 = fConst1 * std::pow(1e+01f, 0.05f * float(fVslider1));
		float fSlow5 = float(fVslider2);
		float fSlow6 = float(fVslider3);
		float fSlow7 = 0.001f * float(fVslider4);
		int iSlow8 = std::fabs(fSlow7) < 1.1920929e-07f;
		float fSlow9 = ((iSlow8) ? 0.0f : std::exp(-(fConst33 / ((iSlow8) ? 1.0f : fSlow7))));
		float fSlow10 = fSlow6 * (1.0f - fSlow9);
		float fSlow11 = float(fVslider5);
		float fSlow12 = float(fVslider6);
		float fSlow13 = float(fVslider7);
		float fSlow14 = fSlow13 * fSlow6 * float(fVslider8);
		float fSlow15 = fConst86 * fSlow14;
		float fSlow16 = float(fVslider9);
		float fSlow17 = fConst95 * fSlow14;
		float fSlow18 = float(fVslider10);
		float fSlow19 = fConst97 * fSlow14;
		float fSlow20 = float(fVslider11);
		float fSlow21 = fConst99 * fSlow14;
		float fSlow22 = float(fVslider12);
		float fSlow23 = fConst100 * fSlow14;
		float fSlow24 = float(fVslider13);
		float fSlow25 = fConst102 * fSlow14;
		float fSlow26 = float(fVslider14);
		float fSlow27 = fConst104 * fSlow14;
		float fSlow28 = float(fVslider15);
		float fSlow29 = fConst106 * fSlow14;
		float fSlow30 = float(fVslider16);
		float fSlow31 = 0.0001f * fSlow13 * float(fVslider17);
		float fSlow32 = fSlow12 + -6.5f;
		float fSlow33 = fSlow12 + -5.5f;
		float fSlow34 = fSlow12 + -9.0f;
		float fSlow35 = fSlow12 + -3.0f;
		float fSlow36 = 0.75f * fSlow13 * (1.0f - float(fVslider18));
		float fSlow37 = fSlow12 + -7.5f;
		float fSlow38 = fSlow12 + -8.5f;
		float fSlow39 = fSlow12 + -11.5f;
		float fSlow40 = fSlow12 + -10.5f;
		float fSlow41 = fSlow12 + -1e+01f;
		float fSlow42 = fSlow12 + -4.0f;
		float fSlow43 = fSlow12 + -12.5f;
		float fSlow44 = fSlow12 + -11.0f;
		float fSlow45 = fSlow12 + -5.0f;
		float fSlow46 = fSlow12 + -13.5f;
		float fSlow47 = fSlow12 + -12.0f;
		float fSlow48 = fSlow12 + -6.0f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fRec0[0] = fSlow0 + fConst2 * fRec0[1];
			fRec57[0] = fSlow4 + fConst2 * fRec57[1];
			float fTemp1 = fTemp0 * fRec57[0];
			fVec0[0] = fTemp1;
			fRec56[0] = -(fSlow2 * (fSlow3 * fRec56[1] - fSlow1 * (fTemp1 - fVec0[1])));
			fRec66[0] = fSlow10 + fSlow9 * fRec66[1];
			float fTemp2 = fRec66[0] * float(fRec66[0] > fSlow11);
			fVbargraph0 = FAUSTFLOAT(fTemp2);
			float fTemp3 = fTemp2;
			float fTemp4 = std::tan(fConst31 * std::min<float>(fConst32, fTemp3 * (fConst34 * std::fabs(fRec59[1]) + 0.1316f)));
			fVec1[0] = fConst49 * fRec69[1] - fConst51 * fRec7[2];
			fRec70[0] = fConst46 * (fConst48 * fRec7[2] - (fVec1[1] + fConst52 * fRec70[1]) + fConst53 * fRec7[1]);
			fRec69[0] = fRec70[0];
			fVec2[0] = 0.50032705f * fRec69[1] - fConst54 * fRec67[1];
			fRec68[0] = fConst42 * (fVec2[1] - fConst55 * fRec68[1] - 1.0006541f * fRec69[1] + 0.50032705f * fRec69[0]);
			fRec67[0] = fRec68[0];
			float fTemp5 = mydsp_faustpower2_f(fRec67[0]);
			fVec3[0] = fTemp5;
			float fTemp6 = fTemp5 + fVec3[1];
			fVec4[0] = fTemp6;
			float fTemp7 = fTemp6 + fVec4[2];
			fVec5[0] = fTemp7;
			float fTemp8 = fTemp7 + fVec5[4];
			fVec6[0] = fTemp8;
			float fTemp9 = fTemp8 + fVec6[8];
			fVec7[IOTA0 & 31] = fTemp9;
			float fTemp10 = fTemp9 + fVec7[(IOTA0 - 16) & 31];
			fVec8[IOTA0 & 63] = fTemp10;
			float fTemp11 = fTemp10 + fVec8[(IOTA0 - 32) & 63];
			fVec9[IOTA0 & 127] = fTemp11;
			float fTemp12 = fTemp11 + fVec9[(IOTA0 - 64) & 127];
			fVec10[IOTA0 & 255] = fTemp12;
			fVec11[IOTA0 & 511] = fTemp12 + fVec10[(IOTA0 - 128) & 255];
			float fTemp13 = fTemp4 + 2.0f;
			float fTemp14 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow12 + fRec58[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst37 * (((iConst38) ? 0.86000985f * fVec11[(IOTA0 - iConst70) & 511] : 0.0f) + ((iConst69) ? 0.86000985f * fVec10[(IOTA0 - iConst68) & 255] : 0.0f) + ((iConst67) ? 0.86000985f * fVec9[(IOTA0 - iConst66) & 127] : 0.0f) + ((iConst65) ? 0.86000985f * fVec8[(IOTA0 - iConst64) & 63] : 0.0f) + ((iConst63) ? 0.86000985f * fVec7[(IOTA0 - iConst62) & 31] : 0.0f) + ((iConst61) ? 0.86000985f * fVec6[iConst60] : 0.0f) + ((iConst59) ? 0.86000985f * fVec5[iConst58] : 0.0f) + ((iConst56) ? 0.86000985f * fTemp5 : 0.0f) + ((iConst57) ? 0.86000985f * fVec4[iConst56] : 0.0f))))))) - (fRec61[1] * fTemp13 + fRec62[1]);
			float fTemp15 = fTemp4 * fTemp13 + 1.0f;
			float fTemp16 = fTemp4 * fTemp14 / fTemp15;
			fRec61[0] = fRec61[1] + 2.0f * fTemp16;
			float fTemp17 = fRec61[1] + fTemp16;
			float fTemp18 = fTemp4 * fTemp17;
			fRec62[0] = fRec62[1] + 2.0f * fTemp18;
			float fRec63 = fTemp17;
			float fRec64 = fTemp14 / fTemp15;
			float fRec65 = fRec62[1] + fTemp18;
			fRec59[0] = fRec63;
			float fRec60 = fRec65;
			fRec58[0] = fSlow5 * fRec60;
			float fTemp19 = fRec56[0] * std::pow(1e+01f, 0.05f * fRec58[0]);
			fVec12[0] = fTemp19;
			float fTemp20 = fRec51[1] + fConst28 * (fTemp19 - fRec52[1]);
			fRec51[0] = fConst30 * fTemp20 - fRec51[1];
			float fTemp21 = fRec52[1] + fConst71 * fTemp20;
			fRec52[0] = 2.0f * fTemp21 - fRec52[1];
			float fRec53 = fTemp19;
			float fRec54 = fConst72 * fTemp20;
			float fRec55 = fTemp21;
			float fTemp22 = fRec48[1] + fConst28 * (fRec55 - fRec49[1]);
			fRec48[0] = fConst30 * fTemp22 - fRec48[1];
			float fTemp23 = fRec49[1] + fConst71 * fTemp22;
			fRec49[0] = 2.0f * fTemp23 - fRec49[1];
			float fRec50 = fTemp23;
			float fTemp24 = fRec44[1] + fConst25 * (fRec50 - fRec45[1]);
			fRec44[0] = fConst27 * fTemp24 - fRec44[1];
			float fTemp25 = fRec45[1] + fConst73 * fTemp24;
			fRec45[0] = 2.0f * fTemp25 - fRec45[1];
			float fRec46 = fRec50;
			float fRec47 = fConst74 * fTemp24;
			float fTemp26 = 2.828427f * fRec47;
			float fTemp27 = fRec40[1] + fConst22 * (fRec46 - (fTemp26 + fRec41[1]));
			fRec40[0] = fConst24 * fTemp27 - fRec40[1];
			float fTemp28 = fRec41[1] + fConst75 * fTemp27;
			fRec41[0] = 2.0f * fTemp28 - fRec41[1];
			float fRec42 = fRec46 - fTemp26;
			float fRec43 = fConst76 * fTemp27;
			float fTemp29 = 2.828427f * fRec43;
			float fTemp30 = fRec36[1] + fConst19 * (fRec42 - (fTemp29 + fRec37[1]));
			fRec36[0] = fConst21 * fTemp30 - fRec36[1];
			float fTemp31 = fRec37[1] + fConst77 * fTemp30;
			fRec37[0] = 2.0f * fTemp31 - fRec37[1];
			float fRec38 = fRec42 - fTemp29;
			float fRec39 = fConst78 * fTemp30;
			float fTemp32 = 2.828427f * fRec39;
			float fTemp33 = fRec31[1] + fConst16 * (fRec38 - (fTemp32 + fRec32[1]));
			fRec31[0] = fConst18 * fTemp33 - fRec31[1];
			float fTemp34 = fRec32[1] + fConst79 * fTemp33;
			fRec32[0] = 2.0f * fTemp34 - fRec32[1];
			float fRec33 = fRec38 - fTemp32;
			float fRec34 = fConst80 * fTemp33;
			float fRec35 = fTemp34;
			float fTemp35 = fRec28[1] + fConst16 * (fRec35 - fRec29[1]);
			fRec28[0] = fConst18 * fTemp35 - fRec28[1];
			float fTemp36 = fRec29[1] + fConst79 * fTemp35;
			fRec29[0] = 2.0f * fTemp36 - fRec29[1];
			float fRec30 = fTemp36;
			float fTemp37 = fRec24[1] + fConst13 * (fRec30 - fRec25[1]);
			fRec24[0] = fConst15 * fTemp37 - fRec24[1];
			float fTemp38 = fRec25[1] + fConst81 * fTemp37;
			fRec25[0] = 2.0f * fTemp38 - fRec25[1];
			float fRec26 = fRec30;
			float fRec27 = fConst82 * fTemp37;
			float fTemp39 = 2.828427f * fRec27;
			float fTemp40 = fRec19[1] + fConst10 * (fRec26 - (fTemp39 + fRec20[1]));
			fRec19[0] = fConst12 * fTemp40 - fRec19[1];
			float fTemp41 = fRec20[1] + fConst83 * fTemp40;
			fRec20[0] = 2.0f * fTemp41 - fRec20[1];
			float fRec21 = fRec26 - fTemp39;
			float fRec22 = fConst84 * fTemp40;
			float fRec23 = fTemp41;
			float fTemp42 = fRec16[1] + fConst10 * (fRec23 - fRec17[1]);
			fRec16[0] = fConst12 * fTemp42 - fRec16[1];
			float fTemp43 = fRec17[1] + fConst83 * fTemp42;
			fRec17[0] = 2.0f * fTemp43 - fRec17[1];
			fRec18[0] = fTemp43;
			fVec13[0] = fConst89 * fRec18[1] - fConst49 * fRec76[1];
			fRec77[0] = fConst46 * (fVec13[1] - fConst52 * fRec77[1] + fConst90 * fRec18[1] + fConst91 * fRec18[0]);
			fRec76[0] = fRec77[0];
			fVec14[0] = 0.50032705f * fRec76[1] - fConst54 * fRec74[1];
			fRec75[0] = fConst42 * (fVec14[1] - fConst55 * fRec75[1] - 1.0006541f * fRec76[1] + 0.50032705f * fRec76[0]);
			fRec74[0] = fRec75[0];
			float fTemp44 = std::fabs(0.92736715f * fRec74[0]);
			fRec73[0] = std::max<float>(fTemp44, fConst92 * fRec73[1] + fConst93 * fTemp44);
			fRec72[0] = fConst88 * fRec73[0] + fConst87 * fRec72[1];
			fVec15[0] = fConst49 * fRec82[1] - fConst51 * fVec12[1];
			fRec83[0] = fConst46 * (fConst48 * fVec12[1] - (fVec15[1] + fConst52 * fRec83[1]) + fConst53 * fTemp19);
			fRec82[0] = fRec83[0];
			fVec16[0] = 0.50032705f * fRec82[1] - fConst54 * fRec80[1];
			fRec81[0] = fConst42 * (fVec16[1] - fConst55 * fRec81[1] - 1.0006541f * fRec82[1] + 0.50032705f * fRec82[0]);
			fRec80[0] = fRec81[0];
			float fTemp45 = std::fabs(0.92736715f * fRec80[0]);
			fRec79[0] = std::max<float>(fTemp45, fConst92 * fRec79[1] + fConst93 * fTemp45);
			fRec78[0] = fConst88 * fRec79[0] + fConst87 * fRec78[1];
			float fTemp46 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec78[0])));
			fRec71[0] = fSlow15 * std::min<float>(6.0f, std::max<float>(-12.0f, fSlow16 - 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec72[0]))) - fTemp46))) + fConst85 * fRec71[1];
			float fTemp47 = fRec18[0] * std::pow(1e+01f, 0.05f * fRec71[0]);
			float fTemp48 = fRec23 + 1.4142135f * fRec22;
			float fTemp49 = fRec84[1] + fConst10 * (fRec21 - (fTemp48 + fRec85[1]));
			fRec84[0] = fConst12 * fTemp49 - fRec84[1];
			float fTemp50 = fRec85[1] + fConst83 * fTemp49;
			fRec85[0] = 2.0f * fTemp50 - fRec85[1];
			float fRec86 = fRec21 - fTemp48;
			float fRec87 = fConst84 * fTemp49;
			float fRec88 = fTemp50;
			float fTemp51 = fRec86 - (fRec88 + 1.4142135f * fRec87);
			fVec17[0] = fTemp51;
			fVec18[0] = fConst89 * fVec17[1] - fConst49 * fRec94[1];
			fRec95[0] = fConst46 * (fVec18[1] - fConst52 * fRec95[1] + fConst90 * fVec17[1] + fConst91 * fTemp51);
			fRec94[0] = fRec95[0];
			fVec19[0] = 0.50032705f * fRec94[1] - fConst54 * fRec92[1];
			fRec93[0] = fConst42 * (fVec19[1] - fConst55 * fRec93[1] - 1.0006541f * fRec94[1] + 0.50032705f * fRec94[0]);
			fRec92[0] = fRec93[0];
			float fTemp52 = std::fabs(0.92736715f * fRec92[0]);
			fRec91[0] = std::max<float>(fTemp52, fConst92 * fRec91[1] + fConst93 * fTemp52);
			fRec90[0] = fConst88 * fRec91[0] + fConst87 * fRec90[1];
			fRec89[0] = fSlow17 * std::min<float>(9.0f, std::max<float>(-12.0f, fSlow18 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec90[0])))))) + fConst94 * fRec89[1];
			float fTemp53 = fTemp51 * std::pow(1e+01f, 0.05f * fRec89[0]);
			float fTemp54 = fRec35 + 1.4142135f * fRec34;
			float fTemp55 = fRec108[1] + fConst16 * (fRec33 - (fTemp54 + fRec109[1]));
			fRec108[0] = fConst18 * fTemp55 - fRec108[1];
			float fTemp56 = fRec109[1] + fConst79 * fTemp55;
			fRec109[0] = 2.0f * fTemp56 - fRec109[1];
			float fRec110 = fRec33 - fTemp54;
			float fRec111 = fConst80 * fTemp55;
			float fRec112 = fTemp56;
			float fTemp57 = fRec112 + 1.4142135f * fRec111;
			float fTemp58 = fRec104[1] + fConst10 * (fRec110 - (fTemp57 + fRec105[1]));
			fRec104[0] = fConst12 * fTemp58 - fRec104[1];
			float fTemp59 = fRec105[1] + fConst83 * fTemp58;
			fRec105[0] = 2.0f * fTemp59 - fRec105[1];
			float fRec106 = fRec110 - fTemp57;
			float fRec107 = fConst84 * fTemp58;
			float fTemp60 = 2.828427f * fRec107;
			float fTemp61 = fRec99[1] + fConst13 * (fRec106 - (fTemp60 + fRec100[1]));
			fRec99[0] = fConst15 * fTemp61 - fRec99[1];
			float fTemp62 = fRec100[1] + fConst81 * fTemp61;
			fRec100[0] = 2.0f * fTemp62 - fRec100[1];
			float fRec101 = fRec106 - fTemp60;
			float fRec102 = fConst82 * fTemp61;
			float fRec103 = fTemp62;
			float fTemp63 = fRec96[1] + fConst13 * (fRec103 - fRec97[1]);
			fRec96[0] = fConst15 * fTemp63 - fRec96[1];
			float fTemp64 = fRec97[1] + fConst81 * fTemp63;
			fRec97[0] = 2.0f * fTemp64 - fRec97[1];
			fRec98[0] = fTemp64;
			fVec20[0] = fConst89 * fRec98[1] - fConst49 * fRec118[1];
			fRec119[0] = fConst46 * (fVec20[1] - fConst52 * fRec119[1] + fConst90 * fRec98[1] + fConst91 * fRec98[0]);
			fRec118[0] = fRec119[0];
			fVec21[0] = 0.50032705f * fRec118[1] - fConst54 * fRec116[1];
			fRec117[0] = fConst42 * (fVec21[1] - fConst55 * fRec117[1] - 1.0006541f * fRec118[1] + 0.50032705f * fRec118[0]);
			fRec116[0] = fRec117[0];
			float fTemp65 = std::fabs(0.92736715f * fRec116[0]);
			fRec115[0] = std::max<float>(fTemp65, fConst92 * fRec115[1] + fConst93 * fTemp65);
			fRec114[0] = fConst88 * fRec115[0] + fConst87 * fRec114[1];
			fRec113[0] = fSlow19 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow20 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec114[0])))))) + fConst96 * fRec113[1];
			float fTemp66 = fRec98[0] * std::pow(1e+01f, 0.05f * fRec113[0]);
			float fTemp67 = fRec103 + 1.4142135f * fRec102;
			float fTemp68 = fRec120[1] + fConst13 * (fRec101 - (fTemp67 + fRec121[1]));
			fRec120[0] = fConst15 * fTemp68 - fRec120[1];
			float fTemp69 = fRec121[1] + fConst81 * fTemp68;
			fRec121[0] = 2.0f * fTemp69 - fRec121[1];
			float fRec122 = fRec101 - fTemp67;
			float fRec123 = fConst82 * fTemp68;
			float fRec124 = fTemp69;
			float fTemp70 = fRec122 - (fRec124 + 1.4142135f * fRec123);
			fVec22[0] = fTemp70;
			fVec23[0] = fConst89 * fVec22[1] - fConst49 * fRec130[1];
			fRec131[0] = fConst46 * (fVec23[1] - fConst52 * fRec131[1] + fConst90 * fVec22[1] + fConst91 * fTemp70);
			fRec130[0] = fRec131[0];
			fVec24[0] = 0.50032705f * fRec130[1] - fConst54 * fRec128[1];
			fRec129[0] = fConst42 * (fVec24[1] - fConst55 * fRec129[1] - 1.0006541f * fRec130[1] + 0.50032705f * fRec130[0]);
			fRec128[0] = fRec129[0];
			float fTemp71 = std::fabs(0.92736715f * fRec128[0]);
			fRec127[0] = std::max<float>(fTemp71, fConst92 * fRec127[1] + fConst93 * fTemp71);
			fRec126[0] = fConst88 * fRec127[0] + fConst87 * fRec126[1];
			fRec125[0] = fSlow21 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow22 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec126[0])))))) + fConst98 * fRec125[1];
			float fTemp72 = fTemp70 * std::pow(1e+01f, 0.05f * fRec125[0]);
			float fTemp73 = fRec55 + 1.4142135f * fRec54;
			float fTemp74 = fRec164[1] + fConst28 * (fRec53 - (fTemp73 + fRec165[1]));
			fRec164[0] = fConst30 * fTemp74 - fRec164[1];
			float fTemp75 = fRec165[1] + fConst71 * fTemp74;
			fRec165[0] = 2.0f * fTemp75 - fRec165[1];
			float fRec166 = fRec53 - fTemp73;
			float fRec167 = fConst72 * fTemp74;
			float fRec168 = fTemp75;
			float fTemp76 = fRec168 + 1.4142135f * fRec167;
			float fTemp77 = fRec160[1] + fConst16 * (fRec166 - (fTemp76 + fRec161[1]));
			fRec160[0] = fConst18 * fTemp77 - fRec160[1];
			float fTemp78 = fRec161[1] + fConst79 * fTemp77;
			fRec161[0] = 2.0f * fTemp78 - fRec161[1];
			float fRec162 = fRec166 - fTemp76;
			float fRec163 = fConst80 * fTemp77;
			float fTemp79 = 2.828427f * fRec163;
			float fTemp80 = fRec156[1] + fConst10 * (fRec162 - (fTemp79 + fRec157[1]));
			fRec156[0] = fConst12 * fTemp80 - fRec156[1];
			float fTemp81 = fRec157[1] + fConst83 * fTemp80;
			fRec157[0] = 2.0f * fTemp81 - fRec157[1];
			float fRec158 = fRec162 - fTemp79;
			float fRec159 = fConst84 * fTemp80;
			float fTemp82 = 2.828427f * fRec159;
			float fTemp83 = fRec152[1] + fConst13 * (fRec158 - (fTemp82 + fRec153[1]));
			fRec152[0] = fConst15 * fTemp83 - fRec152[1];
			float fTemp84 = fRec153[1] + fConst81 * fTemp83;
			fRec153[0] = 2.0f * fTemp84 - fRec153[1];
			float fRec154 = fRec158 - fTemp82;
			float fRec155 = fConst82 * fTemp83;
			float fTemp85 = 2.828427f * fRec155;
			float fTemp86 = fRec147[1] + fConst25 * (fRec154 - (fTemp85 + fRec148[1]));
			fRec147[0] = fConst27 * fTemp86 - fRec147[1];
			float fTemp87 = fRec148[1] + fConst73 * fTemp86;
			fRec148[0] = 2.0f * fTemp87 - fRec148[1];
			float fRec149 = fRec154 - fTemp85;
			float fRec150 = fConst74 * fTemp86;
			float fRec151 = fTemp87;
			float fTemp88 = fRec144[1] + fConst25 * (fRec151 - fRec145[1]);
			fRec144[0] = fConst27 * fTemp88 - fRec144[1];
			float fTemp89 = fRec145[1] + fConst73 * fTemp88;
			fRec145[0] = 2.0f * fTemp89 - fRec145[1];
			float fRec146 = fTemp89;
			float fTemp90 = fRec140[1] + fConst19 * (fRec146 - fRec141[1]);
			fRec140[0] = fConst21 * fTemp90 - fRec140[1];
			float fTemp91 = fRec141[1] + fConst77 * fTemp90;
			fRec141[0] = 2.0f * fTemp91 - fRec141[1];
			float fRec142 = fRec146;
			float fRec143 = fConst78 * fTemp90;
			float fTemp92 = 2.828427f * fRec143;
			float fTemp93 = fRec135[1] + fConst22 * (fRec142 - (fTemp92 + fRec136[1]));
			fRec135[0] = fConst24 * fTemp93 - fRec135[1];
			float fTemp94 = fRec136[1] + fConst75 * fTemp93;
			fRec136[0] = 2.0f * fTemp94 - fRec136[1];
			float fRec137 = fRec142 - fTemp92;
			float fRec138 = fConst76 * fTemp93;
			float fRec139 = fTemp94;
			float fTemp95 = fRec132[1] + fConst22 * (fRec139 - fRec133[1]);
			fRec132[0] = fConst24 * fTemp95 - fRec132[1];
			float fTemp96 = fRec133[1] + fConst75 * fTemp95;
			fRec133[0] = 2.0f * fTemp96 - fRec133[1];
			fRec134[0] = fTemp96;
			fVec25[0] = fConst89 * fRec134[1] - fConst49 * fRec174[1];
			fRec175[0] = fConst46 * (fVec25[1] - fConst52 * fRec175[1] + fConst90 * fRec134[1] + fConst91 * fRec134[0]);
			fRec174[0] = fRec175[0];
			fVec26[0] = 0.50032705f * fRec174[1] - fConst54 * fRec172[1];
			fRec173[0] = fConst42 * (fVec26[1] - fConst55 * fRec173[1] - 1.0006541f * fRec174[1] + 0.50032705f * fRec174[0]);
			fRec172[0] = fRec173[0];
			float fTemp97 = std::fabs(0.92736715f * fRec172[0]);
			fRec171[0] = std::max<float>(fTemp97, fConst92 * fRec171[1] + fConst93 * fTemp97);
			fRec170[0] = fConst88 * fRec171[0] + fConst87 * fRec170[1];
			fRec169[0] = fSlow23 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow24 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec170[0])))))) + fConst92 * fRec169[1];
			float fTemp98 = fRec134[0] * std::pow(1e+01f, 0.05f * fRec169[0]);
			float fTemp99 = fRec139 + 1.4142135f * fRec138;
			float fTemp100 = fRec176[1] + fConst22 * (fRec137 - (fTemp99 + fRec177[1]));
			fRec176[0] = fConst24 * fTemp100 - fRec176[1];
			float fTemp101 = fRec177[1] + fConst75 * fTemp100;
			fRec177[0] = 2.0f * fTemp101 - fRec177[1];
			float fRec178 = fRec137 - fTemp99;
			float fRec179 = fConst76 * fTemp100;
			float fRec180 = fTemp101;
			float fTemp102 = fRec178 - (fRec180 + 1.4142135f * fRec179);
			fVec27[0] = fTemp102;
			fVec28[0] = fConst89 * fVec27[1] - fConst49 * fRec186[1];
			fRec187[0] = fConst46 * (fVec28[1] - fConst52 * fRec187[1] + fConst90 * fVec27[1] + fConst91 * fTemp102);
			fRec186[0] = fRec187[0];
			fVec29[0] = 0.50032705f * fRec186[1] - fConst54 * fRec184[1];
			fRec185[0] = fConst42 * (fVec29[1] - fConst55 * fRec185[1] - 1.0006541f * fRec186[1] + 0.50032705f * fRec186[0]);
			fRec184[0] = fRec185[0];
			float fTemp103 = std::fabs(0.92736715f * fRec184[0]);
			fRec183[0] = std::max<float>(fTemp103, fConst92 * fRec183[1] + fConst93 * fTemp103);
			fRec182[0] = fConst88 * fRec183[0] + fConst87 * fRec182[1];
			fRec181[0] = fSlow25 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow26 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec182[0])))))) + fConst101 * fRec181[1];
			float fTemp104 = fTemp102 * std::pow(1e+01f, 0.05f * fRec181[0]);
			float fTemp105 = fRec151 + 1.4142135f * fRec150;
			float fTemp106 = fRec200[1] + fConst25 * (fRec149 - (fTemp105 + fRec201[1]));
			fRec200[0] = fConst27 * fTemp106 - fRec200[1];
			float fTemp107 = fRec201[1] + fConst73 * fTemp106;
			fRec201[0] = 2.0f * fTemp107 - fRec201[1];
			float fRec202 = fRec149 - fTemp105;
			float fRec203 = fConst74 * fTemp106;
			float fRec204 = fTemp107;
			float fTemp108 = fRec204 + 1.4142135f * fRec203;
			float fTemp109 = fRec196[1] + fConst22 * (fRec202 - (fTemp108 + fRec197[1]));
			fRec196[0] = fConst24 * fTemp109 - fRec196[1];
			float fTemp110 = fRec197[1] + fConst75 * fTemp109;
			fRec197[0] = 2.0f * fTemp110 - fRec197[1];
			float fRec198 = fRec202 - fTemp108;
			float fRec199 = fConst76 * fTemp109;
			float fTemp111 = 2.828427f * fRec199;
			float fTemp112 = fRec191[1] + fConst19 * (fRec198 - (fTemp111 + fRec192[1]));
			fRec191[0] = fConst21 * fTemp112 - fRec191[1];
			float fTemp113 = fRec192[1] + fConst77 * fTemp112;
			fRec192[0] = 2.0f * fTemp113 - fRec192[1];
			float fRec193 = fRec198 - fTemp111;
			float fRec194 = fConst78 * fTemp112;
			float fRec195 = fTemp113;
			float fTemp114 = fRec188[1] + fConst19 * (fRec195 - fRec189[1]);
			fRec188[0] = fConst21 * fTemp114 - fRec188[1];
			float fTemp115 = fRec189[1] + fConst77 * fTemp114;
			fRec189[0] = 2.0f * fTemp115 - fRec189[1];
			fRec190[0] = fTemp115;
			fVec30[0] = fConst89 * fRec190[1] - fConst49 * fRec210[1];
			fRec211[0] = fConst46 * (fVec30[1] - fConst52 * fRec211[1] + fConst90 * fRec190[1] + fConst91 * fRec190[0]);
			fRec210[0] = fRec211[0];
			fVec31[0] = 0.50032705f * fRec210[1] - fConst54 * fRec208[1];
			fRec209[0] = fConst42 * (fVec31[1] - fConst55 * fRec209[1] - 1.0006541f * fRec210[1] + 0.50032705f * fRec210[0]);
			fRec208[0] = fRec209[0];
			float fTemp116 = std::fabs(0.92736715f * fRec208[0]);
			fRec207[0] = std::max<float>(fTemp116, fConst92 * fRec207[1] + fConst93 * fTemp116);
			fRec206[0] = fConst88 * fRec207[0] + fConst87 * fRec206[1];
			fRec205[0] = fSlow27 * std::min<float>(9.0f, std::max<float>(-12.0f, fSlow28 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec206[0])))))) + fConst103 * fRec205[1];
			float fTemp117 = fRec190[0] * std::pow(1e+01f, 0.05f * fRec205[0]);
			float fTemp118 = fRec195 + 1.4142135f * fRec194;
			float fTemp119 = fRec212[1] + fConst19 * (fRec193 - (fTemp118 + fRec213[1]));
			fRec212[0] = fConst21 * fTemp119 - fRec212[1];
			float fTemp120 = fRec213[1] + fConst77 * fTemp119;
			fRec213[0] = 2.0f * fTemp120 - fRec213[1];
			float fRec214 = fRec193 - fTemp118;
			float fRec215 = fConst78 * fTemp119;
			float fRec216 = fTemp120;
			float fTemp121 = fRec214 - (fRec216 + 1.4142135f * fRec215);
			fVec32[0] = fTemp121;
			fVec33[0] = fConst89 * fVec32[1] - fConst49 * fRec222[1];
			fRec223[0] = fConst46 * (fVec33[1] - fConst52 * fRec223[1] + fConst90 * fVec32[1] + fConst91 * fTemp121);
			fRec222[0] = fRec223[0];
			fVec34[0] = 0.50032705f * fRec222[1] - fConst54 * fRec220[1];
			fRec221[0] = fConst42 * (fVec34[1] - fConst55 * fRec221[1] - 1.0006541f * fRec222[1] + 0.50032705f * fRec222[0]);
			fRec220[0] = fRec221[0];
			float fTemp122 = std::fabs(0.92736715f * fRec220[0]);
			fRec219[0] = std::max<float>(fTemp122, fConst92 * fRec219[1] + fConst93 * fTemp122);
			fRec218[0] = fConst88 * fRec219[0] + fConst87 * fRec218[1];
			fRec217[0] = fSlow29 * std::min<float>(6.0f, std::max<float>(-12.0f, fSlow30 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec218[0])))))) + fConst105 * fRec217[1];
			float fTemp123 = fTemp121 * std::pow(1e+01f, 0.05f * fRec217[0]);
			fRec7[0] = fTemp47 + fTemp53 + fTemp66 + fTemp72 + fTemp98 + fTemp104 + fTemp117 + fTemp123;
			float fRec8 = fTemp47;
			float fRec9 = fTemp53;
			float fRec10 = fTemp66;
			float fRec11 = fTemp72;
			float fRec12 = fTemp98;
			float fRec13 = fTemp104;
			float fRec14 = fTemp117;
			float fRec15 = fTemp123;
			float fTemp124 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp125 = (fTemp124 > fSlow32) + (fTemp124 > fSlow33);
			float fTemp126 = std::max<float>(0.0f, ((iTemp125 == 0) ? 0.0f : ((iTemp125 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp124 + 6.5f - fSlow12) : fTemp124 + 6.0f - fSlow12)));
			float fTemp127 = ((-(0.75f * fTemp126) > fRec224[1]) ? fConst92 : fConst107);
			fRec224[0] = fRec224[1] * fTemp127 - 0.75f * fTemp126 * (1.0f - fTemp127);
			float fTemp128 = fRec8 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f)))));
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
			float fTemp138 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp129 : -3.4028235e+38f), ((iConst109) ? fVec36[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec37[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec38[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec39[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec40[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec41[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec42[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec43[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec44[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp139 = (fTemp138 > fSlow34) + (fTemp138 > fSlow35);
			float fTemp140 = fSlow36 * (1.0f - 0.5f * fTemp3);
			float fTemp141 = std::fabs(fTemp140);
			int iTemp142 = fTemp140 > 0.0f;
			float fTemp143 = float(2 * iTemp142 + -1);
			float fTemp144 = std::max<float>(-12.0f, ((iTemp139 == 0) ? fTemp138 + 6.0f - fSlow12 : ((iTemp139 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp138 + 3.0f - fSlow12)) : 0.0f)) * fTemp141) * fTemp143;
			float fTemp145 = ((iTemp142) ? 0.2f : 0.008f);
			int iTemp146 = std::fabs(fTemp145) < 1.1920929e-07f;
			float fTemp147 = ((iTemp142) ? 0.008f : 0.2f);
			int iTemp148 = std::fabs(fTemp147) < 1.1920929e-07f;
			float fTemp149 = ((fTemp144 > fRec225[1]) ? ((iTemp148) ? 0.0f : std::exp(-(fConst33 / ((iTemp148) ? 1.0f : fTemp147)))) : ((iTemp146) ? 0.0f : std::exp(-(fConst33 / ((iTemp146) ? 1.0f : fTemp145)))));
			fRec225[0] = fTemp144 * (1.0f - fTemp149) + fRec225[1] * fTemp149;
			float fTemp150 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp151 = (fTemp150 > fSlow32) + (fTemp150 > fSlow33);
			float fTemp152 = std::max<float>(0.0f, ((iTemp151 == 0) ? 0.0f : ((iTemp151 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp150 + 6.5f - fSlow12) : fTemp150 + 6.0f - fSlow12)));
			float fTemp153 = ((-(0.75f * fTemp152) > fRec226[1]) ? fConst126 : fConst105);
			fRec226[0] = fRec226[1] * fTemp153 - 0.75f * fTemp152 * (1.0f - fTemp153);
			float fTemp154 = fRec9 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec226[0]))) + 1.5f)))));
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
			float fTemp164 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp155 : -3.4028235e+38f), ((iConst109) ? fVec46[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec47[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec48[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec49[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec50[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec51[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec52[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec53[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec54[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp165 = (fTemp164 > fSlow34) + (fTemp164 > fSlow35);
			float fTemp166 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp165 == 0) ? fTemp164 + 6.0f - fSlow12 : ((iTemp165 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp164 + 3.0f - fSlow12)) : 0.0f)));
			float fTemp167 = ((iTemp142) ? 0.2f : 0.007f);
			int iTemp168 = std::fabs(fTemp167) < 1.1920929e-07f;
			float fTemp169 = ((iTemp142) ? 0.007f : 0.2f);
			int iTemp170 = std::fabs(fTemp169) < 1.1920929e-07f;
			float fTemp171 = ((fTemp166 > fRec227[1]) ? ((iTemp170) ? 0.0f : std::exp(-(fConst33 / ((iTemp170) ? 1.0f : fTemp169)))) : ((iTemp168) ? 0.0f : std::exp(-(fConst33 / ((iTemp168) ? 1.0f : fTemp167)))));
			fRec227[0] = fTemp166 * (1.0f - fTemp171) + fRec227[1] * fTemp171;
			float fTemp172 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp173 = (fTemp172 > fSlow37) + (fTemp172 > fSlow32);
			float fTemp174 = std::max<float>(0.0f, ((iTemp173 == 0) ? 0.0f : ((iTemp173 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp172 + 7.5f - fSlow12) : fTemp172 + 7.0f - fSlow12)));
			float fTemp175 = ((-(0.75f * fTemp174) > fRec228[1]) ? fConst128 : fConst127);
			fRec228[0] = fRec228[1] * fTemp175 - 0.75f * fTemp174 * (1.0f - fTemp175);
			float fTemp176 = fRec10 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec228[0]))) + 1.5f)))));
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
			float fTemp186 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp177 : -3.4028235e+38f), ((iConst109) ? fVec56[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec57[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec58[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec59[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec60[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec61[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec62[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec63[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec64[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp187 = (fTemp186 > fSlow34) + (fTemp186 > fSlow35);
			float fTemp188 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp187 == 0) ? fTemp186 + 6.0f - fSlow12 : ((iTemp187 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp186 + 3.0f - fSlow12)) : 0.0f)));
			float fTemp189 = ((iTemp142) ? 0.2f : 0.006f);
			int iTemp190 = std::fabs(fTemp189) < 1.1920929e-07f;
			float fTemp191 = ((iTemp142) ? 0.006f : 0.2f);
			int iTemp192 = std::fabs(fTemp191) < 1.1920929e-07f;
			float fTemp193 = ((fTemp188 > fRec229[1]) ? ((iTemp192) ? 0.0f : std::exp(-(fConst33 / ((iTemp192) ? 1.0f : fTemp191)))) : ((iTemp190) ? 0.0f : std::exp(-(fConst33 / ((iTemp190) ? 1.0f : fTemp189)))));
			fRec229[0] = fTemp188 * (1.0f - fTemp193) + fRec229[1] * fTemp193;
			float fTemp194 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec11)));
			int iTemp195 = (fTemp194 > fSlow38) + (fTemp194 > fSlow37);
			float fTemp196 = std::max<float>(0.0f, ((iTemp195 == 0) ? 0.0f : ((iTemp195 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp194 + 8.5f - fSlow12) : fTemp194 + 8.0f - fSlow12)));
			float fTemp197 = ((-(0.75f * fTemp196) > fRec230[1]) ? fConst130 : fConst129);
			fRec230[0] = fRec230[1] * fTemp197 - 0.75f * fTemp196 * (1.0f - fTemp197);
			float fTemp198 = fRec11 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec230[0]))) + 1.5f)))));
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
			float fTemp208 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp199 : -3.4028235e+38f), ((iConst109) ? fVec66[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec67[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec68[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec69[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec70[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec71[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec72[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec73[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec74[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp209 = (fTemp208 > fSlow34) + (fTemp208 > fSlow35);
			float fTemp210 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp209 == 0) ? fTemp208 + 6.0f - fSlow12 : ((iTemp209 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp208 + 3.0f - fSlow12)) : 0.0f)));
			float fTemp211 = ((iTemp142) ? 0.2f : 0.005f);
			int iTemp212 = std::fabs(fTemp211) < 1.1920929e-07f;
			float fTemp213 = ((iTemp142) ? 0.005f : 0.2f);
			int iTemp214 = std::fabs(fTemp213) < 1.1920929e-07f;
			float fTemp215 = ((fTemp210 > fRec231[1]) ? ((iTemp214) ? 0.0f : std::exp(-(fConst33 / ((iTemp214) ? 1.0f : fTemp213)))) : ((iTemp212) ? 0.0f : std::exp(-(fConst33 / ((iTemp212) ? 1.0f : fTemp211)))));
			fRec231[0] = fTemp210 * (1.0f - fTemp215) + fRec231[1] * fTemp215;
			float fTemp216 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec12)));
			int iTemp217 = (fTemp216 > fSlow39) + (fTemp216 > fSlow40);
			float fTemp218 = std::max<float>(0.0f, ((iTemp217 == 0) ? 0.0f : ((iTemp217 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp216 + 11.5f - fSlow12) : fTemp216 + 11.0f - fSlow12)));
			float fTemp219 = ((-(0.75f * fTemp218) > fRec232[1]) ? fConst127 : fConst87);
			fRec232[0] = fRec232[1] * fTemp219 - 0.75f * fTemp218 * (1.0f - fTemp219);
			float fTemp220 = fRec12 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec232[0]))) + 1.5f)))));
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
			float fTemp230 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp221 : -3.4028235e+38f), ((iConst109) ? fVec76[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec77[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec78[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec79[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec80[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec81[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec82[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec83[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec84[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp231 = (fTemp230 > fSlow41) + (fTemp230 > fSlow42);
			float fTemp232 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp231 == 0) ? fTemp230 + 7.0f - fSlow12 : ((iTemp231 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp230 + 4.0f - fSlow12)) : 0.0f)));
			float fTemp233 = ((iTemp142) ? 0.16f : 0.004f);
			int iTemp234 = std::fabs(fTemp233) < 1.1920929e-07f;
			float fTemp235 = ((iTemp142) ? 0.004f : 0.16f);
			int iTemp236 = std::fabs(fTemp235) < 1.1920929e-07f;
			float fTemp237 = ((fTemp232 > fRec233[1]) ? ((iTemp236) ? 0.0f : std::exp(-(fConst33 / ((iTemp236) ? 1.0f : fTemp235)))) : ((iTemp234) ? 0.0f : std::exp(-(fConst33 / ((iTemp234) ? 1.0f : fTemp233)))));
			fRec233[0] = fTemp232 * (1.0f - fTemp237) + fRec233[1] * fTemp237;
			float fTemp238 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec13)));
			int iTemp239 = (fTemp238 > fSlow43) + (fTemp238 > fSlow39);
			float fTemp240 = std::max<float>(0.0f, ((iTemp239 == 0) ? 0.0f : ((iTemp239 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp238 + 12.5f - fSlow12) : fTemp238 + 12.0f - fSlow12)));
			float fTemp241 = ((-(0.75f * fTemp240) > fRec234[1]) ? fConst129 : fConst131);
			fRec234[0] = fRec234[1] * fTemp241 - 0.75f * fTemp240 * (1.0f - fTemp241);
			float fTemp242 = fRec13 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec234[0]))) + 1.5f)))));
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
			float fTemp252 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp243 : -3.4028235e+38f), ((iConst109) ? fVec86[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec87[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec88[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec89[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec90[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec91[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec92[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec93[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec94[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp253 = (fTemp252 > fSlow41) + (fTemp252 > fSlow42);
			float fTemp254 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp253 == 0) ? fTemp252 + 7.0f - fSlow12 : ((iTemp253 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp252 + 4.0f - fSlow12)) : 0.0f)));
			float fTemp255 = ((iTemp142) ? 0.12f : 0.003f);
			int iTemp256 = std::fabs(fTemp255) < 1.1920929e-07f;
			float fTemp257 = ((iTemp142) ? 0.003f : 0.12f);
			int iTemp258 = std::fabs(fTemp257) < 1.1920929e-07f;
			float fTemp259 = ((fTemp254 > fRec235[1]) ? ((iTemp258) ? 0.0f : std::exp(-(fConst33 / ((iTemp258) ? 1.0f : fTemp257)))) : ((iTemp256) ? 0.0f : std::exp(-(fConst33 / ((iTemp256) ? 1.0f : fTemp255)))));
			fRec235[0] = fTemp254 * (1.0f - fTemp259) + fRec235[1] * fTemp259;
			float fTemp260 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec14)));
			int iTemp261 = (fTemp260 > fSlow43) + (fTemp260 > fSlow39);
			float fTemp262 = std::max<float>(0.0f, ((iTemp261 == 0) ? 0.0f : ((iTemp261 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp260 + 12.5f - fSlow12) : fTemp260 + 12.0f - fSlow12)));
			float fTemp263 = ((-(0.75f * fTemp262) > fRec236[1]) ? fConst129 : fConst132);
			fRec236[0] = fRec236[1] * fTemp263 - 0.75f * fTemp262 * (1.0f - fTemp263);
			float fTemp264 = fRec14 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec236[0]))) + 1.5f)))));
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
			float fTemp274 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp265 : -3.4028235e+38f), ((iConst109) ? fVec96[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec97[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec98[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec99[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec100[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec101[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec102[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec103[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec104[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp275 = (fTemp274 > fSlow44) + (fTemp274 > fSlow45);
			float fTemp276 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp275 == 0) ? fTemp274 + 8.0f - fSlow12 : ((iTemp275 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp274 + 5.0f - fSlow12)) : 0.0f)));
			float fTemp277 = ((iTemp142) ? 0.08f : 0.002f);
			int iTemp278 = std::fabs(fTemp277) < 1.1920929e-07f;
			float fTemp279 = ((iTemp142) ? 0.002f : 0.08f);
			int iTemp280 = std::fabs(fTemp279) < 1.1920929e-07f;
			float fTemp281 = ((fTemp276 > fRec237[1]) ? ((iTemp280) ? 0.0f : std::exp(-(fConst33 / ((iTemp280) ? 1.0f : fTemp279)))) : ((iTemp278) ? 0.0f : std::exp(-(fConst33 / ((iTemp278) ? 1.0f : fTemp277)))));
			fRec237[0] = fTemp276 * (1.0f - fTemp281) + fRec237[1] * fTemp281;
			float fTemp282 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec15)));
			int iTemp283 = (fTemp282 > fSlow46) + (fTemp282 > fSlow43);
			float fTemp284 = std::max<float>(0.0f, ((iTemp283 == 0) ? 0.0f : ((iTemp283 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp282 + 13.5f - fSlow12) : fTemp282 + 13.0f - fSlow12)));
			float fTemp285 = ((-(0.75f * fTemp284) > fRec238[1]) ? fConst129 : fConst133);
			fRec238[0] = fRec238[1] * fTemp285 - 0.75f * fTemp284 * (1.0f - fTemp285);
			float fTemp286 = fRec15 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec238[0]))) + 1.5f)))));
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
			float fTemp296 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst108) ? fTemp287 : -3.4028235e+38f), ((iConst109) ? fVec106[iConst108] : -3.4028235e+38f)), ((iConst110) ? fVec107[iConst111] : -3.4028235e+38f)), ((iConst112) ? fVec108[iConst113] : -3.4028235e+38f)), ((iConst114) ? fVec109[(IOTA0 - iConst115) & 31] : -3.4028235e+38f)), ((iConst116) ? fVec110[(IOTA0 - iConst117) & 63] : -3.4028235e+38f)), ((iConst118) ? fVec111[(IOTA0 - iConst119) & 127] : -3.4028235e+38f)), ((iConst120) ? fVec112[(IOTA0 - iConst121) & 255] : -3.4028235e+38f)), ((iConst122) ? fVec113[(IOTA0 - iConst123) & 511] : -3.4028235e+38f)), ((iConst124) ? fVec114[(IOTA0 - iConst125) & 511] : -3.4028235e+38f))));
			int iTemp297 = (fTemp296 > fSlow47) + (fTemp296 > fSlow48);
			float fTemp298 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp297 == 0) ? fTemp296 + 9.0f - fSlow12 : ((iTemp297 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp296 + 6.0f - fSlow12)) : 0.0f)));
			float fTemp299 = ((iTemp142) ? 0.05f : 0.001f);
			int iTemp300 = std::fabs(fTemp299) < 1.1920929e-07f;
			float fTemp301 = ((iTemp142) ? 0.001f : 0.05f);
			int iTemp302 = std::fabs(fTemp301) < 1.1920929e-07f;
			float fTemp303 = ((fTemp298 > fRec239[1]) ? ((iTemp302) ? 0.0f : std::exp(-(fConst33 / ((iTemp302) ? 1.0f : fTemp301)))) : ((iTemp300) ? 0.0f : std::exp(-(fConst33 / ((iTemp300) ? 1.0f : fTemp299)))));
			fRec239[0] = fTemp298 * (1.0f - fTemp303) + fRec239[1] * fTemp303;
			float fTemp304 = fTemp128 * std::pow(1e+01f, 0.05f * fRec225[0]) + fTemp154 * std::pow(1e+01f, 0.05f * fRec227[0]) + fTemp176 * std::pow(1e+01f, 0.05f * fRec229[0]) + fTemp198 * std::pow(1e+01f, 0.05f * fRec231[0]) + fTemp220 * std::pow(1e+01f, 0.05f * fRec233[0]) + fTemp242 * std::pow(1e+01f, 0.05f * fRec235[0]) + fTemp264 * std::pow(1e+01f, 0.05f * fRec237[0]) + fTemp286 * std::pow(1e+01f, 0.05f * fRec239[0]);
			fVec115[0] = fTemp304;
			fRec6[0] = -(fConst8 * (fConst9 * fRec6[1] - (fTemp304 + fVec115[1])));
			fRec5[0] = fRec6[0] - fConst5 * (fConst134 * fRec5[2] + fConst135 * fRec5[1]);
			float fTemp305 = fRec5[2] + fRec5[0] + 2.0f * fRec5[1];
			fVec116[IOTA0 & 2047] = fTemp305;
			float fTemp306 = std::fabs(fConst5 * fTemp305);
			int iTemp307 = (fTemp306 >= fRec4[1]) | (float(iRec3[1]) >= fConst35);
			iRec3[0] = ((iTemp307) ? 0 : iRec3[1] + 1);
			fRec4[0] = ((iTemp307) ? fTemp306 : fRec4[1]);
			fRec2[0] = fConst7 * fRec4[0] + fConst6 * fRec2[1];
			float fTemp308 = std::fabs(fRec2[0]);
			fRec1[0] = std::max<float>(fTemp308, fConst136 * fRec1[1] + fConst137 * fTemp308);
			float fTemp309 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec1[0], 1.1920929e-07f));
			fVbargraph1 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp309))));
			output0[i0] = FAUSTFLOAT(fTemp0 * fRec0[0] + fConst5 * fTemp309 * (1.0f - fRec0[0]) * fVec116[(IOTA0 - iConst138) & 2047]);
			fRec0[1] = fRec0[0];
			fRec57[1] = fRec57[0];
			fVec0[1] = fVec0[0];
			fRec56[1] = fRec56[0];
			fRec66[1] = fRec66[0];
			fVec1[1] = fVec1[0];
			fRec70[1] = fRec70[0];
			fRec69[1] = fRec69[0];
			fVec2[1] = fVec2[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			fVec3[1] = fVec3[0];
			fVec4[2] = fVec4[1];
			fVec4[1] = fVec4[0];
			for (int j0 = 4; j0 > 0; j0 = j0 - 1) {
				fVec5[j0] = fVec5[j0 - 1];
			}
			for (int j1 = 11; j1 > 0; j1 = j1 - 1) {
				fVec6[j1] = fVec6[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec61[1] = fRec61[0];
			fRec62[1] = fRec62[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fVec12[1] = fVec12[0];
			fRec51[1] = fRec51[0];
			fRec52[1] = fRec52[0];
			fRec48[1] = fRec48[0];
			fRec49[1] = fRec49[0];
			fRec44[1] = fRec44[0];
			fRec45[1] = fRec45[0];
			fRec40[1] = fRec40[0];
			fRec41[1] = fRec41[0];
			fRec36[1] = fRec36[0];
			fRec37[1] = fRec37[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
			fRec28[1] = fRec28[0];
			fRec29[1] = fRec29[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fRec16[1] = fRec16[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fVec13[1] = fVec13[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fVec14[1] = fVec14[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fRec72[1] = fRec72[0];
			fVec15[1] = fVec15[0];
			fRec83[1] = fRec83[0];
			fRec82[1] = fRec82[0];
			fVec16[1] = fVec16[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fRec71[1] = fRec71[0];
			fRec84[1] = fRec84[0];
			fRec85[1] = fRec85[0];
			fVec17[1] = fVec17[0];
			fVec18[1] = fVec18[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fVec19[1] = fVec19[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec108[1] = fRec108[0];
			fRec109[1] = fRec109[0];
			fRec104[1] = fRec104[0];
			fRec105[1] = fRec105[0];
			fRec99[1] = fRec99[0];
			fRec100[1] = fRec100[0];
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
			fRec98[1] = fRec98[0];
			fVec20[1] = fVec20[0];
			fRec119[1] = fRec119[0];
			fRec118[1] = fRec118[0];
			fVec21[1] = fVec21[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
			fVec22[1] = fVec22[0];
			fVec23[1] = fVec23[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fVec24[1] = fVec24[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fRec164[1] = fRec164[0];
			fRec165[1] = fRec165[0];
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
			fRec156[1] = fRec156[0];
			fRec157[1] = fRec157[0];
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			fRec147[1] = fRec147[0];
			fRec148[1] = fRec148[0];
			fRec144[1] = fRec144[0];
			fRec145[1] = fRec145[0];
			fRec140[1] = fRec140[0];
			fRec141[1] = fRec141[0];
			fRec135[1] = fRec135[0];
			fRec136[1] = fRec136[0];
			fRec132[1] = fRec132[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fVec25[1] = fVec25[0];
			fRec175[1] = fRec175[0];
			fRec174[1] = fRec174[0];
			fVec26[1] = fVec26[0];
			fRec173[1] = fRec173[0];
			fRec172[1] = fRec172[0];
			fRec171[1] = fRec171[0];
			fRec170[1] = fRec170[0];
			fRec169[1] = fRec169[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
			fVec27[1] = fVec27[0];
			fVec28[1] = fVec28[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fVec29[1] = fVec29[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fRec183[1] = fRec183[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			fRec200[1] = fRec200[0];
			fRec201[1] = fRec201[0];
			fRec196[1] = fRec196[0];
			fRec197[1] = fRec197[0];
			fRec191[1] = fRec191[0];
			fRec192[1] = fRec192[0];
			fRec188[1] = fRec188[0];
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
			fVec30[1] = fVec30[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fVec31[1] = fVec31[0];
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			fRec205[1] = fRec205[0];
			fRec212[1] = fRec212[0];
			fRec213[1] = fRec213[0];
			fVec32[1] = fVec32[0];
			fVec33[1] = fVec33[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			fVec34[1] = fVec34[0];
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			fRec219[1] = fRec219[0];
			fRec218[1] = fRec218[0];
			fRec217[1] = fRec217[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec224[1] = fRec224[0];
			fVec35[1] = fVec35[0];
			fVec36[2] = fVec36[1];
			fVec36[1] = fVec36[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec37[j2] = fVec37[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec38[j3] = fVec38[j3 - 1];
			}
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fVec45[1] = fVec45[0];
			fVec46[2] = fVec46[1];
			fVec46[1] = fVec46[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec47[j4] = fVec47[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec48[j5] = fVec48[j5 - 1];
			}
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fVec55[1] = fVec55[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec57[j6] = fVec57[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec58[j7] = fVec58[j7 - 1];
			}
			fRec229[1] = fRec229[0];
			fRec230[1] = fRec230[0];
			fVec65[1] = fVec65[0];
			fVec66[2] = fVec66[1];
			fVec66[1] = fVec66[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec67[j8] = fVec67[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec68[j9] = fVec68[j9 - 1];
			}
			fRec231[1] = fRec231[0];
			fRec232[1] = fRec232[0];
			fVec75[1] = fVec75[0];
			fVec76[2] = fVec76[1];
			fVec76[1] = fVec76[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec77[j10] = fVec77[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec78[j11] = fVec78[j11 - 1];
			}
			fRec233[1] = fRec233[0];
			fRec234[1] = fRec234[0];
			fVec85[1] = fVec85[0];
			fVec86[2] = fVec86[1];
			fVec86[1] = fVec86[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec87[j12] = fVec87[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec88[j13] = fVec88[j13 - 1];
			}
			fRec235[1] = fRec235[0];
			fRec236[1] = fRec236[0];
			fVec95[1] = fVec95[0];
			fVec96[2] = fVec96[1];
			fVec96[1] = fVec96[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec97[j14] = fVec97[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec98[j15] = fVec98[j15 - 1];
			}
			fRec237[1] = fRec237[0];
			fRec238[1] = fRec238[0];
			fVec105[1] = fVec105[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec107[j16] = fVec107[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec108[j17] = fVec108[j17 - 1];
			}
			fRec239[1] = fRec239[0];
			fVec115[1] = fVec115[0];
			fRec6[1] = fRec6[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			iRec3[1] = iRec3[0];
			fRec4[1] = fRec4[0];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
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
        case kParameter_voice_isolation_intensity:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[9];
            param.unit = kParameterUnits[9];
            param.symbol = kParameterSymbols[9];
            param.shortName = "";
            param.ranges.def = kParameterRanges[9].def;
            param.ranges.min = kParameterRanges[9].min;
            param.ranges.max = kParameterRanges[9].max;
            break;
        case kParameter_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
            ;
            param.name = kParameterNames[10];
            param.unit = kParameterUnits[10];
            param.symbol = kParameterSymbols[10];
            param.shortName = "";
            param.ranges.def = kParameterRanges[10].def;
            param.ranges.min = kParameterRanges[10].min;
            param.ranges.max = kParameterRanges[10].max;
            break;
        case kParameter_pre_gain:
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
        case kParameter_sbmb_strength:
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
        case kParameter_vad_ext:
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
        case kParameter_leveler_target:
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
        case kParameter_leveler_scale:
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
        case kParameter_mb_strength:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[16];
            param.unit = kParameterUnits[16];
            param.symbol = kParameterSymbols[16];
            param.shortName = "";
            param.ranges.def = kParameterRanges[16].def;
            param.ranges.min = kParameterRanges[16].min;
            param.ranges.max = kParameterRanges[16].max;
            break;
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[17];
            param.unit = kParameterUnits[17];
            param.symbol = kParameterSymbols[17];
            param.shortName = "";
            param.ranges.def = kParameterRanges[17].def;
            param.ranges.min = kParameterRanges[17].min;
            param.ranges.max = kParameterRanges[17].max;
            break;
        case kParameter_vad_gate_thresh:
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
        case kParameter_vad_smoothing_time:
            param.hints = kParameterIsAutomatable
            
            
            
            
            ;
            param.name = kParameterNames[19];
            param.unit = kParameterUnits[19];
            param.symbol = kParameterSymbols[19];
            param.shortName = "";
            param.ranges.def = kParameterRanges[19].def;
            param.ranges.min = kParameterRanges[19].min;
            param.ranges.max = kParameterRanges[19].max;
            break;
        
        case kParameter_limiter_gain:
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
        case kParameter_vad_meter:
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
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            return dsp->fVslider8;
        case kParameter_sb_target_spectrum_0:
            return dsp->fVslider9;
        case kParameter_sb_target_spectrum_1:
            return dsp->fVslider10;
        case kParameter_sb_target_spectrum_2:
            return dsp->fVslider11;
        case kParameter_sb_target_spectrum_3:
            return dsp->fVslider12;
        case kParameter_sb_target_spectrum_4:
            return dsp->fVslider13;
        case kParameter_sb_target_spectrum_5:
            return dsp->fVslider14;
        case kParameter_sb_target_spectrum_6:
            return dsp->fVslider15;
        case kParameter_sb_target_spectrum_7:
            return dsp->fVslider16;
        case kParameter_voice_isolation_intensity:
            return dsp->fVslider18;
        case kParameter_bypass:
            return dsp->fCheckbox0;
        case kParameter_pre_gain:
            return dsp->fVslider1;
        case kParameter_sbmb_strength:
            return dsp->fVslider7;
        case kParameter_vad_ext:
            return dsp->fVslider3;
        case kParameter_leveler_target:
            return dsp->fVslider6;
        case kParameter_leveler_scale:
            return dsp->fVslider2;
        case kParameter_mb_strength:
            return dsp->fVslider17;
        case kParameter_pre_lowcut:
            return dsp->fVslider0;
        case kParameter_vad_gate_thresh:
            return dsp->fVslider5;
        case kParameter_vad_smoothing_time:
            return dsp->fVslider4;
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
            dsp->fVslider8 = value;
            break;
        case kParameter_sb_target_spectrum_0:
            dsp->fVslider9 = value;
            break;
        case kParameter_sb_target_spectrum_1:
            dsp->fVslider10 = value;
            break;
        case kParameter_sb_target_spectrum_2:
            dsp->fVslider11 = value;
            break;
        case kParameter_sb_target_spectrum_3:
            dsp->fVslider12 = value;
            break;
        case kParameter_sb_target_spectrum_4:
            dsp->fVslider13 = value;
            break;
        case kParameter_sb_target_spectrum_5:
            dsp->fVslider14 = value;
            break;
        case kParameter_sb_target_spectrum_6:
            dsp->fVslider15 = value;
            break;
        case kParameter_sb_target_spectrum_7:
            dsp->fVslider16 = value;
            break;
        case kParameter_voice_isolation_intensity:
            dsp->fVslider18 = value;
            break;
        case kParameter_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_pre_gain:
            dsp->fVslider1 = value;
            break;
        case kParameter_sbmb_strength:
            dsp->fVslider7 = value;
            break;
        case kParameter_vad_ext:
            dsp->fVslider3 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider6 = value;
            break;
        case kParameter_leveler_scale:
            dsp->fVslider2 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider17 = value;
            break;
        case kParameter_pre_lowcut:
            dsp->fVslider0 = value;
            break;
        case kParameter_vad_gate_thresh:
            dsp->fVslider5 = value;
            break;
        case kParameter_vad_smoothing_time:
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
        float params[20] = {
            dsp->fVslider8,
            dsp->fVslider9,
            dsp->fVslider10,
            dsp->fVslider11,
            dsp->fVslider12,
            dsp->fVslider13,
            dsp->fVslider14,
            dsp->fVslider15,
            dsp->fVslider16,
            dsp->fVslider18,
            dsp->fCheckbox0,
            dsp->fVslider1,
            dsp->fVslider7,
            dsp->fVslider3,
            dsp->fVslider6,
            dsp->fVslider2,
            dsp->fVslider17,
            dsp->fVslider0,
            dsp->fVslider5,
            dsp->fVslider4,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider8 = params[0];
        dsp->fVslider9 = params[1];
        dsp->fVslider10 = params[2];
        dsp->fVslider11 = params[3];
        dsp->fVslider12 = params[4];
        dsp->fVslider13 = params[5];
        dsp->fVslider14 = params[6];
        dsp->fVslider15 = params[7];
        dsp->fVslider16 = params[8];
        dsp->fVslider18 = params[9];
        dsp->fCheckbox0 = params[10];
        dsp->fVslider1 = params[11];
        dsp->fVslider7 = params[12];
        dsp->fVslider3 = params[13];
        dsp->fVslider6 = params[14];
        dsp->fVslider2 = params[15];
        dsp->fVslider17 = params[16];
        dsp->fVslider0 = params[17];
        dsp->fVslider5 = params[18];
        dsp->fVslider4 = params[19];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
