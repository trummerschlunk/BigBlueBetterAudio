
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
// Version: 0.27
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
	float fConst2;
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
	FAUSTFLOAT fVslider0;
	float fConst26;
	FAUSTFLOAT fVslider1;
	float fConst27;
	float fRec56[2];
	float fRec55[2];
	FAUSTFLOAT fVbargraph0;
	float fRec57[2];
	FAUSTFLOAT fVbargraph1;
	float fVec0[2];
	float fRec54[2];
	FAUSTFLOAT fVslider2;
	float fConst28;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst29;
	float fRec66[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVbargraph3;
	float fConst30;
	FAUSTFLOAT fVslider6;
	float fConst31;
	float fConst32;
	float fConst33;
	int iConst34;
	float fConst35;
	float fConst36;
	float fConst37;
	float fConst38;
	float fConst39;
	float fConst40;
	float fConst41;
	float fConst42;
	float fConst43;
	float fConst44;
	float fConst45;
	float fConst46;
	float fConst47;
	float fVec1[2];
	float fConst48;
	float fConst49;
	float fRec70[2];
	float fRec69[2];
	float fConst50;
	float fVec2[2];
	float fConst51;
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
	int iConst52;
	int iConst53;
	int iConst54;
	int iConst55;
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
	float fRec61[2];
	float fRec62[2];
	float fRec59[2];
	FAUSTFLOAT fVbargraph4;
	float fRec58[2];
	float fVec12[2];
	float fRec49[2];
	float fConst67;
	float fRec50[2];
	float fConst68;
	float fRec46[2];
	float fRec47[2];
	float fRec42[2];
	float fConst69;
	float fRec43[2];
	float fConst70;
	float fRec38[2];
	float fConst71;
	float fRec39[2];
	float fConst72;
	float fRec34[2];
	float fConst73;
	float fRec35[2];
	float fConst74;
	float fRec29[2];
	float fConst75;
	float fRec30[2];
	float fConst76;
	float fRec26[2];
	float fRec27[2];
	float fRec22[2];
	float fConst77;
	float fRec23[2];
	float fConst78;
	float fRec17[2];
	float fConst79;
	float fRec18[2];
	float fConst80;
	float fRec14[2];
	float fRec15[2];
	float fRec16[2];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fConst81;
	float fConst82;
	FAUSTFLOAT fVslider9;
	float fConst83;
	float fConst84;
	float fConst85;
	float fVec13[2];
	float fConst86;
	float fConst87;
	float fRec77[2];
	float fRec76[2];
	float fVec14[2];
	float fRec75[2];
	float fRec74[2];
	float fConst88;
	float fConst89;
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
	FAUSTFLOAT fVbargraph5;
	float fRec71[2];
	FAUSTFLOAT fVbargraph6;
	float fRec84[2];
	float fRec85[2];
	float fVec17[2];
	float fConst90;
	float fConst91;
	FAUSTFLOAT fVslider10;
	float fVec18[2];
	float fRec95[2];
	float fRec94[2];
	float fVec19[2];
	float fRec93[2];
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	FAUSTFLOAT fVbargraph7;
	float fRec89[2];
	FAUSTFLOAT fVbargraph8;
	float fRec108[2];
	float fRec109[2];
	float fRec104[2];
	float fRec105[2];
	float fRec99[2];
	float fRec100[2];
	float fRec96[2];
	float fRec97[2];
	float fRec98[2];
	float fConst92;
	float fConst93;
	FAUSTFLOAT fVslider11;
	float fVec20[2];
	float fRec119[2];
	float fRec118[2];
	float fVec21[2];
	float fRec117[2];
	float fRec116[2];
	float fRec115[2];
	float fRec114[2];
	FAUSTFLOAT fVbargraph9;
	float fRec113[2];
	FAUSTFLOAT fVbargraph10;
	float fRec120[2];
	float fRec121[2];
	float fVec22[2];
	float fConst94;
	float fConst95;
	FAUSTFLOAT fVslider12;
	float fVec23[2];
	float fRec131[2];
	float fRec130[2];
	float fVec24[2];
	float fRec129[2];
	float fRec128[2];
	float fRec127[2];
	float fRec126[2];
	FAUSTFLOAT fVbargraph11;
	float fRec125[2];
	FAUSTFLOAT fVbargraph12;
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
	FAUSTFLOAT fVslider13;
	float fVec25[2];
	float fRec175[2];
	float fRec174[2];
	float fVec26[2];
	float fRec173[2];
	float fRec172[2];
	float fRec171[2];
	float fRec170[2];
	FAUSTFLOAT fVbargraph13;
	float fRec169[2];
	FAUSTFLOAT fVbargraph14;
	float fRec176[2];
	float fRec177[2];
	float fVec27[2];
	float fConst96;
	float fConst97;
	FAUSTFLOAT fVslider14;
	float fVec28[2];
	float fRec187[2];
	float fRec186[2];
	float fVec29[2];
	float fRec185[2];
	float fRec184[2];
	float fRec183[2];
	float fRec182[2];
	FAUSTFLOAT fVbargraph15;
	float fRec181[2];
	FAUSTFLOAT fVbargraph16;
	float fRec200[2];
	float fRec201[2];
	float fRec196[2];
	float fRec197[2];
	float fRec191[2];
	float fRec192[2];
	float fRec188[2];
	float fRec189[2];
	float fRec190[2];
	float fConst98;
	float fConst99;
	FAUSTFLOAT fVslider15;
	float fVec30[2];
	float fRec211[2];
	float fRec210[2];
	float fVec31[2];
	float fRec209[2];
	float fRec208[2];
	float fRec207[2];
	float fRec206[2];
	FAUSTFLOAT fVbargraph17;
	float fRec205[2];
	FAUSTFLOAT fVbargraph18;
	float fRec212[2];
	float fRec213[2];
	float fVec32[2];
	float fConst100;
	float fConst101;
	FAUSTFLOAT fVslider16;
	float fVec33[2];
	float fRec223[2];
	float fRec222[2];
	float fVec34[2];
	float fRec221[2];
	float fRec220[2];
	float fRec219[2];
	float fRec218[2];
	FAUSTFLOAT fVbargraph19;
	float fRec217[2];
	FAUSTFLOAT fVbargraph20;
	float fRec5[3];
	FAUSTFLOAT fVslider17;
	float fConst102;
	float fRec224[2];
	FAUSTFLOAT fVbargraph21;
	float fConst103;
	float fRec225[2];
	FAUSTFLOAT fVbargraph22;
	float fConst104;
	float fConst105;
	float fRec226[2];
	FAUSTFLOAT fVbargraph23;
	float fConst106;
	float fConst107;
	float fRec227[2];
	FAUSTFLOAT fVbargraph24;
	float fRec228[2];
	FAUSTFLOAT fVbargraph25;
	float fConst108;
	float fRec229[2];
	FAUSTFLOAT fVbargraph26;
	float fConst109;
	float fRec230[2];
	FAUSTFLOAT fVbargraph27;
	float fConst110;
	float fRec231[2];
	FAUSTFLOAT fVbargraph28;
	float fVec35[2048];
	int iRec3[2];
	float fRec4[2];
	float fRec2[2];
	float fConst111;
	float fConst112;
	float fRec1[2];
	FAUSTFLOAT fVbargraph29;
	int iConst113;
	float fRec0[2];
	FAUSTFLOAT fVbargraph30;
	float fVec36[2];
	float fConst114;
	float fConst115;
	int iConst116;
	float fVec37[2];
	float fRec235[2];
	float fRec234[2];
	float fVec38[2];
	float fRec233[2];
	float fRec232[2];
	float fVec39[2];
	float fVec40[3];
	float fVec41[5];
	float fVec42[12];
	float fVec43[32];
	float fVec44[64];
	float fVec45[128];
	float fVec46[256];
	float fVec47[512];
	float fVec48[1024];
	float fVec49[2048];
	float fVec50[4096];
	float fVec51[8192];
	float fVec52[16384];
	float fVec53[32768];
	float fVec54[65536];
	float fVec55[131072];
	float fVec56[262144];
	int iConst117;
	int iConst118;
	int iConst119;
	int iConst120;
	int iConst121;
	int iConst122;
	int iConst123;
	int iConst124;
	int iConst125;
	int iConst126;
	int iConst127;
	int iConst128;
	int iConst129;
	int iConst130;
	int iConst131;
	int iConst132;
	int iConst133;
	int iConst134;
	int iConst135;
	int iConst136;
	int iConst137;
	int iConst138;
	int iConst139;
	int iConst140;
	int iConst141;
	int iConst142;
	int iConst143;
	int iConst144;
	int iConst145;
	int iConst146;
	int iConst147;
	int iConst148;
	int iConst149;
	FAUSTFLOAT fVbargraph31;
	float fVec57[2];
	float fVec58[2];
	float fRec239[2];
	float fRec238[2];
	float fVec59[2];
	float fRec237[2];
	float fRec236[2];
	float fVec60[2];
	float fVec61[3];
	float fVec62[5];
	float fVec63[12];
	float fVec64[32];
	float fVec65[64];
	float fVec66[128];
	float fVec67[256];
	float fVec68[512];
	float fVec69[1024];
	float fVec70[2048];
	float fVec71[4096];
	float fVec72[8192];
	float fVec73[16384];
	float fVec74[32768];
	float fVec75[65536];
	float fVec76[131072];
	float fVec77[262144];
	FAUSTFLOAT fVbargraph32;
	
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
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/52347-md.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("version", "0.27");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 2;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 2;
	}
	
	static void classInit(int sample_rate) {
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 2e+01f / fConst0;
		fConst2 = std::exp(-(628.31854f / fConst0));
		fConst3 = 1.0f - fConst2;
		fConst4 = std::tan(314.15927f / fConst0);
		fConst5 = fConst4 * (fConst4 + 1.4142135f) + 1.0f;
		fConst6 = 2.0f / fConst5;
		fConst7 = std::tan(1256.6371f / fConst0);
		fConst8 = fConst7 * (fConst7 + 1.4142135f) + 1.0f;
		fConst9 = 2.0f / fConst8;
		fConst10 = std::tan(628.31854f / fConst0);
		fConst11 = fConst10 * (fConst10 + 1.4142135f) + 1.0f;
		fConst12 = 2.0f / fConst11;
		fConst13 = std::tan(20106.193f / fConst0);
		fConst14 = fConst13 * (fConst13 + 1.4142135f) + 1.0f;
		fConst15 = 2.0f / fConst14;
		fConst16 = std::tan(5026.5483f / fConst0);
		fConst17 = fConst16 * (fConst16 + 1.4142135f) + 1.0f;
		fConst18 = 2.0f / fConst17;
		fConst19 = std::tan(10053.097f / fConst0);
		fConst20 = fConst19 * (fConst19 + 1.4142135f) + 1.0f;
		fConst21 = 2.0f / fConst20;
		fConst22 = std::tan(2513.2742f / fConst0);
		fConst23 = fConst22 * (fConst22 + 1.4142135f) + 1.0f;
		fConst24 = 2.0f / fConst23;
		fConst25 = 3.1415927f / fConst0;
		fConst26 = 44.1f / fConst0;
		fConst27 = 1.0f - fConst26;
		fConst28 = 0.125f * fConst0;
		fConst29 = 1.0f / fConst0;
		fConst30 = 1.1312305e-06f * fConst0;
		fConst31 = 0.01f * fConst0;
		fConst32 = std::rint(fConst31);
		fConst33 = 1.0f / std::max<float>(fConst32, 1.1920929e-07f);
		iConst34 = int(std::floor(0.00390625f * fConst32)) % 2;
		fConst35 = std::tan(119.806114f / fConst0);
		fConst36 = mydsp_faustpower2_f(fConst35);
		fConst37 = 0.50032705f * (fConst36 + 1.0f);
		fConst38 = 1.0f / (fConst35 + fConst37);
		fConst39 = std::tan(5283.415f / fConst0);
		fConst40 = mydsp_faustpower2_f(fConst39);
		fConst41 = 1.4142135f * fConst39;
		fConst42 = 1.0f / (fConst40 + fConst41 + 1.0f);
		fConst43 = fConst40 + -1.5848527f;
		fConst44 = 2.0f * fConst43;
		fConst45 = fConst40 + (1.0f - fConst41);
		fConst46 = 1.7803667f * fConst39;
		fConst47 = fConst40 + (1.5848527f - fConst46);
		fConst48 = 2.0f * (fConst40 + -1.0f);
		fConst49 = fConst40 + fConst46 + 1.5848527f;
		fConst50 = fConst37 - fConst35;
		fConst51 = 1.0006541f * (fConst36 + -1.0f);
		iConst52 = int(std::floor(fConst32)) % 2;
		iConst53 = int(std::floor(0.5f * fConst32)) % 2;
		iConst54 = iConst52 + 2 * iConst53;
		iConst55 = int(std::floor(0.25f * fConst32)) % 2;
		iConst56 = iConst54 + 4 * iConst55;
		iConst57 = int(std::floor(0.125f * fConst32)) % 2;
		iConst58 = iConst56 + 8 * iConst57;
		iConst59 = int(std::floor(0.0625f * fConst32)) % 2;
		iConst60 = iConst58 + 16 * iConst59;
		iConst61 = int(std::floor(0.03125f * fConst32)) % 2;
		iConst62 = iConst60 + 32 * iConst61;
		iConst63 = int(std::floor(0.015625f * fConst32)) % 2;
		iConst64 = iConst62 + 64 * iConst63;
		iConst65 = int(std::floor(0.0078125f * fConst32)) % 2;
		iConst66 = iConst64 + 128 * iConst65;
		fConst67 = fConst22 / fConst23;
		fConst68 = 1.0f / fConst23;
		fConst69 = fConst19 / fConst20;
		fConst70 = 1.0f / fConst20;
		fConst71 = fConst16 / fConst17;
		fConst72 = 1.0f / fConst17;
		fConst73 = fConst13 / fConst14;
		fConst74 = 1.0f / fConst14;
		fConst75 = fConst10 / fConst11;
		fConst76 = 1.0f / fConst11;
		fConst77 = fConst7 / fConst8;
		fConst78 = 1.0f / fConst8;
		fConst79 = fConst4 / fConst5;
		fConst80 = 1.0f / fConst5;
		fConst81 = std::exp(-(5.0f / fConst0));
		fConst82 = 1.0f - fConst81;
		fConst83 = std::exp(-(1e+02f / fConst0));
		fConst84 = 1.0f - fConst83;
		fConst85 = 3.9810717f * fConst47;
		fConst86 = 7.9621434f * fConst43;
		fConst87 = 3.9810717f * fConst49;
		fConst88 = std::exp(-(1e+01f / fConst0));
		fConst89 = 1.0f - fConst88;
		fConst90 = std::exp(-(5.714286f / fConst0));
		fConst91 = 1.0f - fConst90;
		fConst92 = std::exp(-(6.6666665f / fConst0));
		fConst93 = 1.0f - fConst92;
		fConst94 = std::exp(-(8.0f / fConst0));
		fConst95 = 1.0f - fConst94;
		fConst96 = std::exp(-(13.333333f / fConst0));
		fConst97 = 1.0f - fConst96;
		fConst98 = std::exp(-fConst1);
		fConst99 = 1.0f - fConst98;
		fConst100 = std::exp(-(4e+01f / fConst0));
		fConst101 = 1.0f - fConst100;
		fConst102 = std::exp(-(33.333332f / fConst0));
		fConst103 = std::exp(-(12.5f / fConst0));
		fConst104 = std::exp(-(5e+01f / fConst0));
		fConst105 = std::exp(-(16.666666f / fConst0));
		fConst106 = std::exp(-(66.666664f / fConst0));
		fConst107 = std::exp(-(25.0f / fConst0));
		fConst108 = std::exp(-(2e+02f / fConst0));
		fConst109 = std::exp(-(333.33334f / fConst0));
		fConst110 = std::exp(-(5e+02f / fConst0));
		fConst111 = std::exp(-(6.2831855f / fConst0));
		fConst112 = 1.0f - fConst111;
		iConst113 = int(fConst31);
		fConst114 = std::rint(3.0f * fConst0);
		fConst115 = 1.0f / std::max<float>(fConst114, 1.1920929e-07f);
		iConst116 = int(std::floor(7.6293945e-06f * fConst114)) % 2;
		iConst117 = int(std::floor(fConst114)) % 2;
		iConst118 = int(std::floor(0.5f * fConst114)) % 2;
		iConst119 = iConst117 + 2 * iConst118;
		iConst120 = int(std::floor(0.25f * fConst114)) % 2;
		iConst121 = iConst119 + 4 * iConst120;
		iConst122 = int(std::floor(0.125f * fConst114)) % 2;
		iConst123 = iConst121 + 8 * iConst122;
		iConst124 = int(std::floor(0.0625f * fConst114)) % 2;
		iConst125 = iConst123 + 16 * iConst124;
		iConst126 = int(std::floor(0.03125f * fConst114)) % 2;
		iConst127 = iConst125 + 32 * iConst126;
		iConst128 = int(std::floor(0.015625f * fConst114)) % 2;
		iConst129 = iConst127 + 64 * iConst128;
		iConst130 = int(std::floor(0.0078125f * fConst114)) % 2;
		iConst131 = iConst129 + 128 * iConst130;
		iConst132 = int(std::floor(0.00390625f * fConst114)) % 2;
		iConst133 = iConst131 + 256 * iConst132;
		iConst134 = int(std::floor(0.001953125f * fConst114)) % 2;
		iConst135 = iConst133 + 512 * iConst134;
		iConst136 = int(std::floor(0.0009765625f * fConst114)) % 2;
		iConst137 = iConst135 + 1024 * iConst136;
		iConst138 = int(std::floor(0.00048828125f * fConst114)) % 2;
		iConst139 = iConst137 + 2048 * iConst138;
		iConst140 = int(std::floor(0.00024414062f * fConst114)) % 2;
		iConst141 = iConst139 + 4096 * iConst140;
		iConst142 = int(std::floor(0.00012207031f * fConst114)) % 2;
		iConst143 = iConst141 + 8192 * iConst142;
		iConst144 = int(std::floor(6.1035156e-05f * fConst114)) % 2;
		iConst145 = iConst143 + 16384 * iConst144;
		iConst146 = int(std::floor(3.0517578e-05f * fConst114)) % 2;
		iConst147 = iConst145 + 32768 * iConst146;
		iConst148 = int(std::floor(1.5258789e-05f * fConst114)) % 2;
		iConst149 = iConst147 + 65536 * iConst148;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(42.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(0.1f);
		fVslider5 = FAUSTFLOAT(0.9f);
		fVslider6 = FAUSTFLOAT(-23.0f);
		fVslider7 = FAUSTFLOAT(5e+01f);
		fVslider8 = FAUSTFLOAT(1e+02f);
		fVslider9 = FAUSTFLOAT(-1e+01f);
		fVslider10 = FAUSTFLOAT(-5.0f);
		fVslider11 = FAUSTFLOAT(-5.0f);
		fVslider12 = FAUSTFLOAT(-8.0f);
		fVslider13 = FAUSTFLOAT(-9.0f);
		fVslider14 = FAUSTFLOAT(-1e+01f);
		fVslider15 = FAUSTFLOAT(-7.0f);
		fVslider16 = FAUSTFLOAT(-4.0f);
		fVslider17 = FAUSTFLOAT(8e+01f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec56[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec55[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec57[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec0[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec54[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec66[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fVec1[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec70[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec69[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fVec2[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec68[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec67[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fVec3[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 3; l13 = l13 + 1) {
			fVec4[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 5; l14 = l14 + 1) {
			fVec5[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 12; l15 = l15 + 1) {
			fVec6[l15] = 0.0f;
		}
		IOTA0 = 0;
		for (int l16 = 0; l16 < 32; l16 = l16 + 1) {
			fVec7[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 64; l17 = l17 + 1) {
			fVec8[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 128; l18 = l18 + 1) {
			fVec9[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 256; l19 = l19 + 1) {
			fVec10[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 512; l20 = l20 + 1) {
			fVec11[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec61[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec62[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec59[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec58[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec12[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec49[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec50[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec46[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec47[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec42[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec43[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec38[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec39[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec34[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec35[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec29[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec30[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec26[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec27[l39] = 0.0f;
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
			fRec14[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec15[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec16[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec13[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec77[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec76[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fVec14[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec75[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec74[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec73[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec72[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec15[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec83[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec82[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec16[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec81[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec80[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec79[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec78[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec71[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec84[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec85[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec17[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fVec18[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec95[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec94[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fVec19[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec93[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec92[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec91[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec90[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec89[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec108[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec109[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec104[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec105[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec99[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec100[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec96[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec97[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec98[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fVec20[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec119[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec118[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec21[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec117[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec116[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec115[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec114[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec113[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec120[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec121[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec22[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fVec23[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec131[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec130[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fVec24[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec129[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec128[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec127[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec126[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec125[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec164[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec165[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec160[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec161[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec156[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec157[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec152[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec153[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec147[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec148[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec144[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec145[l117] = 0.0f;
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
			fRec132[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec133[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec134[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec25[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec175[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec174[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fVec26[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec173[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec172[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec171[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec170[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec169[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec176[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec177[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fVec27[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec28[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec187[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec186[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fVec29[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec185[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec184[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec183[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec182[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec181[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec200[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec201[l147] = 0.0f;
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
			fRec188[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec189[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec190[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fVec30[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec211[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec210[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fVec31[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec209[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec208[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec207[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec206[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec205[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec212[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec213[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec32[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fVec33[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec223[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec222[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fVec34[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec221[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec220[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec219[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec218[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec217[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 3; l176 = l176 + 1) {
			fRec5[l176] = 0.0f;
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
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec230[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec231[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2048; l185 = l185 + 1) {
			fVec35[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			iRec3[l186] = 0;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec4[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec2[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec1[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec0[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fVec36[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fVec37[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec235[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec234[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fVec38[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec233[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec232[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fVec39[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 3; l199 = l199 + 1) {
			fVec40[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 5; l200 = l200 + 1) {
			fVec41[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 12; l201 = l201 + 1) {
			fVec42[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 32; l202 = l202 + 1) {
			fVec43[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 64; l203 = l203 + 1) {
			fVec44[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 128; l204 = l204 + 1) {
			fVec45[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 256; l205 = l205 + 1) {
			fVec46[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 512; l206 = l206 + 1) {
			fVec47[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 1024; l207 = l207 + 1) {
			fVec48[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2048; l208 = l208 + 1) {
			fVec49[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 4096; l209 = l209 + 1) {
			fVec50[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 8192; l210 = l210 + 1) {
			fVec51[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 16384; l211 = l211 + 1) {
			fVec52[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 32768; l212 = l212 + 1) {
			fVec53[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 65536; l213 = l213 + 1) {
			fVec54[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 131072; l214 = l214 + 1) {
			fVec55[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 262144; l215 = l215 + 1) {
			fVec56[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fVec57[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fVec58[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec239[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec238[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fVec59[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec237[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec236[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fVec60[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 3; l224 = l224 + 1) {
			fVec61[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 5; l225 = l225 + 1) {
			fVec62[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 12; l226 = l226 + 1) {
			fVec63[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 32; l227 = l227 + 1) {
			fVec64[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 64; l228 = l228 + 1) {
			fVec65[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 128; l229 = l229 + 1) {
			fVec66[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 256; l230 = l230 + 1) {
			fVec67[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 512; l231 = l231 + 1) {
			fVec68[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 1024; l232 = l232 + 1) {
			fVec69[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2048; l233 = l233 + 1) {
			fVec70[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 4096; l234 = l234 + 1) {
			fVec71[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 8192; l235 = l235 + 1) {
			fVec72[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 16384; l236 = l236 + 1) {
			fVec73[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 32768; l237 = l237 + 1) {
			fVec74[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 65536; l238 = l238 + 1) {
			fVec75[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 131072; l239 = l239 + 1) {
			fVec76[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 262144; l240 = l240 + 1) {
			fVec77[l240] = 0.0f;
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
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph5, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph7, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph9, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph11, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph11, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph13, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph13, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph15, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph15, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph17, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph17, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph19, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph19, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph10, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph12, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph18, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph20, "1", "");
		ui_interface->declare(&fVbargraph20, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "pre_gain");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider8, "2", "");
		ui_interface->declare(&fVslider8, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider8, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph29, "99", "");
		ui_interface->declare(&fVbargraph29, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph29, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph0, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph1, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph1, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph32, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph32, "unit", "LUFS");
		ui_interface->addVerticalBargraph("lufs_out", &fVbargraph32, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph30, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph31, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph31, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph3, "symbol", "vad_meter");
		ui_interface->addVerticalBargraph("vad_meter", &fVbargraph3, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "symbol", "leveler_target");
		ui_interface->declare(&fVslider6, "unit", "LUFS");
		ui_interface->addVerticalSlider("target", &fVslider6, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph4, "8", "");
		ui_interface->declare(&fVbargraph4, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph4, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider2, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph21, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph22, "2", "");
		ui_interface->declare(&fVbargraph22, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph22, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph23, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph24, "2", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph25, "2", "");
		ui_interface->declare(&fVbargraph25, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph25, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph26, "2", "");
		ui_interface->declare(&fVbargraph26, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph27, "2", "");
		ui_interface->declare(&fVbargraph27, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph27, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph28, "2", "");
		ui_interface->declare(&fVbargraph28, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph28, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph28, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVslider17, "symbol", "mb_strength");
		ui_interface->declare(&fVslider17, "unit", "%");
		ui_interface->addVerticalSlider("mb_strength", &fVslider17, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider0, "scale", "log");
		ui_interface->declare(&fVslider0, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider0, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "vad_gate_thresh");
		ui_interface->addVerticalSlider("vad_g_thr", &fVslider5, FAUSTFLOAT(0.9f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph2, "symbol", "vad_smoothing_meter");
		ui_interface->addVerticalBargraph("vad_smoo", &fVbargraph2, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider4, "symbol", "vad_smoothing_time");
		ui_interface->addVerticalSlider("vad_smoo_t", &fVslider4, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = std::tan(fConst25 * float(fVslider0));
		float fSlow1 = 1.0f / fSlow0;
		float fSlow2 = 1.0f / (fSlow1 + 1.0f);
		float fSlow3 = 0.5f / fSlow0;
		float fSlow4 = fConst26 * std::pow(1e+01f, 0.05f * float(fVslider1));
		float fSlow5 = 1.0f - fSlow1;
		float fSlow6 = float(fVslider2);
		float fSlow7 = float(fVslider4);
		int iSlow8 = std::fabs(fSlow7) < 1.1920929e-07f;
		float fSlow9 = ((iSlow8) ? 0.0f : std::exp(-(fConst29 / ((iSlow8) ? 1.0f : fSlow7))));
		float fSlow10 = float(fVslider3) * (1.0f - fSlow9);
		float fSlow11 = float(fVslider5);
		float fSlow12 = float(fVslider6);
		float fSlow13 = float(fVslider8);
		float fSlow14 = 5e-06f * float(fVslider7) * fSlow13;
		float fSlow15 = float(fVslider9);
		float fSlow16 = float(fVslider10);
		float fSlow17 = float(fVslider11);
		float fSlow18 = float(fVslider12);
		float fSlow19 = float(fVslider13);
		float fSlow20 = float(fVslider14);
		float fSlow21 = float(fVslider15);
		float fSlow22 = float(fVslider16);
		float fSlow23 = 0.0001f * fSlow13 * float(fVslider17);
		float fSlow24 = fSlow12 + -6.5f;
		float fSlow25 = fSlow12 + -5.5f;
		float fSlow26 = fSlow12 + -7.5f;
		float fSlow27 = fSlow12 + -8.5f;
		float fSlow28 = fSlow12 + -11.5f;
		float fSlow29 = fSlow12 + -10.5f;
		float fSlow30 = fSlow12 + -12.5f;
		float fSlow31 = fSlow12 + -13.5f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec56[0] = fSlow4 + fConst27 * fRec56[1];
			float fTemp0 = float(input0[i0]) * fRec56[0];
			fRec55[0] = std::max<float>(fRec55[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp0))))));
			fVbargraph0 = FAUSTFLOAT(fRec55[0]);
			float fTemp1 = float(input1[i0]) * fRec56[0];
			fRec57[0] = std::max<float>(fRec57[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp1))))));
			fVbargraph1 = FAUSTFLOAT(fRec57[0]);
			float fTemp2 = fTemp0 + fTemp1;
			fVec0[0] = fTemp2;
			fRec54[0] = fSlow2 * (fSlow3 * (fTemp2 - fVec0[1]) - fSlow5 * fRec54[1]);
			fRec66[0] = fSlow10 + fSlow9 * fRec66[1];
			fVbargraph2 = FAUSTFLOAT(fRec66[0]);
			float fTemp3 = fRec66[0];
			float fTemp4 = fTemp3 * float(fTemp3 > fSlow11);
			fVbargraph3 = FAUSTFLOAT(fTemp4);
			float fTemp5 = fTemp4;
			float fTemp6 = std::tan(fConst25 * std::min<float>(fConst28, fTemp5 * (fConst30 * std::fabs(fRec59[1]) + 0.1316f)));
			fVec1[0] = fConst45 * fRec69[1] - fConst47 * fRec5[2];
			fRec70[0] = fConst42 * (fConst44 * fRec5[2] - (fVec1[1] + fConst48 * fRec70[1]) + fConst49 * fRec5[1]);
			fRec69[0] = fRec70[0];
			fVec2[0] = 0.50032705f * fRec69[1] - fConst50 * fRec67[1];
			fRec68[0] = fConst38 * (fVec2[1] - fConst51 * fRec68[1] - 1.0006541f * fRec69[1] + 0.50032705f * fRec69[0]);
			fRec67[0] = fRec68[0];
			float fTemp7 = mydsp_faustpower2_f(fRec67[0]);
			fVec3[0] = fTemp7;
			float fTemp8 = fTemp7 + fVec3[1];
			fVec4[0] = fTemp8;
			float fTemp9 = fTemp8 + fVec4[2];
			fVec5[0] = fTemp9;
			float fTemp10 = fTemp9 + fVec5[4];
			fVec6[0] = fTemp10;
			float fTemp11 = fTemp10 + fVec6[8];
			fVec7[IOTA0 & 31] = fTemp11;
			float fTemp12 = fTemp11 + fVec7[(IOTA0 - 16) & 31];
			fVec8[IOTA0 & 63] = fTemp12;
			float fTemp13 = fTemp12 + fVec8[(IOTA0 - 32) & 63];
			fVec9[IOTA0 & 127] = fTemp13;
			float fTemp14 = fTemp13 + fVec9[(IOTA0 - 64) & 127];
			fVec10[IOTA0 & 255] = fTemp14;
			fVec11[IOTA0 & 511] = fTemp14 + fVec10[(IOTA0 - 128) & 255];
			float fTemp15 = fTemp6 + 2.0f;
			float fTemp16 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow12 + fRec58[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst33 * (((iConst34) ? 0.86000985f * fVec11[(IOTA0 - iConst66) & 511] : 0.0f) + ((iConst65) ? 0.86000985f * fVec10[(IOTA0 - iConst64) & 255] : 0.0f) + ((iConst63) ? 0.86000985f * fVec9[(IOTA0 - iConst62) & 127] : 0.0f) + ((iConst61) ? 0.86000985f * fVec8[(IOTA0 - iConst60) & 63] : 0.0f) + ((iConst59) ? 0.86000985f * fVec7[(IOTA0 - iConst58) & 31] : 0.0f) + ((iConst57) ? 0.86000985f * fVec6[iConst56] : 0.0f) + ((iConst55) ? 0.86000985f * fVec5[iConst54] : 0.0f) + ((iConst52) ? 0.86000985f * fTemp7 : 0.0f) + ((iConst53) ? 0.86000985f * fVec4[iConst52] : 0.0f))))))) - (fRec61[1] * fTemp15 + fRec62[1]);
			float fTemp17 = fTemp6 * fTemp15 + 1.0f;
			float fTemp18 = fTemp6 * fTemp16 / fTemp17;
			fRec61[0] = fRec61[1] + 2.0f * fTemp18;
			float fTemp19 = fRec61[1] + fTemp18;
			float fTemp20 = fTemp6 * fTemp19;
			fRec62[0] = fRec62[1] + 2.0f * fTemp20;
			float fRec63 = fTemp19;
			float fRec64 = fTemp16 / fTemp17;
			float fRec65 = fRec62[1] + fTemp20;
			fRec59[0] = fRec63;
			float fRec60 = fRec65;
			float fTemp21 = fSlow6 * fRec60;
			fVbargraph4 = FAUSTFLOAT(fTemp21);
			fRec58[0] = fTemp21;
			float fTemp22 = fRec54[0] * std::pow(1e+01f, 0.05f * fRec58[0]);
			fVec12[0] = fTemp22;
			float fTemp23 = fRec49[1] + fConst22 * (fTemp22 - fRec50[1]);
			fRec49[0] = fConst24 * fTemp23 - fRec49[1];
			float fTemp24 = fRec50[1] + fConst67 * fTemp23;
			fRec50[0] = 2.0f * fTemp24 - fRec50[1];
			float fRec51 = fTemp22;
			float fRec52 = fConst68 * fTemp23;
			float fRec53 = fTemp24;
			float fTemp25 = fRec46[1] + fConst22 * (fRec53 - fRec47[1]);
			fRec46[0] = fConst24 * fTemp25 - fRec46[1];
			float fTemp26 = fRec47[1] + fConst67 * fTemp25;
			fRec47[0] = 2.0f * fTemp26 - fRec47[1];
			float fRec48 = fTemp26;
			float fTemp27 = fRec42[1] + fConst19 * (fRec48 - fRec43[1]);
			fRec42[0] = fConst21 * fTemp27 - fRec42[1];
			float fTemp28 = fRec43[1] + fConst69 * fTemp27;
			fRec43[0] = 2.0f * fTemp28 - fRec43[1];
			float fRec44 = fRec48;
			float fRec45 = fConst70 * fTemp27;
			float fTemp29 = 2.828427f * fRec45;
			float fTemp30 = fRec38[1] + fConst16 * (fRec44 - (fTemp29 + fRec39[1]));
			fRec38[0] = fConst18 * fTemp30 - fRec38[1];
			float fTemp31 = fRec39[1] + fConst71 * fTemp30;
			fRec39[0] = 2.0f * fTemp31 - fRec39[1];
			float fRec40 = fRec44 - fTemp29;
			float fRec41 = fConst72 * fTemp30;
			float fTemp32 = 2.828427f * fRec41;
			float fTemp33 = fRec34[1] + fConst13 * (fRec40 - (fTemp32 + fRec35[1]));
			fRec34[0] = fConst15 * fTemp33 - fRec34[1];
			float fTemp34 = fRec35[1] + fConst73 * fTemp33;
			fRec35[0] = 2.0f * fTemp34 - fRec35[1];
			float fRec36 = fRec40 - fTemp32;
			float fRec37 = fConst74 * fTemp33;
			float fTemp35 = 2.828427f * fRec37;
			float fTemp36 = fRec29[1] + fConst10 * (fRec36 - (fTemp35 + fRec30[1]));
			fRec29[0] = fConst12 * fTemp36 - fRec29[1];
			float fTemp37 = fRec30[1] + fConst75 * fTemp36;
			fRec30[0] = 2.0f * fTemp37 - fRec30[1];
			float fRec31 = fRec36 - fTemp35;
			float fRec32 = fConst76 * fTemp36;
			float fRec33 = fTemp37;
			float fTemp38 = fRec26[1] + fConst10 * (fRec33 - fRec27[1]);
			fRec26[0] = fConst12 * fTemp38 - fRec26[1];
			float fTemp39 = fRec27[1] + fConst75 * fTemp38;
			fRec27[0] = 2.0f * fTemp39 - fRec27[1];
			float fRec28 = fTemp39;
			float fTemp40 = fRec22[1] + fConst7 * (fRec28 - fRec23[1]);
			fRec22[0] = fConst9 * fTemp40 - fRec22[1];
			float fTemp41 = fRec23[1] + fConst77 * fTemp40;
			fRec23[0] = 2.0f * fTemp41 - fRec23[1];
			float fRec24 = fRec28;
			float fRec25 = fConst78 * fTemp40;
			float fTemp42 = 2.828427f * fRec25;
			float fTemp43 = fRec17[1] + fConst4 * (fRec24 - (fTemp42 + fRec18[1]));
			fRec17[0] = fConst6 * fTemp43 - fRec17[1];
			float fTemp44 = fRec18[1] + fConst79 * fTemp43;
			fRec18[0] = 2.0f * fTemp44 - fRec18[1];
			float fRec19 = fRec24 - fTemp42;
			float fRec20 = fConst80 * fTemp43;
			float fRec21 = fTemp44;
			float fTemp45 = fRec14[1] + fConst4 * (fRec21 - fRec15[1]);
			fRec14[0] = fConst6 * fTemp45 - fRec14[1];
			float fTemp46 = fRec15[1] + fConst79 * fTemp45;
			fRec15[0] = 2.0f * fTemp46 - fRec15[1];
			fRec16[0] = fTemp46;
			fVec13[0] = fConst85 * fRec16[1] - fConst45 * fRec76[1];
			fRec77[0] = fConst42 * (fVec13[1] - fConst48 * fRec77[1] + fConst86 * fRec16[1] + fConst87 * fRec16[0]);
			fRec76[0] = fRec77[0];
			fVec14[0] = 0.50032705f * fRec76[1] - fConst50 * fRec74[1];
			fRec75[0] = fConst38 * (fVec14[1] - fConst51 * fRec75[1] - 1.0006541f * fRec76[1] + 0.50032705f * fRec76[0]);
			fRec74[0] = fRec75[0];
			float fTemp47 = std::fabs(0.92736715f * fRec74[0]);
			fRec73[0] = std::max<float>(fTemp47, fConst88 * fRec73[1] + fConst89 * fTemp47);
			fRec72[0] = fConst84 * fRec73[0] + fConst83 * fRec72[1];
			fVec15[0] = fConst45 * fRec82[1] - fConst47 * fVec12[1];
			fRec83[0] = fConst42 * (fConst44 * fVec12[1] - (fVec15[1] + fConst48 * fRec83[1]) + fConst49 * fTemp22);
			fRec82[0] = fRec83[0];
			fVec16[0] = 0.50032705f * fRec82[1] - fConst50 * fRec80[1];
			fRec81[0] = fConst38 * (fVec16[1] - fConst51 * fRec81[1] - 1.0006541f * fRec82[1] + 0.50032705f * fRec82[0]);
			fRec80[0] = fRec81[0];
			float fTemp48 = std::fabs(0.92736715f * fRec80[0]);
			fRec79[0] = std::max<float>(fTemp48, fConst88 * fRec79[1] + fConst89 * fTemp48);
			fRec78[0] = fConst84 * fRec79[0] + fConst83 * fRec78[1];
			float fTemp49 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec78[0])));
			float fTemp50 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec72[0]))) - fTemp49);
			fVbargraph5 = FAUSTFLOAT(fTemp50);
			fRec71[0] = fConst82 * (fSlow15 - fTemp50) + fConst81 * fRec71[1];
			float fTemp51 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec71[0])));
			fVbargraph6 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp51)));
			float fTemp52 = fRec16[0] * fTemp51;
			float fTemp53 = fRec21 + 1.4142135f * fRec20;
			float fTemp54 = fRec84[1] + fConst4 * (fRec19 - (fTemp53 + fRec85[1]));
			fRec84[0] = fConst6 * fTemp54 - fRec84[1];
			float fTemp55 = fRec85[1] + fConst79 * fTemp54;
			fRec85[0] = 2.0f * fTemp55 - fRec85[1];
			float fRec86 = fRec19 - fTemp53;
			float fRec87 = fConst80 * fTemp54;
			float fRec88 = fTemp55;
			float fTemp56 = fRec86 - (fRec88 + 1.4142135f * fRec87);
			fVec17[0] = fTemp56;
			fVec18[0] = fConst85 * fVec17[1] - fConst45 * fRec94[1];
			fRec95[0] = fConst42 * (fVec18[1] - fConst48 * fRec95[1] + fConst86 * fVec17[1] + fConst87 * fTemp56);
			fRec94[0] = fRec95[0];
			fVec19[0] = 0.50032705f * fRec94[1] - fConst50 * fRec92[1];
			fRec93[0] = fConst38 * (fVec19[1] - fConst51 * fRec93[1] - 1.0006541f * fRec94[1] + 0.50032705f * fRec94[0]);
			fRec92[0] = fRec93[0];
			float fTemp57 = std::fabs(0.92736715f * fRec92[0]);
			fRec91[0] = std::max<float>(fTemp57, fConst88 * fRec91[1] + fConst89 * fTemp57);
			fRec90[0] = fConst84 * fRec91[0] + fConst83 * fRec90[1];
			float fTemp58 = 2e+01f * (fTemp49 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec90[0]))));
			fVbargraph7 = FAUSTFLOAT(-fTemp58);
			fRec89[0] = fConst91 * (fSlow16 - -fTemp58) + fConst90 * fRec89[1];
			float fTemp59 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec89[0])));
			fVbargraph8 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp59)));
			float fTemp60 = fTemp56 * fTemp59;
			float fTemp61 = fRec33 + 1.4142135f * fRec32;
			float fTemp62 = fRec108[1] + fConst10 * (fRec31 - (fTemp61 + fRec109[1]));
			fRec108[0] = fConst12 * fTemp62 - fRec108[1];
			float fTemp63 = fRec109[1] + fConst75 * fTemp62;
			fRec109[0] = 2.0f * fTemp63 - fRec109[1];
			float fRec110 = fRec31 - fTemp61;
			float fRec111 = fConst76 * fTemp62;
			float fRec112 = fTemp63;
			float fTemp64 = fRec112 + 1.4142135f * fRec111;
			float fTemp65 = fRec104[1] + fConst4 * (fRec110 - (fTemp64 + fRec105[1]));
			fRec104[0] = fConst6 * fTemp65 - fRec104[1];
			float fTemp66 = fRec105[1] + fConst79 * fTemp65;
			fRec105[0] = 2.0f * fTemp66 - fRec105[1];
			float fRec106 = fRec110 - fTemp64;
			float fRec107 = fConst80 * fTemp65;
			float fTemp67 = 2.828427f * fRec107;
			float fTemp68 = fRec99[1] + fConst7 * (fRec106 - (fTemp67 + fRec100[1]));
			fRec99[0] = fConst9 * fTemp68 - fRec99[1];
			float fTemp69 = fRec100[1] + fConst77 * fTemp68;
			fRec100[0] = 2.0f * fTemp69 - fRec100[1];
			float fRec101 = fRec106 - fTemp67;
			float fRec102 = fConst78 * fTemp68;
			float fRec103 = fTemp69;
			float fTemp70 = fRec96[1] + fConst7 * (fRec103 - fRec97[1]);
			fRec96[0] = fConst9 * fTemp70 - fRec96[1];
			float fTemp71 = fRec97[1] + fConst77 * fTemp70;
			fRec97[0] = 2.0f * fTemp71 - fRec97[1];
			fRec98[0] = fTemp71;
			fVec20[0] = fConst85 * fRec98[1] - fConst45 * fRec118[1];
			fRec119[0] = fConst42 * (fVec20[1] - fConst48 * fRec119[1] + fConst86 * fRec98[1] + fConst87 * fRec98[0]);
			fRec118[0] = fRec119[0];
			fVec21[0] = 0.50032705f * fRec118[1] - fConst50 * fRec116[1];
			fRec117[0] = fConst38 * (fVec21[1] - fConst51 * fRec117[1] - 1.0006541f * fRec118[1] + 0.50032705f * fRec118[0]);
			fRec116[0] = fRec117[0];
			float fTemp72 = std::fabs(0.92736715f * fRec116[0]);
			fRec115[0] = std::max<float>(fTemp72, fConst88 * fRec115[1] + fConst89 * fTemp72);
			fRec114[0] = fConst84 * fRec115[0] + fConst83 * fRec114[1];
			float fTemp73 = 2e+01f * (fTemp49 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec114[0]))));
			fVbargraph9 = FAUSTFLOAT(-fTemp73);
			fRec113[0] = fConst93 * (fSlow17 - -fTemp73) + fConst92 * fRec113[1];
			float fTemp74 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec113[0])));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp74)));
			float fTemp75 = fRec98[0] * fTemp74;
			float fTemp76 = fRec103 + 1.4142135f * fRec102;
			float fTemp77 = fRec120[1] + fConst7 * (fRec101 - (fTemp76 + fRec121[1]));
			fRec120[0] = fConst9 * fTemp77 - fRec120[1];
			float fTemp78 = fRec121[1] + fConst77 * fTemp77;
			fRec121[0] = 2.0f * fTemp78 - fRec121[1];
			float fRec122 = fRec101 - fTemp76;
			float fRec123 = fConst78 * fTemp77;
			float fRec124 = fTemp78;
			float fTemp79 = fRec122 - (fRec124 + 1.4142135f * fRec123);
			fVec22[0] = fTemp79;
			fVec23[0] = fConst85 * fVec22[1] - fConst45 * fRec130[1];
			fRec131[0] = fConst42 * (fVec23[1] - fConst48 * fRec131[1] + fConst86 * fVec22[1] + fConst87 * fTemp79);
			fRec130[0] = fRec131[0];
			fVec24[0] = 0.50032705f * fRec130[1] - fConst50 * fRec128[1];
			fRec129[0] = fConst38 * (fVec24[1] - fConst51 * fRec129[1] - 1.0006541f * fRec130[1] + 0.50032705f * fRec130[0]);
			fRec128[0] = fRec129[0];
			float fTemp80 = std::fabs(0.92736715f * fRec128[0]);
			fRec127[0] = std::max<float>(fTemp80, fConst88 * fRec127[1] + fConst89 * fTemp80);
			fRec126[0] = fConst84 * fRec127[0] + fConst83 * fRec126[1];
			float fTemp81 = 2e+01f * (fTemp49 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec126[0]))));
			fVbargraph11 = FAUSTFLOAT(-fTemp81);
			fRec125[0] = fConst95 * (fSlow18 - -fTemp81) + fConst94 * fRec125[1];
			float fTemp82 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec125[0])));
			fVbargraph12 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp82)));
			float fTemp83 = fTemp79 * fTemp82;
			float fTemp84 = fRec53 + 1.4142135f * fRec52;
			float fTemp85 = fRec164[1] + fConst22 * (fRec51 - (fTemp84 + fRec165[1]));
			fRec164[0] = fConst24 * fTemp85 - fRec164[1];
			float fTemp86 = fRec165[1] + fConst67 * fTemp85;
			fRec165[0] = 2.0f * fTemp86 - fRec165[1];
			float fRec166 = fRec51 - fTemp84;
			float fRec167 = fConst68 * fTemp85;
			float fRec168 = fTemp86;
			float fTemp87 = fRec168 + 1.4142135f * fRec167;
			float fTemp88 = fRec160[1] + fConst10 * (fRec166 - (fTemp87 + fRec161[1]));
			fRec160[0] = fConst12 * fTemp88 - fRec160[1];
			float fTemp89 = fRec161[1] + fConst75 * fTemp88;
			fRec161[0] = 2.0f * fTemp89 - fRec161[1];
			float fRec162 = fRec166 - fTemp87;
			float fRec163 = fConst76 * fTemp88;
			float fTemp90 = 2.828427f * fRec163;
			float fTemp91 = fRec156[1] + fConst4 * (fRec162 - (fTemp90 + fRec157[1]));
			fRec156[0] = fConst6 * fTemp91 - fRec156[1];
			float fTemp92 = fRec157[1] + fConst79 * fTemp91;
			fRec157[0] = 2.0f * fTemp92 - fRec157[1];
			float fRec158 = fRec162 - fTemp90;
			float fRec159 = fConst80 * fTemp91;
			float fTemp93 = 2.828427f * fRec159;
			float fTemp94 = fRec152[1] + fConst7 * (fRec158 - (fTemp93 + fRec153[1]));
			fRec152[0] = fConst9 * fTemp94 - fRec152[1];
			float fTemp95 = fRec153[1] + fConst77 * fTemp94;
			fRec153[0] = 2.0f * fTemp95 - fRec153[1];
			float fRec154 = fRec158 - fTemp93;
			float fRec155 = fConst78 * fTemp94;
			float fTemp96 = 2.828427f * fRec155;
			float fTemp97 = fRec147[1] + fConst19 * (fRec154 - (fTemp96 + fRec148[1]));
			fRec147[0] = fConst21 * fTemp97 - fRec147[1];
			float fTemp98 = fRec148[1] + fConst69 * fTemp97;
			fRec148[0] = 2.0f * fTemp98 - fRec148[1];
			float fRec149 = fRec154 - fTemp96;
			float fRec150 = fConst70 * fTemp97;
			float fRec151 = fTemp98;
			float fTemp99 = fRec144[1] + fConst19 * (fRec151 - fRec145[1]);
			fRec144[0] = fConst21 * fTemp99 - fRec144[1];
			float fTemp100 = fRec145[1] + fConst69 * fTemp99;
			fRec145[0] = 2.0f * fTemp100 - fRec145[1];
			float fRec146 = fTemp100;
			float fTemp101 = fRec140[1] + fConst13 * (fRec146 - fRec141[1]);
			fRec140[0] = fConst15 * fTemp101 - fRec140[1];
			float fTemp102 = fRec141[1] + fConst73 * fTemp101;
			fRec141[0] = 2.0f * fTemp102 - fRec141[1];
			float fRec142 = fRec146;
			float fRec143 = fConst74 * fTemp101;
			float fTemp103 = 2.828427f * fRec143;
			float fTemp104 = fRec135[1] + fConst16 * (fRec142 - (fTemp103 + fRec136[1]));
			fRec135[0] = fConst18 * fTemp104 - fRec135[1];
			float fTemp105 = fRec136[1] + fConst71 * fTemp104;
			fRec136[0] = 2.0f * fTemp105 - fRec136[1];
			float fRec137 = fRec142 - fTemp103;
			float fRec138 = fConst72 * fTemp104;
			float fRec139 = fTemp105;
			float fTemp106 = fRec132[1] + fConst16 * (fRec139 - fRec133[1]);
			fRec132[0] = fConst18 * fTemp106 - fRec132[1];
			float fTemp107 = fRec133[1] + fConst71 * fTemp106;
			fRec133[0] = 2.0f * fTemp107 - fRec133[1];
			fRec134[0] = fTemp107;
			fVec25[0] = fConst85 * fRec134[1] - fConst45 * fRec174[1];
			fRec175[0] = fConst42 * (fVec25[1] - fConst48 * fRec175[1] + fConst86 * fRec134[1] + fConst87 * fRec134[0]);
			fRec174[0] = fRec175[0];
			fVec26[0] = 0.50032705f * fRec174[1] - fConst50 * fRec172[1];
			fRec173[0] = fConst38 * (fVec26[1] - fConst51 * fRec173[1] - 1.0006541f * fRec174[1] + 0.50032705f * fRec174[0]);
			fRec172[0] = fRec173[0];
			float fTemp108 = std::fabs(0.92736715f * fRec172[0]);
			fRec171[0] = std::max<float>(fTemp108, fConst88 * fRec171[1] + fConst89 * fTemp108);
			fRec170[0] = fConst84 * fRec171[0] + fConst83 * fRec170[1];
			float fTemp109 = 2e+01f * (fTemp49 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec170[0]))));
			fVbargraph13 = FAUSTFLOAT(-fTemp109);
			fRec169[0] = fConst89 * (fSlow19 - -fTemp109) + fConst88 * fRec169[1];
			float fTemp110 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec169[0])));
			fVbargraph14 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp110)));
			float fTemp111 = fRec134[0] * fTemp110;
			float fTemp112 = fRec139 + 1.4142135f * fRec138;
			float fTemp113 = fRec176[1] + fConst16 * (fRec137 - (fTemp112 + fRec177[1]));
			fRec176[0] = fConst18 * fTemp113 - fRec176[1];
			float fTemp114 = fRec177[1] + fConst71 * fTemp113;
			fRec177[0] = 2.0f * fTemp114 - fRec177[1];
			float fRec178 = fRec137 - fTemp112;
			float fRec179 = fConst72 * fTemp113;
			float fRec180 = fTemp114;
			float fTemp115 = fRec178 - (fRec180 + 1.4142135f * fRec179);
			fVec27[0] = fTemp115;
			fVec28[0] = fConst85 * fVec27[1] - fConst45 * fRec186[1];
			fRec187[0] = fConst42 * (fVec28[1] - fConst48 * fRec187[1] + fConst86 * fVec27[1] + fConst87 * fTemp115);
			fRec186[0] = fRec187[0];
			fVec29[0] = 0.50032705f * fRec186[1] - fConst50 * fRec184[1];
			fRec185[0] = fConst38 * (fVec29[1] - fConst51 * fRec185[1] - 1.0006541f * fRec186[1] + 0.50032705f * fRec186[0]);
			fRec184[0] = fRec185[0];
			float fTemp116 = std::fabs(0.92736715f * fRec184[0]);
			fRec183[0] = std::max<float>(fTemp116, fConst88 * fRec183[1] + fConst89 * fTemp116);
			fRec182[0] = fConst84 * fRec183[0] + fConst83 * fRec182[1];
			float fTemp117 = 2e+01f * (fTemp49 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec182[0]))));
			fVbargraph15 = FAUSTFLOAT(-fTemp117);
			fRec181[0] = fConst97 * (fSlow20 - -fTemp117) + fConst96 * fRec181[1];
			float fTemp118 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec181[0])));
			fVbargraph16 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp118)));
			float fTemp119 = fTemp115 * fTemp118;
			float fTemp120 = fRec151 + 1.4142135f * fRec150;
			float fTemp121 = fRec200[1] + fConst19 * (fRec149 - (fTemp120 + fRec201[1]));
			fRec200[0] = fConst21 * fTemp121 - fRec200[1];
			float fTemp122 = fRec201[1] + fConst69 * fTemp121;
			fRec201[0] = 2.0f * fTemp122 - fRec201[1];
			float fRec202 = fRec149 - fTemp120;
			float fRec203 = fConst70 * fTemp121;
			float fRec204 = fTemp122;
			float fTemp123 = fRec204 + 1.4142135f * fRec203;
			float fTemp124 = fRec196[1] + fConst16 * (fRec202 - (fTemp123 + fRec197[1]));
			fRec196[0] = fConst18 * fTemp124 - fRec196[1];
			float fTemp125 = fRec197[1] + fConst71 * fTemp124;
			fRec197[0] = 2.0f * fTemp125 - fRec197[1];
			float fRec198 = fRec202 - fTemp123;
			float fRec199 = fConst72 * fTemp124;
			float fTemp126 = 2.828427f * fRec199;
			float fTemp127 = fRec191[1] + fConst13 * (fRec198 - (fTemp126 + fRec192[1]));
			fRec191[0] = fConst15 * fTemp127 - fRec191[1];
			float fTemp128 = fRec192[1] + fConst73 * fTemp127;
			fRec192[0] = 2.0f * fTemp128 - fRec192[1];
			float fRec193 = fRec198 - fTemp126;
			float fRec194 = fConst74 * fTemp127;
			float fRec195 = fTemp128;
			float fTemp129 = fRec188[1] + fConst13 * (fRec195 - fRec189[1]);
			fRec188[0] = fConst15 * fTemp129 - fRec188[1];
			float fTemp130 = fRec189[1] + fConst73 * fTemp129;
			fRec189[0] = 2.0f * fTemp130 - fRec189[1];
			fRec190[0] = fTemp130;
			fVec30[0] = fConst85 * fRec190[1] - fConst45 * fRec210[1];
			fRec211[0] = fConst42 * (fVec30[1] - fConst48 * fRec211[1] + fConst86 * fRec190[1] + fConst87 * fRec190[0]);
			fRec210[0] = fRec211[0];
			fVec31[0] = 0.50032705f * fRec210[1] - fConst50 * fRec208[1];
			fRec209[0] = fConst38 * (fVec31[1] - fConst51 * fRec209[1] - 1.0006541f * fRec210[1] + 0.50032705f * fRec210[0]);
			fRec208[0] = fRec209[0];
			float fTemp131 = std::fabs(0.92736715f * fRec208[0]);
			fRec207[0] = std::max<float>(fTemp131, fConst88 * fRec207[1] + fConst89 * fTemp131);
			fRec206[0] = fConst84 * fRec207[0] + fConst83 * fRec206[1];
			float fTemp132 = 2e+01f * (fTemp49 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec206[0]))));
			fVbargraph17 = FAUSTFLOAT(-fTemp132);
			fRec205[0] = fConst99 * (fSlow21 - -fTemp132) + fConst98 * fRec205[1];
			float fTemp133 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec205[0])));
			fVbargraph18 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp133)));
			float fTemp134 = fRec190[0] * fTemp133;
			float fTemp135 = fRec195 + 1.4142135f * fRec194;
			float fTemp136 = fRec212[1] + fConst13 * (fRec193 - (fTemp135 + fRec213[1]));
			fRec212[0] = fConst15 * fTemp136 - fRec212[1];
			float fTemp137 = fRec213[1] + fConst73 * fTemp136;
			fRec213[0] = 2.0f * fTemp137 - fRec213[1];
			float fRec214 = fRec193 - fTemp135;
			float fRec215 = fConst74 * fTemp136;
			float fRec216 = fTemp137;
			float fTemp138 = fRec214 - (fRec216 + 1.4142135f * fRec215);
			fVec32[0] = fTemp138;
			fVec33[0] = fConst85 * fVec32[1] - fConst45 * fRec222[1];
			fRec223[0] = fConst42 * (fVec33[1] - fConst48 * fRec223[1] + fConst86 * fVec32[1] + fConst87 * fTemp138);
			fRec222[0] = fRec223[0];
			fVec34[0] = 0.50032705f * fRec222[1] - fConst50 * fRec220[1];
			fRec221[0] = fConst38 * (fVec34[1] - fConst51 * fRec221[1] - 1.0006541f * fRec222[1] + 0.50032705f * fRec222[0]);
			fRec220[0] = fRec221[0];
			float fTemp139 = std::fabs(0.92736715f * fRec220[0]);
			fRec219[0] = std::max<float>(fTemp139, fConst88 * fRec219[1] + fConst89 * fTemp139);
			fRec218[0] = fConst84 * fRec219[0] + fConst83 * fRec218[1];
			float fTemp140 = 2e+01f * (fTemp49 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec218[0]))));
			fVbargraph19 = FAUSTFLOAT(-fTemp140);
			fRec217[0] = fConst101 * (fSlow22 - -fTemp140) + fConst100 * fRec217[1];
			float fTemp141 = std::pow(1e+01f, fSlow14 * fTemp5 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec217[0])));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp141)));
			float fTemp142 = fTemp138 * fTemp141;
			fRec5[0] = fTemp52 + fTemp60 + fTemp75 + fTemp83 + fTemp111 + fTemp119 + fTemp134 + fTemp142;
			float fRec6 = fTemp52;
			float fRec7 = fTemp60;
			float fRec8 = fTemp75;
			float fRec9 = fTemp83;
			float fRec10 = fTemp111;
			float fRec11 = fTemp119;
			float fRec12 = fTemp134;
			float fRec13 = fTemp142;
			float fTemp143 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp144 = (fTemp143 > fSlow24) + (fTemp143 > fSlow25);
			float fTemp145 = std::max<float>(0.0f, ((iTemp144 == 0) ? 0.0f : ((iTemp144 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp143 + 6.5f - fSlow12) : fTemp143 + 6.0f - fSlow12)));
			float fTemp146 = ((-(0.75f * fTemp145) > fRec224[1]) ? fConst88 : fConst102);
			fRec224[0] = fRec224[1] * fTemp146 - 0.75f * fTemp145 * (1.0f - fTemp146);
			float fTemp147 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp147)));
			float fTemp148 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp149 = (fTemp148 > fSlow24) + (fTemp148 > fSlow25);
			float fTemp150 = std::max<float>(0.0f, ((iTemp149 == 0) ? 0.0f : ((iTemp149 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp148 + 6.5f - fSlow12) : fTemp148 + 6.0f - fSlow12)));
			float fTemp151 = ((-(0.75f * fTemp150) > fRec225[1]) ? fConst103 : fConst100);
			fRec225[0] = fRec225[1] * fTemp151 - 0.75f * fTemp150 * (1.0f - fTemp151);
			float fTemp152 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec225[0]))) + 1.5f)))));
			fVbargraph22 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp152)));
			float fTemp153 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp154 = (fTemp153 > fSlow26) + (fTemp153 > fSlow24);
			float fTemp155 = std::max<float>(0.0f, ((iTemp154 == 0) ? 0.0f : ((iTemp154 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp153 + 7.5f - fSlow12) : fTemp153 + 7.0f - fSlow12)));
			float fTemp156 = ((-(0.75f * fTemp155) > fRec226[1]) ? fConst105 : fConst104);
			fRec226[0] = fRec226[1] * fTemp156 - 0.75f * fTemp155 * (1.0f - fTemp156);
			float fTemp157 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec226[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp157)));
			float fTemp158 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp159 = (fTemp158 > fSlow27) + (fTemp158 > fSlow26);
			float fTemp160 = std::max<float>(0.0f, ((iTemp159 == 0) ? 0.0f : ((iTemp159 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp158 + 8.5f - fSlow12) : fTemp158 + 8.0f - fSlow12)));
			float fTemp161 = ((-(0.75f * fTemp160) > fRec227[1]) ? fConst107 : fConst106);
			fRec227[0] = fRec227[1] * fTemp161 - 0.75f * fTemp160 * (1.0f - fTemp161);
			float fTemp162 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec227[0]))) + 1.5f)))));
			fVbargraph24 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp162)));
			float fTemp163 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp164 = (fTemp163 > fSlow28) + (fTemp163 > fSlow29);
			float fTemp165 = std::max<float>(0.0f, ((iTemp164 == 0) ? 0.0f : ((iTemp164 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp163 + 11.5f - fSlow12) : fTemp163 + 11.0f - fSlow12)));
			float fTemp166 = ((-(0.75f * fTemp165) > fRec228[1]) ? fConst104 : fConst83);
			fRec228[0] = fRec228[1] * fTemp166 - 0.75f * fTemp165 * (1.0f - fTemp166);
			float fTemp167 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec228[0]))) + 1.5f)))));
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp167)));
			float fTemp168 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec11)));
			int iTemp169 = (fTemp168 > fSlow30) + (fTemp168 > fSlow28);
			float fTemp170 = std::max<float>(0.0f, ((iTemp169 == 0) ? 0.0f : ((iTemp169 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp168 + 12.5f - fSlow12) : fTemp168 + 12.0f - fSlow12)));
			float fTemp171 = ((-(0.75f * fTemp170) > fRec229[1]) ? fConst106 : fConst108);
			fRec229[0] = fRec229[1] * fTemp171 - 0.75f * fTemp170 * (1.0f - fTemp171);
			float fTemp172 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec229[0]))) + 1.5f)))));
			fVbargraph26 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp172)));
			float fTemp173 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec12)));
			int iTemp174 = (fTemp173 > fSlow30) + (fTemp173 > fSlow28);
			float fTemp175 = std::max<float>(0.0f, ((iTemp174 == 0) ? 0.0f : ((iTemp174 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp173 + 12.5f - fSlow12) : fTemp173 + 12.0f - fSlow12)));
			float fTemp176 = ((-(0.75f * fTemp175) > fRec230[1]) ? fConst106 : fConst109);
			fRec230[0] = fRec230[1] * fTemp176 - 0.75f * fTemp175 * (1.0f - fTemp176);
			float fTemp177 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec230[0]))) + 1.5f)))));
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp177)));
			float fTemp178 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec13)));
			int iTemp179 = (fTemp178 > fSlow31) + (fTemp178 > fSlow30);
			float fTemp180 = std::max<float>(0.0f, ((iTemp179 == 0) ? 0.0f : ((iTemp179 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp178 + 13.5f - fSlow12) : fTemp178 + 13.0f - fSlow12)));
			float fTemp181 = ((-(0.75f * fTemp180) > fRec231[1]) ? fConst106 : fConst110);
			fRec231[0] = fRec231[1] * fTemp181 - 0.75f * fTemp180 * (1.0f - fTemp181);
			float fTemp182 = std::pow(1e+01f, fSlow23 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec231[0]))) + 1.5f)))));
			fVbargraph28 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp182)));
			float fTemp183 = fRec6 * fTemp147 + fRec7 * fTemp152 + fRec8 * fTemp157 + fRec9 * fTemp162 + fRec10 * fTemp167 + fRec11 * fTemp172 + fRec12 * fTemp177 + fRec13 * fTemp182;
			fVec35[IOTA0 & 2047] = fTemp183;
			float fTemp184 = std::fabs(fTemp183);
			int iTemp185 = (fTemp184 >= fRec4[1]) | (float(iRec3[1]) >= fConst31);
			iRec3[0] = ((iTemp185) ? 0 : iRec3[1] + 1);
			fRec4[0] = ((iTemp185) ? fTemp184 : fRec4[1]);
			fRec2[0] = fConst3 * fRec4[0] + fConst2 * fRec2[1];
			float fTemp186 = std::fabs(fRec2[0]);
			fRec1[0] = std::max<float>(fTemp186, fConst111 * fRec1[1] + fConst112 * fTemp186);
			float fTemp187 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec1[0], 1.1920929e-07f));
			fVbargraph29 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp187))));
			float fTemp188 = fTemp187 * fVec35[(IOTA0 - iConst113) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp188))))));
			fVbargraph30 = FAUSTFLOAT(fRec0[0]);
			float fTemp189 = fTemp188;
			fVec36[0] = fTemp189;
			output0[i0] = FAUSTFLOAT(fTemp189);
			fVec37[0] = fConst45 * fRec234[1] - fConst47 * fVec36[1];
			fRec235[0] = fConst42 * (fConst44 * fVec36[1] - (fVec37[1] + fConst48 * fRec235[1]) + fConst49 * fTemp189);
			fRec234[0] = fRec235[0];
			fVec38[0] = 0.50032705f * fRec234[1] - fConst50 * fRec232[1];
			fRec233[0] = fConst38 * (fVec38[1] - fConst51 * fRec233[1] - 1.0006541f * fRec234[1] + 0.50032705f * fRec234[0]);
			fRec232[0] = fRec233[0];
			float fTemp190 = mydsp_faustpower2_f(fRec232[0]);
			fVec39[0] = fTemp190;
			float fTemp191 = fTemp190 + fVec39[1];
			fVec40[0] = fTemp191;
			float fTemp192 = fTemp191 + fVec40[2];
			fVec41[0] = fTemp192;
			float fTemp193 = fTemp192 + fVec41[4];
			fVec42[0] = fTemp193;
			float fTemp194 = fTemp193 + fVec42[8];
			fVec43[IOTA0 & 31] = fTemp194;
			float fTemp195 = fTemp194 + fVec43[(IOTA0 - 16) & 31];
			fVec44[IOTA0 & 63] = fTemp195;
			float fTemp196 = fTemp195 + fVec44[(IOTA0 - 32) & 63];
			fVec45[IOTA0 & 127] = fTemp196;
			float fTemp197 = fTemp196 + fVec45[(IOTA0 - 64) & 127];
			fVec46[IOTA0 & 255] = fTemp197;
			float fTemp198 = fTemp197 + fVec46[(IOTA0 - 128) & 255];
			fVec47[IOTA0 & 511] = fTemp198;
			float fTemp199 = fTemp198 + fVec47[(IOTA0 - 256) & 511];
			fVec48[IOTA0 & 1023] = fTemp199;
			float fTemp200 = fTemp199 + fVec48[(IOTA0 - 512) & 1023];
			fVec49[IOTA0 & 2047] = fTemp200;
			float fTemp201 = fTemp200 + fVec49[(IOTA0 - 1024) & 2047];
			fVec50[IOTA0 & 4095] = fTemp201;
			float fTemp202 = fTemp201 + fVec50[(IOTA0 - 2048) & 4095];
			fVec51[IOTA0 & 8191] = fTemp202;
			float fTemp203 = fTemp202 + fVec51[(IOTA0 - 4096) & 8191];
			fVec52[IOTA0 & 16383] = fTemp203;
			float fTemp204 = fTemp203 + fVec52[(IOTA0 - 8192) & 16383];
			fVec53[IOTA0 & 32767] = fTemp204;
			float fTemp205 = fTemp204 + fVec53[(IOTA0 - 16384) & 32767];
			fVec54[IOTA0 & 65535] = fTemp205;
			float fTemp206 = fTemp205 + fVec54[(IOTA0 - 32768) & 65535];
			fVec55[IOTA0 & 131071] = fTemp206;
			fVec56[IOTA0 & 262143] = fTemp206 + fVec55[(IOTA0 - 65536) & 131071];
			fVbargraph31 = FAUSTFLOAT(fRec0[0]);
			float fTemp207 = fTemp188;
			fVec57[0] = fTemp207;
			fVec58[0] = fConst45 * fRec238[1] - fConst47 * fVec57[1];
			fRec239[0] = fConst42 * (fConst44 * fVec57[1] - (fVec58[1] + fConst48 * fRec239[1]) + fConst49 * fTemp207);
			fRec238[0] = fRec239[0];
			fVec59[0] = 0.50032705f * fRec238[1] - fConst50 * fRec236[1];
			fRec237[0] = fConst38 * (fVec59[1] - fConst51 * fRec237[1] - 1.0006541f * fRec238[1] + 0.50032705f * fRec238[0]);
			fRec236[0] = fRec237[0];
			float fTemp208 = mydsp_faustpower2_f(fRec236[0]);
			fVec60[0] = fTemp208;
			float fTemp209 = fTemp208 + fVec60[1];
			fVec61[0] = fTemp209;
			float fTemp210 = fTemp209 + fVec61[2];
			fVec62[0] = fTemp210;
			float fTemp211 = fTemp210 + fVec62[4];
			fVec63[0] = fTemp211;
			float fTemp212 = fTemp211 + fVec63[8];
			fVec64[IOTA0 & 31] = fTemp212;
			float fTemp213 = fTemp212 + fVec64[(IOTA0 - 16) & 31];
			fVec65[IOTA0 & 63] = fTemp213;
			float fTemp214 = fTemp213 + fVec65[(IOTA0 - 32) & 63];
			fVec66[IOTA0 & 127] = fTemp214;
			float fTemp215 = fTemp214 + fVec66[(IOTA0 - 64) & 127];
			fVec67[IOTA0 & 255] = fTemp215;
			float fTemp216 = fTemp215 + fVec67[(IOTA0 - 128) & 255];
			fVec68[IOTA0 & 511] = fTemp216;
			float fTemp217 = fTemp216 + fVec68[(IOTA0 - 256) & 511];
			fVec69[IOTA0 & 1023] = fTemp217;
			float fTemp218 = fTemp217 + fVec69[(IOTA0 - 512) & 1023];
			fVec70[IOTA0 & 2047] = fTemp218;
			float fTemp219 = fTemp218 + fVec70[(IOTA0 - 1024) & 2047];
			fVec71[IOTA0 & 4095] = fTemp219;
			float fTemp220 = fTemp219 + fVec71[(IOTA0 - 2048) & 4095];
			fVec72[IOTA0 & 8191] = fTemp220;
			float fTemp221 = fTemp220 + fVec72[(IOTA0 - 4096) & 8191];
			fVec73[IOTA0 & 16383] = fTemp221;
			float fTemp222 = fTemp221 + fVec73[(IOTA0 - 8192) & 16383];
			fVec74[IOTA0 & 32767] = fTemp222;
			float fTemp223 = fTemp222 + fVec74[(IOTA0 - 16384) & 32767];
			fVec75[IOTA0 & 65535] = fTemp223;
			float fTemp224 = fTemp223 + fVec75[(IOTA0 - 32768) & 65535];
			fVec76[IOTA0 & 131071] = fTemp224;
			fVec77[IOTA0 & 262143] = fTemp224 + fVec76[(IOTA0 - 65536) & 131071];
			fVbargraph32 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst115 * (((iConst116) ? 0.86000985f * fVec56[(IOTA0 - iConst149) & 262143] : 0.0f) + ((iConst148) ? 0.86000985f * fVec55[(IOTA0 - iConst147) & 131071] : 0.0f) + ((iConst146) ? 0.86000985f * fVec54[(IOTA0 - iConst145) & 65535] : 0.0f) + ((iConst144) ? 0.86000985f * fVec53[(IOTA0 - iConst143) & 32767] : 0.0f) + ((iConst142) ? 0.86000985f * fVec52[(IOTA0 - iConst141) & 16383] : 0.0f) + ((iConst140) ? 0.86000985f * fVec51[(IOTA0 - iConst139) & 8191] : 0.0f) + ((iConst138) ? 0.86000985f * fVec50[(IOTA0 - iConst137) & 4095] : 0.0f) + ((iConst136) ? 0.86000985f * fVec49[(IOTA0 - iConst135) & 2047] : 0.0f) + ((iConst134) ? 0.86000985f * fVec48[(IOTA0 - iConst133) & 1023] : 0.0f) + ((iConst132) ? 0.86000985f * fVec47[(IOTA0 - iConst131) & 511] : 0.0f) + ((iConst130) ? 0.86000985f * fVec46[(IOTA0 - iConst129) & 255] : 0.0f) + ((iConst128) ? 0.86000985f * fVec45[(IOTA0 - iConst127) & 127] : 0.0f) + ((iConst126) ? 0.86000985f * fVec44[(IOTA0 - iConst125) & 63] : 0.0f) + ((iConst124) ? 0.86000985f * fVec43[(IOTA0 - iConst123) & 31] : 0.0f) + ((iConst122) ? 0.86000985f * fVec42[iConst121] : 0.0f) + ((iConst120) ? 0.86000985f * fVec41[iConst119] : 0.0f) + ((iConst117) ? 0.86000985f * fTemp190 : 0.0f) + ((iConst118) ? 0.86000985f * fVec40[iConst117] : 0.0f) + ((iConst116) ? 0.86000985f * fVec77[(IOTA0 - iConst149) & 262143] : 0.0f) + ((iConst148) ? 0.86000985f * fVec76[(IOTA0 - iConst147) & 131071] : 0.0f) + ((iConst146) ? 0.86000985f * fVec75[(IOTA0 - iConst145) & 65535] : 0.0f) + ((iConst144) ? 0.86000985f * fVec74[(IOTA0 - iConst143) & 32767] : 0.0f) + ((iConst142) ? 0.86000985f * fVec73[(IOTA0 - iConst141) & 16383] : 0.0f) + ((iConst140) ? 0.86000985f * fVec72[(IOTA0 - iConst139) & 8191] : 0.0f) + ((iConst138) ? 0.86000985f * fVec71[(IOTA0 - iConst137) & 4095] : 0.0f) + ((iConst136) ? 0.86000985f * fVec70[(IOTA0 - iConst135) & 2047] : 0.0f) + ((iConst134) ? 0.86000985f * fVec69[(IOTA0 - iConst133) & 1023] : 0.0f) + ((iConst132) ? 0.86000985f * fVec68[(IOTA0 - iConst131) & 511] : 0.0f) + ((iConst130) ? 0.86000985f * fVec67[(IOTA0 - iConst129) & 255] : 0.0f) + ((iConst128) ? 0.86000985f * fVec66[(IOTA0 - iConst127) & 127] : 0.0f) + ((iConst126) ? 0.86000985f * fVec65[(IOTA0 - iConst125) & 63] : 0.0f) + ((iConst124) ? 0.86000985f * fVec64[(IOTA0 - iConst123) & 31] : 0.0f) + ((iConst122) ? 0.86000985f * fVec63[iConst121] : 0.0f) + ((iConst120) ? 0.86000985f * fVec62[iConst119] : 0.0f) + ((iConst117) ? 0.86000985f * fTemp208 : 0.0f) + ((iConst118) ? 0.86000985f * fVec61[iConst117] : 0.0f)))) + -0.691f);
			output1[i0] = FAUSTFLOAT(fTemp207);
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fRec57[1] = fRec57[0];
			fVec0[1] = fVec0[0];
			fRec54[1] = fRec54[0];
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
			fRec49[1] = fRec49[0];
			fRec50[1] = fRec50[0];
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec42[1] = fRec42[0];
			fRec43[1] = fRec43[0];
			fRec38[1] = fRec38[0];
			fRec39[1] = fRec39[0];
			fRec34[1] = fRec34[0];
			fRec35[1] = fRec35[0];
			fRec29[1] = fRec29[0];
			fRec30[1] = fRec30[0];
			fRec26[1] = fRec26[0];
			fRec27[1] = fRec27[0];
			fRec22[1] = fRec22[0];
			fRec23[1] = fRec23[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec14[1] = fRec14[0];
			fRec15[1] = fRec15[0];
			fRec16[1] = fRec16[0];
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
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
			fRec230[1] = fRec230[0];
			fRec231[1] = fRec231[0];
			iRec3[1] = iRec3[0];
			fRec4[1] = fRec4[0];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fVec36[1] = fVec36[0];
			fVec37[1] = fVec37[0];
			fRec235[1] = fRec235[0];
			fRec234[1] = fRec234[0];
			fVec38[1] = fVec38[0];
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			fVec39[1] = fVec39[0];
			fVec40[2] = fVec40[1];
			fVec40[1] = fVec40[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec41[j2] = fVec41[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec42[j3] = fVec42[j3 - 1];
			}
			fVec57[1] = fVec57[0];
			fVec58[1] = fVec58[0];
			fRec239[1] = fRec239[0];
			fRec238[1] = fRec238[0];
			fVec59[1] = fVec59[0];
			fRec237[1] = fRec237[0];
			fRec236[1] = fRec236[0];
			fVec60[1] = fVec60[0];
			fVec61[2] = fVec61[1];
			fVec61[1] = fVec61[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec62[j4] = fVec62[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec63[j5] = fVec63[j5 - 1];
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
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph32 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph31 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph2 = 0;
        
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
        
            
            
        port.groupId = kPortGroupStereo;
            
        

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
        case kParameter_pre_gain:
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
        case kParameter_sbmb_strength:
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
        case kParameter_vad_ext:
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
        case kParameter_leveler_target:
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
        case kParameter_leveler_scale:
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
        case kParameter_mb_strength:
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
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter_vad_gate_thresh:
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
        case kParameter_vad_smoothing_time:
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
        
        case kParameter_sb_meter__0:
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
        case kParameter_sb_meter__1:
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
        case kParameter_sb_meter__2:
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
        case kParameter_sb_meter__3:
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
        case kParameter_sb_meter__4:
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
        case kParameter_sb_meter__5:
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
        case kParameter_sb_meter__6:
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
        case kParameter_sb_meter__7:
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
        case kParameter_sb_gain__0:
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
        case kParameter_sb_gain__1:
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
        case kParameter_sb_gain__2:
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
        case kParameter_sb_gain__3:
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
        case kParameter_sb_gain__4:
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
        case kParameter_sb_gain__5:
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
        case kParameter_sb_gain__6:
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
        case kParameter_sb_gain__7:
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
        case kParameter_limiter_gain:
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
        case kParameter_input_peak_channel_0:
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
        case kParameter_input_peak_channel_1:
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
        case kParameter_lufs_out_meter:
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
        case kParameter_output_peak_channel_0:
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
        case kParameter_output_peak_channel_1:
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
        case kParameter_vad_meter:
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
        case kParameter_leveler_gain:
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
        case kParameter_mb_comp_gain_0:
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
        case kParameter_mb_comp_gain_1:
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
        case kParameter_mb_comp_gain_2:
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
        case kParameter_mb_comp_gain_3:
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
        case kParameter_mb_comp_gain_4:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[46];
            param.unit = kParameterUnits[46];
            param.symbol = kParameterSymbols[46];
            param.shortName = "";
            param.ranges.def = kParameterRanges[46].def;
            param.ranges.min = kParameterRanges[46].min;
            param.ranges.max = kParameterRanges[46].max;
            break;
        case kParameter_mb_comp_gain_5:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[47];
            param.unit = kParameterUnits[47];
            param.symbol = kParameterSymbols[47];
            param.shortName = "";
            param.ranges.def = kParameterRanges[47].def;
            param.ranges.min = kParameterRanges[47].min;
            param.ranges.max = kParameterRanges[47].max;
            break;
        case kParameter_mb_comp_gain_6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[48];
            param.unit = kParameterUnits[48];
            param.symbol = kParameterSymbols[48];
            param.shortName = "";
            param.ranges.def = kParameterRanges[48].def;
            param.ranges.min = kParameterRanges[48].min;
            param.ranges.max = kParameterRanges[48].max;
            break;
        case kParameter_mb_comp_gain_7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[49];
            param.unit = kParameterUnits[49];
            param.symbol = kParameterSymbols[49];
            param.shortName = "";
            param.ranges.def = kParameterRanges[49].def;
            param.ranges.min = kParameterRanges[49].min;
            param.ranges.max = kParameterRanges[49].max;
            break;
        case kParameter_vad_smoothing_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[50];
            param.unit = kParameterUnits[50];
            param.symbol = kParameterSymbols[50];
            param.shortName = "";
            param.ranges.def = kParameterRanges[50].def;
            param.ranges.min = kParameterRanges[50].min;
            param.ranges.max = kParameterRanges[50].max;
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
        case kParameter_pre_gain:
            return dsp->fVslider1;
        case kParameter_sbmb_strength:
            return dsp->fVslider8;
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
        case kParameter_sb_meter__0:
            return dsp->fVbargraph5;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph7;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph9;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph11;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph13;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph15;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph17;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph19;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph6;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph8;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph10;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph12;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph14;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph16;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph18;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph20;
        case kParameter_limiter_gain:
            return dsp->fVbargraph29;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph0;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph1;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph32;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph30;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph31;
        case kParameter_vad_meter:
            return dsp->fVbargraph3;
        case kParameter_leveler_gain:
            return dsp->fVbargraph4;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph21;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph22;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph23;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph24;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph25;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph26;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph27;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph28;
        case kParameter_vad_smoothing_meter:
            return dsp->fVbargraph2;
        
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
        case kParameter_pre_gain:
            dsp->fVslider1 = value;
            break;
        case kParameter_sbmb_strength:
            dsp->fVslider8 = value;
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
        float params[18] = {
            dsp->fVslider7,
            dsp->fVslider9,
            dsp->fVslider10,
            dsp->fVslider11,
            dsp->fVslider12,
            dsp->fVslider13,
            dsp->fVslider14,
            dsp->fVslider15,
            dsp->fVslider16,
            dsp->fVslider1,
            dsp->fVslider8,
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
        dsp->fVslider7 = params[0];
        dsp->fVslider9 = params[1];
        dsp->fVslider10 = params[2];
        dsp->fVslider11 = params[3];
        dsp->fVslider12 = params[4];
        dsp->fVslider13 = params[5];
        dsp->fVslider14 = params[6];
        dsp->fVslider15 = params[7];
        dsp->fVslider16 = params[8];
        dsp->fVslider1 = params[9];
        dsp->fVslider8 = params[10];
        dsp->fVslider3 = params[11];
        dsp->fVslider6 = params[12];
        dsp->fVslider2 = params[13];
        dsp->fVslider17 = params[14];
        dsp->fVslider0 = params[15];
        dsp->fVslider5 = params[16];
        dsp->fVslider4 = params[17];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
