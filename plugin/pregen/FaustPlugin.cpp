
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
// Version: 0.15
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
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fVec0[2];
	FAUSTFLOAT fVslider1;
	float fConst9;
	float fRec65[2];
	float fConst10;
	float fConst11;
	float fRec64[2];
	float fRec63[3];
	float fConst12;
	float fConst13;
	FAUSTFLOAT fVslider2;
	float fConst14;
	float fConst15;
	int iConst16;
	float fConst17;
	float fConst18;
	float fConst19;
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fVec1[2];
	float fConst25;
	float fConst26;
	float fConst27;
	float fRec77[2];
	float fRec76[2];
	float fConst28;
	float fConst29;
	float fConst30;
	float fConst31;
	float fConst32;
	float fVec2[2];
	float fConst33;
	float fRec75[2];
	float fRec74[2];
	float fVec3[2];
	float fVec4[3];
	int iConst34;
	int iConst35;
	float fVec5[5];
	int iConst36;
	int iConst37;
	float fVec6[12];
	int iConst38;
	int iConst39;
	int IOTA0;
	float fVec7[32];
	int iConst40;
	int iConst41;
	float fVec8[64];
	int iConst42;
	int iConst43;
	float fVec9[128];
	int iConst44;
	int iConst45;
	float fVec10[256];
	int iConst46;
	int iConst47;
	float fVec11[512];
	int iConst48;
	float fConst49;
	float fRec69[2];
	float fRec70[2];
	float fRec67[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVbargraph0;
	float fRec66[2];
	float fVec12[2];
	float fConst50;
	float fConst51;
	float fConst52;
	float fRec58[2];
	float fConst53;
	float fRec59[2];
	float fConst54;
	float fRec53[2];
	float fRec54[2];
	float fConst55;
	float fConst56;
	float fConst57;
	float fRec49[2];
	float fConst58;
	float fRec50[2];
	float fConst59;
	float fConst60;
	float fConst61;
	float fConst62;
	float fRec45[2];
	float fConst63;
	float fRec46[2];
	float fConst64;
	float fConst65;
	float fConst66;
	float fConst67;
	float fRec41[2];
	float fConst68;
	float fRec42[2];
	float fConst69;
	float fConst70;
	float fConst71;
	float fConst72;
	float fRec36[2];
	float fConst73;
	float fRec37[2];
	float fConst74;
	float fRec31[2];
	float fRec32[2];
	float fConst75;
	float fConst76;
	float fConst77;
	float fRec27[2];
	float fConst78;
	float fRec28[2];
	float fConst79;
	float fConst80;
	float fConst81;
	float fConst82;
	float fRec22[2];
	float fConst83;
	float fRec23[2];
	float fConst84;
	float fRec17[2];
	float fRec18[2];
	float fVec13[2];
	float fConst85;
	float fConst86;
	float fConst87;
	float fVec14[2];
	float fRec16[2];
	float fRec15[2];
	float fVec15[2];
	float fRec14[2];
	float fRec13[2];
	float fConst88;
	float fConst89;
	float fRec12[2];
	float fConst90;
	float fRec11[2];
	float fConst91;
	float fConst92;
	float fVec16[2];
	float fConst93;
	float fRec83[2];
	float fRec82[2];
	float fVec17[2];
	float fRec81[2];
	float fRec80[2];
	float fRec79[2];
	float fRec78[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fVslider4;
	float fConst94;
	float fRec10[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVbargraph2;
	float fConst95;
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
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fVslider7;
	float fConst96;
	float fRec84[2];
	FAUSTFLOAT fVbargraph4;
	float fConst97;
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
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fVslider8;
	float fConst98;
	float fRec94[2];
	FAUSTFLOAT fVbargraph6;
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
	FAUSTFLOAT fVbargraph7;
	FAUSTFLOAT fVslider9;
	float fRec118[2];
	FAUSTFLOAT fVbargraph8;
	float fConst99;
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
	FAUSTFLOAT fVbargraph9;
	FAUSTFLOAT fVslider10;
	float fConst100;
	float fRec128[2];
	FAUSTFLOAT fVbargraph10;
	float fConst101;
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
	FAUSTFLOAT fVbargraph11;
	FAUSTFLOAT fVslider11;
	float fConst102;
	float fRec174[2];
	FAUSTFLOAT fVbargraph12;
	float fConst103;
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
	FAUSTFLOAT fVbargraph13;
	FAUSTFLOAT fVslider12;
	float fConst104;
	float fRec184[2];
	FAUSTFLOAT fVbargraph14;
	float fConst105;
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
	FAUSTFLOAT fVbargraph15;
	FAUSTFLOAT fVslider13;
	float fConst106;
	float fRec208[2];
	FAUSTFLOAT fVbargraph16;
	float fRec9[3];
	float fRec5[2];
	float fRec6[2];
	float fRec1[2];
	float fRec2[2];
	float fRec225[2];
	float fRec226[2];
	float fRec222[2];
	float fRec223[2];
	float fRec228[2];
	float fRec229[2];
	float fRec218[2];
	float fRec219[2];
	float fRec231[2];
	float fRec232[2];
	float fRec239[2];
	float fRec240[2];
	float fRec235[2];
	float fRec236[2];
	float fRec242[2];
	float fRec243[2];
	float fConst107;
	float fConst108;
	float fRec0[2];
	FAUSTFLOAT fVslider14;
	FAUSTFLOAT fVbargraph17;
	float fRec247[2];
	float fRec248[2];
	float fConst109;
	float fRec246[2];
	FAUSTFLOAT fVbargraph18;
	float fRec254[2];
	float fRec255[2];
	float fRec251[2];
	float fRec252[2];
	float fRec257[2];
	float fRec258[2];
	float fRec261[2];
	float fRec262[2];
	float fConst110;
	float fRec250[2];
	FAUSTFLOAT fVbargraph19;
	float fRec266[2];
	float fRec267[2];
	float fConst111;
	float fRec265[2];
	FAUSTFLOAT fVbargraph20;
	float fRec284[2];
	float fRec285[2];
	float fRec281[2];
	float fRec282[2];
	float fRec278[2];
	float fRec279[2];
	float fRec287[2];
	float fRec288[2];
	float fRec274[2];
	float fRec275[2];
	float fRec270[2];
	float fRec271[2];
	float fRec294[2];
	float fRec295[2];
	float fRec290[2];
	float fRec291[2];
	float fRec297[2];
	float fRec298[2];
	float fConst112;
	float fRec269[2];
	FAUSTFLOAT fVbargraph21;
	float fRec302[2];
	float fRec303[2];
	float fConst113;
	float fRec301[2];
	FAUSTFLOAT fVbargraph22;
	float fRec309[2];
	float fRec310[2];
	float fRec306[2];
	float fRec307[2];
	float fRec312[2];
	float fRec313[2];
	float fRec316[2];
	float fRec317[2];
	float fConst114;
	float fRec305[2];
	FAUSTFLOAT fVbargraph23;
	float fRec321[2];
	float fRec322[2];
	float fConst115;
	float fRec320[2];
	FAUSTFLOAT fVbargraph24;
	float fVec35[1024];
	int iConst116;
	int iRec326[2];
	float fRec327[2];
	float fConst117;
	float fRec325[2];
	float fRec324[2];
	float fConst118;
	float fConst119;
	FAUSTFLOAT fCheckbox0;
	float fRec328[2];
	
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
		m->declare("compile_options", "-a /tmp/tmp2e0_60du.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("version", "0.15");
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
		fConst3 = std::tan(69115.04f / fConst0);
		fConst4 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst3));
		fConst5 = 1.0f / fConst3;
		fConst6 = (fConst5 + -1.0f) / fConst3 + 1.0f;
		fConst7 = (fConst5 + 1.0f) / fConst3 + 1.0f;
		fConst8 = 1.0f / fConst7;
		fConst9 = 3.1415927f / fConst0;
		fConst10 = 1.0f - fConst5;
		fConst11 = 1.0f / (fConst5 + 1.0f);
		fConst12 = 0.125f * fConst0;
		fConst13 = 1.1312305e-06f * fConst0;
		fConst14 = 0.01f * fConst0;
		fConst15 = std::rint(fConst14);
		iConst16 = int(std::floor(0.5f * fConst15)) % 2;
		fConst17 = std::tan(5283.415f / fConst0);
		fConst18 = 1.7803667f * fConst17;
		fConst19 = mydsp_faustpower2_f(fConst17);
		fConst20 = fConst19 + fConst18 + 1.5848527f;
		fConst21 = 2.0f * (fConst19 + -1.0f);
		fConst22 = fConst19 + (1.5848527f - fConst18);
		fConst23 = 1.4142135f * fConst17;
		fConst24 = fConst19 + (1.0f - fConst23);
		fConst25 = fConst19 + -1.5848527f;
		fConst26 = 2.0f * fConst25;
		fConst27 = 1.0f / (fConst19 + fConst23 + 1.0f);
		fConst28 = std::tan(119.806114f / fConst0);
		fConst29 = mydsp_faustpower2_f(fConst28);
		fConst30 = 1.0006541f * (fConst29 + -1.0f);
		fConst31 = 0.50032705f * (fConst29 + 1.0f);
		fConst32 = fConst31 - fConst28;
		fConst33 = 1.0f / (fConst28 + fConst31);
		iConst34 = int(std::floor(fConst15)) % 2;
		iConst35 = int(std::floor(0.25f * fConst15)) % 2;
		iConst36 = iConst34 + 2 * iConst16;
		iConst37 = int(std::floor(0.125f * fConst15)) % 2;
		iConst38 = iConst36 + 4 * iConst35;
		iConst39 = int(std::floor(0.0625f * fConst15)) % 2;
		iConst40 = iConst38 + 8 * iConst37;
		iConst41 = int(std::floor(0.03125f * fConst15)) % 2;
		iConst42 = iConst40 + 16 * iConst39;
		iConst43 = int(std::floor(0.015625f * fConst15)) % 2;
		iConst44 = iConst42 + 32 * iConst41;
		iConst45 = int(std::floor(0.0078125f * fConst15)) % 2;
		iConst46 = iConst44 + 64 * iConst43;
		iConst47 = int(std::floor(0.00390625f * fConst15)) % 2;
		iConst48 = iConst46 + 128 * iConst45;
		fConst49 = 1.0f / std::max<float>(fConst15, 1.1920929e-07f);
		fConst50 = std::tan(2513.2742f / fConst0);
		fConst51 = fConst50 * (fConst50 + 1.4142135f) + 1.0f;
		fConst52 = 2.0f / fConst51;
		fConst53 = fConst50 / fConst51;
		fConst54 = 1.0f / fConst51;
		fConst55 = std::tan(628.31854f / fConst0);
		fConst56 = fConst55 * (fConst55 + 1.4142135f) + 1.0f;
		fConst57 = 2.0f / fConst56;
		fConst58 = fConst55 / fConst56;
		fConst59 = 1.0f / fConst56;
		fConst60 = std::tan(314.15927f / fConst0);
		fConst61 = fConst60 * (fConst60 + 1.4142135f) + 1.0f;
		fConst62 = 2.0f / fConst61;
		fConst63 = fConst60 / fConst61;
		fConst64 = 1.0f / fConst61;
		fConst65 = std::tan(1256.6371f / fConst0);
		fConst66 = fConst65 * (fConst65 + 1.4142135f) + 1.0f;
		fConst67 = 2.0f / fConst66;
		fConst68 = fConst65 / fConst66;
		fConst69 = 1.0f / fConst66;
		fConst70 = std::tan(10053.097f / fConst0);
		fConst71 = fConst70 * (fConst70 + 1.4142135f) + 1.0f;
		fConst72 = 2.0f / fConst71;
		fConst73 = fConst70 / fConst71;
		fConst74 = 1.0f / fConst71;
		fConst75 = std::tan(5026.5483f / fConst0);
		fConst76 = fConst75 * (fConst75 + 1.4142135f) + 1.0f;
		fConst77 = 2.0f / fConst76;
		fConst78 = fConst75 / fConst76;
		fConst79 = 1.0f / fConst76;
		fConst80 = std::tan(20106.193f / fConst0);
		fConst81 = fConst80 * (fConst80 + 1.4142135f) + 1.0f;
		fConst82 = 2.0f / fConst81;
		fConst83 = fConst80 / fConst81;
		fConst84 = 1.0f / fConst81;
		fConst85 = 3.9810717f * fConst20;
		fConst86 = 7.9621434f * fConst25;
		fConst87 = 3.9810717f * fConst22;
		fConst88 = std::exp(-(1e+01f / fConst0));
		fConst89 = 1.0f - fConst88;
		fConst90 = 1.0f - fConst2;
		fConst91 = fConst20 / fConst7;
		fConst92 = fConst22 / fConst7;
		fConst93 = 2.0f * (fConst25 / fConst7);
		fConst94 = 1.0f - fConst1;
		fConst95 = std::exp(-(2e+01f / fConst0));
		fConst96 = 1.0f - fConst95;
		fConst97 = std::exp(-(13.333333f / fConst0));
		fConst98 = 1.0f - fConst97;
		fConst99 = std::exp(-(8.0f / fConst0));
		fConst100 = 1.0f - fConst99;
		fConst101 = std::exp(-(6.6666665f / fConst0));
		fConst102 = 1.0f - fConst101;
		fConst103 = std::exp(-(5.714286f / fConst0));
		fConst104 = 1.0f - fConst103;
		fConst105 = std::exp(-(5.0f / fConst0));
		fConst106 = 1.0f - fConst105;
		fConst107 = std::exp(-(5e+02f / fConst0));
		fConst108 = std::exp(-(66.666664f / fConst0));
		fConst109 = std::exp(-(333.33334f / fConst0));
		fConst110 = std::exp(-(2e+02f / fConst0));
		fConst111 = std::exp(-(5e+01f / fConst0));
		fConst112 = std::exp(-(25.0f / fConst0));
		fConst113 = std::exp(-(16.666666f / fConst0));
		fConst114 = std::exp(-(12.5f / fConst0));
		fConst115 = std::exp(-(33.333332f / fConst0));
		iConst116 = int(0.005f * fConst0);
		fConst117 = 1.0f - fConst107;
		fConst118 = 44.1f / fConst0;
		fConst119 = 1.0f - fConst118;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-22.0f);
		fVslider1 = FAUSTFLOAT(42.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
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
			fRec65[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec64[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 3; l3 = l3 + 1) {
			fRec63[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec77[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec76[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fVec2[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec75[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec74[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fVec3[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 3; l11 = l11 + 1) {
			fVec4[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 5; l12 = l12 + 1) {
			fVec5[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 12; l13 = l13 + 1) {
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
			fRec69[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec70[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec67[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec66[l22] = 0.0f;
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
			fRec9[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec5[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec6[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec1[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec2[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec225[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec226[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec222[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec223[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec228[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec229[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec218[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec219[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec231[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec232[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec239[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec240[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec235[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec236[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec242[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec243[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec0[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec247[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec248[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec246[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec254[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec255[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec251[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec252[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec257[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec258[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec261[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec262[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec250[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec266[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec267[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec265[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec284[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec285[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec281[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec282[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec278[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec279[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec287[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec288[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec274[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec275[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec270[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec271[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec294[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec295[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec290[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec291[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec297[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec298[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec269[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec302[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec303[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec301[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec309[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec310[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec306[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec307[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec312[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec313[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec316[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec317[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec305[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec321[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec322[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec320[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 1024; l245 = l245 + 1) {
			fVec35[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			iRec326[l246] = 0;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec327[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec325[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec324[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec328[l250] = 0.0f;
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
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph15, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph15, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph13, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph13, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph11, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph11, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph9, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph7, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph5, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph3, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph3, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph1, "1", "");
		ui_interface->declare(&fVbargraph1, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph1, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph1, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph12, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph10, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph4, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph2, "1", "");
		ui_interface->declare(&fVbargraph2, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph2, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
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
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-22.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph0, "8", "");
		ui_interface->declare(&fVbargraph0, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph0, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph0, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider3, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph24, "2", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph24, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph23, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph22, "2", "");
		ui_interface->declare(&fVbargraph22, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph22, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph21, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph20, "2", "");
		ui_interface->declare(&fVbargraph20, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph20, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph20, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph19, "2", "");
		ui_interface->declare(&fVbargraph19, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph19, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph19, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph18, "2", "");
		ui_interface->declare(&fVbargraph18, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph18, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph17, "2", "");
		ui_interface->declare(&fVbargraph17, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph17, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph17, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVslider14, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider14, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider1, "scale", "log");
		ui_interface->declare(&fVslider1, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider1, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider5, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider2, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
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
		float fSlow9 = 5e-06f * fSlow5 * float(fVslider6) * fSlow8;
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
		float fSlow25 = fConst118 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fVec0[0] = fTemp0;
			fRec65[0] = -(fSlow4 * (fSlow3 * fRec65[1] - fSlow2 * (fTemp0 - fVec0[1])));
			fRec64[0] = -(fConst11 * (fConst10 * fRec64[1] - (fRec65[0] + fRec65[1])));
			fRec63[0] = fRec64[0] - fConst8 * (fConst6 * fRec63[2] + fConst4 * fRec63[1]);
			float fTemp1 = std::tan(fConst9 * std::min<float>(fConst12, fSlow5 * (fConst13 * std::fabs(fRec67[1]) + 0.1316f)));
			float fTemp2 = fTemp1 + 2.0f;
			float fTemp3 = fTemp1 * fTemp2 + 1.0f;
			fVec1[0] = fConst24 * fRec76[1] - fConst22 * fRec9[2];
			fRec77[0] = fConst27 * (fConst26 * fRec9[2] - (fVec1[1] + fConst21 * fRec77[1]) + fConst20 * fRec9[1]);
			fRec76[0] = fRec77[0];
			fVec2[0] = 0.50032705f * fRec76[1] - fConst32 * fRec74[1];
			fRec75[0] = fConst33 * (fVec2[1] - fConst30 * fRec75[1] - 1.0006541f * fRec76[1] + 0.50032705f * fRec76[0]);
			fRec74[0] = fRec75[0];
			float fTemp4 = mydsp_faustpower2_f(fRec74[0]);
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
			float fTemp12 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow0 + fRec66[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst49 * (((iConst47) ? 0.86000985f * fVec11[(IOTA0 - iConst48) & 511] : 0.0f) + ((iConst45) ? 0.86000985f * fVec10[(IOTA0 - iConst46) & 255] : 0.0f) + ((iConst43) ? 0.86000985f * fVec9[(IOTA0 - iConst44) & 127] : 0.0f) + ((iConst41) ? 0.86000985f * fVec8[(IOTA0 - iConst42) & 63] : 0.0f) + ((iConst39) ? 0.86000985f * fVec7[(IOTA0 - iConst40) & 31] : 0.0f) + ((iConst37) ? 0.86000985f * fVec6[iConst38] : 0.0f) + ((iConst35) ? 0.86000985f * fVec5[iConst36] : 0.0f) + ((iConst34) ? 0.86000985f * fTemp4 : 0.0f) + ((iConst16) ? 0.86000985f * fVec4[iConst34] : 0.0f))))))) - (fRec69[1] * fTemp2 + fRec70[1]);
			float fTemp13 = fTemp1 * fTemp12 / fTemp3;
			fRec69[0] = fRec69[1] + 2.0f * fTemp13;
			float fTemp14 = fRec69[1] + fTemp13;
			float fTemp15 = fTemp1 * fTemp14;
			fRec70[0] = fRec70[1] + 2.0f * fTemp15;
			float fRec71 = fTemp14;
			float fRec72 = fTemp12 / fTemp3;
			float fRec73 = fRec70[1] + fTemp15;
			fRec67[0] = fRec71;
			float fRec68 = fRec73;
			fVbargraph0 = FAUSTFLOAT(fSlow6 * fRec68);
			fRec66[0] = fVbargraph0;
			float fTemp16 = std::pow(1e+01f, 0.05f * fRec66[0]) * (fRec63[2] + fRec63[0] + 2.0f * fRec63[1]);
			fVec12[0] = fTemp16;
			float fTemp17 = fConst8 * fTemp16;
			float fTemp18 = fRec58[1] + fConst50 * (fTemp17 - fRec59[1]);
			fRec58[0] = fConst52 * fTemp18 - fRec58[1];
			float fTemp19 = fRec59[1] + fConst53 * fTemp18;
			fRec59[0] = 2.0f * fTemp19 - fRec59[1];
			float fRec60 = fTemp17;
			float fRec61 = fConst54 * fTemp18;
			float fRec62 = fTemp19;
			float fTemp20 = fRec62 + 1.4142135f * fRec61;
			float fTemp21 = fRec53[1] + fConst50 * (fRec60 - (fTemp20 + fRec54[1]));
			fRec53[0] = fConst52 * fTemp21 - fRec53[1];
			float fTemp22 = fRec54[1] + fConst53 * fTemp21;
			fRec54[0] = 2.0f * fTemp22 - fRec54[1];
			float fRec55 = fRec60 - fTemp20;
			float fRec56 = fConst54 * fTemp21;
			float fRec57 = fTemp22;
			float fTemp23 = fRec57 + 1.4142135f * fRec56;
			float fTemp24 = fRec49[1] + fConst55 * (fRec55 - (fTemp23 + fRec50[1]));
			fRec49[0] = fConst57 * fTemp24 - fRec49[1];
			float fTemp25 = fRec50[1] + fConst58 * fTemp24;
			fRec50[0] = 2.0f * fTemp25 - fRec50[1];
			float fRec51 = fRec55 - fTemp23;
			float fRec52 = fConst59 * fTemp24;
			float fTemp26 = 2.828427f * fRec52;
			float fTemp27 = fRec45[1] + fConst60 * (fRec51 - (fTemp26 + fRec46[1]));
			fRec45[0] = fConst62 * fTemp27 - fRec45[1];
			float fTemp28 = fRec46[1] + fConst63 * fTemp27;
			fRec46[0] = 2.0f * fTemp28 - fRec46[1];
			float fRec47 = fRec51 - fTemp26;
			float fRec48 = fConst64 * fTemp27;
			float fTemp29 = 2.828427f * fRec48;
			float fTemp30 = fRec41[1] + fConst65 * (fRec47 - (fTemp29 + fRec42[1]));
			fRec41[0] = fConst67 * fTemp30 - fRec41[1];
			float fTemp31 = fRec42[1] + fConst68 * fTemp30;
			fRec42[0] = 2.0f * fTemp31 - fRec42[1];
			float fRec43 = fRec47 - fTemp29;
			float fRec44 = fConst69 * fTemp30;
			float fTemp32 = 2.828427f * fRec44;
			float fTemp33 = fRec36[1] + fConst70 * (fRec43 - (fTemp32 + fRec37[1]));
			fRec36[0] = fConst72 * fTemp33 - fRec36[1];
			float fTemp34 = fRec37[1] + fConst73 * fTemp33;
			fRec37[0] = 2.0f * fTemp34 - fRec37[1];
			float fRec38 = fRec43 - fTemp32;
			float fRec39 = fConst74 * fTemp33;
			float fRec40 = fTemp34;
			float fTemp35 = fRec40 + 1.4142135f * fRec39;
			float fTemp36 = fRec31[1] + fConst70 * (fRec38 - (fTemp35 + fRec32[1]));
			fRec31[0] = fConst72 * fTemp36 - fRec31[1];
			float fTemp37 = fRec32[1] + fConst73 * fTemp36;
			fRec32[0] = 2.0f * fTemp37 - fRec32[1];
			float fRec33 = fRec38 - fTemp35;
			float fRec34 = fConst74 * fTemp36;
			float fRec35 = fTemp37;
			float fTemp38 = fRec35 + 1.4142135f * fRec34;
			float fTemp39 = fRec27[1] + fConst75 * (fRec33 - (fTemp38 + fRec28[1]));
			fRec27[0] = fConst77 * fTemp39 - fRec27[1];
			float fTemp40 = fRec28[1] + fConst78 * fTemp39;
			fRec28[0] = 2.0f * fTemp40 - fRec28[1];
			float fRec29 = fRec33 - fTemp38;
			float fRec30 = fConst79 * fTemp39;
			float fTemp41 = 2.828427f * fRec30;
			float fTemp42 = fRec22[1] + fConst80 * (fRec29 - (fTemp41 + fRec23[1]));
			fRec22[0] = fConst82 * fTemp42 - fRec22[1];
			float fTemp43 = fRec23[1] + fConst83 * fTemp42;
			fRec23[0] = 2.0f * fTemp43 - fRec23[1];
			float fRec24 = fRec29 - fTemp41;
			float fRec25 = fConst84 * fTemp42;
			float fRec26 = fTemp43;
			float fTemp44 = fRec26 + 1.4142135f * fRec25;
			float fTemp45 = fRec17[1] + fConst80 * (fRec24 - (fTemp44 + fRec18[1]));
			fRec17[0] = fConst82 * fTemp45 - fRec17[1];
			float fTemp46 = fRec18[1] + fConst83 * fTemp45;
			fRec18[0] = 2.0f * fTemp46 - fRec18[1];
			float fRec19 = fRec24 - fTemp44;
			float fRec20 = fConst84 * fTemp45;
			float fRec21 = fTemp46;
			float fTemp47 = fRec19 - (fRec21 + 1.4142135f * fRec20);
			fVec13[0] = fTemp47;
			fVec14[0] = fConst87 * fVec13[1] - fConst24 * fRec15[1];
			fRec16[0] = fConst27 * (fVec14[1] - fConst21 * fRec16[1] + fConst86 * fVec13[1] + fConst85 * fTemp47);
			fRec15[0] = fRec16[0];
			fVec15[0] = 0.50032705f * fRec15[1] - fConst32 * fRec13[1];
			fRec14[0] = fConst33 * (fVec15[1] - fConst30 * fRec14[1] - 1.0006541f * fRec15[1] + 0.50032705f * fRec15[0]);
			fRec13[0] = fRec14[0];
			float fTemp48 = std::fabs(0.92736715f * fRec13[0]);
			fRec12[0] = std::max<float>(fTemp48, fConst88 * fRec12[1] + fConst89 * fTemp48);
			fRec11[0] = fConst90 * fRec12[0] + fConst2 * fRec11[1];
			fVec16[0] = fConst24 * fRec82[1] - fConst92 * fVec12[1];
			fRec83[0] = fConst27 * (fConst93 * fVec12[1] - (fVec16[1] + fConst21 * fRec83[1]) + fConst91 * fTemp16);
			fRec82[0] = fRec83[0];
			fVec17[0] = 0.50032705f * fRec82[1] - fConst32 * fRec80[1];
			fRec81[0] = fConst33 * (fVec17[1] - fConst30 * fRec81[1] - 1.0006541f * fRec82[1] + 0.50032705f * fRec82[0]);
			fRec80[0] = fRec81[0];
			float fTemp49 = std::fabs(0.92736715f * fRec80[0]);
			fRec79[0] = std::max<float>(fTemp49, fConst88 * fRec79[1] + fConst89 * fTemp49);
			fRec78[0] = fConst90 * fRec79[0] + fConst2 * fRec78[1];
			float fTemp50 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec78[0])));
			float fTemp51 = 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec11[0]))));
			fVbargraph1 = FAUSTFLOAT(-fTemp51);
			fRec10[0] = fConst94 * (fSlow7 - -fTemp51) + fConst1 * fRec10[1];
			float fTemp52 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec10[0])));
			fVbargraph2 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp52)));
			float fTemp53 = fRec91[1] + fConst80 * (fRec26 - fRec92[1]);
			fRec91[0] = fConst82 * fTemp53 - fRec91[1];
			float fTemp54 = fRec92[1] + fConst83 * fTemp53;
			fRec92[0] = 2.0f * fTemp54 - fRec92[1];
			fRec93[0] = fTemp54;
			fVec18[0] = fConst87 * fRec93[1] - fConst24 * fRec89[1];
			fRec90[0] = fConst27 * (fVec18[1] - fConst21 * fRec90[1] + fConst86 * fRec93[1] + fConst85 * fRec93[0]);
			fRec89[0] = fRec90[0];
			fVec19[0] = 0.50032705f * fRec89[1] - fConst32 * fRec87[1];
			fRec88[0] = fConst33 * (fVec19[1] - fConst30 * fRec88[1] - 1.0006541f * fRec89[1] + 0.50032705f * fRec89[0]);
			fRec87[0] = fRec88[0];
			float fTemp55 = std::fabs(0.92736715f * fRec87[0]);
			fRec86[0] = std::max<float>(fTemp55, fConst88 * fRec86[1] + fConst89 * fTemp55);
			fRec85[0] = fConst90 * fRec86[0] + fConst2 * fRec85[1];
			float fTemp56 = 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec85[0]))));
			fVbargraph3 = FAUSTFLOAT(-fTemp56);
			fRec84[0] = fConst96 * (fSlow10 - -fTemp56) + fConst95 * fRec84[1];
			float fTemp57 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec84[0])));
			fVbargraph4 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp57)));
			float fTemp58 = fRec115[1] + fConst70 * (fRec40 - fRec116[1]);
			fRec115[0] = fConst72 * fTemp58 - fRec115[1];
			float fTemp59 = fRec116[1] + fConst73 * fTemp58;
			fRec116[0] = 2.0f * fTemp59 - fRec116[1];
			float fRec117 = fTemp59;
			float fTemp60 = fRec111[1] + fConst80 * (fRec117 - fRec112[1]);
			fRec111[0] = fConst82 * fTemp60 - fRec111[1];
			float fTemp61 = fRec112[1] + fConst83 * fTemp60;
			fRec112[0] = 2.0f * fTemp61 - fRec112[1];
			float fRec113 = fRec117;
			float fRec114 = fConst84 * fTemp60;
			float fTemp62 = 2.828427f * fRec114;
			float fTemp63 = fRec106[1] + fConst75 * (fRec113 - (fTemp62 + fRec107[1]));
			fRec106[0] = fConst77 * fTemp63 - fRec106[1];
			float fTemp64 = fRec107[1] + fConst78 * fTemp63;
			fRec107[0] = 2.0f * fTemp64 - fRec107[1];
			float fRec108 = fRec113 - fTemp62;
			float fRec109 = fConst79 * fTemp63;
			float fRec110 = fTemp64;
			float fTemp65 = fRec110 + 1.4142135f * fRec109;
			float fTemp66 = fRec101[1] + fConst75 * (fRec108 - (fTemp65 + fRec102[1]));
			fRec101[0] = fConst77 * fTemp66 - fRec101[1];
			float fTemp67 = fRec102[1] + fConst78 * fTemp66;
			fRec102[0] = 2.0f * fTemp67 - fRec102[1];
			float fRec103 = fRec108 - fTemp65;
			float fRec104 = fConst79 * fTemp66;
			float fRec105 = fTemp67;
			float fTemp68 = fRec103 - (fRec105 + 1.4142135f * fRec104);
			fVec20[0] = fTemp68;
			fVec21[0] = fConst87 * fVec20[1] - fConst24 * fRec99[1];
			fRec100[0] = fConst27 * (fVec21[1] - fConst21 * fRec100[1] + fConst86 * fVec20[1] + fConst85 * fTemp68);
			fRec99[0] = fRec100[0];
			fVec22[0] = 0.50032705f * fRec99[1] - fConst32 * fRec97[1];
			fRec98[0] = fConst33 * (fVec22[1] - fConst30 * fRec98[1] - 1.0006541f * fRec99[1] + 0.50032705f * fRec99[0]);
			fRec97[0] = fRec98[0];
			float fTemp69 = std::fabs(0.92736715f * fRec97[0]);
			fRec96[0] = std::max<float>(fTemp69, fConst88 * fRec96[1] + fConst89 * fTemp69);
			fRec95[0] = fConst90 * fRec96[0] + fConst2 * fRec95[1];
			float fTemp70 = 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec95[0]))));
			fVbargraph5 = FAUSTFLOAT(-fTemp70);
			fRec94[0] = fConst98 * (fSlow11 - -fTemp70) + fConst97 * fRec94[1];
			float fTemp71 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec94[0])));
			fVbargraph6 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp71)));
			float fTemp72 = fRec125[1] + fConst75 * (fRec110 - fRec126[1]);
			fRec125[0] = fConst77 * fTemp72 - fRec125[1];
			float fTemp73 = fRec126[1] + fConst78 * fTemp72;
			fRec126[0] = 2.0f * fTemp73 - fRec126[1];
			fRec127[0] = fTemp73;
			fVec23[0] = fConst87 * fRec127[1] - fConst24 * fRec123[1];
			fRec124[0] = fConst27 * (fVec23[1] - fConst21 * fRec124[1] + fConst86 * fRec127[1] + fConst85 * fRec127[0]);
			fRec123[0] = fRec124[0];
			fVec24[0] = 0.50032705f * fRec123[1] - fConst32 * fRec121[1];
			fRec122[0] = fConst33 * (fVec24[1] - fConst30 * fRec122[1] - 1.0006541f * fRec123[1] + 0.50032705f * fRec123[0]);
			fRec121[0] = fRec122[0];
			float fTemp74 = std::fabs(0.92736715f * fRec121[0]);
			fRec120[0] = std::max<float>(fTemp74, fConst88 * fRec120[1] + fConst89 * fTemp74);
			fRec119[0] = fConst90 * fRec120[0] + fConst2 * fRec119[1];
			float fTemp75 = 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec119[0]))));
			fVbargraph7 = FAUSTFLOAT(-fTemp75);
			fRec118[0] = fConst89 * (fSlow12 - -fTemp75) + fConst88 * fRec118[1];
			float fTemp76 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec118[0])));
			fVbargraph8 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp76)));
			float fTemp77 = fRec171[1] + fConst50 * (fRec62 - fRec172[1]);
			fRec171[0] = fConst52 * fTemp77 - fRec171[1];
			float fTemp78 = fRec172[1] + fConst53 * fTemp77;
			fRec172[0] = 2.0f * fTemp78 - fRec172[1];
			float fRec173 = fTemp78;
			float fTemp79 = fRec167[1] + fConst70 * (fRec173 - fRec168[1]);
			fRec167[0] = fConst72 * fTemp79 - fRec167[1];
			float fTemp80 = fRec168[1] + fConst73 * fTemp79;
			fRec168[0] = 2.0f * fTemp80 - fRec168[1];
			float fRec169 = fRec173;
			float fRec170 = fConst74 * fTemp79;
			float fTemp81 = 2.828427f * fRec170;
			float fTemp82 = fRec163[1] + fConst75 * (fRec169 - (fTemp81 + fRec164[1]));
			fRec163[0] = fConst77 * fTemp82 - fRec163[1];
			float fTemp83 = fRec164[1] + fConst78 * fTemp82;
			fRec164[0] = 2.0f * fTemp83 - fRec164[1];
			float fRec165 = fRec169 - fTemp81;
			float fRec166 = fConst79 * fTemp82;
			float fTemp84 = 2.828427f * fRec166;
			float fTemp85 = fRec159[1] + fConst80 * (fRec165 - (fTemp84 + fRec160[1]));
			fRec159[0] = fConst82 * fTemp85 - fRec159[1];
			float fTemp86 = fRec160[1] + fConst83 * fTemp85;
			fRec160[0] = 2.0f * fTemp86 - fRec160[1];
			float fRec161 = fRec165 - fTemp84;
			float fRec162 = fConst84 * fTemp85;
			float fTemp87 = 2.828427f * fRec162;
			float fTemp88 = fRec154[1] + fConst55 * (fRec161 - (fTemp87 + fRec155[1]));
			fRec154[0] = fConst57 * fTemp88 - fRec154[1];
			float fTemp89 = fRec155[1] + fConst58 * fTemp88;
			fRec155[0] = 2.0f * fTemp89 - fRec155[1];
			float fRec156 = fRec161 - fTemp87;
			float fRec157 = fConst59 * fTemp88;
			float fRec158 = fTemp89;
			float fTemp90 = fRec158 + 1.4142135f * fRec157;
			float fTemp91 = fRec149[1] + fConst55 * (fRec156 - (fTemp90 + fRec150[1]));
			fRec149[0] = fConst57 * fTemp91 - fRec149[1];
			float fTemp92 = fRec150[1] + fConst58 * fTemp91;
			fRec150[0] = 2.0f * fTemp92 - fRec150[1];
			float fRec151 = fRec156 - fTemp90;
			float fRec152 = fConst59 * fTemp91;
			float fRec153 = fTemp92;
			float fTemp93 = fRec153 + 1.4142135f * fRec152;
			float fTemp94 = fRec145[1] + fConst60 * (fRec151 - (fTemp93 + fRec146[1]));
			fRec145[0] = fConst62 * fTemp94 - fRec145[1];
			float fTemp95 = fRec146[1] + fConst63 * fTemp94;
			fRec146[0] = 2.0f * fTemp95 - fRec146[1];
			float fRec147 = fRec151 - fTemp93;
			float fRec148 = fConst64 * fTemp94;
			float fTemp96 = 2.828427f * fRec148;
			float fTemp97 = fRec140[1] + fConst65 * (fRec147 - (fTemp96 + fRec141[1]));
			fRec140[0] = fConst67 * fTemp97 - fRec140[1];
			float fTemp98 = fRec141[1] + fConst68 * fTemp97;
			fRec141[0] = 2.0f * fTemp98 - fRec141[1];
			float fRec142 = fRec147 - fTemp96;
			float fRec143 = fConst69 * fTemp97;
			float fRec144 = fTemp98;
			float fTemp99 = fRec144 + 1.4142135f * fRec143;
			float fTemp100 = fRec135[1] + fConst65 * (fRec142 - (fTemp99 + fRec136[1]));
			fRec135[0] = fConst67 * fTemp100 - fRec135[1];
			float fTemp101 = fRec136[1] + fConst68 * fTemp100;
			fRec136[0] = 2.0f * fTemp101 - fRec136[1];
			float fRec137 = fRec142 - fTemp99;
			float fRec138 = fConst69 * fTemp100;
			float fRec139 = fTemp101;
			float fTemp102 = fRec137 - (fRec139 + 1.4142135f * fRec138);
			fVec25[0] = fTemp102;
			fVec26[0] = fConst87 * fVec25[1] - fConst24 * fRec133[1];
			fRec134[0] = fConst27 * (fVec26[1] - fConst21 * fRec134[1] + fConst86 * fVec25[1] + fConst85 * fTemp102);
			fRec133[0] = fRec134[0];
			fVec27[0] = 0.50032705f * fRec133[1] - fConst32 * fRec131[1];
			fRec132[0] = fConst33 * (fVec27[1] - fConst30 * fRec132[1] - 1.0006541f * fRec133[1] + 0.50032705f * fRec133[0]);
			fRec131[0] = fRec132[0];
			float fTemp103 = std::fabs(0.92736715f * fRec131[0]);
			fRec130[0] = std::max<float>(fTemp103, fConst88 * fRec130[1] + fConst89 * fTemp103);
			fRec129[0] = fConst90 * fRec130[0] + fConst2 * fRec129[1];
			float fTemp104 = 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec129[0]))));
			fVbargraph9 = FAUSTFLOAT(-fTemp104);
			fRec128[0] = fConst100 * (fSlow13 - -fTemp104) + fConst99 * fRec128[1];
			float fTemp105 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec128[0])));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp105)));
			float fTemp106 = fRec181[1] + fConst65 * (fRec144 - fRec182[1]);
			fRec181[0] = fConst67 * fTemp106 - fRec181[1];
			float fTemp107 = fRec182[1] + fConst68 * fTemp106;
			fRec182[0] = 2.0f * fTemp107 - fRec182[1];
			fRec183[0] = fTemp107;
			fVec28[0] = fConst87 * fRec183[1] - fConst24 * fRec179[1];
			fRec180[0] = fConst27 * (fVec28[1] - fConst21 * fRec180[1] + fConst86 * fRec183[1] + fConst85 * fRec183[0]);
			fRec179[0] = fRec180[0];
			fVec29[0] = 0.50032705f * fRec179[1] - fConst32 * fRec177[1];
			fRec178[0] = fConst33 * (fVec29[1] - fConst30 * fRec178[1] - 1.0006541f * fRec179[1] + 0.50032705f * fRec179[0]);
			fRec177[0] = fRec178[0];
			float fTemp108 = std::fabs(0.92736715f * fRec177[0]);
			fRec176[0] = std::max<float>(fTemp108, fConst88 * fRec176[1] + fConst89 * fTemp108);
			fRec175[0] = fConst90 * fRec176[0] + fConst2 * fRec175[1];
			float fTemp109 = 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec175[0]))));
			fVbargraph11 = FAUSTFLOAT(-fTemp109);
			fRec174[0] = fConst102 * (fSlow14 - -fTemp109) + fConst101 * fRec174[1];
			float fTemp110 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec174[0])));
			fVbargraph12 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp110)));
			float fTemp111 = fRec205[1] + fConst55 * (fRec158 - fRec206[1]);
			fRec205[0] = fConst57 * fTemp111 - fRec205[1];
			float fTemp112 = fRec206[1] + fConst58 * fTemp111;
			fRec206[0] = 2.0f * fTemp112 - fRec206[1];
			float fRec207 = fTemp112;
			float fTemp113 = fRec201[1] + fConst65 * (fRec207 - fRec202[1]);
			fRec201[0] = fConst67 * fTemp113 - fRec201[1];
			float fTemp114 = fRec202[1] + fConst68 * fTemp113;
			fRec202[0] = 2.0f * fTemp114 - fRec202[1];
			float fRec203 = fRec207;
			float fRec204 = fConst69 * fTemp113;
			float fTemp115 = 2.828427f * fRec204;
			float fTemp116 = fRec196[1] + fConst60 * (fRec203 - (fTemp115 + fRec197[1]));
			fRec196[0] = fConst62 * fTemp116 - fRec196[1];
			float fTemp117 = fRec197[1] + fConst63 * fTemp116;
			fRec197[0] = 2.0f * fTemp117 - fRec197[1];
			float fRec198 = fRec203 - fTemp115;
			float fRec199 = fConst64 * fTemp116;
			float fRec200 = fTemp117;
			float fTemp118 = fRec200 + 1.4142135f * fRec199;
			float fTemp119 = fRec191[1] + fConst60 * (fRec198 - (fTemp118 + fRec192[1]));
			fRec191[0] = fConst62 * fTemp119 - fRec191[1];
			float fTemp120 = fRec192[1] + fConst63 * fTemp119;
			fRec192[0] = 2.0f * fTemp120 - fRec192[1];
			float fRec193 = fRec198 - fTemp118;
			float fRec194 = fConst64 * fTemp119;
			float fRec195 = fTemp120;
			float fTemp121 = fRec193 - (fRec195 + 1.4142135f * fRec194);
			fVec30[0] = fTemp121;
			fVec31[0] = fConst87 * fVec30[1] - fConst24 * fRec189[1];
			fRec190[0] = fConst27 * (fVec31[1] - fConst21 * fRec190[1] + fConst86 * fVec30[1] + fConst85 * fTemp121);
			fRec189[0] = fRec190[0];
			fVec32[0] = 0.50032705f * fRec189[1] - fConst32 * fRec187[1];
			fRec188[0] = fConst33 * (fVec32[1] - fConst30 * fRec188[1] - 1.0006541f * fRec189[1] + 0.50032705f * fRec189[0]);
			fRec187[0] = fRec188[0];
			float fTemp122 = std::fabs(0.92736715f * fRec187[0]);
			fRec186[0] = std::max<float>(fTemp122, fConst88 * fRec186[1] + fConst89 * fTemp122);
			fRec185[0] = fConst90 * fRec186[0] + fConst2 * fRec185[1];
			float fTemp123 = 2e+01f * (fTemp50 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec185[0]))));
			fVbargraph13 = FAUSTFLOAT(-fTemp123);
			fRec184[0] = fConst104 * (fSlow15 - -fTemp123) + fConst103 * fRec184[1];
			float fTemp124 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec184[0])));
			fVbargraph14 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp124)));
			float fTemp125 = fRec215[1] + fConst60 * (fRec200 - fRec216[1]);
			fRec215[0] = fConst62 * fTemp125 - fRec215[1];
			float fTemp126 = fRec216[1] + fConst63 * fTemp125;
			fRec216[0] = 2.0f * fTemp126 - fRec216[1];
			fRec217[0] = fTemp126;
			fVec33[0] = fConst87 * fRec217[1] - fConst24 * fRec213[1];
			fRec214[0] = fConst27 * (fVec33[1] - fConst21 * fRec214[1] + fConst86 * fRec217[1] + fConst85 * fRec217[0]);
			fRec213[0] = fRec214[0];
			fVec34[0] = 0.50032705f * fRec213[1] - fConst32 * fRec211[1];
			fRec212[0] = fConst33 * (fVec34[1] - fConst30 * fRec212[1] - 1.0006541f * fRec213[1] + 0.50032705f * fRec213[0]);
			fRec211[0] = fRec212[0];
			float fTemp127 = std::fabs(0.92736715f * fRec211[0]);
			fRec210[0] = std::max<float>(fTemp127, fConst88 * fRec210[1] + fConst89 * fTemp127);
			fRec209[0] = fConst90 * fRec210[0] + fConst2 * fRec209[1];
			float fTemp128 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec209[0]))) - fTemp50);
			fVbargraph15 = FAUSTFLOAT(fTemp128);
			fRec208[0] = fConst106 * (fSlow16 - fTemp128) + fConst105 * fRec208[1];
			float fTemp129 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec208[0])));
			fVbargraph16 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp129)));
			fRec9[0] = fRec217[0] * fTemp129 + fTemp121 * fTemp124 + fRec183[0] * fTemp110 + fTemp102 * fTemp105 + fRec127[0] * fTemp76 + fTemp68 * fTemp71 + fRec93[0] * fTemp57 + fTemp47 * fTemp52;
			float fTemp130 = fRec5[1] + fConst50 * (fRec9[0] - fRec6[1]);
			fRec5[0] = fConst52 * fTemp130 - fRec5[1];
			float fTemp131 = fRec6[1] + fConst53 * fTemp130;
			fRec6[0] = 2.0f * fTemp131 - fRec6[1];
			float fRec7 = fConst54 * fTemp130;
			float fRec8 = fTemp131;
			float fTemp132 = fRec8 + 1.4142135f * fRec7;
			float fTemp133 = fRec1[1] + fConst50 * (fRec9[0] - (fTemp132 + fRec2[1]));
			fRec1[0] = fConst52 * fTemp133 - fRec1[1];
			float fTemp134 = fRec2[1] + fConst53 * fTemp133;
			fRec2[0] = 2.0f * fTemp134 - fRec2[1];
			float fRec3 = fConst54 * fTemp133;
			float fRec4 = fTemp134;
			float fTemp135 = fRec8 + fRec4;
			float fTemp136 = fRec7 + fRec3;
			float fTemp137 = 1.4142135f * fTemp136;
			float fTemp138 = fTemp137 + fTemp135;
			float fTemp139 = fRec225[1] + fConst55 * (fRec9[0] - (fTemp138 + fRec226[1]));
			fRec225[0] = fConst57 * fTemp139 - fRec225[1];
			float fTemp140 = fRec226[1] + fConst58 * fTemp139;
			fRec226[0] = 2.0f * fTemp140 - fRec226[1];
			float fRec227 = fConst59 * fTemp139;
			float fTemp141 = fTemp137 + fTemp135 + 2.828427f * fRec227;
			float fTemp142 = fRec222[1] + fConst60 * (fRec9[0] - (fTemp141 + fRec223[1]));
			fRec222[0] = fConst62 * fTemp142 - fRec222[1];
			float fTemp143 = fRec223[1] + fConst63 * fTemp142;
			fRec223[0] = 2.0f * fTemp143 - fRec223[1];
			float fRec224 = fConst64 * fTemp142;
			float fTemp144 = fRec227 + fRec224;
			float fTemp145 = fTemp138 + 2.828427f * fTemp144;
			float fTemp146 = fRec228[1] + fConst65 * (fRec9[0] - (fTemp145 + fRec229[1]));
			fRec228[0] = fConst67 * fTemp146 - fRec228[1];
			float fTemp147 = fRec229[1] + fConst68 * fTemp146;
			fRec229[0] = 2.0f * fTemp147 - fRec229[1];
			float fRec230 = fConst69 * fTemp146;
			float fTemp148 = fRec230 + fTemp144;
			float fTemp149 = 2.828427f * fTemp148;
			float fTemp150 = fTemp138 + fTemp149;
			float fTemp151 = fRec218[1] + fConst70 * (fRec9[0] - (fTemp150 + fRec219[1]));
			fRec218[0] = fConst72 * fTemp151 - fRec218[1];
			float fTemp152 = fRec219[1] + fConst73 * fTemp151;
			fRec219[0] = 2.0f * fTemp152 - fRec219[1];
			float fRec220 = fConst74 * fTemp151;
			float fRec221 = fTemp152;
			float fTemp153 = fRec221 + fTemp135;
			float fTemp154 = fRec220 + fTemp136;
			float fTemp155 = 1.4142135f * fTemp154 + fTemp149 + fTemp153;
			float fTemp156 = fRec231[1] + fConst70 * (fRec9[0] - (fTemp155 + fRec232[1]));
			fRec231[0] = fConst72 * fTemp156 - fRec231[1];
			float fTemp157 = fRec232[1] + fConst73 * fTemp156;
			fRec232[0] = 2.0f * fTemp157 - fRec232[1];
			float fRec233 = fConst74 * fTemp156;
			float fRec234 = fTemp157;
			float fTemp158 = fRec234 + fTemp153;
			float fTemp159 = fRec233 + fTemp154;
			float fTemp160 = 1.4142135f * fTemp159;
			float fTemp161 = fTemp160 + fTemp149 + fTemp158;
			float fTemp162 = fRec239[1] + fConst75 * (fRec9[0] - (fTemp161 + fRec240[1]));
			fRec239[0] = fConst77 * fTemp162 - fRec239[1];
			float fTemp163 = fRec240[1] + fConst78 * fTemp162;
			fRec240[0] = 2.0f * fTemp163 - fRec240[1];
			float fRec241 = fConst79 * fTemp162;
			float fTemp164 = 2.828427f * (fRec241 + fTemp148);
			float fTemp165 = fTemp160 + fTemp158 + fTemp164;
			float fTemp166 = fRec235[1] + fConst80 * (fRec9[0] - (fTemp165 + fRec236[1]));
			fRec235[0] = fConst82 * fTemp166 - fRec235[1];
			float fTemp167 = fRec236[1] + fConst83 * fTemp166;
			fRec236[0] = 2.0f * fTemp167 - fRec236[1];
			float fRec237 = fConst84 * fTemp166;
			float fRec238 = fTemp167;
			float fTemp168 = fRec238 + fTemp158;
			float fTemp169 = fRec237 + fTemp159;
			float fTemp170 = 1.4142135f * fTemp169 + fTemp164 + fTemp168;
			float fTemp171 = fRec242[1] + fConst80 * (fRec9[0] - (fTemp170 + fRec243[1]));
			fRec242[0] = fConst82 * fTemp171 - fRec242[1];
			float fTemp172 = fRec243[1] + fConst83 * fTemp171;
			fRec243[0] = 2.0f * fTemp172 - fRec243[1];
			float fRec244 = fConst84 * fTemp171;
			float fRec245 = fTemp172;
			float fTemp173 = fRec9[0] - (1.4142135f * (fRec244 + fTemp169) + fTemp164 + fRec245 + fTemp168);
			float fTemp174 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp173)));
			int iTemp175 = (fTemp174 > fSlow17) + (fTemp174 > fSlow1);
			float fTemp176 = std::max<float>(0.0f, ((iTemp175 == 0) ? 0.0f : ((iTemp175 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp174 + 13.5f - fSlow0) : fTemp174 + 13.0f - fSlow0)));
			float fTemp177 = ((-(0.75f * fTemp176) > fRec0[1]) ? fConst108 : fConst107);
			fRec0[0] = fRec0[1] * fTemp177 - 0.75f * fTemp176 * (1.0f - fTemp177);
			float fTemp178 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec0[0]))) + 1.5f)))));
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp178)));
			float fTemp179 = fRec247[1] + fConst80 * (fRec238 - fRec248[1]);
			fRec247[0] = fConst82 * fTemp179 - fRec247[1];
			float fTemp180 = fRec248[1] + fConst83 * fTemp179;
			fRec248[0] = 2.0f * fTemp180 - fRec248[1];
			float fRec249 = fTemp180;
			float fTemp181 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec249)));
			int iTemp182 = (fTemp181 > fSlow1) + (fTemp181 > fSlow19);
			float fTemp183 = std::max<float>(0.0f, ((iTemp182 == 0) ? 0.0f : ((iTemp182 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp181 + 12.5f - fSlow0) : fTemp181 + 12.0f - fSlow0)));
			float fTemp184 = ((-(0.75f * fTemp183) > fRec246[1]) ? fConst108 : fConst109);
			fRec246[0] = fRec246[1] * fTemp184 - 0.75f * fTemp183 * (1.0f - fTemp184);
			float fTemp185 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec246[0]))) + 1.5f)))));
			fVbargraph18 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp185)));
			float fTemp186 = fRec254[1] + fConst70 * (fRec221 - fRec255[1]);
			fRec254[0] = fConst72 * fTemp186 - fRec254[1];
			float fTemp187 = fRec255[1] + fConst73 * fTemp186;
			fRec255[0] = 2.0f * fTemp187 - fRec255[1];
			float fRec256 = fTemp187;
			float fTemp188 = fRec251[1] + fConst80 * (fRec256 - fRec252[1]);
			fRec251[0] = fConst82 * fTemp188 - fRec251[1];
			float fTemp189 = fRec252[1] + fConst83 * fTemp188;
			fRec252[0] = 2.0f * fTemp189 - fRec252[1];
			float fRec253 = fConst84 * fTemp188;
			float fTemp190 = 2.828427f * fRec253;
			float fTemp191 = fRec257[1] + fConst75 * (fRec256 - (fTemp190 + fRec258[1]));
			fRec257[0] = fConst77 * fTemp191 - fRec257[1];
			float fTemp192 = fRec258[1] + fConst78 * fTemp191;
			fRec258[0] = 2.0f * fTemp192 - fRec258[1];
			float fRec259 = fConst79 * fTemp191;
			float fRec260 = fTemp192;
			float fTemp193 = fRec260 + fTemp190 + 1.4142135f * fRec259;
			float fTemp194 = fRec261[1] + fConst75 * (fRec256 - (fTemp193 + fRec262[1]));
			fRec261[0] = fConst77 * fTemp194 - fRec261[1];
			float fTemp195 = fRec262[1] + fConst78 * fTemp194;
			fRec262[0] = 2.0f * fTemp195 - fRec262[1];
			float fRec263 = fConst79 * fTemp194;
			float fRec264 = fTemp195;
			float fTemp196 = fRec256 - (1.4142135f * (fRec259 + fRec263) + fRec264 + fRec260 + fTemp190);
			float fTemp197 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp196)));
			int iTemp198 = (fTemp197 > fSlow1) + (fTemp197 > fSlow19);
			float fTemp199 = std::max<float>(0.0f, ((iTemp198 == 0) ? 0.0f : ((iTemp198 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp197 + 12.5f - fSlow0) : fTemp197 + 12.0f - fSlow0)));
			float fTemp200 = ((-(0.75f * fTemp199) > fRec250[1]) ? fConst108 : fConst110);
			fRec250[0] = fRec250[1] * fTemp200 - 0.75f * fTemp199 * (1.0f - fTemp200);
			float fTemp201 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec250[0]))) + 1.5f)))));
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp201)));
			float fTemp202 = fRec266[1] + fConst75 * (fRec260 - fRec267[1]);
			fRec266[0] = fConst77 * fTemp202 - fRec266[1];
			float fTemp203 = fRec267[1] + fConst78 * fTemp202;
			fRec267[0] = 2.0f * fTemp203 - fRec267[1];
			float fRec268 = fTemp203;
			float fTemp204 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec268)));
			int iTemp205 = (fTemp204 > fSlow19) + (fTemp204 > fSlow20);
			float fTemp206 = std::max<float>(0.0f, ((iTemp205 == 0) ? 0.0f : ((iTemp205 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp204 + 11.5f - fSlow0) : fTemp204 + 11.0f - fSlow0)));
			float fTemp207 = ((-(0.75f * fTemp206) > fRec265[1]) ? fConst111 : fConst2);
			fRec265[0] = fRec265[1] * fTemp207 - 0.75f * fTemp206 * (1.0f - fTemp207);
			float fTemp208 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec265[0]))) + 1.5f)))));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp208)));
			float fTemp209 = fRec284[1] + fConst50 * (fRec8 - fRec285[1]);
			fRec284[0] = fConst52 * fTemp209 - fRec284[1];
			float fTemp210 = fRec285[1] + fConst53 * fTemp209;
			fRec285[0] = 2.0f * fTemp210 - fRec285[1];
			float fRec286 = fTemp210;
			float fTemp211 = fRec281[1] + fConst70 * (fRec286 - fRec282[1]);
			fRec281[0] = fConst72 * fTemp211 - fRec281[1];
			float fTemp212 = fRec282[1] + fConst73 * fTemp211;
			fRec282[0] = 2.0f * fTemp212 - fRec282[1];
			float fRec283 = fConst74 * fTemp211;
			float fTemp213 = 2.828427f * fRec283;
			float fTemp214 = fRec278[1] + fConst75 * (fRec286 - (fTemp213 + fRec279[1]));
			fRec278[0] = fConst77 * fTemp214 - fRec278[1];
			float fTemp215 = fRec279[1] + fConst78 * fTemp214;
			fRec279[0] = 2.0f * fTemp215 - fRec279[1];
			float fRec280 = fConst79 * fTemp214;
			float fTemp216 = fRec283 + fRec280;
			float fTemp217 = 2.828427f * fTemp216;
			float fTemp218 = fRec287[1] + fConst80 * (fRec286 - (fTemp217 + fRec288[1]));
			fRec287[0] = fConst82 * fTemp218 - fRec287[1];
			float fTemp219 = fRec288[1] + fConst83 * fTemp218;
			fRec288[0] = 2.0f * fTemp219 - fRec288[1];
			float fRec289 = fConst84 * fTemp218;
			float fTemp220 = fRec289 + fTemp216;
			float fTemp221 = 2.828427f * fTemp220;
			float fTemp222 = fRec274[1] + fConst55 * (fRec286 - (fTemp221 + fRec275[1]));
			fRec274[0] = fConst57 * fTemp222 - fRec274[1];
			float fTemp223 = fRec275[1] + fConst58 * fTemp222;
			fRec275[0] = 2.0f * fTemp223 - fRec275[1];
			float fRec276 = fConst59 * fTemp222;
			float fRec277 = fTemp223;
			float fTemp224 = fTemp221 + fRec277 + 1.4142135f * fRec276;
			float fTemp225 = fRec270[1] + fConst55 * (fRec286 - (fTemp224 + fRec271[1]));
			fRec270[0] = fConst57 * fTemp225 - fRec270[1];
			float fTemp226 = fRec271[1] + fConst58 * fTemp225;
			fRec271[0] = 2.0f * fTemp226 - fRec271[1];
			float fRec272 = fConst59 * fTemp225;
			float fRec273 = fTemp226;
			float fTemp227 = fRec277 + fRec273;
			float fTemp228 = fRec276 + fRec272;
			float fTemp229 = 1.4142135f * fTemp228;
			float fTemp230 = fTemp229 + fTemp221 + fTemp227;
			float fTemp231 = fRec294[1] + fConst60 * (fRec286 - (fTemp230 + fRec295[1]));
			fRec294[0] = fConst62 * fTemp231 - fRec294[1];
			float fTemp232 = fRec295[1] + fConst63 * fTemp231;
			fRec295[0] = 2.0f * fTemp232 - fRec295[1];
			float fRec296 = fConst64 * fTemp231;
			float fTemp233 = 2.828427f * (fRec296 + fTemp220);
			float fTemp234 = fTemp229 + fTemp227 + fTemp233;
			float fTemp235 = fRec290[1] + fConst65 * (fRec286 - (fTemp234 + fRec291[1]));
			fRec290[0] = fConst67 * fTemp235 - fRec290[1];
			float fTemp236 = fRec291[1] + fConst68 * fTemp235;
			fRec291[0] = 2.0f * fTemp236 - fRec291[1];
			float fRec292 = fConst69 * fTemp235;
			float fRec293 = fTemp236;
			float fTemp237 = fRec293 + fTemp227;
			float fTemp238 = fRec292 + fTemp228;
			float fTemp239 = 1.4142135f * fTemp238 + fTemp233 + fTemp237;
			float fTemp240 = fRec297[1] + fConst65 * (fRec286 - (fTemp239 + fRec298[1]));
			fRec297[0] = fConst67 * fTemp240 - fRec297[1];
			float fTemp241 = fRec298[1] + fConst68 * fTemp240;
			fRec298[0] = 2.0f * fTemp241 - fRec298[1];
			float fRec299 = fConst69 * fTemp240;
			float fRec300 = fTemp241;
			float fTemp242 = fRec286 - (1.4142135f * (fRec299 + fTemp238) + fTemp233 + fRec300 + fTemp237);
			float fTemp243 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp242)));
			int iTemp244 = (fTemp243 > fSlow22) + (fTemp243 > fSlow21);
			float fTemp245 = std::max<float>(0.0f, ((iTemp244 == 0) ? 0.0f : ((iTemp244 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp243 + 8.5f - fSlow0) : fTemp243 + 8.0f - fSlow0)));
			float fTemp246 = ((-(0.75f * fTemp245) > fRec269[1]) ? fConst112 : fConst108);
			fRec269[0] = fRec269[1] * fTemp246 - 0.75f * fTemp245 * (1.0f - fTemp246);
			float fTemp247 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec269[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp247)));
			float fTemp248 = fRec302[1] + fConst65 * (fRec293 - fRec303[1]);
			fRec302[0] = fConst67 * fTemp248 - fRec302[1];
			float fTemp249 = fRec303[1] + fConst68 * fTemp248;
			fRec303[0] = 2.0f * fTemp249 - fRec303[1];
			float fRec304 = fTemp249;
			float fTemp250 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec304)));
			int iTemp251 = (fTemp250 > fSlow21) + (fTemp250 > fSlow23);
			float fTemp252 = std::max<float>(0.0f, ((iTemp251 == 0) ? 0.0f : ((iTemp251 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp250 + 7.5f - fSlow0) : fTemp250 + 7.0f - fSlow0)));
			float fTemp253 = ((-(0.75f * fTemp252) > fRec301[1]) ? fConst113 : fConst111);
			fRec301[0] = fRec301[1] * fTemp253 - 0.75f * fTemp252 * (1.0f - fTemp253);
			float fTemp254 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec301[0]))) + 1.5f)))));
			fVbargraph22 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp254)));
			float fTemp255 = fRec309[1] + fConst55 * (fRec277 - fRec310[1]);
			fRec309[0] = fConst57 * fTemp255 - fRec309[1];
			float fTemp256 = fRec310[1] + fConst58 * fTemp255;
			fRec310[0] = 2.0f * fTemp256 - fRec310[1];
			float fRec311 = fTemp256;
			float fTemp257 = fRec306[1] + fConst65 * (fRec311 - fRec307[1]);
			fRec306[0] = fConst67 * fTemp257 - fRec306[1];
			float fTemp258 = fRec307[1] + fConst68 * fTemp257;
			fRec307[0] = 2.0f * fTemp258 - fRec307[1];
			float fRec308 = fConst69 * fTemp257;
			float fTemp259 = 2.828427f * fRec308;
			float fTemp260 = fRec312[1] + fConst60 * (fRec311 - (fTemp259 + fRec313[1]));
			fRec312[0] = fConst62 * fTemp260 - fRec312[1];
			float fTemp261 = fRec313[1] + fConst63 * fTemp260;
			fRec313[0] = 2.0f * fTemp261 - fRec313[1];
			float fRec314 = fConst64 * fTemp260;
			float fRec315 = fTemp261;
			float fTemp262 = fRec315 + fTemp259 + 1.4142135f * fRec314;
			float fTemp263 = fRec316[1] + fConst60 * (fRec311 - (fTemp262 + fRec317[1]));
			fRec316[0] = fConst62 * fTemp263 - fRec316[1];
			float fTemp264 = fRec317[1] + fConst63 * fTemp263;
			fRec317[0] = 2.0f * fTemp264 - fRec317[1];
			float fRec318 = fConst64 * fTemp263;
			float fRec319 = fTemp264;
			float fTemp265 = fRec311 - (1.4142135f * (fRec314 + fRec318) + fRec319 + fRec315 + fTemp259);
			float fTemp266 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp265)));
			int iTemp267 = (fTemp266 > fSlow23) + (fTemp266 > fSlow24);
			float fTemp268 = std::max<float>(0.0f, ((iTemp267 == 0) ? 0.0f : ((iTemp267 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp266 + 6.5f - fSlow0) : fTemp266 + 6.0f - fSlow0)));
			float fTemp269 = ((-(0.75f * fTemp268) > fRec305[1]) ? fConst114 : fConst1);
			fRec305[0] = fRec305[1] * fTemp269 - 0.75f * fTemp268 * (1.0f - fTemp269);
			float fTemp270 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec305[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp270)));
			float fTemp271 = fRec321[1] + fConst60 * (fRec315 - fRec322[1]);
			fRec321[0] = fConst62 * fTemp271 - fRec321[1];
			float fTemp272 = fRec322[1] + fConst63 * fTemp271;
			fRec322[0] = 2.0f * fTemp272 - fRec322[1];
			float fRec323 = fTemp272;
			float fTemp273 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec323)));
			int iTemp274 = (fTemp273 > fSlow23) + (fTemp273 > fSlow24);
			float fTemp275 = std::max<float>(0.0f, ((iTemp274 == 0) ? 0.0f : ((iTemp274 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp273 + 6.5f - fSlow0) : fTemp273 + 6.0f - fSlow0)));
			float fTemp276 = ((-(0.75f * fTemp275) > fRec320[1]) ? fConst88 : fConst115);
			fRec320[0] = fRec320[1] * fTemp276 - 0.75f * fTemp275 * (1.0f - fTemp276);
			float fTemp277 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec320[0]))) + 1.5f)))));
			fVbargraph24 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp277)));
			float fTemp278 = fRec323 * fTemp277 + fTemp265 * fTemp270 + fRec304 * fTemp254 + fTemp242 * fTemp247 + fRec268 * fTemp208 + fTemp196 * fTemp201 + fRec249 * fTemp185 + fTemp173 * fTemp178;
			fVec35[IOTA0 & 1023] = fTemp278;
			float fTemp279 = std::fabs(fTemp278);
			int iTemp280 = (fTemp279 >= fRec327[1]) | (float(iRec326[1]) >= fConst14);
			iRec326[0] = ((iTemp280) ? 0 : iRec326[1] + 1);
			fRec327[0] = ((iTemp280) ? fTemp279 : fRec327[1]);
			fRec325[0] = fConst117 * fRec327[0] + fConst107 * fRec325[1];
			float fTemp281 = std::fabs(fRec325[0]);
			fRec324[0] = std::max<float>(fTemp281, fConst2 * fRec324[1] + fConst90 * fTemp281);
			fRec328[0] = fSlow25 + fConst119 * fRec328[1];
			output0[i0] = FAUSTFLOAT(fTemp0 * fRec328[0] + (1.0f - fRec328[0]) * std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec324[0], 1.1920929e-07f)) * fVec35[(IOTA0 - iConst116) & 1023]);
			fVec0[1] = fVec0[0];
			fRec65[1] = fRec65[0];
			fRec64[1] = fRec64[0];
			fRec63[2] = fRec63[1];
			fRec63[1] = fRec63[0];
			fVec1[1] = fVec1[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fVec2[1] = fVec2[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
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
			fRec69[1] = fRec69[0];
			fRec70[1] = fRec70[0];
			fRec67[1] = fRec67[0];
			fRec66[1] = fRec66[0];
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
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec5[1] = fRec5[0];
			fRec6[1] = fRec6[0];
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec222[1] = fRec222[0];
			fRec223[1] = fRec223[0];
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fRec231[1] = fRec231[0];
			fRec232[1] = fRec232[0];
			fRec239[1] = fRec239[0];
			fRec240[1] = fRec240[0];
			fRec235[1] = fRec235[0];
			fRec236[1] = fRec236[0];
			fRec242[1] = fRec242[0];
			fRec243[1] = fRec243[0];
			fRec0[1] = fRec0[0];
			fRec247[1] = fRec247[0];
			fRec248[1] = fRec248[0];
			fRec246[1] = fRec246[0];
			fRec254[1] = fRec254[0];
			fRec255[1] = fRec255[0];
			fRec251[1] = fRec251[0];
			fRec252[1] = fRec252[0];
			fRec257[1] = fRec257[0];
			fRec258[1] = fRec258[0];
			fRec261[1] = fRec261[0];
			fRec262[1] = fRec262[0];
			fRec250[1] = fRec250[0];
			fRec266[1] = fRec266[0];
			fRec267[1] = fRec267[0];
			fRec265[1] = fRec265[0];
			fRec284[1] = fRec284[0];
			fRec285[1] = fRec285[0];
			fRec281[1] = fRec281[0];
			fRec282[1] = fRec282[0];
			fRec278[1] = fRec278[0];
			fRec279[1] = fRec279[0];
			fRec287[1] = fRec287[0];
			fRec288[1] = fRec288[0];
			fRec274[1] = fRec274[0];
			fRec275[1] = fRec275[0];
			fRec270[1] = fRec270[0];
			fRec271[1] = fRec271[0];
			fRec294[1] = fRec294[0];
			fRec295[1] = fRec295[0];
			fRec290[1] = fRec290[0];
			fRec291[1] = fRec291[0];
			fRec297[1] = fRec297[0];
			fRec298[1] = fRec298[0];
			fRec269[1] = fRec269[0];
			fRec302[1] = fRec302[0];
			fRec303[1] = fRec303[0];
			fRec301[1] = fRec301[0];
			fRec309[1] = fRec309[0];
			fRec310[1] = fRec310[0];
			fRec306[1] = fRec306[0];
			fRec307[1] = fRec307[0];
			fRec312[1] = fRec312[0];
			fRec313[1] = fRec313[0];
			fRec316[1] = fRec316[0];
			fRec317[1] = fRec317[0];
			fRec305[1] = fRec305[0];
			fRec321[1] = fRec321[0];
			fRec322[1] = fRec322[0];
			fRec320[1] = fRec320[0];
			iRec326[1] = iRec326[0];
			fRec327[1] = fRec327[0];
			fRec325[1] = fRec325[0];
			fRec324[1] = fRec324[0];
			fRec328[1] = fRec328[0];
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
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph17 = 0;
        
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
        
        case kParameter_sb_meter__0:
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
        case kParameter_sb_meter__1:
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
        case kParameter_sb_meter__2:
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
        case kParameter_sb_meter__3:
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
        case kParameter_sb_meter__4:
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
        case kParameter_sb_meter__5:
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
        case kParameter_sb_meter__6:
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
        case kParameter_sb_meter__7:
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
        case kParameter_sb_gain__0:
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
        case kParameter_sb_gain__1:
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
        case kParameter_sb_gain__2:
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
        case kParameter_sb_gain__3:
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
        case kParameter_sb_gain__4:
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
        case kParameter_sb_gain__5:
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
        case kParameter_sb_gain__6:
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
        case kParameter_sb_gain__7:
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
        case kParameter_leveler_gain:
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
        case kParameter_mb_comp_gain_0:
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
        case kParameter_mb_comp_gain_1:
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
        case kParameter_mb_comp_gain_2:
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
        case kParameter_mb_comp_gain_3:
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
        case kParameter_mb_comp_gain_4:
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
        case kParameter_mb_comp_gain_5:
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
        case kParameter_mb_comp_gain_6:
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
        case kParameter_mb_comp_gain_7:
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
        case kParameter_sb_meter__0:
            return dsp->fVbargraph15;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph13;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph11;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph9;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph7;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph5;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph3;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph1;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph16;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph14;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph12;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph10;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph8;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph6;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph4;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph2;
        case kParameter_leveler_gain:
            return dsp->fVbargraph0;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph24;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph23;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph22;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph21;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph20;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph19;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph18;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph17;
        
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