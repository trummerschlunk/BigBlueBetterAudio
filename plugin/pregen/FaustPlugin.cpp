
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
// Version: 0.14
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
	float fConst1;
	int iConst2;
	float fConst4;
	float fConst6;
	float fConst8;
	float fVec0[2];
	FAUSTFLOAT fVslider1;
	float fConst9;
	float fRec13[2];
	float fConst10;
	float fConst11;
	float fRec12[2];
	float fRec11[3];
	float fConst12;
	float fConst13;
	FAUSTFLOAT fVslider2;
	int iConst15;
	float fConst19;
	float fConst20;
	float fConst21;
	float fConst23;
	float fVec1[2];
	float fConst25;
	float fConst26;
	float fRec25[2];
	float fRec24[2];
	float fConst29;
	float fConst31;
	float fVec2[2];
	float fConst32;
	float fRec23[2];
	float fRec22[2];
	float fVec3[2];
	float fVec4[3];
	int iConst33;
	int iConst34;
	float fVec5[7];
	int iConst35;
	int iConst36;
	float fVec6[15];
	int iConst37;
	int iConst38;
	int IOTA0;
	float fVec7[32];
	int iConst39;
	int iConst40;
	float fVec8[64];
	int iConst41;
	int iConst42;
	float fVec9[128];
	int iConst43;
	int iConst44;
	float fVec10[256];
	int iConst45;
	int iConst46;
	float fVec11[512];
	int iConst47;
	float fConst48;
	float fRec17[2];
	float fRec18[2];
	float fRec15[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVbargraph0;
	float fRec14[2];
	float fVec12[2];
	float fVec13[2];
	int iConst49;
	float fVec14[3];
	int iConst50;
	float fVec15[7];
	int iConst51;
	int iConst52;
	float fVec16[15];
	int iConst53;
	int iConst54;
	float fVec17[32];
	int iConst55;
	int iConst56;
	float fVec18[64];
	int iConst57;
	int iConst58;
	float fVec19[128];
	int iConst59;
	int iConst60;
	float fVec20[256];
	int iConst61;
	int iConst62;
	float fVec21[512];
	int iConst63;
	float fConst64;
	float fConst65;
	float fRec10[2];
	FAUSTFLOAT fVbargraph1;
	float fConst66;
	float fConst67;
	float fConst69;
	float fRec74[2];
	float fConst70;
	float fRec75[2];
	float fConst71;
	float fRec69[2];
	float fRec70[2];
	float fConst72;
	float fConst74;
	float fRec65[2];
	float fConst75;
	float fRec66[2];
	float fConst76;
	float fConst77;
	float fConst79;
	float fRec61[2];
	float fConst80;
	float fRec62[2];
	float fConst81;
	float fConst82;
	float fConst84;
	float fRec57[2];
	float fConst85;
	float fRec58[2];
	float fConst86;
	float fConst87;
	float fConst89;
	float fRec52[2];
	float fConst90;
	float fRec53[2];
	float fConst91;
	float fRec47[2];
	float fRec48[2];
	float fConst92;
	float fConst94;
	float fRec43[2];
	float fConst95;
	float fRec44[2];
	float fConst96;
	float fConst97;
	float fConst99;
	float fRec38[2];
	float fConst100;
	float fRec39[2];
	float fConst101;
	float fRec33[2];
	float fRec34[2];
	float fVec22[2];
	float fConst102;
	float fConst103;
	float fConst104;
	float fVec23[2];
	float fRec32[2];
	float fRec31[2];
	float fVec24[2];
	float fRec30[2];
	float fRec29[2];
	float fConst105;
	float fConst106;
	float fRec28[2];
	float fConst107;
	float fRec27[2];
	float fConst108;
	float fConst109;
	float fVec25[2];
	float fConst110;
	float fRec84[2];
	float fRec83[2];
	float fVec26[2];
	float fRec82[2];
	float fRec81[2];
	float fRec80[2];
	float fRec79[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fVslider4;
	float fConst111;
	float fRec26[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVbargraph3;
	float fConst112;
	float fRec92[2];
	float fRec93[2];
	float fRec94[2];
	float fVec27[2];
	float fRec91[2];
	float fRec90[2];
	float fVec28[2];
	float fRec89[2];
	float fRec88[2];
	float fRec87[2];
	float fRec86[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVslider7;
	float fConst113;
	float fRec85[2];
	FAUSTFLOAT fVbargraph5;
	float fConst114;
	float fRec116[2];
	float fRec117[2];
	float fRec112[2];
	float fRec113[2];
	float fRec107[2];
	float fRec108[2];
	float fRec102[2];
	float fRec103[2];
	float fVec29[2];
	float fVec30[2];
	float fRec101[2];
	float fRec100[2];
	float fVec31[2];
	float fRec99[2];
	float fRec98[2];
	float fRec97[2];
	float fRec96[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fVslider8;
	float fConst115;
	float fRec95[2];
	FAUSTFLOAT fVbargraph7;
	float fRec126[2];
	float fRec127[2];
	float fRec128[2];
	float fVec32[2];
	float fRec125[2];
	float fRec124[2];
	float fVec33[2];
	float fRec123[2];
	float fRec122[2];
	float fRec121[2];
	float fRec120[2];
	FAUSTFLOAT fVbargraph8;
	FAUSTFLOAT fVslider9;
	float fRec119[2];
	FAUSTFLOAT fVbargraph9;
	float fConst116;
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
	float fVec34[2];
	float fVec35[2];
	float fRec135[2];
	float fRec134[2];
	float fVec36[2];
	float fRec133[2];
	float fRec132[2];
	float fRec131[2];
	float fRec130[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fVslider10;
	float fConst117;
	float fRec129[2];
	FAUSTFLOAT fVbargraph11;
	float fConst118;
	float fRec182[2];
	float fRec183[2];
	float fRec184[2];
	float fVec37[2];
	float fRec181[2];
	float fRec180[2];
	float fVec38[2];
	float fRec179[2];
	float fRec178[2];
	float fRec177[2];
	float fRec176[2];
	FAUSTFLOAT fVbargraph12;
	FAUSTFLOAT fVslider11;
	float fConst119;
	float fRec175[2];
	FAUSTFLOAT fVbargraph13;
	float fConst120;
	float fRec206[2];
	float fRec207[2];
	float fRec202[2];
	float fRec203[2];
	float fRec197[2];
	float fRec198[2];
	float fRec192[2];
	float fRec193[2];
	float fVec39[2];
	float fVec40[2];
	float fRec191[2];
	float fRec190[2];
	float fVec41[2];
	float fRec189[2];
	float fRec188[2];
	float fRec187[2];
	float fRec186[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider12;
	float fConst121;
	float fRec185[2];
	FAUSTFLOAT fVbargraph15;
	float fConst122;
	float fRec216[2];
	float fRec217[2];
	float fRec218[2];
	float fVec42[2];
	float fRec215[2];
	float fRec214[2];
	float fVec43[2];
	float fRec213[2];
	float fRec212[2];
	float fRec211[2];
	float fRec210[2];
	FAUSTFLOAT fVbargraph16;
	FAUSTFLOAT fVslider13;
	float fConst123;
	float fRec209[2];
	FAUSTFLOAT fVbargraph17;
	float fRec9[3];
	float fRec5[2];
	float fRec6[2];
	float fRec1[2];
	float fRec2[2];
	float fRec226[2];
	float fRec227[2];
	float fRec223[2];
	float fRec224[2];
	float fRec229[2];
	float fRec230[2];
	float fRec219[2];
	float fRec220[2];
	float fRec232[2];
	float fRec233[2];
	float fRec240[2];
	float fRec241[2];
	float fRec236[2];
	float fRec237[2];
	float fRec243[2];
	float fRec244[2];
	float fConst124;
	float fConst125;
	float fRec0[2];
	FAUSTFLOAT fVslider14;
	FAUSTFLOAT fVbargraph18;
	float fRec248[2];
	float fRec249[2];
	float fConst126;
	float fRec247[2];
	FAUSTFLOAT fVbargraph19;
	float fRec255[2];
	float fRec256[2];
	float fRec252[2];
	float fRec253[2];
	float fRec258[2];
	float fRec259[2];
	float fRec262[2];
	float fRec263[2];
	float fConst127;
	float fRec251[2];
	FAUSTFLOAT fVbargraph20;
	float fRec267[2];
	float fRec268[2];
	float fConst128;
	float fRec266[2];
	FAUSTFLOAT fVbargraph21;
	float fRec285[2];
	float fRec286[2];
	float fRec282[2];
	float fRec283[2];
	float fRec279[2];
	float fRec280[2];
	float fRec288[2];
	float fRec289[2];
	float fRec275[2];
	float fRec276[2];
	float fRec271[2];
	float fRec272[2];
	float fRec295[2];
	float fRec296[2];
	float fRec291[2];
	float fRec292[2];
	float fRec298[2];
	float fRec299[2];
	float fConst129;
	float fRec270[2];
	FAUSTFLOAT fVbargraph22;
	float fRec303[2];
	float fRec304[2];
	float fConst130;
	float fRec302[2];
	FAUSTFLOAT fVbargraph23;
	float fRec310[2];
	float fRec311[2];
	float fRec307[2];
	float fRec308[2];
	float fRec313[2];
	float fRec314[2];
	float fRec317[2];
	float fRec318[2];
	float fConst131;
	float fRec306[2];
	FAUSTFLOAT fVbargraph24;
	float fRec322[2];
	float fRec323[2];
	float fConst132;
	float fRec321[2];
	FAUSTFLOAT fVbargraph25;
	float fVec44[2048];
	int iConst133;
	int iRec327[2];
	float fRec328[2];
	float fRec326[2];
	float fRec325[2];
	float fConst134;
	float fConst135;
	FAUSTFLOAT fCheckbox0;
	float fRec329[2];
	
 public:
	mydsp() {}

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
		m->declare("basics.lib/version", "1.12.0");
		m->declare("compile_options", "-a /tmp/tmpj_ke1jm7.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("delays.lib/name", "Faust Delay Library");
		m->declare("delays.lib/version", "1.1.0");
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
		m->declare("filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:author", "Julius O. Smith III");
		m->declare("filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/lowpass:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpassLR4:author", "Dario Sanfilippo");
		m->declare("filters.lib/lowpassLR4:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("filters.lib/lowpassLR4:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/peak_eq:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/peak_eq_cq:author", "Julius O. Smith III");
		m->declare("filters.lib/peak_eq_cq:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/peak_eq_cq:license", "MIT-style STK-4.3 license");
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
		m->declare("filters.lib/version", "1.3.0");
		m->declare("interpolators.lib/interpolate_linear:author", "Stéphane Letz");
		m->declare("interpolators.lib/interpolate_linear:licence", "MIT");
		m->declare("interpolators.lib/name", "Faust Interpolator Library");
		m->declare("interpolators.lib/version", "1.3.0");
		m->declare("license", "GPLv3");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.7.0");
		m->declare("name", "bbba");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.5.0");
		m->declare("version", "0.14");
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
		float fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 0.01f * fConst0;
		iConst2 = int(std::floor(fConst1)) % 2;
		float fConst3 = std::tan(69115.04f / fConst0);
		fConst4 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst3));
		float fConst5 = 1.0f / fConst3;
		fConst6 = (fConst5 + -1.0f) / fConst3 + 1.0f;
		float fConst7 = (fConst5 + 1.0f) / fConst3 + 1.0f;
		fConst8 = 1.0f / fConst7;
		fConst9 = 3.1415927f / fConst0;
		fConst10 = 1.0f - fConst5;
		fConst11 = 1.0f / (fConst5 + 1.0f);
		fConst12 = 0.125f * fConst0;
		fConst13 = 1.1312305e-06f * fConst0;
		float fConst14 = std::rint(fConst1);
		iConst15 = int(std::floor(0.5f * fConst14)) % 2;
		float fConst16 = std::tan(5283.415f / fConst0);
		float fConst17 = 1.7803667f * fConst16;
		float fConst18 = mydsp_faustpower2_f(fConst16);
		fConst19 = fConst18 + fConst17 + 1.5848527f;
		fConst20 = 2.0f * (fConst18 + -1.0f);
		fConst21 = fConst18 + (1.5848527f - fConst17);
		float fConst22 = 1.4142135f * fConst16;
		fConst23 = fConst18 + (1.0f - fConst22);
		float fConst24 = fConst18 + -1.5848527f;
		fConst25 = 2.0f * fConst24;
		fConst26 = 1.0f / (fConst18 + fConst22 + 1.0f);
		float fConst27 = std::tan(119.806114f / fConst0);
		float fConst28 = mydsp_faustpower2_f(fConst27);
		fConst29 = 1.0006541f * (fConst28 + -1.0f);
		float fConst30 = 0.50032705f * (fConst28 + 1.0f);
		fConst31 = fConst30 - fConst27;
		fConst32 = 1.0f / (fConst27 + fConst30);
		iConst33 = int(std::floor(fConst14)) % 2;
		iConst34 = int(std::floor(0.25f * fConst14)) % 2;
		iConst35 = iConst33 + 2 * iConst15;
		iConst36 = int(std::floor(0.125f * fConst14)) % 2;
		iConst37 = iConst35 + 4 * iConst34;
		iConst38 = int(std::floor(0.0625f * fConst14)) % 2;
		iConst39 = iConst37 + 8 * iConst36;
		iConst40 = int(std::floor(0.03125f * fConst14)) % 2;
		iConst41 = iConst39 + 16 * iConst38;
		iConst42 = int(std::floor(0.015625f * fConst14)) % 2;
		iConst43 = iConst41 + 32 * iConst40;
		iConst44 = int(std::floor(0.0078125f * fConst14)) % 2;
		iConst45 = iConst43 + 64 * iConst42;
		iConst46 = int(std::floor(0.00390625f * fConst14)) % 2;
		iConst47 = iConst45 + 128 * iConst44;
		fConst48 = 1.0f / std::max<float>(fConst14, 1.1920929e-07f);
		iConst49 = int(std::floor(0.005f * fConst0)) % 2;
		iConst50 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst51 = iConst2 + 2 * iConst49;
		iConst52 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst53 = iConst51 + 4 * iConst50;
		iConst54 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst55 = iConst53 + 8 * iConst52;
		iConst56 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst57 = iConst55 + 16 * iConst54;
		iConst58 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst59 = iConst57 + 32 * iConst56;
		iConst60 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst61 = iConst59 + 64 * iConst58;
		iConst62 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst63 = iConst61 + 128 * iConst60;
		fConst64 = std::exp(-(1.0f / fConst0));
		fConst65 = std::exp(-(4e+01f / fConst0));
		fConst66 = std::exp(-(1e+02f / fConst0));
		fConst67 = std::tan(2513.2742f / fConst0);
		float fConst68 = fConst67 * (fConst67 + 1.4142135f) + 1.0f;
		fConst69 = 2.0f / fConst68;
		fConst70 = fConst67 / fConst68;
		fConst71 = 1.0f / fConst68;
		fConst72 = std::tan(628.31854f / fConst0);
		float fConst73 = fConst72 * (fConst72 + 1.4142135f) + 1.0f;
		fConst74 = 2.0f / fConst73;
		fConst75 = fConst72 / fConst73;
		fConst76 = 1.0f / fConst73;
		fConst77 = std::tan(314.15927f / fConst0);
		float fConst78 = fConst77 * (fConst77 + 1.4142135f) + 1.0f;
		fConst79 = 2.0f / fConst78;
		fConst80 = fConst77 / fConst78;
		fConst81 = 1.0f / fConst78;
		fConst82 = std::tan(1256.6371f / fConst0);
		float fConst83 = fConst82 * (fConst82 + 1.4142135f) + 1.0f;
		fConst84 = 2.0f / fConst83;
		fConst85 = fConst82 / fConst83;
		fConst86 = 1.0f / fConst83;
		fConst87 = std::tan(10053.097f / fConst0);
		float fConst88 = fConst87 * (fConst87 + 1.4142135f) + 1.0f;
		fConst89 = 2.0f / fConst88;
		fConst90 = fConst87 / fConst88;
		fConst91 = 1.0f / fConst88;
		fConst92 = std::tan(5026.5483f / fConst0);
		float fConst93 = fConst92 * (fConst92 + 1.4142135f) + 1.0f;
		fConst94 = 2.0f / fConst93;
		fConst95 = fConst92 / fConst93;
		fConst96 = 1.0f / fConst93;
		fConst97 = std::tan(20106.193f / fConst0);
		float fConst98 = fConst97 * (fConst97 + 1.4142135f) + 1.0f;
		fConst99 = 2.0f / fConst98;
		fConst100 = fConst97 / fConst98;
		fConst101 = 1.0f / fConst98;
		fConst102 = 3.9810717f * fConst19;
		fConst103 = 7.9621434f * fConst24;
		fConst104 = 3.9810717f * fConst21;
		fConst105 = std::exp(-(1e+01f / fConst0));
		fConst106 = 1.0f - fConst105;
		fConst107 = 1.0f - fConst66;
		fConst108 = fConst19 / fConst7;
		fConst109 = fConst21 / fConst7;
		fConst110 = 2.0f * (fConst24 / fConst7);
		fConst111 = 1.0f - fConst65;
		fConst112 = std::exp(-(2e+01f / fConst0));
		fConst113 = 1.0f - fConst112;
		fConst114 = std::exp(-(13.333333f / fConst0));
		fConst115 = 1.0f - fConst114;
		fConst116 = std::exp(-(8.0f / fConst0));
		fConst117 = 1.0f - fConst116;
		fConst118 = std::exp(-(6.6666665f / fConst0));
		fConst119 = 1.0f - fConst118;
		fConst120 = std::exp(-(5.714286f / fConst0));
		fConst121 = 1.0f - fConst120;
		fConst122 = std::exp(-(5.0f / fConst0));
		fConst123 = 1.0f - fConst122;
		fConst124 = std::exp(-(5e+02f / fConst0));
		fConst125 = std::exp(-(66.666664f / fConst0));
		fConst126 = std::exp(-(333.33334f / fConst0));
		fConst127 = std::exp(-(2e+02f / fConst0));
		fConst128 = std::exp(-(5e+01f / fConst0));
		fConst129 = std::exp(-(25.0f / fConst0));
		fConst130 = std::exp(-(16.666666f / fConst0));
		fConst131 = std::exp(-(12.5f / fConst0));
		fConst132 = std::exp(-(33.333332f / fConst0));
		iConst133 = int(fConst1);
		fConst134 = 44.1f / fConst0;
		fConst135 = 1.0f - fConst134;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-25.0f);
		fVslider1 = FAUSTFLOAT(42.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(-3.0f);
		fVslider5 = FAUSTFLOAT(1e+02f);
		fVslider6 = FAUSTFLOAT(5e+01f);
		fVslider7 = FAUSTFLOAT(-7.0f);
		fVslider8 = FAUSTFLOAT(-1e+01f);
		fVslider9 = FAUSTFLOAT(-9.0f);
		fVslider10 = FAUSTFLOAT(-8.0f);
		fVslider11 = FAUSTFLOAT(-5.0f);
		fVslider12 = FAUSTFLOAT(-5.0f);
		fVslider13 = FAUSTFLOAT(-1e+01f);
		fVslider14 = FAUSTFLOAT(1e+02f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec13[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec12[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 3; l3 = l3 + 1) {
			fRec11[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec25[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec24[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec23[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec22[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec3[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fVec4[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 7; l12 = l12 + 1) {
			fVec5[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 15; l13 = l13 + 1) {
			fVec6[l13] = 0.0f;
		}
		IOTA0 = 0;
		for (int l14 = 0; l14 < 32; l14 = l14 + 1) {
			fVec7[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 64; l15 = l15 + 1) {
			fVec8[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 128; l16 = l16 + 1) {
			fVec9[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 256; l17 = l17 + 1) {
			fVec10[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 512; l18 = l18 + 1) {
			fVec11[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec17[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec18[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec15[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec14[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec12[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fVec13[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 3; l25 = l25 + 1) {
			fVec14[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 7; l26 = l26 + 1) {
			fVec15[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 15; l27 = l27 + 1) {
			fVec16[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 32; l28 = l28 + 1) {
			fVec17[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 64; l29 = l29 + 1) {
			fVec18[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 128; l30 = l30 + 1) {
			fVec19[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 256; l31 = l31 + 1) {
			fVec20[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 512; l32 = l32 + 1) {
			fVec21[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec10[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec74[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec75[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec69[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec70[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec65[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec66[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec61[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec62[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec57[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec58[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec52[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec53[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec47[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec48[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec43[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec44[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec38[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec39[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec33[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec34[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fVec22[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec23[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec32[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec31[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec24[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec30[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec29[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec28[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec27[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fVec25[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec84[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec83[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec26[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec82[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec81[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec80[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec79[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec26[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec92[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec93[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec94[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fVec27[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec91[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec90[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fVec28[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec89[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec88[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec87[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec86[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec85[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec116[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec117[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec112[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec113[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec107[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec108[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec102[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec103[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fVec29[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fVec30[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec101[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec100[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec31[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec99[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec98[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec97[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec96[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec95[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec126[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec127[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec128[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fVec32[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec125[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec124[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fVec33[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec123[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec122[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec121[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec120[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec119[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec172[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec173[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec168[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec169[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec164[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec165[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec160[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec161[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec155[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec156[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec150[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec151[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec146[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec147[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec141[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec142[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec136[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec137[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fVec34[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fVec35[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec135[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec134[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fVec36[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec133[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec132[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec131[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec130[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec129[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec182[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec183[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec184[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fVec37[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec181[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec180[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fVec38[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec179[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec178[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec177[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec176[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec175[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec206[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec207[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec202[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec203[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec197[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec198[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec192[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec193[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fVec39[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fVec40[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec191[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec190[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec41[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec189[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec188[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec187[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec186[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec185[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec216[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec217[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec218[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fVec42[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec215[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec214[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fVec43[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec213[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec212[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec211[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec210[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec209[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 3; l184 = l184 + 1) {
			fRec9[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec5[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec6[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec1[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec2[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec226[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec227[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec223[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec224[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec229[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec230[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec219[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec220[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec232[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec233[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec240[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec241[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec236[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec237[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec243[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec244[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec0[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec248[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec249[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec247[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec255[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec256[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec252[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec253[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec258[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec259[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec262[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec263[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec251[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec267[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec268[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec266[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec285[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec286[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec282[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec283[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec279[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec280[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec288[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec289[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec275[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec276[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec271[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec272[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec295[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec296[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec291[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec292[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec298[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec299[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec270[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec303[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec304[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec302[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec310[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec311[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec307[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec308[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec313[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec314[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec317[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec318[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec306[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec322[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec323[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fRec321[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2048; l255 = l255 + 1) {
			fVec44[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			iRec327[l256] = 0;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec328[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec326[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec325[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec329[l260] = 0.0f;
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
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "symbol", "sb_strength");
		ui_interface->declare(&fVslider6, "unit", "%");
		ui_interface->addVerticalSlider("strength", &fVslider6, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph1, "3", "");
		ui_interface->declare(&fVbargraph1, "symbol", "sb_expander");
		ui_interface->addVerticalBargraph("sb_expander", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("Target Curve");
		ui_interface->declare(&fVslider13, "symbol", "sb_target_spectrum_0");
		ui_interface->addVerticalSlider("spec 0", &fVslider13, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider12, "symbol", "sb_target_spectrum_1");
		ui_interface->addVerticalSlider("spec 1", &fVslider12, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider11, "symbol", "sb_target_spectrum_2");
		ui_interface->addVerticalSlider("spec 2", &fVslider11, FAUSTFLOAT(-5.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider10, "symbol", "sb_target_spectrum_3");
		ui_interface->addVerticalSlider("spec 3", &fVslider10, FAUSTFLOAT(-8.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider9, "symbol", "sb_target_spectrum_4");
		ui_interface->addVerticalSlider("spec 4", &fVslider9, FAUSTFLOAT(-9.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "symbol", "sb_target_spectrum_5");
		ui_interface->addVerticalSlider("spec 5", &fVslider8, FAUSTFLOAT(-1e+01f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider7, "symbol", "sb_target_spectrum_6");
		ui_interface->addVerticalSlider("spec 6", &fVslider7, FAUSTFLOAT(-7.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider4, "symbol", "sb_target_spectrum_7");
		ui_interface->addVerticalSlider("spec 7", &fVslider4, FAUSTFLOAT(-3.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
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
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-25.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph0, "8", "");
		ui_interface->declare(&fVbargraph0, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph0, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph0, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider3, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
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
		ui_interface->declare(&fVslider14, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider14, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider1, "scale", "log");
		ui_interface->declare(&fVslider1, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider1, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider5, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider2, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = float(fVslider0);
		float fSlow1 = fSlow0 + -12.5f;
		float fSlow2 = 1.0f / std::tan(fConst9 * float(fVslider1));
		float fSlow3 = 1.0f - fSlow2;
		float fSlow4 = 1.0f / (fSlow2 + 1.0f);
		float fSlow5 = float(fVslider2);
		float fSlow6 = float(fVslider3);
		float fSlow7 = float(fVslider4);
		float fSlow8 = float(fVslider5);
		float fSlow9 = 5e-06f * float(fVslider6) * fSlow8;
		float fSlow10 = float(fVslider7);
		float fSlow11 = float(fVslider8);
		float fSlow12 = float(fVslider9);
		float fSlow13 = float(fVslider10);
		float fSlow14 = float(fVslider11);
		float fSlow15 = float(fVslider12);
		float fSlow16 = float(fVslider13);
		float fSlow17 = fSlow0 + -13.5f;
		float fSlow18 = 0.0001f * fSlow8 * float(fVslider14);
		float fSlow19 = fSlow0 + -11.5f;
		float fSlow20 = fSlow0 + -10.5f;
		float fSlow21 = fSlow0 + -7.5f;
		float fSlow22 = fSlow0 + -8.5f;
		float fSlow23 = fSlow0 + -6.5f;
		float fSlow24 = fSlow0 + -5.5f;
		float fSlow25 = fConst134 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fVec0[0] = fTemp0;
			fRec13[0] = -(fSlow4 * (fSlow3 * fRec13[1] - fSlow2 * (fTemp0 - fVec0[1])));
			fRec12[0] = -(fConst11 * (fConst10 * fRec12[1] - (fRec13[0] + fRec13[1])));
			fRec11[0] = fRec12[0] - fConst8 * (fConst6 * fRec11[2] + fConst4 * fRec11[1]);
			float fTemp1 = std::tan(fConst9 * std::min<float>(fConst12, fSlow5 * (fConst13 * std::fabs(fRec15[1]) + 0.1316f)));
			float fTemp2 = fTemp1 + 2.0f;
			float fTemp3 = fTemp1 * fTemp2 + 1.0f;
			fVec1[0] = fConst23 * fRec24[1] - fConst21 * fRec9[2];
			fRec25[0] = fConst26 * (fConst25 * fRec9[2] - (fVec1[1] + fConst20 * fRec25[1]) + fConst19 * fRec9[1]);
			fRec24[0] = fRec25[0];
			fVec2[0] = 0.50032705f * fRec24[1] - fConst31 * fRec22[1];
			fRec23[0] = fConst32 * (fVec2[1] - fConst29 * fRec23[1] - 1.0006541f * fRec24[1] + 0.50032705f * fRec24[0]);
			fRec22[0] = fRec23[0];
			float fTemp4 = mydsp_faustpower2_f(fRec22[0]);
			fVec3[0] = fTemp4;
			float fTemp5 = fTemp4 + fVec3[1];
			fVec4[0] = fTemp5;
			float fTemp6 = fTemp5 + fVec4[2];
			fVec5[0] = fTemp6;
			float fTemp7 = fTemp6 + fVec5[4];
			fVec6[0] = fTemp7;
			float fTemp8 = fTemp7 + fVec6[8];
			fVec7[IOTA0 & 31] = fTemp8;
			float fTemp9 = fTemp8 + fVec7[(IOTA0 - 16) & 31];
			fVec8[IOTA0 & 63] = fTemp9;
			float fTemp10 = fTemp9 + fVec8[(IOTA0 - 32) & 63];
			fVec9[IOTA0 & 127] = fTemp10;
			float fTemp11 = fTemp10 + fVec9[(IOTA0 - 64) & 127];
			fVec10[IOTA0 & 255] = fTemp11;
			fVec11[IOTA0 & 511] = fTemp11 + fVec10[(IOTA0 - 128) & 255];
			float fTemp12 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow0 + fRec14[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst48 * (((iConst46) ? 0.86000985f * fVec11[(IOTA0 - iConst47) & 511] : 0.0f) + ((iConst44) ? 0.86000985f * fVec10[(IOTA0 - iConst45) & 255] : 0.0f) + ((iConst42) ? 0.86000985f * fVec9[(IOTA0 - iConst43) & 127] : 0.0f) + ((iConst40) ? 0.86000985f * fVec8[(IOTA0 - iConst41) & 63] : 0.0f) + ((iConst38) ? 0.86000985f * fVec7[(IOTA0 - iConst39) & 31] : 0.0f) + ((iConst36) ? 0.86000985f * fVec6[iConst37] : 0.0f) + ((iConst34) ? 0.86000985f * fVec5[iConst35] : 0.0f) + ((iConst33) ? 0.86000985f * fTemp4 : 0.0f) + ((iConst15) ? 0.86000985f * fVec4[iConst33] : 0.0f))))))) - (fRec17[1] * fTemp2 + fRec18[1]);
			float fTemp13 = fTemp1 * fTemp12 / fTemp3;
			fRec17[0] = fRec17[1] + 2.0f * fTemp13;
			float fTemp14 = fRec17[1] + fTemp13;
			float fTemp15 = fTemp1 * fTemp14;
			fRec18[0] = fRec18[1] + 2.0f * fTemp15;
			float fRec19 = fTemp14;
			float fRec20 = fTemp12 / fTemp3;
			float fRec21 = fRec18[1] + fTemp15;
			fRec15[0] = fRec19;
			float fRec16 = fRec21;
			fVbargraph0 = FAUSTFLOAT(fSlow6 * fRec16);
			fRec14[0] = fVbargraph0;
			float fTemp16 = std::pow(1e+01f, 0.05f * fRec14[0]) * (fRec11[2] + fRec11[0] + 2.0f * fRec11[1]);
			fVec12[0] = fTemp16;
			float fTemp17 = fConst8 * fTemp16;
			float fTemp18 = std::fabs(fTemp17);
			fVec13[0] = fTemp18;
			float fTemp19 = std::max<float>(fTemp18, fVec13[1]);
			fVec14[0] = fTemp19;
			float fTemp20 = std::max<float>(fTemp19, fVec14[2]);
			fVec15[0] = fTemp20;
			float fTemp21 = std::max<float>(fTemp20, fVec15[4]);
			fVec16[0] = fTemp21;
			float fTemp22 = std::max<float>(fTemp21, fVec16[8]);
			fVec17[IOTA0 & 31] = fTemp22;
			float fTemp23 = std::max<float>(fTemp22, fVec17[(IOTA0 - 16) & 31]);
			fVec18[IOTA0 & 63] = fTemp23;
			float fTemp24 = std::max<float>(fTemp23, fVec18[(IOTA0 - 32) & 63]);
			fVec19[IOTA0 & 127] = fTemp24;
			float fTemp25 = std::max<float>(fTemp24, fVec19[(IOTA0 - 64) & 127]);
			fVec20[IOTA0 & 255] = fTemp25;
			fVec21[IOTA0 & 511] = std::max<float>(fTemp25, fVec20[(IOTA0 - 128) & 255]);
			float fTemp26 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp18 : -3.4028235e+38f), ((iConst49) ? fVec14[iConst2] : -3.4028235e+38f)), ((iConst50) ? fVec15[iConst51] : -3.4028235e+38f)), ((iConst52) ? fVec16[iConst53] : -3.4028235e+38f)), ((iConst54) ? fVec17[(IOTA0 - iConst55) & 31] : -3.4028235e+38f)), ((iConst56) ? fVec18[(IOTA0 - iConst57) & 63] : -3.4028235e+38f)), ((iConst58) ? fVec19[(IOTA0 - iConst59) & 127] : -3.4028235e+38f)), ((iConst60) ? fVec20[(IOTA0 - iConst61) & 255] : -3.4028235e+38f)), ((iConst62) ? fVec21[(IOTA0 - iConst63) & 511] : -3.4028235e+38f))));
			float fTemp27 = 2e+01f * fTemp26;
			int iTemp28 = (fTemp27 > -2e+01f) + (fTemp27 > -2e+01f);
			float fTemp29 = 2e+01f * (fTemp26 + 1.0f);
			float fTemp30 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp28 == 0) ? fTemp29 : ((iTemp28 == 1) ? -(4194304.0f * mydsp_faustpower2_f(fTemp29 + -5.9604645e-08f)) : 0.0f)));
			float fTemp31 = ((fTemp30 > fRec10[1]) ? fConst65 : fConst64);
			fRec10[0] = fTemp30 * (1.0f - fTemp31) + fRec10[1] * fTemp31;
			float fTemp32 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec10[0])));
			fVbargraph1 = FAUSTFLOAT(fTemp32);
			float fTemp33 = fTemp32;
			float fTemp34 = fRec74[1] + fConst67 * (fTemp17 - fRec75[1]);
			fRec74[0] = fConst69 * fTemp34 - fRec74[1];
			float fTemp35 = fRec75[1] + fConst70 * fTemp34;
			fRec75[0] = 2.0f * fTemp35 - fRec75[1];
			float fRec76 = fTemp17;
			float fRec77 = fConst71 * fTemp34;
			float fRec78 = fTemp35;
			float fTemp36 = fRec78 + 1.4142135f * fRec77;
			float fTemp37 = fRec69[1] + fConst67 * (fRec76 - (fTemp36 + fRec70[1]));
			fRec69[0] = fConst69 * fTemp37 - fRec69[1];
			float fTemp38 = fRec70[1] + fConst70 * fTemp37;
			fRec70[0] = 2.0f * fTemp38 - fRec70[1];
			float fRec71 = fRec76 - fTemp36;
			float fRec72 = fConst71 * fTemp37;
			float fRec73 = fTemp38;
			float fTemp39 = fRec73 + 1.4142135f * fRec72;
			float fTemp40 = fRec65[1] + fConst72 * (fRec71 - (fTemp39 + fRec66[1]));
			fRec65[0] = fConst74 * fTemp40 - fRec65[1];
			float fTemp41 = fRec66[1] + fConst75 * fTemp40;
			fRec66[0] = 2.0f * fTemp41 - fRec66[1];
			float fRec67 = fRec71 - fTemp39;
			float fRec68 = fConst76 * fTemp40;
			float fTemp42 = 2.828427f * fRec68;
			float fTemp43 = fRec61[1] + fConst77 * (fRec67 - (fTemp42 + fRec62[1]));
			fRec61[0] = fConst79 * fTemp43 - fRec61[1];
			float fTemp44 = fRec62[1] + fConst80 * fTemp43;
			fRec62[0] = 2.0f * fTemp44 - fRec62[1];
			float fRec63 = fRec67 - fTemp42;
			float fRec64 = fConst81 * fTemp43;
			float fTemp45 = 2.828427f * fRec64;
			float fTemp46 = fRec57[1] + fConst82 * (fRec63 - (fTemp45 + fRec58[1]));
			fRec57[0] = fConst84 * fTemp46 - fRec57[1];
			float fTemp47 = fRec58[1] + fConst85 * fTemp46;
			fRec58[0] = 2.0f * fTemp47 - fRec58[1];
			float fRec59 = fRec63 - fTemp45;
			float fRec60 = fConst86 * fTemp46;
			float fTemp48 = 2.828427f * fRec60;
			float fTemp49 = fRec52[1] + fConst87 * (fRec59 - (fTemp48 + fRec53[1]));
			fRec52[0] = fConst89 * fTemp49 - fRec52[1];
			float fTemp50 = fRec53[1] + fConst90 * fTemp49;
			fRec53[0] = 2.0f * fTemp50 - fRec53[1];
			float fRec54 = fRec59 - fTemp48;
			float fRec55 = fConst91 * fTemp49;
			float fRec56 = fTemp50;
			float fTemp51 = fRec56 + 1.4142135f * fRec55;
			float fTemp52 = fRec47[1] + fConst87 * (fRec54 - (fTemp51 + fRec48[1]));
			fRec47[0] = fConst89 * fTemp52 - fRec47[1];
			float fTemp53 = fRec48[1] + fConst90 * fTemp52;
			fRec48[0] = 2.0f * fTemp53 - fRec48[1];
			float fRec49 = fRec54 - fTemp51;
			float fRec50 = fConst91 * fTemp52;
			float fRec51 = fTemp53;
			float fTemp54 = fRec51 + 1.4142135f * fRec50;
			float fTemp55 = fRec43[1] + fConst92 * (fRec49 - (fTemp54 + fRec44[1]));
			fRec43[0] = fConst94 * fTemp55 - fRec43[1];
			float fTemp56 = fRec44[1] + fConst95 * fTemp55;
			fRec44[0] = 2.0f * fTemp56 - fRec44[1];
			float fRec45 = fRec49 - fTemp54;
			float fRec46 = fConst96 * fTemp55;
			float fTemp57 = 2.828427f * fRec46;
			float fTemp58 = fRec38[1] + fConst97 * (fRec45 - (fTemp57 + fRec39[1]));
			fRec38[0] = fConst99 * fTemp58 - fRec38[1];
			float fTemp59 = fRec39[1] + fConst100 * fTemp58;
			fRec39[0] = 2.0f * fTemp59 - fRec39[1];
			float fRec40 = fRec45 - fTemp57;
			float fRec41 = fConst101 * fTemp58;
			float fRec42 = fTemp59;
			float fTemp60 = fRec42 + 1.4142135f * fRec41;
			float fTemp61 = fRec33[1] + fConst97 * (fRec40 - (fTemp60 + fRec34[1]));
			fRec33[0] = fConst99 * fTemp61 - fRec33[1];
			float fTemp62 = fRec34[1] + fConst100 * fTemp61;
			fRec34[0] = 2.0f * fTemp62 - fRec34[1];
			float fRec35 = fRec40 - fTemp60;
			float fRec36 = fConst101 * fTemp61;
			float fRec37 = fTemp62;
			float fTemp63 = fRec35 - (fRec37 + 1.4142135f * fRec36);
			fVec22[0] = fTemp63;
			fVec23[0] = fConst104 * fVec22[1] - fConst23 * fRec31[1];
			fRec32[0] = fConst26 * (fVec23[1] - fConst20 * fRec32[1] + fConst103 * fVec22[1] + fConst102 * fTemp63);
			fRec31[0] = fRec32[0];
			fVec24[0] = 0.50032705f * fRec31[1] - fConst31 * fRec29[1];
			fRec30[0] = fConst32 * (fVec24[1] - fConst29 * fRec30[1] - 1.0006541f * fRec31[1] + 0.50032705f * fRec31[0]);
			fRec29[0] = fRec30[0];
			float fTemp64 = std::fabs(0.92736715f * fRec29[0]);
			fRec28[0] = std::max<float>(fTemp64, fConst105 * fRec28[1] + fConst106 * fTemp64);
			fRec27[0] = fConst107 * fRec28[0] + fConst66 * fRec27[1];
			fVec25[0] = fConst23 * fRec83[1] - fConst109 * fVec12[1];
			fRec84[0] = fConst26 * (fConst110 * fVec12[1] - (fVec25[1] + fConst20 * fRec84[1]) + fConst108 * fTemp16);
			fRec83[0] = fRec84[0];
			fVec26[0] = 0.50032705f * fRec83[1] - fConst31 * fRec81[1];
			fRec82[0] = fConst32 * (fVec26[1] - fConst29 * fRec82[1] - 1.0006541f * fRec83[1] + 0.50032705f * fRec83[0]);
			fRec81[0] = fRec82[0];
			float fTemp65 = std::fabs(0.92736715f * fRec81[0]);
			fRec80[0] = std::max<float>(fTemp65, fConst105 * fRec80[1] + fConst106 * fTemp65);
			fRec79[0] = fConst107 * fRec80[0] + fConst66 * fRec79[1];
			float fTemp66 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec79[0])));
			float fTemp67 = 2e+01f * (fTemp66 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec27[0]))));
			fVbargraph2 = FAUSTFLOAT(-fTemp67);
			fRec26[0] = fConst111 * (fSlow7 - -fTemp67) + fConst65 * fRec26[1];
			float fTemp68 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec26[0])) * fTemp33);
			fVbargraph3 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp68)));
			float fTemp69 = fRec92[1] + fConst97 * (fRec42 - fRec93[1]);
			fRec92[0] = fConst99 * fTemp69 - fRec92[1];
			float fTemp70 = fRec93[1] + fConst100 * fTemp69;
			fRec93[0] = 2.0f * fTemp70 - fRec93[1];
			fRec94[0] = fTemp70;
			fVec27[0] = fConst104 * fRec94[1] - fConst23 * fRec90[1];
			fRec91[0] = fConst26 * (fVec27[1] - fConst20 * fRec91[1] + fConst103 * fRec94[1] + fConst102 * fRec94[0]);
			fRec90[0] = fRec91[0];
			fVec28[0] = 0.50032705f * fRec90[1] - fConst31 * fRec88[1];
			fRec89[0] = fConst32 * (fVec28[1] - fConst29 * fRec89[1] - 1.0006541f * fRec90[1] + 0.50032705f * fRec90[0]);
			fRec88[0] = fRec89[0];
			float fTemp71 = std::fabs(0.92736715f * fRec88[0]);
			fRec87[0] = std::max<float>(fTemp71, fConst105 * fRec87[1] + fConst106 * fTemp71);
			fRec86[0] = fConst107 * fRec87[0] + fConst66 * fRec86[1];
			float fTemp72 = 2e+01f * (fTemp66 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec86[0]))));
			fVbargraph4 = FAUSTFLOAT(-fTemp72);
			fRec85[0] = fConst113 * (fSlow10 - -fTemp72) + fConst112 * fRec85[1];
			float fTemp73 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec85[0])) * fTemp33);
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp73)));
			float fTemp74 = fRec116[1] + fConst87 * (fRec56 - fRec117[1]);
			fRec116[0] = fConst89 * fTemp74 - fRec116[1];
			float fTemp75 = fRec117[1] + fConst90 * fTemp74;
			fRec117[0] = 2.0f * fTemp75 - fRec117[1];
			float fRec118 = fTemp75;
			float fTemp76 = fRec112[1] + fConst97 * (fRec118 - fRec113[1]);
			fRec112[0] = fConst99 * fTemp76 - fRec112[1];
			float fTemp77 = fRec113[1] + fConst100 * fTemp76;
			fRec113[0] = 2.0f * fTemp77 - fRec113[1];
			float fRec114 = fRec118;
			float fRec115 = fConst101 * fTemp76;
			float fTemp78 = 2.828427f * fRec115;
			float fTemp79 = fRec107[1] + fConst92 * (fRec114 - (fTemp78 + fRec108[1]));
			fRec107[0] = fConst94 * fTemp79 - fRec107[1];
			float fTemp80 = fRec108[1] + fConst95 * fTemp79;
			fRec108[0] = 2.0f * fTemp80 - fRec108[1];
			float fRec109 = fRec114 - fTemp78;
			float fRec110 = fConst96 * fTemp79;
			float fRec111 = fTemp80;
			float fTemp81 = fRec111 + 1.4142135f * fRec110;
			float fTemp82 = fRec102[1] + fConst92 * (fRec109 - (fTemp81 + fRec103[1]));
			fRec102[0] = fConst94 * fTemp82 - fRec102[1];
			float fTemp83 = fRec103[1] + fConst95 * fTemp82;
			fRec103[0] = 2.0f * fTemp83 - fRec103[1];
			float fRec104 = fRec109 - fTemp81;
			float fRec105 = fConst96 * fTemp82;
			float fRec106 = fTemp83;
			float fTemp84 = fRec104 - (fRec106 + 1.4142135f * fRec105);
			fVec29[0] = fTemp84;
			fVec30[0] = fConst104 * fVec29[1] - fConst23 * fRec100[1];
			fRec101[0] = fConst26 * (fVec30[1] - fConst20 * fRec101[1] + fConst103 * fVec29[1] + fConst102 * fTemp84);
			fRec100[0] = fRec101[0];
			fVec31[0] = 0.50032705f * fRec100[1] - fConst31 * fRec98[1];
			fRec99[0] = fConst32 * (fVec31[1] - fConst29 * fRec99[1] - 1.0006541f * fRec100[1] + 0.50032705f * fRec100[0]);
			fRec98[0] = fRec99[0];
			float fTemp85 = std::fabs(0.92736715f * fRec98[0]);
			fRec97[0] = std::max<float>(fTemp85, fConst105 * fRec97[1] + fConst106 * fTemp85);
			fRec96[0] = fConst107 * fRec97[0] + fConst66 * fRec96[1];
			float fTemp86 = 2e+01f * (fTemp66 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec96[0]))));
			fVbargraph6 = FAUSTFLOAT(-fTemp86);
			fRec95[0] = fConst115 * (fSlow11 - -fTemp86) + fConst114 * fRec95[1];
			float fTemp87 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec95[0])) * fTemp33);
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp87)));
			float fTemp88 = fRec126[1] + fConst92 * (fRec111 - fRec127[1]);
			fRec126[0] = fConst94 * fTemp88 - fRec126[1];
			float fTemp89 = fRec127[1] + fConst95 * fTemp88;
			fRec127[0] = 2.0f * fTemp89 - fRec127[1];
			fRec128[0] = fTemp89;
			fVec32[0] = fConst104 * fRec128[1] - fConst23 * fRec124[1];
			fRec125[0] = fConst26 * (fVec32[1] - fConst20 * fRec125[1] + fConst103 * fRec128[1] + fConst102 * fRec128[0]);
			fRec124[0] = fRec125[0];
			fVec33[0] = 0.50032705f * fRec124[1] - fConst31 * fRec122[1];
			fRec123[0] = fConst32 * (fVec33[1] - fConst29 * fRec123[1] - 1.0006541f * fRec124[1] + 0.50032705f * fRec124[0]);
			fRec122[0] = fRec123[0];
			float fTemp90 = std::fabs(0.92736715f * fRec122[0]);
			fRec121[0] = std::max<float>(fTemp90, fConst105 * fRec121[1] + fConst106 * fTemp90);
			fRec120[0] = fConst107 * fRec121[0] + fConst66 * fRec120[1];
			float fTemp91 = 2e+01f * (fTemp66 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec120[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp91);
			fRec119[0] = fConst106 * (fSlow12 - -fTemp91) + fConst105 * fRec119[1];
			float fTemp92 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec119[0])) * fTemp33);
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp92)));
			float fTemp93 = fRec172[1] + fConst67 * (fRec78 - fRec173[1]);
			fRec172[0] = fConst69 * fTemp93 - fRec172[1];
			float fTemp94 = fRec173[1] + fConst70 * fTemp93;
			fRec173[0] = 2.0f * fTemp94 - fRec173[1];
			float fRec174 = fTemp94;
			float fTemp95 = fRec168[1] + fConst87 * (fRec174 - fRec169[1]);
			fRec168[0] = fConst89 * fTemp95 - fRec168[1];
			float fTemp96 = fRec169[1] + fConst90 * fTemp95;
			fRec169[0] = 2.0f * fTemp96 - fRec169[1];
			float fRec170 = fRec174;
			float fRec171 = fConst91 * fTemp95;
			float fTemp97 = 2.828427f * fRec171;
			float fTemp98 = fRec164[1] + fConst92 * (fRec170 - (fTemp97 + fRec165[1]));
			fRec164[0] = fConst94 * fTemp98 - fRec164[1];
			float fTemp99 = fRec165[1] + fConst95 * fTemp98;
			fRec165[0] = 2.0f * fTemp99 - fRec165[1];
			float fRec166 = fRec170 - fTemp97;
			float fRec167 = fConst96 * fTemp98;
			float fTemp100 = 2.828427f * fRec167;
			float fTemp101 = fRec160[1] + fConst97 * (fRec166 - (fTemp100 + fRec161[1]));
			fRec160[0] = fConst99 * fTemp101 - fRec160[1];
			float fTemp102 = fRec161[1] + fConst100 * fTemp101;
			fRec161[0] = 2.0f * fTemp102 - fRec161[1];
			float fRec162 = fRec166 - fTemp100;
			float fRec163 = fConst101 * fTemp101;
			float fTemp103 = 2.828427f * fRec163;
			float fTemp104 = fRec155[1] + fConst72 * (fRec162 - (fTemp103 + fRec156[1]));
			fRec155[0] = fConst74 * fTemp104 - fRec155[1];
			float fTemp105 = fRec156[1] + fConst75 * fTemp104;
			fRec156[0] = 2.0f * fTemp105 - fRec156[1];
			float fRec157 = fRec162 - fTemp103;
			float fRec158 = fConst76 * fTemp104;
			float fRec159 = fTemp105;
			float fTemp106 = fRec159 + 1.4142135f * fRec158;
			float fTemp107 = fRec150[1] + fConst72 * (fRec157 - (fTemp106 + fRec151[1]));
			fRec150[0] = fConst74 * fTemp107 - fRec150[1];
			float fTemp108 = fRec151[1] + fConst75 * fTemp107;
			fRec151[0] = 2.0f * fTemp108 - fRec151[1];
			float fRec152 = fRec157 - fTemp106;
			float fRec153 = fConst76 * fTemp107;
			float fRec154 = fTemp108;
			float fTemp109 = fRec154 + 1.4142135f * fRec153;
			float fTemp110 = fRec146[1] + fConst77 * (fRec152 - (fTemp109 + fRec147[1]));
			fRec146[0] = fConst79 * fTemp110 - fRec146[1];
			float fTemp111 = fRec147[1] + fConst80 * fTemp110;
			fRec147[0] = 2.0f * fTemp111 - fRec147[1];
			float fRec148 = fRec152 - fTemp109;
			float fRec149 = fConst81 * fTemp110;
			float fTemp112 = 2.828427f * fRec149;
			float fTemp113 = fRec141[1] + fConst82 * (fRec148 - (fTemp112 + fRec142[1]));
			fRec141[0] = fConst84 * fTemp113 - fRec141[1];
			float fTemp114 = fRec142[1] + fConst85 * fTemp113;
			fRec142[0] = 2.0f * fTemp114 - fRec142[1];
			float fRec143 = fRec148 - fTemp112;
			float fRec144 = fConst86 * fTemp113;
			float fRec145 = fTemp114;
			float fTemp115 = fRec145 + 1.4142135f * fRec144;
			float fTemp116 = fRec136[1] + fConst82 * (fRec143 - (fTemp115 + fRec137[1]));
			fRec136[0] = fConst84 * fTemp116 - fRec136[1];
			float fTemp117 = fRec137[1] + fConst85 * fTemp116;
			fRec137[0] = 2.0f * fTemp117 - fRec137[1];
			float fRec138 = fRec143 - fTemp115;
			float fRec139 = fConst86 * fTemp116;
			float fRec140 = fTemp117;
			float fTemp118 = fRec138 - (fRec140 + 1.4142135f * fRec139);
			fVec34[0] = fTemp118;
			fVec35[0] = fConst104 * fVec34[1] - fConst23 * fRec134[1];
			fRec135[0] = fConst26 * (fVec35[1] - fConst20 * fRec135[1] + fConst103 * fVec34[1] + fConst102 * fTemp118);
			fRec134[0] = fRec135[0];
			fVec36[0] = 0.50032705f * fRec134[1] - fConst31 * fRec132[1];
			fRec133[0] = fConst32 * (fVec36[1] - fConst29 * fRec133[1] - 1.0006541f * fRec134[1] + 0.50032705f * fRec134[0]);
			fRec132[0] = fRec133[0];
			float fTemp119 = std::fabs(0.92736715f * fRec132[0]);
			fRec131[0] = std::max<float>(fTemp119, fConst105 * fRec131[1] + fConst106 * fTemp119);
			fRec130[0] = fConst107 * fRec131[0] + fConst66 * fRec130[1];
			float fTemp120 = 2e+01f * (fTemp66 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec130[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp120);
			fRec129[0] = fConst117 * (fSlow13 - -fTemp120) + fConst116 * fRec129[1];
			float fTemp121 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec129[0])) * fTemp33);
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp121)));
			float fTemp122 = fRec182[1] + fConst82 * (fRec145 - fRec183[1]);
			fRec182[0] = fConst84 * fTemp122 - fRec182[1];
			float fTemp123 = fRec183[1] + fConst85 * fTemp122;
			fRec183[0] = 2.0f * fTemp123 - fRec183[1];
			fRec184[0] = fTemp123;
			fVec37[0] = fConst104 * fRec184[1] - fConst23 * fRec180[1];
			fRec181[0] = fConst26 * (fVec37[1] - fConst20 * fRec181[1] + fConst103 * fRec184[1] + fConst102 * fRec184[0]);
			fRec180[0] = fRec181[0];
			fVec38[0] = 0.50032705f * fRec180[1] - fConst31 * fRec178[1];
			fRec179[0] = fConst32 * (fVec38[1] - fConst29 * fRec179[1] - 1.0006541f * fRec180[1] + 0.50032705f * fRec180[0]);
			fRec178[0] = fRec179[0];
			float fTemp124 = std::fabs(0.92736715f * fRec178[0]);
			fRec177[0] = std::max<float>(fTemp124, fConst105 * fRec177[1] + fConst106 * fTemp124);
			fRec176[0] = fConst107 * fRec177[0] + fConst66 * fRec176[1];
			float fTemp125 = 2e+01f * (fTemp66 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec176[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp125);
			fRec175[0] = fConst119 * (fSlow14 - -fTemp125) + fConst118 * fRec175[1];
			float fTemp126 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec175[0])) * fTemp33);
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp126)));
			float fTemp127 = fRec206[1] + fConst72 * (fRec159 - fRec207[1]);
			fRec206[0] = fConst74 * fTemp127 - fRec206[1];
			float fTemp128 = fRec207[1] + fConst75 * fTemp127;
			fRec207[0] = 2.0f * fTemp128 - fRec207[1];
			float fRec208 = fTemp128;
			float fTemp129 = fRec202[1] + fConst82 * (fRec208 - fRec203[1]);
			fRec202[0] = fConst84 * fTemp129 - fRec202[1];
			float fTemp130 = fRec203[1] + fConst85 * fTemp129;
			fRec203[0] = 2.0f * fTemp130 - fRec203[1];
			float fRec204 = fRec208;
			float fRec205 = fConst86 * fTemp129;
			float fTemp131 = 2.828427f * fRec205;
			float fTemp132 = fRec197[1] + fConst77 * (fRec204 - (fTemp131 + fRec198[1]));
			fRec197[0] = fConst79 * fTemp132 - fRec197[1];
			float fTemp133 = fRec198[1] + fConst80 * fTemp132;
			fRec198[0] = 2.0f * fTemp133 - fRec198[1];
			float fRec199 = fRec204 - fTemp131;
			float fRec200 = fConst81 * fTemp132;
			float fRec201 = fTemp133;
			float fTemp134 = fRec201 + 1.4142135f * fRec200;
			float fTemp135 = fRec192[1] + fConst77 * (fRec199 - (fTemp134 + fRec193[1]));
			fRec192[0] = fConst79 * fTemp135 - fRec192[1];
			float fTemp136 = fRec193[1] + fConst80 * fTemp135;
			fRec193[0] = 2.0f * fTemp136 - fRec193[1];
			float fRec194 = fRec199 - fTemp134;
			float fRec195 = fConst81 * fTemp135;
			float fRec196 = fTemp136;
			float fTemp137 = fRec194 - (fRec196 + 1.4142135f * fRec195);
			fVec39[0] = fTemp137;
			fVec40[0] = fConst104 * fVec39[1] - fConst23 * fRec190[1];
			fRec191[0] = fConst26 * (fVec40[1] - fConst20 * fRec191[1] + fConst103 * fVec39[1] + fConst102 * fTemp137);
			fRec190[0] = fRec191[0];
			fVec41[0] = 0.50032705f * fRec190[1] - fConst31 * fRec188[1];
			fRec189[0] = fConst32 * (fVec41[1] - fConst29 * fRec189[1] - 1.0006541f * fRec190[1] + 0.50032705f * fRec190[0]);
			fRec188[0] = fRec189[0];
			float fTemp138 = std::fabs(0.92736715f * fRec188[0]);
			fRec187[0] = std::max<float>(fTemp138, fConst105 * fRec187[1] + fConst106 * fTemp138);
			fRec186[0] = fConst107 * fRec187[0] + fConst66 * fRec186[1];
			float fTemp139 = 2e+01f * (fTemp66 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec186[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp139);
			fRec185[0] = fConst121 * (fSlow15 - -fTemp139) + fConst120 * fRec185[1];
			float fTemp140 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec185[0])) * fTemp33);
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp140)));
			float fTemp141 = fRec216[1] + fConst77 * (fRec201 - fRec217[1]);
			fRec216[0] = fConst79 * fTemp141 - fRec216[1];
			float fTemp142 = fRec217[1] + fConst80 * fTemp141;
			fRec217[0] = 2.0f * fTemp142 - fRec217[1];
			fRec218[0] = fTemp142;
			fVec42[0] = fConst104 * fRec218[1] - fConst23 * fRec214[1];
			fRec215[0] = fConst26 * (fVec42[1] - fConst20 * fRec215[1] + fConst103 * fRec218[1] + fConst102 * fRec218[0]);
			fRec214[0] = fRec215[0];
			fVec43[0] = 0.50032705f * fRec214[1] - fConst31 * fRec212[1];
			fRec213[0] = fConst32 * (fVec43[1] - fConst29 * fRec213[1] - 1.0006541f * fRec214[1] + 0.50032705f * fRec214[0]);
			fRec212[0] = fRec213[0];
			float fTemp143 = std::fabs(0.92736715f * fRec212[0]);
			fRec211[0] = std::max<float>(fTemp143, fConst105 * fRec211[1] + fConst106 * fTemp143);
			fRec210[0] = fConst107 * fRec211[0] + fConst66 * fRec210[1];
			float fTemp144 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec210[0]))) - fTemp66);
			fVbargraph16 = FAUSTFLOAT(fTemp144);
			fRec209[0] = fConst123 * (fSlow16 - fTemp144) + fConst122 * fRec209[1];
			float fTemp145 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec209[0])) * fTemp33);
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp145)));
			fRec9[0] = fRec218[0] * fTemp145 + fTemp137 * fTemp140 + fRec184[0] * fTemp126 + fTemp118 * fTemp121 + fRec128[0] * fTemp92 + fTemp84 * fTemp87 + fRec94[0] * fTemp73 + fTemp63 * fTemp68;
			float fTemp146 = fRec5[1] + fConst67 * (fRec9[0] - fRec6[1]);
			fRec5[0] = fConst69 * fTemp146 - fRec5[1];
			float fTemp147 = fRec6[1] + fConst70 * fTemp146;
			fRec6[0] = 2.0f * fTemp147 - fRec6[1];
			float fRec7 = fConst71 * fTemp146;
			float fRec8 = fTemp147;
			float fTemp148 = fRec8 + 1.4142135f * fRec7;
			float fTemp149 = fRec1[1] + fConst67 * (fRec9[0] - (fTemp148 + fRec2[1]));
			fRec1[0] = fConst69 * fTemp149 - fRec1[1];
			float fTemp150 = fRec2[1] + fConst70 * fTemp149;
			fRec2[0] = 2.0f * fTemp150 - fRec2[1];
			float fRec3 = fConst71 * fTemp149;
			float fRec4 = fTemp150;
			float fTemp151 = fRec8 + fRec4;
			float fTemp152 = fRec7 + fRec3;
			float fTemp153 = 1.4142135f * fTemp152;
			float fTemp154 = fTemp153 + fTemp151;
			float fTemp155 = fRec226[1] + fConst72 * (fRec9[0] - (fTemp154 + fRec227[1]));
			fRec226[0] = fConst74 * fTemp155 - fRec226[1];
			float fTemp156 = fRec227[1] + fConst75 * fTemp155;
			fRec227[0] = 2.0f * fTemp156 - fRec227[1];
			float fRec228 = fConst76 * fTemp155;
			float fTemp157 = fTemp153 + fTemp151 + 2.828427f * fRec228;
			float fTemp158 = fRec223[1] + fConst77 * (fRec9[0] - (fTemp157 + fRec224[1]));
			fRec223[0] = fConst79 * fTemp158 - fRec223[1];
			float fTemp159 = fRec224[1] + fConst80 * fTemp158;
			fRec224[0] = 2.0f * fTemp159 - fRec224[1];
			float fRec225 = fConst81 * fTemp158;
			float fTemp160 = fRec228 + fRec225;
			float fTemp161 = fTemp154 + 2.828427f * fTemp160;
			float fTemp162 = fRec229[1] + fConst82 * (fRec9[0] - (fTemp161 + fRec230[1]));
			fRec229[0] = fConst84 * fTemp162 - fRec229[1];
			float fTemp163 = fRec230[1] + fConst85 * fTemp162;
			fRec230[0] = 2.0f * fTemp163 - fRec230[1];
			float fRec231 = fConst86 * fTemp162;
			float fTemp164 = fRec231 + fTemp160;
			float fTemp165 = 2.828427f * fTemp164;
			float fTemp166 = fTemp154 + fTemp165;
			float fTemp167 = fRec219[1] + fConst87 * (fRec9[0] - (fTemp166 + fRec220[1]));
			fRec219[0] = fConst89 * fTemp167 - fRec219[1];
			float fTemp168 = fRec220[1] + fConst90 * fTemp167;
			fRec220[0] = 2.0f * fTemp168 - fRec220[1];
			float fRec221 = fConst91 * fTemp167;
			float fRec222 = fTemp168;
			float fTemp169 = fRec222 + fTemp151;
			float fTemp170 = fRec221 + fTemp152;
			float fTemp171 = 1.4142135f * fTemp170 + fTemp165 + fTemp169;
			float fTemp172 = fRec232[1] + fConst87 * (fRec9[0] - (fTemp171 + fRec233[1]));
			fRec232[0] = fConst89 * fTemp172 - fRec232[1];
			float fTemp173 = fRec233[1] + fConst90 * fTemp172;
			fRec233[0] = 2.0f * fTemp173 - fRec233[1];
			float fRec234 = fConst91 * fTemp172;
			float fRec235 = fTemp173;
			float fTemp174 = fRec235 + fTemp169;
			float fTemp175 = fRec234 + fTemp170;
			float fTemp176 = 1.4142135f * fTemp175;
			float fTemp177 = fTemp176 + fTemp165 + fTemp174;
			float fTemp178 = fRec240[1] + fConst92 * (fRec9[0] - (fTemp177 + fRec241[1]));
			fRec240[0] = fConst94 * fTemp178 - fRec240[1];
			float fTemp179 = fRec241[1] + fConst95 * fTemp178;
			fRec241[0] = 2.0f * fTemp179 - fRec241[1];
			float fRec242 = fConst96 * fTemp178;
			float fTemp180 = 2.828427f * (fRec242 + fTemp164);
			float fTemp181 = fTemp176 + fTemp174 + fTemp180;
			float fTemp182 = fRec236[1] + fConst97 * (fRec9[0] - (fTemp181 + fRec237[1]));
			fRec236[0] = fConst99 * fTemp182 - fRec236[1];
			float fTemp183 = fRec237[1] + fConst100 * fTemp182;
			fRec237[0] = 2.0f * fTemp183 - fRec237[1];
			float fRec238 = fConst101 * fTemp182;
			float fRec239 = fTemp183;
			float fTemp184 = fRec239 + fTemp174;
			float fTemp185 = fRec238 + fTemp175;
			float fTemp186 = 1.4142135f * fTemp185 + fTemp180 + fTemp184;
			float fTemp187 = fRec243[1] + fConst97 * (fRec9[0] - (fTemp186 + fRec244[1]));
			fRec243[0] = fConst99 * fTemp187 - fRec243[1];
			float fTemp188 = fRec244[1] + fConst100 * fTemp187;
			fRec244[0] = 2.0f * fTemp188 - fRec244[1];
			float fRec245 = fConst101 * fTemp187;
			float fRec246 = fTemp188;
			float fTemp189 = fRec9[0] - (1.4142135f * (fRec245 + fTemp185) + fTemp180 + fRec246 + fTemp184);
			float fTemp190 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp189)));
			int iTemp191 = (fTemp190 > fSlow17) + (fTemp190 > fSlow1);
			float fTemp192 = std::max<float>(0.0f, ((iTemp191 == 0) ? 0.0f : ((iTemp191 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp190 + 13.5f - fSlow0) : fTemp190 + 13.0f - fSlow0)));
			float fTemp193 = ((-(0.75f * fTemp192) > fRec0[1]) ? fConst125 : fConst124);
			fRec0[0] = fRec0[1] * fTemp193 - 0.75f * fTemp192 * (1.0f - fTemp193);
			float fTemp194 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec0[0]))) + 1.5f)))));
			fVbargraph18 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp194)));
			float fTemp195 = fRec248[1] + fConst97 * (fRec239 - fRec249[1]);
			fRec248[0] = fConst99 * fTemp195 - fRec248[1];
			float fTemp196 = fRec249[1] + fConst100 * fTemp195;
			fRec249[0] = 2.0f * fTemp196 - fRec249[1];
			float fRec250 = fTemp196;
			float fTemp197 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec250)));
			int iTemp198 = (fTemp197 > fSlow1) + (fTemp197 > fSlow19);
			float fTemp199 = std::max<float>(0.0f, ((iTemp198 == 0) ? 0.0f : ((iTemp198 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp197 + 12.5f - fSlow0) : fTemp197 + 12.0f - fSlow0)));
			float fTemp200 = ((-(0.75f * fTemp199) > fRec247[1]) ? fConst125 : fConst126);
			fRec247[0] = fRec247[1] * fTemp200 - 0.75f * fTemp199 * (1.0f - fTemp200);
			float fTemp201 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec247[0]))) + 1.5f)))));
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp201)));
			float fTemp202 = fRec255[1] + fConst87 * (fRec222 - fRec256[1]);
			fRec255[0] = fConst89 * fTemp202 - fRec255[1];
			float fTemp203 = fRec256[1] + fConst90 * fTemp202;
			fRec256[0] = 2.0f * fTemp203 - fRec256[1];
			float fRec257 = fTemp203;
			float fTemp204 = fRec252[1] + fConst97 * (fRec257 - fRec253[1]);
			fRec252[0] = fConst99 * fTemp204 - fRec252[1];
			float fTemp205 = fRec253[1] + fConst100 * fTemp204;
			fRec253[0] = 2.0f * fTemp205 - fRec253[1];
			float fRec254 = fConst101 * fTemp204;
			float fTemp206 = 2.828427f * fRec254;
			float fTemp207 = fRec258[1] + fConst92 * (fRec257 - (fTemp206 + fRec259[1]));
			fRec258[0] = fConst94 * fTemp207 - fRec258[1];
			float fTemp208 = fRec259[1] + fConst95 * fTemp207;
			fRec259[0] = 2.0f * fTemp208 - fRec259[1];
			float fRec260 = fConst96 * fTemp207;
			float fRec261 = fTemp208;
			float fTemp209 = fRec261 + fTemp206 + 1.4142135f * fRec260;
			float fTemp210 = fRec262[1] + fConst92 * (fRec257 - (fTemp209 + fRec263[1]));
			fRec262[0] = fConst94 * fTemp210 - fRec262[1];
			float fTemp211 = fRec263[1] + fConst95 * fTemp210;
			fRec263[0] = 2.0f * fTemp211 - fRec263[1];
			float fRec264 = fConst96 * fTemp210;
			float fRec265 = fTemp211;
			float fTemp212 = fRec257 - (1.4142135f * (fRec260 + fRec264) + fRec265 + fRec261 + fTemp206);
			float fTemp213 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp212)));
			int iTemp214 = (fTemp213 > fSlow1) + (fTemp213 > fSlow19);
			float fTemp215 = std::max<float>(0.0f, ((iTemp214 == 0) ? 0.0f : ((iTemp214 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp213 + 12.5f - fSlow0) : fTemp213 + 12.0f - fSlow0)));
			float fTemp216 = ((-(0.75f * fTemp215) > fRec251[1]) ? fConst125 : fConst127);
			fRec251[0] = fRec251[1] * fTemp216 - 0.75f * fTemp215 * (1.0f - fTemp216);
			float fTemp217 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec251[0]))) + 1.5f)))));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp217)));
			float fTemp218 = fRec267[1] + fConst92 * (fRec261 - fRec268[1]);
			fRec267[0] = fConst94 * fTemp218 - fRec267[1];
			float fTemp219 = fRec268[1] + fConst95 * fTemp218;
			fRec268[0] = 2.0f * fTemp219 - fRec268[1];
			float fRec269 = fTemp219;
			float fTemp220 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec269)));
			int iTemp221 = (fTemp220 > fSlow19) + (fTemp220 > fSlow20);
			float fTemp222 = std::max<float>(0.0f, ((iTemp221 == 0) ? 0.0f : ((iTemp221 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp220 + 11.5f - fSlow0) : fTemp220 + 11.0f - fSlow0)));
			float fTemp223 = ((-(0.75f * fTemp222) > fRec266[1]) ? fConst128 : fConst66);
			fRec266[0] = fRec266[1] * fTemp223 - 0.75f * fTemp222 * (1.0f - fTemp223);
			float fTemp224 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec266[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp224)));
			float fTemp225 = fRec285[1] + fConst67 * (fRec8 - fRec286[1]);
			fRec285[0] = fConst69 * fTemp225 - fRec285[1];
			float fTemp226 = fRec286[1] + fConst70 * fTemp225;
			fRec286[0] = 2.0f * fTemp226 - fRec286[1];
			float fRec287 = fTemp226;
			float fTemp227 = fRec282[1] + fConst87 * (fRec287 - fRec283[1]);
			fRec282[0] = fConst89 * fTemp227 - fRec282[1];
			float fTemp228 = fRec283[1] + fConst90 * fTemp227;
			fRec283[0] = 2.0f * fTemp228 - fRec283[1];
			float fRec284 = fConst91 * fTemp227;
			float fTemp229 = 2.828427f * fRec284;
			float fTemp230 = fRec279[1] + fConst92 * (fRec287 - (fTemp229 + fRec280[1]));
			fRec279[0] = fConst94 * fTemp230 - fRec279[1];
			float fTemp231 = fRec280[1] + fConst95 * fTemp230;
			fRec280[0] = 2.0f * fTemp231 - fRec280[1];
			float fRec281 = fConst96 * fTemp230;
			float fTemp232 = fRec284 + fRec281;
			float fTemp233 = 2.828427f * fTemp232;
			float fTemp234 = fRec288[1] + fConst97 * (fRec287 - (fTemp233 + fRec289[1]));
			fRec288[0] = fConst99 * fTemp234 - fRec288[1];
			float fTemp235 = fRec289[1] + fConst100 * fTemp234;
			fRec289[0] = 2.0f * fTemp235 - fRec289[1];
			float fRec290 = fConst101 * fTemp234;
			float fTemp236 = fRec290 + fTemp232;
			float fTemp237 = 2.828427f * fTemp236;
			float fTemp238 = fRec275[1] + fConst72 * (fRec287 - (fTemp237 + fRec276[1]));
			fRec275[0] = fConst74 * fTemp238 - fRec275[1];
			float fTemp239 = fRec276[1] + fConst75 * fTemp238;
			fRec276[0] = 2.0f * fTemp239 - fRec276[1];
			float fRec277 = fConst76 * fTemp238;
			float fRec278 = fTemp239;
			float fTemp240 = fTemp237 + fRec278 + 1.4142135f * fRec277;
			float fTemp241 = fRec271[1] + fConst72 * (fRec287 - (fTemp240 + fRec272[1]));
			fRec271[0] = fConst74 * fTemp241 - fRec271[1];
			float fTemp242 = fRec272[1] + fConst75 * fTemp241;
			fRec272[0] = 2.0f * fTemp242 - fRec272[1];
			float fRec273 = fConst76 * fTemp241;
			float fRec274 = fTemp242;
			float fTemp243 = fRec278 + fRec274;
			float fTemp244 = fRec277 + fRec273;
			float fTemp245 = 1.4142135f * fTemp244;
			float fTemp246 = fTemp245 + fTemp237 + fTemp243;
			float fTemp247 = fRec295[1] + fConst77 * (fRec287 - (fTemp246 + fRec296[1]));
			fRec295[0] = fConst79 * fTemp247 - fRec295[1];
			float fTemp248 = fRec296[1] + fConst80 * fTemp247;
			fRec296[0] = 2.0f * fTemp248 - fRec296[1];
			float fRec297 = fConst81 * fTemp247;
			float fTemp249 = 2.828427f * (fRec297 + fTemp236);
			float fTemp250 = fTemp245 + fTemp243 + fTemp249;
			float fTemp251 = fRec291[1] + fConst82 * (fRec287 - (fTemp250 + fRec292[1]));
			fRec291[0] = fConst84 * fTemp251 - fRec291[1];
			float fTemp252 = fRec292[1] + fConst85 * fTemp251;
			fRec292[0] = 2.0f * fTemp252 - fRec292[1];
			float fRec293 = fConst86 * fTemp251;
			float fRec294 = fTemp252;
			float fTemp253 = fRec294 + fTemp243;
			float fTemp254 = fRec293 + fTemp244;
			float fTemp255 = 1.4142135f * fTemp254 + fTemp249 + fTemp253;
			float fTemp256 = fRec298[1] + fConst82 * (fRec287 - (fTemp255 + fRec299[1]));
			fRec298[0] = fConst84 * fTemp256 - fRec298[1];
			float fTemp257 = fRec299[1] + fConst85 * fTemp256;
			fRec299[0] = 2.0f * fTemp257 - fRec299[1];
			float fRec300 = fConst86 * fTemp256;
			float fRec301 = fTemp257;
			float fTemp258 = fRec287 - (1.4142135f * (fRec300 + fTemp254) + fTemp249 + fRec301 + fTemp253);
			float fTemp259 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp258)));
			int iTemp260 = (fTemp259 > fSlow22) + (fTemp259 > fSlow21);
			float fTemp261 = std::max<float>(0.0f, ((iTemp260 == 0) ? 0.0f : ((iTemp260 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp259 + 8.5f - fSlow0) : fTemp259 + 8.0f - fSlow0)));
			float fTemp262 = ((-(0.75f * fTemp261) > fRec270[1]) ? fConst129 : fConst125);
			fRec270[0] = fRec270[1] * fTemp262 - 0.75f * fTemp261 * (1.0f - fTemp262);
			float fTemp263 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec270[0]))) + 1.5f)))));
			fVbargraph22 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp263)));
			float fTemp264 = fRec303[1] + fConst82 * (fRec294 - fRec304[1]);
			fRec303[0] = fConst84 * fTemp264 - fRec303[1];
			float fTemp265 = fRec304[1] + fConst85 * fTemp264;
			fRec304[0] = 2.0f * fTemp265 - fRec304[1];
			float fRec305 = fTemp265;
			float fTemp266 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec305)));
			int iTemp267 = (fTemp266 > fSlow21) + (fTemp266 > fSlow23);
			float fTemp268 = std::max<float>(0.0f, ((iTemp267 == 0) ? 0.0f : ((iTemp267 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp266 + 7.5f - fSlow0) : fTemp266 + 7.0f - fSlow0)));
			float fTemp269 = ((-(0.75f * fTemp268) > fRec302[1]) ? fConst130 : fConst128);
			fRec302[0] = fRec302[1] * fTemp269 - 0.75f * fTemp268 * (1.0f - fTemp269);
			float fTemp270 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec302[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp270)));
			float fTemp271 = fRec310[1] + fConst72 * (fRec278 - fRec311[1]);
			fRec310[0] = fConst74 * fTemp271 - fRec310[1];
			float fTemp272 = fRec311[1] + fConst75 * fTemp271;
			fRec311[0] = 2.0f * fTemp272 - fRec311[1];
			float fRec312 = fTemp272;
			float fTemp273 = fRec307[1] + fConst82 * (fRec312 - fRec308[1]);
			fRec307[0] = fConst84 * fTemp273 - fRec307[1];
			float fTemp274 = fRec308[1] + fConst85 * fTemp273;
			fRec308[0] = 2.0f * fTemp274 - fRec308[1];
			float fRec309 = fConst86 * fTemp273;
			float fTemp275 = 2.828427f * fRec309;
			float fTemp276 = fRec313[1] + fConst77 * (fRec312 - (fTemp275 + fRec314[1]));
			fRec313[0] = fConst79 * fTemp276 - fRec313[1];
			float fTemp277 = fRec314[1] + fConst80 * fTemp276;
			fRec314[0] = 2.0f * fTemp277 - fRec314[1];
			float fRec315 = fConst81 * fTemp276;
			float fRec316 = fTemp277;
			float fTemp278 = fRec316 + fTemp275 + 1.4142135f * fRec315;
			float fTemp279 = fRec317[1] + fConst77 * (fRec312 - (fTemp278 + fRec318[1]));
			fRec317[0] = fConst79 * fTemp279 - fRec317[1];
			float fTemp280 = fRec318[1] + fConst80 * fTemp279;
			fRec318[0] = 2.0f * fTemp280 - fRec318[1];
			float fRec319 = fConst81 * fTemp279;
			float fRec320 = fTemp280;
			float fTemp281 = fRec312 - (1.4142135f * (fRec315 + fRec319) + fRec320 + fRec316 + fTemp275);
			float fTemp282 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp281)));
			int iTemp283 = (fTemp282 > fSlow23) + (fTemp282 > fSlow24);
			float fTemp284 = std::max<float>(0.0f, ((iTemp283 == 0) ? 0.0f : ((iTemp283 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp282 + 6.5f - fSlow0) : fTemp282 + 6.0f - fSlow0)));
			float fTemp285 = ((-(0.75f * fTemp284) > fRec306[1]) ? fConst131 : fConst65);
			fRec306[0] = fRec306[1] * fTemp285 - 0.75f * fTemp284 * (1.0f - fTemp285);
			float fTemp286 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec306[0]))) + 1.5f)))));
			fVbargraph24 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp286)));
			float fTemp287 = fRec322[1] + fConst77 * (fRec316 - fRec323[1]);
			fRec322[0] = fConst79 * fTemp287 - fRec322[1];
			float fTemp288 = fRec323[1] + fConst80 * fTemp287;
			fRec323[0] = 2.0f * fTemp288 - fRec323[1];
			float fRec324 = fTemp288;
			float fTemp289 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec324)));
			int iTemp290 = (fTemp289 > fSlow23) + (fTemp289 > fSlow24);
			float fTemp291 = std::max<float>(0.0f, ((iTemp290 == 0) ? 0.0f : ((iTemp290 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp289 + 6.5f - fSlow0) : fTemp289 + 6.0f - fSlow0)));
			float fTemp292 = ((-(0.75f * fTemp291) > fRec321[1]) ? fConst105 : fConst132);
			fRec321[0] = fRec321[1] * fTemp292 - 0.75f * fTemp291 * (1.0f - fTemp292);
			float fTemp293 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec321[0]))) + 1.5f)))));
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp293)));
			float fTemp294 = fRec324 * fTemp293 + fTemp281 * fTemp286 + fRec305 * fTemp270 + fTemp258 * fTemp263 + fRec269 * fTemp224 + fTemp212 * fTemp217 + fRec250 * fTemp201 + fTemp189 * fTemp194;
			fVec44[IOTA0 & 2047] = fTemp294;
			float fTemp295 = std::fabs(fTemp294);
			int iTemp296 = (fTemp295 >= fRec328[1]) | (float(iRec327[1]) >= fConst1);
			iRec327[0] = ((iTemp296) ? 0 : iRec327[1] + 1);
			fRec328[0] = ((iTemp296) ? fTemp295 : fRec328[1]);
			fRec326[0] = fConst107 * fRec328[0] + fConst66 * fRec326[1];
			float fTemp297 = std::fabs(fRec326[0]);
			fRec325[0] = std::max<float>(fTemp297, fConst66 * fRec325[1] + fConst107 * fTemp297);
			fRec329[0] = fSlow25 + fConst135 * fRec329[1];
			output0[i0] = FAUSTFLOAT(fTemp0 * fRec329[0] + (1.0f - fRec329[0]) * std::min<float>(1.0f, 0.70794576f / std::max<float>(fRec325[0], 1.1920929e-07f)) * fVec44[(IOTA0 - iConst133) & 2047]);
			fVec0[1] = fVec0[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fVec1[1] = fVec1[0];
			fRec25[1] = fRec25[0];
			fRec24[1] = fRec24[0];
			fVec2[1] = fVec2[0];
			fRec23[1] = fRec23[0];
			fRec22[1] = fRec22[0];
			fVec3[1] = fVec3[0];
			fVec4[2] = fVec4[1];
			fVec4[1] = fVec4[0];
			for (int j0 = 6; j0 > 0; j0 = j0 - 1) {
				fVec5[j0] = fVec5[j0 - 1];
			}
			for (int j1 = 14; j1 > 0; j1 = j1 - 1) {
				fVec6[j1] = fVec6[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fVec12[1] = fVec12[0];
			fVec13[1] = fVec13[0];
			fVec14[2] = fVec14[1];
			fVec14[1] = fVec14[0];
			for (int j2 = 6; j2 > 0; j2 = j2 - 1) {
				fVec15[j2] = fVec15[j2 - 1];
			}
			for (int j3 = 14; j3 > 0; j3 = j3 - 1) {
				fVec16[j3] = fVec16[j3 - 1];
			}
			fRec10[1] = fRec10[0];
			fRec74[1] = fRec74[0];
			fRec75[1] = fRec75[0];
			fRec69[1] = fRec69[0];
			fRec70[1] = fRec70[0];
			fRec65[1] = fRec65[0];
			fRec66[1] = fRec66[0];
			fRec61[1] = fRec61[0];
			fRec62[1] = fRec62[0];
			fRec57[1] = fRec57[0];
			fRec58[1] = fRec58[0];
			fRec52[1] = fRec52[0];
			fRec53[1] = fRec53[0];
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec43[1] = fRec43[0];
			fRec44[1] = fRec44[0];
			fRec38[1] = fRec38[0];
			fRec39[1] = fRec39[0];
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fVec22[1] = fVec22[0];
			fVec23[1] = fVec23[0];
			fRec32[1] = fRec32[0];
			fRec31[1] = fRec31[0];
			fVec24[1] = fVec24[0];
			fRec30[1] = fRec30[0];
			fRec29[1] = fRec29[0];
			fRec28[1] = fRec28[0];
			fRec27[1] = fRec27[0];
			fVec25[1] = fVec25[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fVec26[1] = fVec26[0];
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec26[1] = fRec26[0];
			fRec92[1] = fRec92[0];
			fRec93[1] = fRec93[0];
			fRec94[1] = fRec94[0];
			fVec27[1] = fVec27[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fVec28[1] = fVec28[0];
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
			fVec29[1] = fVec29[0];
			fVec30[1] = fVec30[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fVec31[1] = fVec31[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fRec126[1] = fRec126[0];
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fVec32[1] = fVec32[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fVec33[1] = fVec33[0];
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
			fVec34[1] = fVec34[0];
			fVec35[1] = fVec35[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			fVec36[1] = fVec36[0];
			fRec133[1] = fRec133[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fRec129[1] = fRec129[0];
			fRec182[1] = fRec182[0];
			fRec183[1] = fRec183[0];
			fRec184[1] = fRec184[0];
			fVec37[1] = fVec37[0];
			fRec181[1] = fRec181[0];
			fRec180[1] = fRec180[0];
			fVec38[1] = fVec38[0];
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
			fVec39[1] = fVec39[0];
			fVec40[1] = fVec40[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			fVec41[1] = fVec41[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec185[1] = fRec185[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fVec42[1] = fVec42[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			fVec43[1] = fVec43[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fRec209[1] = fRec209[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec5[1] = fRec5[0];
			fRec6[1] = fRec6[0];
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fRec226[1] = fRec226[0];
			fRec227[1] = fRec227[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fRec229[1] = fRec229[0];
			fRec230[1] = fRec230[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fRec232[1] = fRec232[0];
			fRec233[1] = fRec233[0];
			fRec240[1] = fRec240[0];
			fRec241[1] = fRec241[0];
			fRec236[1] = fRec236[0];
			fRec237[1] = fRec237[0];
			fRec243[1] = fRec243[0];
			fRec244[1] = fRec244[0];
			fRec0[1] = fRec0[0];
			fRec248[1] = fRec248[0];
			fRec249[1] = fRec249[0];
			fRec247[1] = fRec247[0];
			fRec255[1] = fRec255[0];
			fRec256[1] = fRec256[0];
			fRec252[1] = fRec252[0];
			fRec253[1] = fRec253[0];
			fRec258[1] = fRec258[0];
			fRec259[1] = fRec259[0];
			fRec262[1] = fRec262[0];
			fRec263[1] = fRec263[0];
			fRec251[1] = fRec251[0];
			fRec267[1] = fRec267[0];
			fRec268[1] = fRec268[0];
			fRec266[1] = fRec266[0];
			fRec285[1] = fRec285[0];
			fRec286[1] = fRec286[0];
			fRec282[1] = fRec282[0];
			fRec283[1] = fRec283[0];
			fRec279[1] = fRec279[0];
			fRec280[1] = fRec280[0];
			fRec288[1] = fRec288[0];
			fRec289[1] = fRec289[0];
			fRec275[1] = fRec275[0];
			fRec276[1] = fRec276[0];
			fRec271[1] = fRec271[0];
			fRec272[1] = fRec272[0];
			fRec295[1] = fRec295[0];
			fRec296[1] = fRec296[0];
			fRec291[1] = fRec291[0];
			fRec292[1] = fRec292[0];
			fRec298[1] = fRec298[0];
			fRec299[1] = fRec299[0];
			fRec270[1] = fRec270[0];
			fRec303[1] = fRec303[0];
			fRec304[1] = fRec304[0];
			fRec302[1] = fRec302[0];
			fRec310[1] = fRec310[0];
			fRec311[1] = fRec311[0];
			fRec307[1] = fRec307[0];
			fRec308[1] = fRec308[0];
			fRec313[1] = fRec313[0];
			fRec314[1] = fRec314[0];
			fRec317[1] = fRec317[0];
			fRec318[1] = fRec318[0];
			fRec306[1] = fRec306[0];
			fRec322[1] = fRec322[0];
			fRec323[1] = fRec323[0];
			fRec321[1] = fRec321[0];
			iRec327[1] = iRec327[0];
			fRec328[1] = fRec328[0];
			fRec326[1] = fRec326[0];
			fRec325[1] = fRec325[0];
			fRec329[1] = fRec329[0];
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
        case kParameter_leveler_target:
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
        case kParameter_leveler_scale:
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
        case kParameter_mb_strength:
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
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_sbmb_strength:
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
        case kParameter_vad_ext:
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
        
        case kParameter_sb_expander:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
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
        case kParameter_leveler_gain:
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
        case kParameter_mb_comp_gain_0:
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
        case kParameter_mb_comp_gain_1:
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
        case kParameter_mb_comp_gain_2:
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
        case kParameter_mb_comp_gain_3:
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
        case kParameter_mb_comp_gain_4:
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
        case kParameter_mb_comp_gain_5:
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
        case kParameter_mb_comp_gain_6:
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
        case kParameter_mb_comp_gain_7:
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
        
        }
    }

   /* -----------------------------------------------------------------------------------------------------------------
    * Internal data */

    float getParameterValue(const uint32_t index) const override
    {
        switch (index)
        {
        case kParameter_sb_strength:
            return dsp->fVslider6;
        case kParameter_sb_target_spectrum_0:
            return dsp->fVslider13;
        case kParameter_sb_target_spectrum_1:
            return dsp->fVslider12;
        case kParameter_sb_target_spectrum_2:
            return dsp->fVslider11;
        case kParameter_sb_target_spectrum_3:
            return dsp->fVslider10;
        case kParameter_sb_target_spectrum_4:
            return dsp->fVslider9;
        case kParameter_sb_target_spectrum_5:
            return dsp->fVslider8;
        case kParameter_sb_target_spectrum_6:
            return dsp->fVslider7;
        case kParameter_sb_target_spectrum_7:
            return dsp->fVslider4;
        case kParameter_bypass:
            return dsp->fCheckbox0;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter_leveler_scale:
            return dsp->fVslider3;
        case kParameter_mb_strength:
            return dsp->fVslider14;
        case kParameter_pre_lowcut:
            return dsp->fVslider1;
        case kParameter_sbmb_strength:
            return dsp->fVslider5;
        case kParameter_vad_ext:
            return dsp->fVslider2;
        case kParameter_sb_expander:
            return dsp->fVbargraph1;
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
            dsp->fVslider6 = value;
            break;
        case kParameter_sb_target_spectrum_0:
            dsp->fVslider13 = value;
            break;
        case kParameter_sb_target_spectrum_1:
            dsp->fVslider12 = value;
            break;
        case kParameter_sb_target_spectrum_2:
            dsp->fVslider11 = value;
            break;
        case kParameter_sb_target_spectrum_3:
            dsp->fVslider10 = value;
            break;
        case kParameter_sb_target_spectrum_4:
            dsp->fVslider9 = value;
            break;
        case kParameter_sb_target_spectrum_5:
            dsp->fVslider8 = value;
            break;
        case kParameter_sb_target_spectrum_6:
            dsp->fVslider7 = value;
            break;
        case kParameter_sb_target_spectrum_7:
            dsp->fVslider4 = value;
            break;
        case kParameter_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider0 = value;
            break;
        case kParameter_leveler_scale:
            dsp->fVslider3 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider14 = value;
            break;
        case kParameter_pre_lowcut:
            dsp->fVslider1 = value;
            break;
        case kParameter_sbmb_strength:
            dsp->fVslider5 = value;
            break;
        case kParameter_vad_ext:
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
        float params[16] = {
            dsp->fVslider6,
            dsp->fVslider13,
            dsp->fVslider12,
            dsp->fVslider11,
            dsp->fVslider10,
            dsp->fVslider9,
            dsp->fVslider8,
            dsp->fVslider7,
            dsp->fVslider4,
            dsp->fCheckbox0,
            dsp->fVslider0,
            dsp->fVslider3,
            dsp->fVslider14,
            dsp->fVslider1,
            dsp->fVslider5,
            dsp->fVslider2,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider6 = params[0];
        dsp->fVslider13 = params[1];
        dsp->fVslider12 = params[2];
        dsp->fVslider11 = params[3];
        dsp->fVslider10 = params[4];
        dsp->fVslider9 = params[5];
        dsp->fVslider8 = params[6];
        dsp->fVslider7 = params[7];
        dsp->fVslider4 = params[8];
        dsp->fCheckbox0 = params[9];
        dsp->fVslider0 = params[10];
        dsp->fVslider3 = params[11];
        dsp->fVslider14 = params[12];
        dsp->fVslider1 = params[13];
        dsp->fVslider5 = params[14];
        dsp->fVslider2 = params[15];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO