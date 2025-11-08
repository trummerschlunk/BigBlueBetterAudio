
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
// Version: 0.13
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
	float fConst14;
	int iConst15;
	float fConst16;
	float fConst17;
	float fRec24[2];
	int iConst18;
	float fVec1[3];
	int iConst19;
	float fVec2[7];
	int iConst20;
	int iConst21;
	float fVec3[15];
	int iConst22;
	int iConst23;
	int IOTA0;
	float fVec4[32];
	int iConst24;
	int iConst25;
	float fVec5[64];
	int iConst26;
	int iConst27;
	float fVec6[128];
	int iConst28;
	int iConst29;
	float fVec7[256];
	int iConst30;
	int iConst31;
	float fVec8[512];
	int iConst32;
	int iConst33;
	float fVec9[1024];
	int iConst34;
	int iConst35;
	float fVec10[2048];
	int iConst36;
	int iConst37;
	float fVec11[4096];
	int iConst38;
	int iConst39;
	float fVec12[8192];
	int iConst40;
	int iConst41;
	float fVec13[16384];
	int iConst42;
	int iConst43;
	float fVec14[32768];
	int iConst44;
	int iConst45;
	float fVec15[65536];
	int iConst46;
	int iConst47;
	float fVec16[131072];
	int iConst48;
	int iConst49;
	float fVec17[262144];
	int iConst50;
	int iConst51;
	float fVec18[524288];
	int iConst52;
	float fConst53;
	float fRec23[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fVslider2;
	float fConst54;
	float fConst56;
	float fRec36[2];
	float fConst57;
	float fRec37[2];
	float fConst58;
	float fRec31[2];
	float fRec32[2];
	float fConst59;
	float fConst61;
	float fRec28[2];
	float fConst62;
	float fRec29[2];
	float fRec25[2];
	float fRec26[2];
	float fVec19[2];
	int iConst63;
	float fVec20[3];
	int iConst64;
	float fVec21[7];
	int iConst65;
	int iConst66;
	float fVec22[15];
	int iConst67;
	int iConst68;
	float fVec23[32];
	int iConst69;
	int iConst70;
	float fVec24[64];
	int iConst71;
	int iConst72;
	float fVec25[128];
	int iConst73;
	int iConst74;
	float fVec26[256];
	int iConst75;
	int iConst76;
	float fVec27[512];
	int iConst77;
	float fConst78;
	float fConst79;
	float fRec22[2];
	FAUSTFLOAT fVbargraph1;
	int iConst81;
	float fConst85;
	float fConst86;
	float fConst87;
	float fConst89;
	float fVec28[2];
	float fConst91;
	float fConst92;
	float fRec44[2];
	float fRec43[2];
	float fConst95;
	float fConst97;
	float fVec29[2];
	float fConst98;
	float fRec42[2];
	float fRec41[2];
	float fVec30[2];
	float fVec31[3];
	int iConst99;
	int iConst100;
	float fVec32[7];
	int iConst101;
	int iConst102;
	float fVec33[15];
	int iConst103;
	int iConst104;
	float fVec34[32];
	int iConst105;
	int iConst106;
	float fVec35[64];
	int iConst107;
	int iConst108;
	float fVec36[128];
	int iConst109;
	int iConst110;
	float fVec37[256];
	int iConst111;
	int iConst112;
	float fVec38[512];
	int iConst113;
	float fConst114;
	float fRec17[2];
	float fRec18[2];
	float fRec15[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVbargraph2;
	float fRec14[2];
	float fVec39[2];
	float fVec40[2];
	float fVec41[3];
	float fVec42[7];
	float fVec43[15];
	float fVec44[32];
	float fVec45[64];
	float fVec46[128];
	float fVec47[256];
	float fVec48[512];
	float fConst115;
	float fRec10[2];
	FAUSTFLOAT fVbargraph3;
	float fConst116;
	float fConst118;
	float fRec93[2];
	float fConst119;
	float fRec94[2];
	float fConst120;
	float fRec88[2];
	float fRec89[2];
	float fConst121;
	float fConst123;
	float fRec84[2];
	float fConst124;
	float fRec85[2];
	float fConst125;
	float fConst126;
	float fConst128;
	float fRec80[2];
	float fConst129;
	float fRec81[2];
	float fConst130;
	float fRec76[2];
	float fRec77[2];
	float fConst131;
	float fConst132;
	float fConst134;
	float fRec71[2];
	float fConst135;
	float fRec72[2];
	float fConst136;
	float fRec66[2];
	float fRec67[2];
	float fConst137;
	float fConst139;
	float fRec62[2];
	float fConst140;
	float fRec63[2];
	float fConst141;
	float fConst142;
	float fConst144;
	float fRec57[2];
	float fConst145;
	float fRec58[2];
	float fConst146;
	float fRec52[2];
	float fRec53[2];
	float fVec49[2];
	float fConst147;
	float fConst148;
	float fConst149;
	float fVec50[2];
	float fRec51[2];
	float fRec50[2];
	float fVec51[2];
	float fRec49[2];
	float fRec48[2];
	float fConst150;
	float fConst151;
	float fRec47[2];
	float fRec46[2];
	float fConst152;
	float fConst153;
	float fVec52[2];
	float fConst154;
	float fRec103[2];
	float fRec102[2];
	float fVec53[2];
	float fRec101[2];
	float fRec100[2];
	float fRec99[2];
	float fRec98[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fVslider4;
	float fConst155;
	float fRec45[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVbargraph5;
	float fConst156;
	float fRec111[2];
	float fRec112[2];
	float fRec113[2];
	float fVec54[2];
	float fRec110[2];
	float fRec109[2];
	float fVec55[2];
	float fRec108[2];
	float fRec107[2];
	float fRec106[2];
	float fRec105[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fVslider7;
	float fConst157;
	float fRec104[2];
	FAUSTFLOAT fVbargraph7;
	float fConst158;
	float fRec135[2];
	float fRec136[2];
	float fRec131[2];
	float fRec132[2];
	float fRec126[2];
	float fRec127[2];
	float fRec121[2];
	float fRec122[2];
	float fVec56[2];
	float fVec57[2];
	float fRec120[2];
	float fRec119[2];
	float fVec58[2];
	float fRec118[2];
	float fRec117[2];
	float fRec116[2];
	float fRec115[2];
	FAUSTFLOAT fVbargraph8;
	FAUSTFLOAT fVslider8;
	float fConst159;
	float fRec114[2];
	FAUSTFLOAT fVbargraph9;
	float fRec145[2];
	float fRec146[2];
	float fRec147[2];
	float fVec59[2];
	float fRec144[2];
	float fRec143[2];
	float fVec60[2];
	float fRec142[2];
	float fRec141[2];
	float fRec140[2];
	float fRec139[2];
	FAUSTFLOAT fVbargraph10;
	FAUSTFLOAT fVslider9;
	float fRec138[2];
	FAUSTFLOAT fVbargraph11;
	float fConst160;
	float fRec191[2];
	float fRec192[2];
	float fRec187[2];
	float fRec188[2];
	float fRec183[2];
	float fRec184[2];
	float fRec179[2];
	float fRec180[2];
	float fRec174[2];
	float fRec175[2];
	float fRec169[2];
	float fRec170[2];
	float fRec165[2];
	float fRec166[2];
	float fRec160[2];
	float fRec161[2];
	float fRec155[2];
	float fRec156[2];
	float fVec61[2];
	float fVec62[2];
	float fRec154[2];
	float fRec153[2];
	float fVec63[2];
	float fRec152[2];
	float fRec151[2];
	float fRec150[2];
	float fRec149[2];
	FAUSTFLOAT fVbargraph12;
	FAUSTFLOAT fVslider10;
	float fConst161;
	float fRec148[2];
	FAUSTFLOAT fVbargraph13;
	float fConst162;
	float fRec201[2];
	float fRec202[2];
	float fRec203[2];
	float fVec64[2];
	float fRec200[2];
	float fRec199[2];
	float fVec65[2];
	float fRec198[2];
	float fRec197[2];
	float fRec196[2];
	float fRec195[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider11;
	float fConst163;
	float fRec194[2];
	FAUSTFLOAT fVbargraph15;
	float fConst164;
	float fRec225[2];
	float fRec226[2];
	float fRec221[2];
	float fRec222[2];
	float fRec216[2];
	float fRec217[2];
	float fRec211[2];
	float fRec212[2];
	float fVec66[2];
	float fVec67[2];
	float fRec210[2];
	float fRec209[2];
	float fVec68[2];
	float fRec208[2];
	float fRec207[2];
	float fRec206[2];
	float fRec205[2];
	FAUSTFLOAT fVbargraph16;
	FAUSTFLOAT fVslider12;
	float fConst165;
	float fRec204[2];
	FAUSTFLOAT fVbargraph17;
	float fRec235[2];
	float fRec236[2];
	float fRec237[2];
	float fVec69[2];
	float fRec234[2];
	float fRec233[2];
	float fVec70[2];
	float fRec232[2];
	float fRec231[2];
	float fRec230[2];
	float fRec229[2];
	FAUSTFLOAT fVbargraph18;
	FAUSTFLOAT fVslider13;
	float fConst166;
	float fRec228[2];
	FAUSTFLOAT fVbargraph19;
	float fRec9[3];
	float fRec5[2];
	float fRec6[2];
	float fRec1[2];
	float fRec2[2];
	float fRec245[2];
	float fRec246[2];
	float fRec242[2];
	float fRec243[2];
	float fRec248[2];
	float fRec249[2];
	float fRec238[2];
	float fRec239[2];
	float fRec251[2];
	float fRec252[2];
	float fRec259[2];
	float fRec260[2];
	float fRec255[2];
	float fRec256[2];
	float fRec262[2];
	float fRec263[2];
	float fConst167;
	float fConst168;
	float fRec0[2];
	FAUSTFLOAT fVslider14;
	FAUSTFLOAT fVbargraph20;
	float fRec267[2];
	float fRec268[2];
	float fConst169;
	float fRec266[2];
	FAUSTFLOAT fVbargraph21;
	float fRec274[2];
	float fRec275[2];
	float fRec271[2];
	float fRec272[2];
	float fRec277[2];
	float fRec278[2];
	float fRec281[2];
	float fRec282[2];
	float fConst170;
	float fRec270[2];
	FAUSTFLOAT fVbargraph22;
	float fRec286[2];
	float fRec287[2];
	float fConst171;
	float fRec285[2];
	FAUSTFLOAT fVbargraph23;
	float fRec304[2];
	float fRec305[2];
	float fRec301[2];
	float fRec302[2];
	float fRec298[2];
	float fRec299[2];
	float fRec307[2];
	float fRec308[2];
	float fRec294[2];
	float fRec295[2];
	float fRec290[2];
	float fRec291[2];
	float fRec314[2];
	float fRec315[2];
	float fRec310[2];
	float fRec311[2];
	float fRec317[2];
	float fRec318[2];
	float fConst172;
	float fRec289[2];
	FAUSTFLOAT fVbargraph24;
	float fRec322[2];
	float fRec323[2];
	float fConst173;
	float fRec321[2];
	FAUSTFLOAT fVbargraph25;
	float fRec329[2];
	float fRec330[2];
	float fRec326[2];
	float fRec327[2];
	float fRec332[2];
	float fRec333[2];
	float fRec336[2];
	float fRec337[2];
	float fConst174;
	float fRec325[2];
	FAUSTFLOAT fVbargraph26;
	float fRec341[2];
	float fRec342[2];
	float fConst175;
	float fRec340[2];
	FAUSTFLOAT fVbargraph27;
	float fVec71[2048];
	int iConst176;
	int iRec346[2];
	float fRec347[2];
	float fRec345[2];
	float fRec344[2];
	float fConst177;
	float fConst178;
	FAUSTFLOAT fCheckbox0;
	float fRec348[2];
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("analyzers.lib/amp_follower_ar:author", "Jonatan Liljedahl, revised by Romain Michon");
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
		m->declare("compile_options", "-a /tmp/tmp8cgzk1ad.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("version", "0.13");
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
		fConst14 = std::exp(-(1.0f / fConst0));
		iConst15 = int(std::floor(3.0f * fConst0)) % 2;
		fConst16 = std::exp(-(1e+02f / fConst0));
		fConst17 = 1.0f - fConst16;
		iConst18 = int(std::floor(1.5f * fConst0)) % 2;
		iConst19 = int(std::floor(0.75f * fConst0)) % 2;
		iConst20 = iConst15 + 2 * iConst18;
		iConst21 = int(std::floor(0.375f * fConst0)) % 2;
		iConst22 = iConst20 + 4 * iConst19;
		iConst23 = int(std::floor(0.1875f * fConst0)) % 2;
		iConst24 = iConst22 + 8 * iConst21;
		iConst25 = int(std::floor(0.09375f * fConst0)) % 2;
		iConst26 = iConst24 + 16 * iConst23;
		iConst27 = int(std::floor(0.046875f * fConst0)) % 2;
		iConst28 = iConst26 + 32 * iConst25;
		iConst29 = int(std::floor(0.0234375f * fConst0)) % 2;
		iConst30 = iConst28 + 64 * iConst27;
		iConst31 = int(std::floor(0.01171875f * fConst0)) % 2;
		iConst32 = iConst30 + 128 * iConst29;
		iConst33 = int(std::floor(0.005859375f * fConst0)) % 2;
		iConst34 = iConst32 + 256 * iConst31;
		iConst35 = int(std::floor(0.0029296875f * fConst0)) % 2;
		iConst36 = iConst34 + 512 * iConst33;
		iConst37 = int(std::floor(0.0014648438f * fConst0)) % 2;
		iConst38 = iConst36 + 1024 * iConst35;
		iConst39 = int(std::floor(0.0007324219f * fConst0)) % 2;
		iConst40 = iConst38 + 2048 * iConst37;
		iConst41 = int(std::floor(0.00036621094f * fConst0)) % 2;
		iConst42 = iConst40 + 4096 * iConst39;
		iConst43 = int(std::floor(0.00018310547f * fConst0)) % 2;
		iConst44 = iConst42 + 8192 * iConst41;
		iConst45 = int(std::floor(9.1552734e-05f * fConst0)) % 2;
		iConst46 = iConst44 + 16384 * iConst43;
		iConst47 = int(std::floor(4.5776367e-05f * fConst0)) % 2;
		iConst48 = iConst46 + 32768 * iConst45;
		iConst49 = int(std::floor(2.2888184e-05f * fConst0)) % 2;
		iConst50 = iConst48 + 65536 * iConst47;
		iConst51 = int(std::floor(1.1444092e-05f * fConst0)) % 2;
		iConst52 = iConst50 + 131072 * iConst49;
		fConst53 = 1.0f - fConst14;
		fConst54 = std::tan(879.64594f / fConst0);
		float fConst55 = fConst54 * (fConst54 + 1.4142135f) + 1.0f;
		fConst56 = 2.0f / fConst55;
		fConst57 = fConst54 / fConst55;
		fConst58 = 1.0f / fConst55;
		fConst59 = std::tan(1256.6371f / fConst0);
		float fConst60 = fConst59 * (fConst59 + 1.4142135f) + 1.0f;
		fConst61 = 2.0f / fConst60;
		fConst62 = fConst59 / fConst60;
		iConst63 = int(std::floor(0.005f * fConst0)) % 2;
		iConst64 = int(std::floor(0.0025f * fConst0)) % 2;
		iConst65 = iConst2 + 2 * iConst63;
		iConst66 = int(std::floor(0.00125f * fConst0)) % 2;
		iConst67 = iConst65 + 4 * iConst64;
		iConst68 = int(std::floor(0.000625f * fConst0)) % 2;
		iConst69 = iConst67 + 8 * iConst66;
		iConst70 = int(std::floor(0.0003125f * fConst0)) % 2;
		iConst71 = iConst69 + 16 * iConst68;
		iConst72 = int(std::floor(0.00015625f * fConst0)) % 2;
		iConst73 = iConst71 + 32 * iConst70;
		iConst74 = int(std::floor(7.8125e-05f * fConst0)) % 2;
		iConst75 = iConst73 + 64 * iConst72;
		iConst76 = int(std::floor(3.90625e-05f * fConst0)) % 2;
		iConst77 = iConst75 + 128 * iConst74;
		fConst78 = std::exp(-(5.0f / fConst0));
		fConst79 = std::exp(-(1e+03f / fConst0));
		float fConst80 = std::rint(fConst1);
		iConst81 = int(std::floor(0.5f * fConst80)) % 2;
		float fConst82 = std::tan(5283.415f / fConst0);
		float fConst83 = 1.7803667f * fConst82;
		float fConst84 = mydsp_faustpower2_f(fConst82);
		fConst85 = fConst84 + fConst83 + 1.5848527f;
		fConst86 = 2.0f * (fConst84 + -1.0f);
		fConst87 = fConst84 + (1.5848527f - fConst83);
		float fConst88 = 1.4142135f * fConst82;
		fConst89 = fConst84 + (1.0f - fConst88);
		float fConst90 = fConst84 + -1.5848527f;
		fConst91 = 2.0f * fConst90;
		fConst92 = 1.0f / (fConst84 + fConst88 + 1.0f);
		float fConst93 = std::tan(119.806114f / fConst0);
		float fConst94 = mydsp_faustpower2_f(fConst93);
		fConst95 = 1.0006541f * (fConst94 + -1.0f);
		float fConst96 = 0.50032705f * (fConst94 + 1.0f);
		fConst97 = fConst96 - fConst93;
		fConst98 = 1.0f / (fConst93 + fConst96);
		iConst99 = int(std::floor(fConst80)) % 2;
		iConst100 = int(std::floor(0.25f * fConst80)) % 2;
		iConst101 = iConst99 + 2 * iConst81;
		iConst102 = int(std::floor(0.125f * fConst80)) % 2;
		iConst103 = iConst101 + 4 * iConst100;
		iConst104 = int(std::floor(0.0625f * fConst80)) % 2;
		iConst105 = iConst103 + 8 * iConst102;
		iConst106 = int(std::floor(0.03125f * fConst80)) % 2;
		iConst107 = iConst105 + 16 * iConst104;
		iConst108 = int(std::floor(0.015625f * fConst80)) % 2;
		iConst109 = iConst107 + 32 * iConst106;
		iConst110 = int(std::floor(0.0078125f * fConst80)) % 2;
		iConst111 = iConst109 + 64 * iConst108;
		iConst112 = int(std::floor(0.00390625f * fConst80)) % 2;
		iConst113 = iConst111 + 128 * iConst110;
		fConst114 = 1.0f / std::max<float>(fConst80, 1.1920929e-07f);
		fConst115 = std::exp(-(4e+01f / fConst0));
		fConst116 = std::tan(2513.2742f / fConst0);
		float fConst117 = fConst116 * (fConst116 + 1.4142135f) + 1.0f;
		fConst118 = 2.0f / fConst117;
		fConst119 = fConst116 / fConst117;
		fConst120 = 1.0f / fConst117;
		fConst121 = std::tan(628.31854f / fConst0);
		float fConst122 = fConst121 * (fConst121 + 1.4142135f) + 1.0f;
		fConst123 = 2.0f / fConst122;
		fConst124 = fConst121 / fConst122;
		fConst125 = 1.0f / fConst122;
		fConst126 = std::tan(314.15927f / fConst0);
		float fConst127 = fConst126 * (fConst126 + 1.4142135f) + 1.0f;
		fConst128 = 2.0f / fConst127;
		fConst129 = fConst126 / fConst127;
		fConst130 = 1.0f / fConst127;
		fConst131 = 1.0f / fConst60;
		fConst132 = std::tan(10053.097f / fConst0);
		float fConst133 = fConst132 * (fConst132 + 1.4142135f) + 1.0f;
		fConst134 = 2.0f / fConst133;
		fConst135 = fConst132 / fConst133;
		fConst136 = 1.0f / fConst133;
		fConst137 = std::tan(5026.5483f / fConst0);
		float fConst138 = fConst137 * (fConst137 + 1.4142135f) + 1.0f;
		fConst139 = 2.0f / fConst138;
		fConst140 = fConst137 / fConst138;
		fConst141 = 1.0f / fConst138;
		fConst142 = std::tan(20106.193f / fConst0);
		float fConst143 = fConst142 * (fConst142 + 1.4142135f) + 1.0f;
		fConst144 = 2.0f / fConst143;
		fConst145 = fConst142 / fConst143;
		fConst146 = 1.0f / fConst143;
		fConst147 = 3.9810717f * fConst85;
		fConst148 = 7.9621434f * fConst90;
		fConst149 = 3.9810717f * fConst87;
		fConst150 = std::exp(-(1e+01f / fConst0));
		fConst151 = 1.0f - fConst150;
		fConst152 = fConst85 / fConst7;
		fConst153 = fConst87 / fConst7;
		fConst154 = 2.0f * (fConst90 / fConst7);
		fConst155 = 1.0f - fConst115;
		fConst156 = std::exp(-(2e+01f / fConst0));
		fConst157 = 1.0f - fConst156;
		fConst158 = std::exp(-(13.333333f / fConst0));
		fConst159 = 1.0f - fConst158;
		fConst160 = std::exp(-(8.0f / fConst0));
		fConst161 = 1.0f - fConst160;
		fConst162 = std::exp(-(6.6666665f / fConst0));
		fConst163 = 1.0f - fConst162;
		fConst164 = std::exp(-(5.714286f / fConst0));
		fConst165 = 1.0f - fConst164;
		fConst166 = 1.0f - fConst78;
		fConst167 = std::exp(-(5e+02f / fConst0));
		fConst168 = std::exp(-(66.666664f / fConst0));
		fConst169 = std::exp(-(333.33334f / fConst0));
		fConst170 = std::exp(-(2e+02f / fConst0));
		fConst171 = std::exp(-(5e+01f / fConst0));
		fConst172 = std::exp(-(25.0f / fConst0));
		fConst173 = std::exp(-(16.666666f / fConst0));
		fConst174 = std::exp(-(12.5f / fConst0));
		fConst175 = std::exp(-(33.333332f / fConst0));
		iConst176 = int(fConst1);
		fConst177 = 44.1f / fConst0;
		fConst178 = 1.0f - fConst177;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-25.0f);
		fVslider1 = FAUSTFLOAT(42.0f);
		fVslider2 = FAUSTFLOAT(6.0f);
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
			fRec24[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 3; l5 = l5 + 1) {
			fVec1[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 7; l6 = l6 + 1) {
			fVec2[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 15; l7 = l7 + 1) {
			fVec3[l7] = 0.0f;
		}
		IOTA0 = 0;
		for (int l8 = 0; l8 < 32; l8 = l8 + 1) {
			fVec4[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 64; l9 = l9 + 1) {
			fVec5[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 128; l10 = l10 + 1) {
			fVec6[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 256; l11 = l11 + 1) {
			fVec7[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 512; l12 = l12 + 1) {
			fVec8[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 1024; l13 = l13 + 1) {
			fVec9[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2048; l14 = l14 + 1) {
			fVec10[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 4096; l15 = l15 + 1) {
			fVec11[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 8192; l16 = l16 + 1) {
			fVec12[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 16384; l17 = l17 + 1) {
			fVec13[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 32768; l18 = l18 + 1) {
			fVec14[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 65536; l19 = l19 + 1) {
			fVec15[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 131072; l20 = l20 + 1) {
			fVec16[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 262144; l21 = l21 + 1) {
			fVec17[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 524288; l22 = l22 + 1) {
			fVec18[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec23[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec36[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec37[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec31[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec32[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec28[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec29[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec25[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec26[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fVec19[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 3; l33 = l33 + 1) {
			fVec20[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 7; l34 = l34 + 1) {
			fVec21[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 15; l35 = l35 + 1) {
			fVec22[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 32; l36 = l36 + 1) {
			fVec23[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 64; l37 = l37 + 1) {
			fVec24[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 128; l38 = l38 + 1) {
			fVec25[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 256; l39 = l39 + 1) {
			fVec26[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 512; l40 = l40 + 1) {
			fVec27[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec22[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fVec28[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec44[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec43[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec29[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec42[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec41[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fVec30[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 3; l49 = l49 + 1) {
			fVec31[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 7; l50 = l50 + 1) {
			fVec32[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 15; l51 = l51 + 1) {
			fVec33[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 32; l52 = l52 + 1) {
			fVec34[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 64; l53 = l53 + 1) {
			fVec35[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 128; l54 = l54 + 1) {
			fVec36[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 256; l55 = l55 + 1) {
			fVec37[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 512; l56 = l56 + 1) {
			fVec38[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec17[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec18[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec15[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec14[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fVec39[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fVec40[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 3; l63 = l63 + 1) {
			fVec41[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 7; l64 = l64 + 1) {
			fVec42[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 15; l65 = l65 + 1) {
			fVec43[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 32; l66 = l66 + 1) {
			fVec44[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 64; l67 = l67 + 1) {
			fVec45[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 128; l68 = l68 + 1) {
			fVec46[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 256; l69 = l69 + 1) {
			fVec47[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 512; l70 = l70 + 1) {
			fVec48[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec10[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec93[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec94[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec88[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec89[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec84[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec85[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec80[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec81[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec76[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec77[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec71[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec72[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec66[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec67[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec62[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec63[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec57[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec58[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec52[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec53[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fVec49[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fVec50[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec51[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec50[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec51[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec49[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec48[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec47[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec46[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fVec52[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec103[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec102[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fVec53[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec101[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec100[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec99[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec98[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec45[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec111[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec112[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec113[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fVec54[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec110[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec109[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fVec55[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec108[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec107[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec106[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec105[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec104[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec135[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec136[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec131[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec132[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec126[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec127[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec121[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec122[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fVec56[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fVec57[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec120[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec119[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fVec58[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec118[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec117[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec116[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec115[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec114[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec145[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec146[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec147[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fVec59[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec144[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec143[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fVec60[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec142[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec141[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec140[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec139[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec138[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec191[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec192[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec187[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec188[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec183[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec184[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec179[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec180[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec174[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec175[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec169[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec170[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec165[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec166[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec160[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec161[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec155[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec156[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fVec61[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fVec62[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec154[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec153[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fVec63[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec152[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec151[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec150[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec149[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec148[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec201[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec202[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec203[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fVec64[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec200[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec199[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fVec65[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec198[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec197[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec196[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec195[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec194[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec225[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec226[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec221[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec222[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec216[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec217[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec211[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec212[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fVec66[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fVec67[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec210[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec209[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fVec68[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec208[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec207[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec206[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec205[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec204[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec235[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec236[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec237[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fVec69[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec234[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec233[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fVec70[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec232[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec231[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec230[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			fRec229[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec228[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 3; l222 = l222 + 1) {
			fRec9[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec5[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec6[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec1[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec2[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec245[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec246[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec242[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec243[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec248[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec249[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec238[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fRec239[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec251[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec252[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			fRec259[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec260[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec255[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec256[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec262[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec263[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec0[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec267[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec268[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec266[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec274[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec275[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec271[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec272[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec277[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec278[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec281[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fRec282[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec270[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec286[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec287[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec285[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec304[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec305[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec301[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fRec302[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec298[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
			fRec299[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec307[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fRec308[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec294[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec295[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec290[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec291[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec314[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec315[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec310[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec311[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec317[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec318[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec289[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec322[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fRec323[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec321[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fRec329[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fRec330[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec326[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fRec327[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec332[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec333[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fRec336[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
			fRec337[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec325[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec341[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fRec342[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fRec340[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 2048; l293 = l293 + 1) {
			fVec71[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			iRec346[l294] = 0;
		}
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fRec347[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fRec345[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec344[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec348[l298] = 0.0f;
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
		ui_interface->declare(&fVbargraph3, "3", "");
		ui_interface->declare(&fVbargraph3, "symbol", "sb_expander");
		ui_interface->addVerticalBargraph("sb_expander", &fVbargraph3, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
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
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph18, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph16, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph16, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph14, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph14, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph12, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph10, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph8, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph6, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph4, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph4, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph11, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph9, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph7, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph5, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
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
		ui_interface->declare(&fVbargraph1, "7", "");
		ui_interface->declare(&fVbargraph1, "symbol", "leveler_brake");
		ui_interface->declare(&fVbargraph1, "unit", "%");
		ui_interface->addVerticalBargraph("brake", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f));
		ui_interface->declare(&fVbargraph2, "8", "");
		ui_interface->declare(&fVbargraph2, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph2, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider3, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph0, "symbol", "leveler_meter_minimum");
		ui_interface->addVerticalBargraph("min_track", &fVbargraph0, FAUSTFLOAT(-1e+02f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVslider2, "symbol", "leveler_expander_offset");
		ui_interface->addVerticalSlider("thresh offset", &fVslider2, FAUSTFLOAT(6.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(4e+01f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph27, "2", "");
		ui_interface->declare(&fVbargraph27, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph27, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph26, "2", "");
		ui_interface->declare(&fVbargraph26, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph26, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph25, "2", "");
		ui_interface->declare(&fVbargraph25, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph25, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph24, "2", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph24, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph23, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph22, "2", "");
		ui_interface->declare(&fVbargraph22, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph22, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph21, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVbargraph20, "2", "");
		ui_interface->declare(&fVbargraph20, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph20, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph20, FAUSTFLOAT(-6.0f), FAUSTFLOAT(6.0f));
		ui_interface->declare(&fVslider14, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider14, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider1, "scale", "log");
		ui_interface->declare(&fVslider1, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider1, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider5, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
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
		float fSlow25 = fConst177 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = float(input0[i0]);
			fVec0[0] = fTemp0;
			fRec13[0] = -(fSlow4 * (fSlow3 * fRec13[1] - fSlow2 * (fTemp0 - fVec0[1])));
			fRec12[0] = -(fConst11 * (fConst10 * fRec12[1] - (fRec13[0] + fRec13[1])));
			fRec11[0] = fRec12[0] - fConst8 * (fConst6 * fRec11[2] + fConst4 * fRec11[1]);
			float fTemp1 = std::fabs(fRec9[1]);
			fRec24[0] = fConst17 * fTemp1 + fConst16 * fRec24[1];
			float fTemp2 = std::min<float>(fRec24[0], fRec24[1]);
			fVec1[0] = fTemp2;
			float fTemp3 = std::min<float>(fTemp2, fVec1[2]);
			fVec2[0] = fTemp3;
			float fTemp4 = std::min<float>(fTemp3, fVec2[4]);
			fVec3[0] = fTemp4;
			float fTemp5 = std::min<float>(fTemp4, fVec3[8]);
			fVec4[IOTA0 & 31] = fTemp5;
			float fTemp6 = std::min<float>(fTemp5, fVec4[(IOTA0 - 16) & 31]);
			fVec5[IOTA0 & 63] = fTemp6;
			float fTemp7 = std::min<float>(fTemp6, fVec5[(IOTA0 - 32) & 63]);
			fVec6[IOTA0 & 127] = fTemp7;
			float fTemp8 = std::min<float>(fTemp7, fVec6[(IOTA0 - 64) & 127]);
			fVec7[IOTA0 & 255] = fTemp8;
			float fTemp9 = std::min<float>(fTemp8, fVec7[(IOTA0 - 128) & 255]);
			fVec8[IOTA0 & 511] = fTemp9;
			float fTemp10 = std::min<float>(fTemp9, fVec8[(IOTA0 - 256) & 511]);
			fVec9[IOTA0 & 1023] = fTemp10;
			float fTemp11 = std::min<float>(fTemp10, fVec9[(IOTA0 - 512) & 1023]);
			fVec10[IOTA0 & 2047] = fTemp11;
			float fTemp12 = std::min<float>(fTemp11, fVec10[(IOTA0 - 1024) & 2047]);
			fVec11[IOTA0 & 4095] = fTemp12;
			float fTemp13 = std::min<float>(fTemp12, fVec11[(IOTA0 - 2048) & 4095]);
			fVec12[IOTA0 & 8191] = fTemp13;
			float fTemp14 = std::min<float>(fTemp13, fVec12[(IOTA0 - 4096) & 8191]);
			fVec13[IOTA0 & 16383] = fTemp14;
			float fTemp15 = std::min<float>(fTemp14, fVec13[(IOTA0 - 8192) & 16383]);
			fVec14[IOTA0 & 32767] = fTemp15;
			float fTemp16 = std::min<float>(fTemp15, fVec14[(IOTA0 - 16384) & 32767]);
			fVec15[IOTA0 & 65535] = fTemp16;
			float fTemp17 = std::min<float>(fTemp16, fVec15[(IOTA0 - 32768) & 65535]);
			fVec16[IOTA0 & 131071] = fTemp17;
			float fTemp18 = std::min<float>(fTemp17, fVec16[(IOTA0 - 65536) & 131071]);
			fVec17[IOTA0 & 262143] = fTemp18;
			fVec18[IOTA0 & 524287] = std::min<float>(fTemp18, fVec17[(IOTA0 - 131072) & 262143]);
			fRec23[0] = fConst53 * std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(std::min<float>(((iConst15) ? fRec24[0] : 3.4028235e+38f), ((iConst18) ? fVec1[iConst15] : 3.4028235e+38f)), ((iConst19) ? fVec2[iConst20] : 3.4028235e+38f)), ((iConst21) ? fVec3[iConst22] : 3.4028235e+38f)), ((iConst23) ? fVec4[(IOTA0 - iConst24) & 31] : 3.4028235e+38f)), ((iConst25) ? fVec5[(IOTA0 - iConst26) & 63] : 3.4028235e+38f)), ((iConst27) ? fVec6[(IOTA0 - iConst28) & 127] : 3.4028235e+38f)), ((iConst29) ? fVec7[(IOTA0 - iConst30) & 255] : 3.4028235e+38f)), ((iConst31) ? fVec8[(IOTA0 - iConst32) & 511] : 3.4028235e+38f)), ((iConst33) ? fVec9[(IOTA0 - iConst34) & 1023] : 3.4028235e+38f)), ((iConst35) ? fVec10[(IOTA0 - iConst36) & 2047] : 3.4028235e+38f)), ((iConst37) ? fVec11[(IOTA0 - iConst38) & 4095] : 3.4028235e+38f)), ((iConst39) ? fVec12[(IOTA0 - iConst40) & 8191] : 3.4028235e+38f)), ((iConst41) ? fVec13[(IOTA0 - iConst42) & 16383] : 3.4028235e+38f)), ((iConst43) ? fVec14[(IOTA0 - iConst44) & 32767] : 3.4028235e+38f)), ((iConst45) ? fVec15[(IOTA0 - iConst46) & 65535] : 3.4028235e+38f)), ((iConst47) ? fVec16[(IOTA0 - iConst48) & 131071] : 3.4028235e+38f)), ((iConst49) ? fVec17[(IOTA0 - iConst50) & 262143] : 3.4028235e+38f)), ((iConst51) ? fVec18[(IOTA0 - iConst52) & 524287] : 3.4028235e+38f)) + fConst14 * fRec23[1];
			float fTemp19 = std::max<float>(-6e+01f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, fRec23[0])));
			fVbargraph0 = FAUSTFLOAT(fTemp19);
			float fTemp20 = fTemp19;
			float fTemp21 = fRec36[1] + fConst54 * (fTemp1 - fRec37[1]);
			fRec36[0] = fConst56 * fTemp21 - fRec36[1];
			float fTemp22 = fRec37[1] + fConst57 * fTemp21;
			fRec37[0] = 2.0f * fTemp22 - fRec37[1];
			float fRec38 = fTemp1;
			float fRec39 = fConst58 * fTemp21;
			float fRec40 = fTemp22;
			float fTemp23 = fRec40 + 1.4142135f * fRec39;
			float fTemp24 = fRec31[1] + fConst54 * (fRec38 - (fTemp23 + fRec32[1]));
			fRec31[0] = fConst56 * fTemp24 - fRec31[1];
			float fTemp25 = fRec32[1] + fConst57 * fTemp24;
			fRec32[0] = 2.0f * fTemp25 - fRec32[1];
			float fRec33 = fRec38 - fTemp23;
			float fRec34 = fConst58 * fTemp24;
			float fRec35 = fTemp25;
			float fTemp26 = fRec35 + 1.4142135f * fRec34;
			float fTemp27 = fRec28[1] + fConst59 * (fRec33 - (fTemp26 + fRec29[1]));
			fRec28[0] = fConst61 * fTemp27 - fRec28[1];
			float fTemp28 = fRec29[1] + fConst62 * fTemp27;
			fRec29[0] = 2.0f * fTemp28 - fRec29[1];
			float fRec30 = fTemp28;
			float fTemp29 = fRec25[1] + fConst59 * (fRec30 - fRec26[1]);
			fRec25[0] = fConst61 * fTemp29 - fRec25[1];
			float fTemp30 = fRec26[1] + fConst62 * fTemp29;
			fRec26[0] = 2.0f * fTemp30 - fRec26[1];
			float fRec27 = fTemp30;
			float fTemp31 = std::fabs(fRec27);
			fVec19[0] = fTemp31;
			float fTemp32 = std::max<float>(fTemp31, fVec19[1]);
			fVec20[0] = fTemp32;
			float fTemp33 = std::max<float>(fTemp32, fVec20[2]);
			fVec21[0] = fTemp33;
			float fTemp34 = std::max<float>(fTemp33, fVec21[4]);
			fVec22[0] = fTemp34;
			float fTemp35 = std::max<float>(fTemp34, fVec22[8]);
			fVec23[IOTA0 & 31] = fTemp35;
			float fTemp36 = std::max<float>(fTemp35, fVec23[(IOTA0 - 16) & 31]);
			fVec24[IOTA0 & 63] = fTemp36;
			float fTemp37 = std::max<float>(fTemp36, fVec24[(IOTA0 - 32) & 63]);
			fVec25[IOTA0 & 127] = fTemp37;
			float fTemp38 = std::max<float>(fTemp37, fVec25[(IOTA0 - 64) & 127]);
			fVec26[IOTA0 & 255] = fTemp38;
			fVec27[IOTA0 & 511] = std::max<float>(fTemp38, fVec26[(IOTA0 - 128) & 255]);
			float fTemp39 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp31 : -3.4028235e+38f), ((iConst63) ? fVec20[iConst2] : -3.4028235e+38f)), ((iConst64) ? fVec21[iConst65] : -3.4028235e+38f)), ((iConst66) ? fVec22[iConst67] : -3.4028235e+38f)), ((iConst68) ? fVec23[(IOTA0 - iConst69) & 31] : -3.4028235e+38f)), ((iConst70) ? fVec24[(IOTA0 - iConst71) & 63] : -3.4028235e+38f)), ((iConst72) ? fVec25[(IOTA0 - iConst73) & 127] : -3.4028235e+38f)), ((iConst74) ? fVec26[(IOTA0 - iConst75) & 255] : -3.4028235e+38f)), ((iConst76) ? fVec27[(IOTA0 - iConst77) & 511] : -3.4028235e+38f))));
			int iTemp40 = (fTemp39 > (fSlow5 + fTemp20 + -12.0f)) + (fTemp39 > (fSlow5 + fTemp20 + 12.0f));
			float fTemp41 = std::max<float>(-3.4028235e+38f, 1e+02f * ((iTemp40 == 0) ? fTemp39 - fTemp20 - fSlow5 : ((iTemp40 == 1) ? -(0.020833334f * mydsp_faustpower2_f(fTemp39 + (-12.0f - fTemp20) - fSlow5)) : 0.0f)));
			float fTemp42 = ((fTemp41 > fRec22[1]) ? fConst79 : fConst78);
			fRec22[0] = fTemp41 * (1.0f - fTemp42) + fRec22[1] * fTemp42;
			float fTemp43 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec22[0])));
			fVbargraph1 = FAUSTFLOAT(1e+02f * (1.0f - fTemp43));
			float fTemp44 = std::tan(fConst9 * std::min<float>(fConst12, fTemp43 * (fConst13 * std::fabs(fRec15[1]) + 0.1316f)));
			float fTemp45 = fTemp44 + 2.0f;
			float fTemp46 = fTemp44 * fTemp45 + 1.0f;
			fVec28[0] = fConst89 * fRec43[1] - fConst87 * fRec9[2];
			fRec44[0] = fConst92 * (fConst91 * fRec9[2] - (fVec28[1] + fConst86 * fRec44[1]) + fConst85 * fRec9[1]);
			fRec43[0] = fRec44[0];
			fVec29[0] = 0.50032705f * fRec43[1] - fConst97 * fRec41[1];
			fRec42[0] = fConst98 * (fVec29[1] - fConst95 * fRec42[1] - 1.0006541f * fRec43[1] + 0.50032705f * fRec43[0]);
			fRec41[0] = fRec42[0];
			float fTemp47 = mydsp_faustpower2_f(fRec41[0]);
			fVec30[0] = fTemp47;
			float fTemp48 = fTemp47 + fVec30[1];
			fVec31[0] = fTemp48;
			float fTemp49 = fTemp48 + fVec31[2];
			fVec32[0] = fTemp49;
			float fTemp50 = fTemp49 + fVec32[4];
			fVec33[0] = fTemp50;
			float fTemp51 = fTemp50 + fVec33[8];
			fVec34[IOTA0 & 31] = fTemp51;
			float fTemp52 = fTemp51 + fVec34[(IOTA0 - 16) & 31];
			fVec35[IOTA0 & 63] = fTemp52;
			float fTemp53 = fTemp52 + fVec35[(IOTA0 - 32) & 63];
			fVec36[IOTA0 & 127] = fTemp53;
			float fTemp54 = fTemp53 + fVec36[(IOTA0 - 64) & 127];
			fVec37[IOTA0 & 255] = fTemp54;
			fVec38[IOTA0 & 511] = fTemp54 + fVec37[(IOTA0 - 128) & 255];
			float fTemp55 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow0 + fRec14[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst114 * (((iConst112) ? 0.86000985f * fVec38[(IOTA0 - iConst113) & 511] : 0.0f) + ((iConst110) ? 0.86000985f * fVec37[(IOTA0 - iConst111) & 255] : 0.0f) + ((iConst108) ? 0.86000985f * fVec36[(IOTA0 - iConst109) & 127] : 0.0f) + ((iConst106) ? 0.86000985f * fVec35[(IOTA0 - iConst107) & 63] : 0.0f) + ((iConst104) ? 0.86000985f * fVec34[(IOTA0 - iConst105) & 31] : 0.0f) + ((iConst102) ? 0.86000985f * fVec33[iConst103] : 0.0f) + ((iConst100) ? 0.86000985f * fVec32[iConst101] : 0.0f) + ((iConst99) ? 0.86000985f * fTemp47 : 0.0f) + ((iConst81) ? 0.86000985f * fVec31[iConst99] : 0.0f))))))) - (fRec17[1] * fTemp45 + fRec18[1]);
			float fTemp56 = fTemp44 * fTemp55 / fTemp46;
			fRec17[0] = fRec17[1] + 2.0f * fTemp56;
			float fTemp57 = fRec17[1] + fTemp56;
			float fTemp58 = fTemp44 * fTemp57;
			fRec18[0] = fRec18[1] + 2.0f * fTemp58;
			float fRec19 = fTemp57;
			float fRec20 = fTemp55 / fTemp46;
			float fRec21 = fRec18[1] + fTemp58;
			fRec15[0] = fRec19;
			float fRec16 = fRec21;
			fVbargraph2 = FAUSTFLOAT(fSlow6 * fRec16);
			fRec14[0] = fVbargraph2;
			float fTemp59 = std::pow(1e+01f, 0.05f * fRec14[0]) * (fRec11[2] + fRec11[0] + 2.0f * fRec11[1]);
			fVec39[0] = fTemp59;
			float fTemp60 = fConst8 * fTemp59;
			float fTemp61 = std::fabs(fTemp60);
			fVec40[0] = fTemp61;
			float fTemp62 = std::max<float>(fTemp61, fVec40[1]);
			fVec41[0] = fTemp62;
			float fTemp63 = std::max<float>(fTemp62, fVec41[2]);
			fVec42[0] = fTemp63;
			float fTemp64 = std::max<float>(fTemp63, fVec42[4]);
			fVec43[0] = fTemp64;
			float fTemp65 = std::max<float>(fTemp64, fVec43[8]);
			fVec44[IOTA0 & 31] = fTemp65;
			float fTemp66 = std::max<float>(fTemp65, fVec44[(IOTA0 - 16) & 31]);
			fVec45[IOTA0 & 63] = fTemp66;
			float fTemp67 = std::max<float>(fTemp66, fVec45[(IOTA0 - 32) & 63]);
			fVec46[IOTA0 & 127] = fTemp67;
			float fTemp68 = std::max<float>(fTemp67, fVec46[(IOTA0 - 64) & 127]);
			fVec47[IOTA0 & 255] = fTemp68;
			fVec48[IOTA0 & 511] = std::max<float>(fTemp68, fVec47[(IOTA0 - 128) & 255]);
			float fTemp69 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst2) ? fTemp61 : -3.4028235e+38f), ((iConst63) ? fVec41[iConst2] : -3.4028235e+38f)), ((iConst64) ? fVec42[iConst65] : -3.4028235e+38f)), ((iConst66) ? fVec43[iConst67] : -3.4028235e+38f)), ((iConst68) ? fVec44[(IOTA0 - iConst69) & 31] : -3.4028235e+38f)), ((iConst70) ? fVec45[(IOTA0 - iConst71) & 63] : -3.4028235e+38f)), ((iConst72) ? fVec46[(IOTA0 - iConst73) & 127] : -3.4028235e+38f)), ((iConst74) ? fVec47[(IOTA0 - iConst75) & 255] : -3.4028235e+38f)), ((iConst76) ? fVec48[(IOTA0 - iConst77) & 511] : -3.4028235e+38f))));
			float fTemp70 = 2e+01f * fTemp69;
			int iTemp71 = (fTemp70 > -2e+01f) + (fTemp70 > -2e+01f);
			float fTemp72 = 2e+01f * (fTemp69 + 1.0f);
			float fTemp73 = std::max<float>(-3.4028235e+38f, 0.8f * ((iTemp71 == 0) ? fTemp72 : ((iTemp71 == 1) ? -(4194304.0f * mydsp_faustpower2_f(fTemp72 + -5.9604645e-08f)) : 0.0f)));
			float fTemp74 = ((fTemp73 > fRec10[1]) ? fConst115 : fConst14);
			fRec10[0] = fTemp73 * (1.0f - fTemp74) + fRec10[1] * fTemp74;
			float fTemp75 = std::min<float>(1.0f, std::max<float>(0.0f, std::pow(1e+01f, 0.05f * fRec10[0])));
			fVbargraph3 = FAUSTFLOAT(fTemp75);
			float fTemp76 = fTemp75;
			float fTemp77 = fRec93[1] + fConst116 * (fTemp60 - fRec94[1]);
			fRec93[0] = fConst118 * fTemp77 - fRec93[1];
			float fTemp78 = fRec94[1] + fConst119 * fTemp77;
			fRec94[0] = 2.0f * fTemp78 - fRec94[1];
			float fRec95 = fTemp60;
			float fRec96 = fConst120 * fTemp77;
			float fRec97 = fTemp78;
			float fTemp79 = fRec97 + 1.4142135f * fRec96;
			float fTemp80 = fRec88[1] + fConst116 * (fRec95 - (fTemp79 + fRec89[1]));
			fRec88[0] = fConst118 * fTemp80 - fRec88[1];
			float fTemp81 = fRec89[1] + fConst119 * fTemp80;
			fRec89[0] = 2.0f * fTemp81 - fRec89[1];
			float fRec90 = fRec95 - fTemp79;
			float fRec91 = fConst120 * fTemp80;
			float fRec92 = fTemp81;
			float fTemp82 = fRec92 + 1.4142135f * fRec91;
			float fTemp83 = fRec84[1] + fConst121 * (fRec90 - (fTemp82 + fRec85[1]));
			fRec84[0] = fConst123 * fTemp83 - fRec84[1];
			float fTemp84 = fRec85[1] + fConst124 * fTemp83;
			fRec85[0] = 2.0f * fTemp84 - fRec85[1];
			float fRec86 = fRec90 - fTemp82;
			float fRec87 = fConst125 * fTemp83;
			float fTemp85 = 2.828427f * fRec87;
			float fTemp86 = fRec80[1] + fConst126 * (fRec86 - (fTemp85 + fRec81[1]));
			fRec80[0] = fConst128 * fTemp86 - fRec80[1];
			float fTemp87 = fRec81[1] + fConst129 * fTemp86;
			fRec81[0] = 2.0f * fTemp87 - fRec81[1];
			float fRec82 = fRec86 - fTemp85;
			float fRec83 = fConst130 * fTemp86;
			float fTemp88 = 2.828427f * fRec83;
			float fTemp89 = fRec76[1] + fConst59 * (fRec82 - (fTemp88 + fRec77[1]));
			fRec76[0] = fConst61 * fTemp89 - fRec76[1];
			float fTemp90 = fRec77[1] + fConst62 * fTemp89;
			fRec77[0] = 2.0f * fTemp90 - fRec77[1];
			float fRec78 = fRec82 - fTemp88;
			float fRec79 = fConst131 * fTemp89;
			float fTemp91 = 2.828427f * fRec79;
			float fTemp92 = fRec71[1] + fConst132 * (fRec78 - (fTemp91 + fRec72[1]));
			fRec71[0] = fConst134 * fTemp92 - fRec71[1];
			float fTemp93 = fRec72[1] + fConst135 * fTemp92;
			fRec72[0] = 2.0f * fTemp93 - fRec72[1];
			float fRec73 = fRec78 - fTemp91;
			float fRec74 = fConst136 * fTemp92;
			float fRec75 = fTemp93;
			float fTemp94 = fRec75 + 1.4142135f * fRec74;
			float fTemp95 = fRec66[1] + fConst132 * (fRec73 - (fTemp94 + fRec67[1]));
			fRec66[0] = fConst134 * fTemp95 - fRec66[1];
			float fTemp96 = fRec67[1] + fConst135 * fTemp95;
			fRec67[0] = 2.0f * fTemp96 - fRec67[1];
			float fRec68 = fRec73 - fTemp94;
			float fRec69 = fConst136 * fTemp95;
			float fRec70 = fTemp96;
			float fTemp97 = fRec70 + 1.4142135f * fRec69;
			float fTemp98 = fRec62[1] + fConst137 * (fRec68 - (fTemp97 + fRec63[1]));
			fRec62[0] = fConst139 * fTemp98 - fRec62[1];
			float fTemp99 = fRec63[1] + fConst140 * fTemp98;
			fRec63[0] = 2.0f * fTemp99 - fRec63[1];
			float fRec64 = fRec68 - fTemp97;
			float fRec65 = fConst141 * fTemp98;
			float fTemp100 = 2.828427f * fRec65;
			float fTemp101 = fRec57[1] + fConst142 * (fRec64 - (fTemp100 + fRec58[1]));
			fRec57[0] = fConst144 * fTemp101 - fRec57[1];
			float fTemp102 = fRec58[1] + fConst145 * fTemp101;
			fRec58[0] = 2.0f * fTemp102 - fRec58[1];
			float fRec59 = fRec64 - fTemp100;
			float fRec60 = fConst146 * fTemp101;
			float fRec61 = fTemp102;
			float fTemp103 = fRec61 + 1.4142135f * fRec60;
			float fTemp104 = fRec52[1] + fConst142 * (fRec59 - (fTemp103 + fRec53[1]));
			fRec52[0] = fConst144 * fTemp104 - fRec52[1];
			float fTemp105 = fRec53[1] + fConst145 * fTemp104;
			fRec53[0] = 2.0f * fTemp105 - fRec53[1];
			float fRec54 = fRec59 - fTemp103;
			float fRec55 = fConst146 * fTemp104;
			float fRec56 = fTemp105;
			float fTemp106 = fRec54 - (fRec56 + 1.4142135f * fRec55);
			fVec49[0] = fTemp106;
			fVec50[0] = fConst149 * fVec49[1] - fConst89 * fRec50[1];
			fRec51[0] = fConst92 * (fVec50[1] - fConst86 * fRec51[1] + fConst148 * fVec49[1] + fConst147 * fTemp106);
			fRec50[0] = fRec51[0];
			fVec51[0] = 0.50032705f * fRec50[1] - fConst97 * fRec48[1];
			fRec49[0] = fConst98 * (fVec51[1] - fConst95 * fRec49[1] - 1.0006541f * fRec50[1] + 0.50032705f * fRec50[0]);
			fRec48[0] = fRec49[0];
			float fTemp107 = std::fabs(0.92736715f * fRec48[0]);
			fRec47[0] = std::max<float>(fTemp107, fConst150 * fRec47[1] + fConst151 * fTemp107);
			fRec46[0] = fConst17 * fRec47[0] + fConst16 * fRec46[1];
			fVec52[0] = fConst89 * fRec102[1] - fConst153 * fVec39[1];
			fRec103[0] = fConst92 * (fConst154 * fVec39[1] - (fVec52[1] + fConst86 * fRec103[1]) + fConst152 * fTemp59);
			fRec102[0] = fRec103[0];
			fVec53[0] = 0.50032705f * fRec102[1] - fConst97 * fRec100[1];
			fRec101[0] = fConst98 * (fVec53[1] - fConst95 * fRec101[1] - 1.0006541f * fRec102[1] + 0.50032705f * fRec102[0]);
			fRec100[0] = fRec101[0];
			float fTemp108 = std::fabs(0.92736715f * fRec100[0]);
			fRec99[0] = std::max<float>(fTemp108, fConst150 * fRec99[1] + fConst151 * fTemp108);
			fRec98[0] = fConst17 * fRec99[0] + fConst16 * fRec98[1];
			float fTemp109 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec98[0])));
			float fTemp110 = 2e+01f * (fTemp109 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec46[0]))));
			fVbargraph4 = FAUSTFLOAT(-fTemp110);
			fRec45[0] = fConst155 * (fSlow7 - -fTemp110) + fConst115 * fRec45[1];
			float fTemp111 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec45[0])) * fTemp76);
			fVbargraph5 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp111)));
			float fTemp112 = fRec111[1] + fConst142 * (fRec61 - fRec112[1]);
			fRec111[0] = fConst144 * fTemp112 - fRec111[1];
			float fTemp113 = fRec112[1] + fConst145 * fTemp112;
			fRec112[0] = 2.0f * fTemp113 - fRec112[1];
			fRec113[0] = fTemp113;
			fVec54[0] = fConst149 * fRec113[1] - fConst89 * fRec109[1];
			fRec110[0] = fConst92 * (fVec54[1] - fConst86 * fRec110[1] + fConst148 * fRec113[1] + fConst147 * fRec113[0]);
			fRec109[0] = fRec110[0];
			fVec55[0] = 0.50032705f * fRec109[1] - fConst97 * fRec107[1];
			fRec108[0] = fConst98 * (fVec55[1] - fConst95 * fRec108[1] - 1.0006541f * fRec109[1] + 0.50032705f * fRec109[0]);
			fRec107[0] = fRec108[0];
			float fTemp114 = std::fabs(0.92736715f * fRec107[0]);
			fRec106[0] = std::max<float>(fTemp114, fConst150 * fRec106[1] + fConst151 * fTemp114);
			fRec105[0] = fConst17 * fRec106[0] + fConst16 * fRec105[1];
			float fTemp115 = 2e+01f * (fTemp109 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec105[0]))));
			fVbargraph6 = FAUSTFLOAT(-fTemp115);
			fRec104[0] = fConst157 * (fSlow10 - -fTemp115) + fConst156 * fRec104[1];
			float fTemp116 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec104[0])) * fTemp76);
			fVbargraph7 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp116)));
			float fTemp117 = fRec135[1] + fConst132 * (fRec75 - fRec136[1]);
			fRec135[0] = fConst134 * fTemp117 - fRec135[1];
			float fTemp118 = fRec136[1] + fConst135 * fTemp117;
			fRec136[0] = 2.0f * fTemp118 - fRec136[1];
			float fRec137 = fTemp118;
			float fTemp119 = fRec131[1] + fConst142 * (fRec137 - fRec132[1]);
			fRec131[0] = fConst144 * fTemp119 - fRec131[1];
			float fTemp120 = fRec132[1] + fConst145 * fTemp119;
			fRec132[0] = 2.0f * fTemp120 - fRec132[1];
			float fRec133 = fRec137;
			float fRec134 = fConst146 * fTemp119;
			float fTemp121 = 2.828427f * fRec134;
			float fTemp122 = fRec126[1] + fConst137 * (fRec133 - (fTemp121 + fRec127[1]));
			fRec126[0] = fConst139 * fTemp122 - fRec126[1];
			float fTemp123 = fRec127[1] + fConst140 * fTemp122;
			fRec127[0] = 2.0f * fTemp123 - fRec127[1];
			float fRec128 = fRec133 - fTemp121;
			float fRec129 = fConst141 * fTemp122;
			float fRec130 = fTemp123;
			float fTemp124 = fRec130 + 1.4142135f * fRec129;
			float fTemp125 = fRec121[1] + fConst137 * (fRec128 - (fTemp124 + fRec122[1]));
			fRec121[0] = fConst139 * fTemp125 - fRec121[1];
			float fTemp126 = fRec122[1] + fConst140 * fTemp125;
			fRec122[0] = 2.0f * fTemp126 - fRec122[1];
			float fRec123 = fRec128 - fTemp124;
			float fRec124 = fConst141 * fTemp125;
			float fRec125 = fTemp126;
			float fTemp127 = fRec123 - (fRec125 + 1.4142135f * fRec124);
			fVec56[0] = fTemp127;
			fVec57[0] = fConst149 * fVec56[1] - fConst89 * fRec119[1];
			fRec120[0] = fConst92 * (fVec57[1] - fConst86 * fRec120[1] + fConst148 * fVec56[1] + fConst147 * fTemp127);
			fRec119[0] = fRec120[0];
			fVec58[0] = 0.50032705f * fRec119[1] - fConst97 * fRec117[1];
			fRec118[0] = fConst98 * (fVec58[1] - fConst95 * fRec118[1] - 1.0006541f * fRec119[1] + 0.50032705f * fRec119[0]);
			fRec117[0] = fRec118[0];
			float fTemp128 = std::fabs(0.92736715f * fRec117[0]);
			fRec116[0] = std::max<float>(fTemp128, fConst150 * fRec116[1] + fConst151 * fTemp128);
			fRec115[0] = fConst17 * fRec116[0] + fConst16 * fRec115[1];
			float fTemp129 = 2e+01f * (fTemp109 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec115[0]))));
			fVbargraph8 = FAUSTFLOAT(-fTemp129);
			fRec114[0] = fConst159 * (fSlow11 - -fTemp129) + fConst158 * fRec114[1];
			float fTemp130 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec114[0])) * fTemp76);
			fVbargraph9 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp130)));
			float fTemp131 = fRec145[1] + fConst137 * (fRec130 - fRec146[1]);
			fRec145[0] = fConst139 * fTemp131 - fRec145[1];
			float fTemp132 = fRec146[1] + fConst140 * fTemp131;
			fRec146[0] = 2.0f * fTemp132 - fRec146[1];
			fRec147[0] = fTemp132;
			fVec59[0] = fConst149 * fRec147[1] - fConst89 * fRec143[1];
			fRec144[0] = fConst92 * (fVec59[1] - fConst86 * fRec144[1] + fConst148 * fRec147[1] + fConst147 * fRec147[0]);
			fRec143[0] = fRec144[0];
			fVec60[0] = 0.50032705f * fRec143[1] - fConst97 * fRec141[1];
			fRec142[0] = fConst98 * (fVec60[1] - fConst95 * fRec142[1] - 1.0006541f * fRec143[1] + 0.50032705f * fRec143[0]);
			fRec141[0] = fRec142[0];
			float fTemp133 = std::fabs(0.92736715f * fRec141[0]);
			fRec140[0] = std::max<float>(fTemp133, fConst150 * fRec140[1] + fConst151 * fTemp133);
			fRec139[0] = fConst17 * fRec140[0] + fConst16 * fRec139[1];
			float fTemp134 = 2e+01f * (fTemp109 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec139[0]))));
			fVbargraph10 = FAUSTFLOAT(-fTemp134);
			fRec138[0] = fConst151 * (fSlow12 - -fTemp134) + fConst150 * fRec138[1];
			float fTemp135 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec138[0])) * fTemp76);
			fVbargraph11 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp135)));
			float fTemp136 = fRec191[1] + fConst116 * (fRec97 - fRec192[1]);
			fRec191[0] = fConst118 * fTemp136 - fRec191[1];
			float fTemp137 = fRec192[1] + fConst119 * fTemp136;
			fRec192[0] = 2.0f * fTemp137 - fRec192[1];
			float fRec193 = fTemp137;
			float fTemp138 = fRec187[1] + fConst132 * (fRec193 - fRec188[1]);
			fRec187[0] = fConst134 * fTemp138 - fRec187[1];
			float fTemp139 = fRec188[1] + fConst135 * fTemp138;
			fRec188[0] = 2.0f * fTemp139 - fRec188[1];
			float fRec189 = fRec193;
			float fRec190 = fConst136 * fTemp138;
			float fTemp140 = 2.828427f * fRec190;
			float fTemp141 = fRec183[1] + fConst137 * (fRec189 - (fTemp140 + fRec184[1]));
			fRec183[0] = fConst139 * fTemp141 - fRec183[1];
			float fTemp142 = fRec184[1] + fConst140 * fTemp141;
			fRec184[0] = 2.0f * fTemp142 - fRec184[1];
			float fRec185 = fRec189 - fTemp140;
			float fRec186 = fConst141 * fTemp141;
			float fTemp143 = 2.828427f * fRec186;
			float fTemp144 = fRec179[1] + fConst142 * (fRec185 - (fTemp143 + fRec180[1]));
			fRec179[0] = fConst144 * fTemp144 - fRec179[1];
			float fTemp145 = fRec180[1] + fConst145 * fTemp144;
			fRec180[0] = 2.0f * fTemp145 - fRec180[1];
			float fRec181 = fRec185 - fTemp143;
			float fRec182 = fConst146 * fTemp144;
			float fTemp146 = 2.828427f * fRec182;
			float fTemp147 = fRec174[1] + fConst121 * (fRec181 - (fTemp146 + fRec175[1]));
			fRec174[0] = fConst123 * fTemp147 - fRec174[1];
			float fTemp148 = fRec175[1] + fConst124 * fTemp147;
			fRec175[0] = 2.0f * fTemp148 - fRec175[1];
			float fRec176 = fRec181 - fTemp146;
			float fRec177 = fConst125 * fTemp147;
			float fRec178 = fTemp148;
			float fTemp149 = fRec178 + 1.4142135f * fRec177;
			float fTemp150 = fRec169[1] + fConst121 * (fRec176 - (fTemp149 + fRec170[1]));
			fRec169[0] = fConst123 * fTemp150 - fRec169[1];
			float fTemp151 = fRec170[1] + fConst124 * fTemp150;
			fRec170[0] = 2.0f * fTemp151 - fRec170[1];
			float fRec171 = fRec176 - fTemp149;
			float fRec172 = fConst125 * fTemp150;
			float fRec173 = fTemp151;
			float fTemp152 = fRec173 + 1.4142135f * fRec172;
			float fTemp153 = fRec165[1] + fConst126 * (fRec171 - (fTemp152 + fRec166[1]));
			fRec165[0] = fConst128 * fTemp153 - fRec165[1];
			float fTemp154 = fRec166[1] + fConst129 * fTemp153;
			fRec166[0] = 2.0f * fTemp154 - fRec166[1];
			float fRec167 = fRec171 - fTemp152;
			float fRec168 = fConst130 * fTemp153;
			float fTemp155 = 2.828427f * fRec168;
			float fTemp156 = fRec160[1] + fConst59 * (fRec167 - (fTemp155 + fRec161[1]));
			fRec160[0] = fConst61 * fTemp156 - fRec160[1];
			float fTemp157 = fRec161[1] + fConst62 * fTemp156;
			fRec161[0] = 2.0f * fTemp157 - fRec161[1];
			float fRec162 = fRec167 - fTemp155;
			float fRec163 = fConst131 * fTemp156;
			float fRec164 = fTemp157;
			float fTemp158 = fRec164 + 1.4142135f * fRec163;
			float fTemp159 = fRec155[1] + fConst59 * (fRec162 - (fTemp158 + fRec156[1]));
			fRec155[0] = fConst61 * fTemp159 - fRec155[1];
			float fTemp160 = fRec156[1] + fConst62 * fTemp159;
			fRec156[0] = 2.0f * fTemp160 - fRec156[1];
			float fRec157 = fRec162 - fTemp158;
			float fRec158 = fConst131 * fTemp159;
			float fRec159 = fTemp160;
			float fTemp161 = fRec157 - (fRec159 + 1.4142135f * fRec158);
			fVec61[0] = fTemp161;
			fVec62[0] = fConst149 * fVec61[1] - fConst89 * fRec153[1];
			fRec154[0] = fConst92 * (fVec62[1] - fConst86 * fRec154[1] + fConst148 * fVec61[1] + fConst147 * fTemp161);
			fRec153[0] = fRec154[0];
			fVec63[0] = 0.50032705f * fRec153[1] - fConst97 * fRec151[1];
			fRec152[0] = fConst98 * (fVec63[1] - fConst95 * fRec152[1] - 1.0006541f * fRec153[1] + 0.50032705f * fRec153[0]);
			fRec151[0] = fRec152[0];
			float fTemp162 = std::fabs(0.92736715f * fRec151[0]);
			fRec150[0] = std::max<float>(fTemp162, fConst150 * fRec150[1] + fConst151 * fTemp162);
			fRec149[0] = fConst17 * fRec150[0] + fConst16 * fRec149[1];
			float fTemp163 = 2e+01f * (fTemp109 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec149[0]))));
			fVbargraph12 = FAUSTFLOAT(-fTemp163);
			fRec148[0] = fConst161 * (fSlow13 - -fTemp163) + fConst160 * fRec148[1];
			float fTemp164 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec148[0])) * fTemp76);
			fVbargraph13 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp164)));
			float fTemp165 = fRec201[1] + fConst59 * (fRec164 - fRec202[1]);
			fRec201[0] = fConst61 * fTemp165 - fRec201[1];
			float fTemp166 = fRec202[1] + fConst62 * fTemp165;
			fRec202[0] = 2.0f * fTemp166 - fRec202[1];
			fRec203[0] = fTemp166;
			fVec64[0] = fConst149 * fRec203[1] - fConst89 * fRec199[1];
			fRec200[0] = fConst92 * (fVec64[1] - fConst86 * fRec200[1] + fConst148 * fRec203[1] + fConst147 * fRec203[0]);
			fRec199[0] = fRec200[0];
			fVec65[0] = 0.50032705f * fRec199[1] - fConst97 * fRec197[1];
			fRec198[0] = fConst98 * (fVec65[1] - fConst95 * fRec198[1] - 1.0006541f * fRec199[1] + 0.50032705f * fRec199[0]);
			fRec197[0] = fRec198[0];
			float fTemp167 = std::fabs(0.92736715f * fRec197[0]);
			fRec196[0] = std::max<float>(fTemp167, fConst150 * fRec196[1] + fConst151 * fTemp167);
			fRec195[0] = fConst17 * fRec196[0] + fConst16 * fRec195[1];
			float fTemp168 = 2e+01f * (fTemp109 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec195[0]))));
			fVbargraph14 = FAUSTFLOAT(-fTemp168);
			fRec194[0] = fConst163 * (fSlow14 - -fTemp168) + fConst162 * fRec194[1];
			float fTemp169 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec194[0])) * fTemp76);
			fVbargraph15 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp169)));
			float fTemp170 = fRec225[1] + fConst121 * (fRec178 - fRec226[1]);
			fRec225[0] = fConst123 * fTemp170 - fRec225[1];
			float fTemp171 = fRec226[1] + fConst124 * fTemp170;
			fRec226[0] = 2.0f * fTemp171 - fRec226[1];
			float fRec227 = fTemp171;
			float fTemp172 = fRec221[1] + fConst59 * (fRec227 - fRec222[1]);
			fRec221[0] = fConst61 * fTemp172 - fRec221[1];
			float fTemp173 = fRec222[1] + fConst62 * fTemp172;
			fRec222[0] = 2.0f * fTemp173 - fRec222[1];
			float fRec223 = fRec227;
			float fRec224 = fConst131 * fTemp172;
			float fTemp174 = 2.828427f * fRec224;
			float fTemp175 = fRec216[1] + fConst126 * (fRec223 - (fTemp174 + fRec217[1]));
			fRec216[0] = fConst128 * fTemp175 - fRec216[1];
			float fTemp176 = fRec217[1] + fConst129 * fTemp175;
			fRec217[0] = 2.0f * fTemp176 - fRec217[1];
			float fRec218 = fRec223 - fTemp174;
			float fRec219 = fConst130 * fTemp175;
			float fRec220 = fTemp176;
			float fTemp177 = fRec220 + 1.4142135f * fRec219;
			float fTemp178 = fRec211[1] + fConst126 * (fRec218 - (fTemp177 + fRec212[1]));
			fRec211[0] = fConst128 * fTemp178 - fRec211[1];
			float fTemp179 = fRec212[1] + fConst129 * fTemp178;
			fRec212[0] = 2.0f * fTemp179 - fRec212[1];
			float fRec213 = fRec218 - fTemp177;
			float fRec214 = fConst130 * fTemp178;
			float fRec215 = fTemp179;
			float fTemp180 = fRec213 - (fRec215 + 1.4142135f * fRec214);
			fVec66[0] = fTemp180;
			fVec67[0] = fConst149 * fVec66[1] - fConst89 * fRec209[1];
			fRec210[0] = fConst92 * (fVec67[1] - fConst86 * fRec210[1] + fConst148 * fVec66[1] + fConst147 * fTemp180);
			fRec209[0] = fRec210[0];
			fVec68[0] = 0.50032705f * fRec209[1] - fConst97 * fRec207[1];
			fRec208[0] = fConst98 * (fVec68[1] - fConst95 * fRec208[1] - 1.0006541f * fRec209[1] + 0.50032705f * fRec209[0]);
			fRec207[0] = fRec208[0];
			float fTemp181 = std::fabs(0.92736715f * fRec207[0]);
			fRec206[0] = std::max<float>(fTemp181, fConst150 * fRec206[1] + fConst151 * fTemp181);
			fRec205[0] = fConst17 * fRec206[0] + fConst16 * fRec205[1];
			float fTemp182 = 2e+01f * (fTemp109 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec205[0]))));
			fVbargraph16 = FAUSTFLOAT(-fTemp182);
			fRec204[0] = fConst165 * (fSlow15 - -fTemp182) + fConst164 * fRec204[1];
			float fTemp183 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec204[0])) * fTemp76);
			fVbargraph17 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp183)));
			float fTemp184 = fRec235[1] + fConst126 * (fRec220 - fRec236[1]);
			fRec235[0] = fConst128 * fTemp184 - fRec235[1];
			float fTemp185 = fRec236[1] + fConst129 * fTemp184;
			fRec236[0] = 2.0f * fTemp185 - fRec236[1];
			fRec237[0] = fTemp185;
			fVec69[0] = fConst149 * fRec237[1] - fConst89 * fRec233[1];
			fRec234[0] = fConst92 * (fVec69[1] - fConst86 * fRec234[1] + fConst148 * fRec237[1] + fConst147 * fRec237[0]);
			fRec233[0] = fRec234[0];
			fVec70[0] = 0.50032705f * fRec233[1] - fConst97 * fRec231[1];
			fRec232[0] = fConst98 * (fVec70[1] - fConst95 * fRec232[1] - 1.0006541f * fRec233[1] + 0.50032705f * fRec233[0]);
			fRec231[0] = fRec232[0];
			float fTemp186 = std::fabs(0.92736715f * fRec231[0]);
			fRec230[0] = std::max<float>(fTemp186, fConst150 * fRec230[1] + fConst151 * fTemp186);
			fRec229[0] = fConst17 * fRec230[0] + fConst16 * fRec229[1];
			float fTemp187 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec229[0]))) - fTemp109);
			fVbargraph18 = FAUSTFLOAT(fTemp187);
			fRec228[0] = fConst166 * (fSlow16 - fTemp187) + fConst78 * fRec228[1];
			float fTemp188 = std::pow(1e+01f, fSlow9 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec228[0])) * fTemp76);
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp188)));
			fRec9[0] = fRec237[0] * fTemp188 + fTemp180 * fTemp183 + fRec203[0] * fTemp169 + fTemp161 * fTemp164 + fRec147[0] * fTemp135 + fTemp127 * fTemp130 + fRec113[0] * fTemp116 + fTemp106 * fTemp111;
			float fTemp189 = fRec5[1] + fConst116 * (fRec9[0] - fRec6[1]);
			fRec5[0] = fConst118 * fTemp189 - fRec5[1];
			float fTemp190 = fRec6[1] + fConst119 * fTemp189;
			fRec6[0] = 2.0f * fTemp190 - fRec6[1];
			float fRec7 = fConst120 * fTemp189;
			float fRec8 = fTemp190;
			float fTemp191 = fRec8 + 1.4142135f * fRec7;
			float fTemp192 = fRec1[1] + fConst116 * (fRec9[0] - (fTemp191 + fRec2[1]));
			fRec1[0] = fConst118 * fTemp192 - fRec1[1];
			float fTemp193 = fRec2[1] + fConst119 * fTemp192;
			fRec2[0] = 2.0f * fTemp193 - fRec2[1];
			float fRec3 = fConst120 * fTemp192;
			float fRec4 = fTemp193;
			float fTemp194 = fRec8 + fRec4;
			float fTemp195 = fRec7 + fRec3;
			float fTemp196 = 1.4142135f * fTemp195;
			float fTemp197 = fTemp196 + fTemp194;
			float fTemp198 = fRec245[1] + fConst121 * (fRec9[0] - (fTemp197 + fRec246[1]));
			fRec245[0] = fConst123 * fTemp198 - fRec245[1];
			float fTemp199 = fRec246[1] + fConst124 * fTemp198;
			fRec246[0] = 2.0f * fTemp199 - fRec246[1];
			float fRec247 = fConst125 * fTemp198;
			float fTemp200 = fTemp196 + fTemp194 + 2.828427f * fRec247;
			float fTemp201 = fRec242[1] + fConst126 * (fRec9[0] - (fTemp200 + fRec243[1]));
			fRec242[0] = fConst128 * fTemp201 - fRec242[1];
			float fTemp202 = fRec243[1] + fConst129 * fTemp201;
			fRec243[0] = 2.0f * fTemp202 - fRec243[1];
			float fRec244 = fConst130 * fTemp201;
			float fTemp203 = fRec247 + fRec244;
			float fTemp204 = fTemp197 + 2.828427f * fTemp203;
			float fTemp205 = fRec248[1] + fConst59 * (fRec9[0] - (fTemp204 + fRec249[1]));
			fRec248[0] = fConst61 * fTemp205 - fRec248[1];
			float fTemp206 = fRec249[1] + fConst62 * fTemp205;
			fRec249[0] = 2.0f * fTemp206 - fRec249[1];
			float fRec250 = fConst131 * fTemp205;
			float fTemp207 = fRec250 + fTemp203;
			float fTemp208 = 2.828427f * fTemp207;
			float fTemp209 = fTemp197 + fTemp208;
			float fTemp210 = fRec238[1] + fConst132 * (fRec9[0] - (fTemp209 + fRec239[1]));
			fRec238[0] = fConst134 * fTemp210 - fRec238[1];
			float fTemp211 = fRec239[1] + fConst135 * fTemp210;
			fRec239[0] = 2.0f * fTemp211 - fRec239[1];
			float fRec240 = fConst136 * fTemp210;
			float fRec241 = fTemp211;
			float fTemp212 = fRec241 + fTemp194;
			float fTemp213 = fRec240 + fTemp195;
			float fTemp214 = 1.4142135f * fTemp213 + fTemp208 + fTemp212;
			float fTemp215 = fRec251[1] + fConst132 * (fRec9[0] - (fTemp214 + fRec252[1]));
			fRec251[0] = fConst134 * fTemp215 - fRec251[1];
			float fTemp216 = fRec252[1] + fConst135 * fTemp215;
			fRec252[0] = 2.0f * fTemp216 - fRec252[1];
			float fRec253 = fConst136 * fTemp215;
			float fRec254 = fTemp216;
			float fTemp217 = fRec254 + fTemp212;
			float fTemp218 = fTemp208 + fTemp217;
			float fTemp219 = fRec253 + fTemp213;
			float fTemp220 = 1.4142135f * fTemp219;
			float fTemp221 = fRec259[1] + fConst137 * (fRec9[0] - (fTemp220 + fTemp218 + fRec260[1]));
			fRec259[0] = fConst139 * fTemp221 - fRec259[1];
			float fTemp222 = fRec260[1] + fConst140 * fTemp221;
			fRec260[0] = 2.0f * fTemp222 - fRec260[1];
			float fRec261 = fConst141 * fTemp221;
			float fTemp223 = 2.828427f * (fRec261 + fTemp207);
			float fTemp224 = fTemp220 + fTemp217 + fTemp223;
			float fTemp225 = fRec255[1] + fConst142 * (fRec9[0] - (fTemp224 + fRec256[1]));
			fRec255[0] = fConst144 * fTemp225 - fRec255[1];
			float fTemp226 = fRec256[1] + fConst145 * fTemp225;
			fRec256[0] = 2.0f * fTemp226 - fRec256[1];
			float fRec257 = fConst146 * fTemp225;
			float fRec258 = fTemp226;
			float fTemp227 = fRec258 + fTemp217;
			float fTemp228 = fRec257 + fTemp219;
			float fTemp229 = 1.4142135f * fTemp228 + fTemp223 + fTemp227;
			float fTemp230 = fRec262[1] + fConst142 * (fRec9[0] - (fTemp229 + fRec263[1]));
			fRec262[0] = fConst144 * fTemp230 - fRec262[1];
			float fTemp231 = fRec263[1] + fConst145 * fTemp230;
			fRec263[0] = 2.0f * fTemp231 - fRec263[1];
			float fRec264 = fConst146 * fTemp230;
			float fRec265 = fTemp231;
			float fTemp232 = fRec9[0] - (1.4142135f * (fRec264 + fTemp228) + fTemp223 + fRec265 + fTemp227);
			float fTemp233 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp232)));
			int iTemp234 = (fTemp233 > fSlow17) + (fTemp233 > fSlow1);
			float fTemp235 = std::max<float>(0.0f, ((iTemp234 == 0) ? 0.0f : ((iTemp234 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp233 + 13.5f - fSlow0) : fTemp233 + 13.0f - fSlow0)));
			float fTemp236 = ((-(0.75f * fTemp235) > fRec0[1]) ? fConst168 : fConst167);
			fRec0[0] = fRec0[1] * fTemp236 - 0.75f * fTemp235 * (1.0f - fTemp236);
			float fTemp237 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec0[0]))) + 1.5f)))));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp237)));
			float fTemp238 = fRec267[1] + fConst142 * (fRec258 - fRec268[1]);
			fRec267[0] = fConst144 * fTemp238 - fRec267[1];
			float fTemp239 = fRec268[1] + fConst145 * fTemp238;
			fRec268[0] = 2.0f * fTemp239 - fRec268[1];
			float fRec269 = fTemp239;
			float fTemp240 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec269)));
			int iTemp241 = (fTemp240 > fSlow1) + (fTemp240 > fSlow19);
			float fTemp242 = std::max<float>(0.0f, ((iTemp241 == 0) ? 0.0f : ((iTemp241 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp240 + 12.5f - fSlow0) : fTemp240 + 12.0f - fSlow0)));
			float fTemp243 = ((-(0.75f * fTemp242) > fRec266[1]) ? fConst168 : fConst169);
			fRec266[0] = fRec266[1] * fTemp243 - 0.75f * fTemp242 * (1.0f - fTemp243);
			float fTemp244 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec266[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp244)));
			float fTemp245 = fRec274[1] + fConst132 * (fRec241 - fRec275[1]);
			fRec274[0] = fConst134 * fTemp245 - fRec274[1];
			float fTemp246 = fRec275[1] + fConst135 * fTemp245;
			fRec275[0] = 2.0f * fTemp246 - fRec275[1];
			float fRec276 = fTemp246;
			float fTemp247 = fRec271[1] + fConst142 * (fRec276 - fRec272[1]);
			fRec271[0] = fConst144 * fTemp247 - fRec271[1];
			float fTemp248 = fRec272[1] + fConst145 * fTemp247;
			fRec272[0] = 2.0f * fTemp248 - fRec272[1];
			float fRec273 = fConst146 * fTemp247;
			float fTemp249 = 2.828427f * fRec273;
			float fTemp250 = fRec277[1] + fConst137 * (fRec276 - (fTemp249 + fRec278[1]));
			fRec277[0] = fConst139 * fTemp250 - fRec277[1];
			float fTemp251 = fRec278[1] + fConst140 * fTemp250;
			fRec278[0] = 2.0f * fTemp251 - fRec278[1];
			float fRec279 = fConst141 * fTemp250;
			float fRec280 = fTemp251;
			float fTemp252 = fRec280 + fTemp249 + 1.4142135f * fRec279;
			float fTemp253 = fRec281[1] + fConst137 * (fRec276 - (fTemp252 + fRec282[1]));
			fRec281[0] = fConst139 * fTemp253 - fRec281[1];
			float fTemp254 = fRec282[1] + fConst140 * fTemp253;
			fRec282[0] = 2.0f * fTemp254 - fRec282[1];
			float fRec283 = fConst141 * fTemp253;
			float fRec284 = fTemp254;
			float fTemp255 = fRec276 - (1.4142135f * (fRec279 + fRec283) + fRec284 + fRec280 + fTemp249);
			float fTemp256 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp255)));
			int iTemp257 = (fTemp256 > fSlow1) + (fTemp256 > fSlow19);
			float fTemp258 = std::max<float>(0.0f, ((iTemp257 == 0) ? 0.0f : ((iTemp257 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp256 + 12.5f - fSlow0) : fTemp256 + 12.0f - fSlow0)));
			float fTemp259 = ((-(0.75f * fTemp258) > fRec270[1]) ? fConst168 : fConst170);
			fRec270[0] = fRec270[1] * fTemp259 - 0.75f * fTemp258 * (1.0f - fTemp259);
			float fTemp260 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec270[0]))) + 1.5f)))));
			fVbargraph22 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp260)));
			float fTemp261 = fRec286[1] + fConst137 * (fRec280 - fRec287[1]);
			fRec286[0] = fConst139 * fTemp261 - fRec286[1];
			float fTemp262 = fRec287[1] + fConst140 * fTemp261;
			fRec287[0] = 2.0f * fTemp262 - fRec287[1];
			float fRec288 = fTemp262;
			float fTemp263 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec288)));
			int iTemp264 = (fTemp263 > fSlow19) + (fTemp263 > fSlow20);
			float fTemp265 = std::max<float>(0.0f, ((iTemp264 == 0) ? 0.0f : ((iTemp264 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp263 + 11.5f - fSlow0) : fTemp263 + 11.0f - fSlow0)));
			float fTemp266 = ((-(0.75f * fTemp265) > fRec285[1]) ? fConst171 : fConst16);
			fRec285[0] = fRec285[1] * fTemp266 - 0.75f * fTemp265 * (1.0f - fTemp266);
			float fTemp267 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec285[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp267)));
			float fTemp268 = fRec304[1] + fConst116 * (fRec8 - fRec305[1]);
			fRec304[0] = fConst118 * fTemp268 - fRec304[1];
			float fTemp269 = fRec305[1] + fConst119 * fTemp268;
			fRec305[0] = 2.0f * fTemp269 - fRec305[1];
			float fRec306 = fTemp269;
			float fTemp270 = fRec301[1] + fConst132 * (fRec306 - fRec302[1]);
			fRec301[0] = fConst134 * fTemp270 - fRec301[1];
			float fTemp271 = fRec302[1] + fConst135 * fTemp270;
			fRec302[0] = 2.0f * fTemp271 - fRec302[1];
			float fRec303 = fConst136 * fTemp270;
			float fTemp272 = 2.828427f * fRec303;
			float fTemp273 = fRec298[1] + fConst137 * (fRec306 - (fTemp272 + fRec299[1]));
			fRec298[0] = fConst139 * fTemp273 - fRec298[1];
			float fTemp274 = fRec299[1] + fConst140 * fTemp273;
			fRec299[0] = 2.0f * fTemp274 - fRec299[1];
			float fRec300 = fConst141 * fTemp273;
			float fTemp275 = fRec303 + fRec300;
			float fTemp276 = 2.828427f * fTemp275;
			float fTemp277 = fRec307[1] + fConst142 * (fRec306 - (fTemp276 + fRec308[1]));
			fRec307[0] = fConst144 * fTemp277 - fRec307[1];
			float fTemp278 = fRec308[1] + fConst145 * fTemp277;
			fRec308[0] = 2.0f * fTemp278 - fRec308[1];
			float fRec309 = fConst146 * fTemp277;
			float fTemp279 = fRec309 + fTemp275;
			float fTemp280 = 2.828427f * fTemp279;
			float fTemp281 = fRec294[1] + fConst121 * (fRec306 - (fTemp280 + fRec295[1]));
			fRec294[0] = fConst123 * fTemp281 - fRec294[1];
			float fTemp282 = fRec295[1] + fConst124 * fTemp281;
			fRec295[0] = 2.0f * fTemp282 - fRec295[1];
			float fRec296 = fConst125 * fTemp281;
			float fRec297 = fTemp282;
			float fTemp283 = fTemp280 + fRec297 + 1.4142135f * fRec296;
			float fTemp284 = fRec290[1] + fConst121 * (fRec306 - (fTemp283 + fRec291[1]));
			fRec290[0] = fConst123 * fTemp284 - fRec290[1];
			float fTemp285 = fRec291[1] + fConst124 * fTemp284;
			fRec291[0] = 2.0f * fTemp285 - fRec291[1];
			float fRec292 = fConst125 * fTemp284;
			float fRec293 = fTemp285;
			float fTemp286 = fRec297 + fRec293;
			float fTemp287 = fRec296 + fRec292;
			float fTemp288 = 1.4142135f * fTemp287;
			float fTemp289 = fTemp288 + fTemp280 + fTemp286;
			float fTemp290 = fRec314[1] + fConst126 * (fRec306 - (fTemp289 + fRec315[1]));
			fRec314[0] = fConst128 * fTemp290 - fRec314[1];
			float fTemp291 = fRec315[1] + fConst129 * fTemp290;
			fRec315[0] = 2.0f * fTemp291 - fRec315[1];
			float fRec316 = fConst130 * fTemp290;
			float fTemp292 = 2.828427f * (fRec316 + fTemp279);
			float fTemp293 = fTemp288 + fTemp286 + fTemp292;
			float fTemp294 = fRec310[1] + fConst59 * (fRec306 - (fTemp293 + fRec311[1]));
			fRec310[0] = fConst61 * fTemp294 - fRec310[1];
			float fTemp295 = fRec311[1] + fConst62 * fTemp294;
			fRec311[0] = 2.0f * fTemp295 - fRec311[1];
			float fRec312 = fConst131 * fTemp294;
			float fRec313 = fTemp295;
			float fTemp296 = fRec313 + fTemp286;
			float fTemp297 = fRec312 + fTemp287;
			float fTemp298 = 1.4142135f * fTemp297 + fTemp292 + fTemp296;
			float fTemp299 = fRec317[1] + fConst59 * (fRec306 - (fTemp298 + fRec318[1]));
			fRec317[0] = fConst61 * fTemp299 - fRec317[1];
			float fTemp300 = fRec318[1] + fConst62 * fTemp299;
			fRec318[0] = 2.0f * fTemp300 - fRec318[1];
			float fRec319 = fConst131 * fTemp299;
			float fRec320 = fTemp300;
			float fTemp301 = fRec306 - (1.4142135f * (fRec319 + fTemp297) + fTemp292 + fRec320 + fTemp296);
			float fTemp302 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp301)));
			int iTemp303 = (fTemp302 > fSlow22) + (fTemp302 > fSlow21);
			float fTemp304 = std::max<float>(0.0f, ((iTemp303 == 0) ? 0.0f : ((iTemp303 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp302 + 8.5f - fSlow0) : fTemp302 + 8.0f - fSlow0)));
			float fTemp305 = ((-(0.75f * fTemp304) > fRec289[1]) ? fConst172 : fConst168);
			fRec289[0] = fRec289[1] * fTemp305 - 0.75f * fTemp304 * (1.0f - fTemp305);
			float fTemp306 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec289[0]))) + 1.5f)))));
			fVbargraph24 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp306)));
			float fTemp307 = fRec322[1] + fConst59 * (fRec313 - fRec323[1]);
			fRec322[0] = fConst61 * fTemp307 - fRec322[1];
			float fTemp308 = fRec323[1] + fConst62 * fTemp307;
			fRec323[0] = 2.0f * fTemp308 - fRec323[1];
			float fRec324 = fTemp308;
			float fTemp309 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec324)));
			int iTemp310 = (fTemp309 > fSlow21) + (fTemp309 > fSlow23);
			float fTemp311 = std::max<float>(0.0f, ((iTemp310 == 0) ? 0.0f : ((iTemp310 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp309 + 7.5f - fSlow0) : fTemp309 + 7.0f - fSlow0)));
			float fTemp312 = ((-(0.75f * fTemp311) > fRec321[1]) ? fConst173 : fConst171);
			fRec321[0] = fRec321[1] * fTemp312 - 0.75f * fTemp311 * (1.0f - fTemp312);
			float fTemp313 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec321[0]))) + 1.5f)))));
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp313)));
			float fTemp314 = fRec329[1] + fConst121 * (fRec297 - fRec330[1]);
			fRec329[0] = fConst123 * fTemp314 - fRec329[1];
			float fTemp315 = fRec330[1] + fConst124 * fTemp314;
			fRec330[0] = 2.0f * fTemp315 - fRec330[1];
			float fRec331 = fTemp315;
			float fTemp316 = fRec326[1] + fConst59 * (fRec331 - fRec327[1]);
			fRec326[0] = fConst61 * fTemp316 - fRec326[1];
			float fTemp317 = fRec327[1] + fConst62 * fTemp316;
			fRec327[0] = 2.0f * fTemp317 - fRec327[1];
			float fRec328 = fConst131 * fTemp316;
			float fTemp318 = 2.828427f * fRec328;
			float fTemp319 = fRec332[1] + fConst126 * (fRec331 - (fTemp318 + fRec333[1]));
			fRec332[0] = fConst128 * fTemp319 - fRec332[1];
			float fTemp320 = fRec333[1] + fConst129 * fTemp319;
			fRec333[0] = 2.0f * fTemp320 - fRec333[1];
			float fRec334 = fConst130 * fTemp319;
			float fRec335 = fTemp320;
			float fTemp321 = fRec335 + fTemp318 + 1.4142135f * fRec334;
			float fTemp322 = fRec336[1] + fConst126 * (fRec331 - (fTemp321 + fRec337[1]));
			fRec336[0] = fConst128 * fTemp322 - fRec336[1];
			float fTemp323 = fRec337[1] + fConst129 * fTemp322;
			fRec337[0] = 2.0f * fTemp323 - fRec337[1];
			float fRec338 = fConst130 * fTemp322;
			float fRec339 = fTemp323;
			float fTemp324 = fRec331 - (1.4142135f * (fRec334 + fRec338) + fRec339 + fRec335 + fTemp318);
			float fTemp325 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp324)));
			int iTemp326 = (fTemp325 > fSlow23) + (fTemp325 > fSlow24);
			float fTemp327 = std::max<float>(0.0f, ((iTemp326 == 0) ? 0.0f : ((iTemp326 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp325 + 6.5f - fSlow0) : fTemp325 + 6.0f - fSlow0)));
			float fTemp328 = ((-(0.75f * fTemp327) > fRec325[1]) ? fConst174 : fConst115);
			fRec325[0] = fRec325[1] * fTemp328 - 0.75f * fTemp327 * (1.0f - fTemp328);
			float fTemp329 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec325[0]))) + 1.5f)))));
			fVbargraph26 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp329)));
			float fTemp330 = fRec341[1] + fConst126 * (fRec335 - fRec342[1]);
			fRec341[0] = fConst128 * fTemp330 - fRec341[1];
			float fTemp331 = fRec342[1] + fConst129 * fTemp330;
			fRec342[0] = 2.0f * fTemp331 - fRec342[1];
			float fRec343 = fTemp331;
			float fTemp332 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec343)));
			int iTemp333 = (fTemp332 > fSlow23) + (fTemp332 > fSlow24);
			float fTemp334 = std::max<float>(0.0f, ((iTemp333 == 0) ? 0.0f : ((iTemp333 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp332 + 6.5f - fSlow0) : fTemp332 + 6.0f - fSlow0)));
			float fTemp335 = ((-(0.75f * fTemp334) > fRec340[1]) ? fConst150 : fConst175);
			fRec340[0] = fRec340[1] * fTemp335 - 0.75f * fTemp334 * (1.0f - fTemp335);
			float fTemp336 = std::pow(1e+01f, fSlow18 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec340[0]))) + 1.5f)))));
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp336)));
			float fTemp337 = fRec343 * fTemp336 + fTemp324 * fTemp329 + fRec324 * fTemp313 + fTemp301 * fTemp306 + fRec288 * fTemp267 + fTemp255 * fTemp260 + fRec269 * fTemp244 + fTemp232 * fTemp237;
			fVec71[IOTA0 & 2047] = fTemp337;
			float fTemp338 = std::fabs(fTemp337);
			int iTemp339 = (fTemp338 >= fRec347[1]) | (float(iRec346[1]) >= fConst1);
			iRec346[0] = ((iTemp339) ? 0 : iRec346[1] + 1);
			fRec347[0] = ((iTemp339) ? fTemp338 : fRec347[1]);
			fRec345[0] = fConst17 * fRec347[0] + fConst16 * fRec345[1];
			float fTemp340 = std::fabs(fRec345[0]);
			fRec344[0] = std::max<float>(fTemp340, fConst16 * fRec344[1] + fConst17 * fTemp340);
			fRec348[0] = fSlow25 + fConst178 * fRec348[1];
			output0[i0] = FAUSTFLOAT(fTemp0 * fRec348[0] + (1.0f - fRec348[0]) * std::min<float>(1.0f, 0.70794576f / std::max<float>(fRec344[0], 1.1920929e-07f)) * fVec71[(IOTA0 - iConst176) & 2047]);
			fVec0[1] = fVec0[0];
			fRec13[1] = fRec13[0];
			fRec12[1] = fRec12[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fRec24[1] = fRec24[0];
			fVec1[2] = fVec1[1];
			fVec1[1] = fVec1[0];
			for (int j0 = 6; j0 > 0; j0 = j0 - 1) {
				fVec2[j0] = fVec2[j0 - 1];
			}
			for (int j1 = 14; j1 > 0; j1 = j1 - 1) {
				fVec3[j1] = fVec3[j1 - 1];
			}
			IOTA0 = IOTA0 + 1;
			fRec23[1] = fRec23[0];
			fRec36[1] = fRec36[0];
			fRec37[1] = fRec37[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
			fRec28[1] = fRec28[0];
			fRec29[1] = fRec29[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fVec19[1] = fVec19[0];
			fVec20[2] = fVec20[1];
			fVec20[1] = fVec20[0];
			for (int j2 = 6; j2 > 0; j2 = j2 - 1) {
				fVec21[j2] = fVec21[j2 - 1];
			}
			for (int j3 = 14; j3 > 0; j3 = j3 - 1) {
				fVec22[j3] = fVec22[j3 - 1];
			}
			fRec22[1] = fRec22[0];
			fVec28[1] = fVec28[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec29[1] = fVec29[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fVec30[1] = fVec30[0];
			fVec31[2] = fVec31[1];
			fVec31[1] = fVec31[0];
			for (int j4 = 6; j4 > 0; j4 = j4 - 1) {
				fVec32[j4] = fVec32[j4 - 1];
			}
			for (int j5 = 14; j5 > 0; j5 = j5 - 1) {
				fVec33[j5] = fVec33[j5 - 1];
			}
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec15[1] = fRec15[0];
			fRec14[1] = fRec14[0];
			fVec39[1] = fVec39[0];
			fVec40[1] = fVec40[0];
			fVec41[2] = fVec41[1];
			fVec41[1] = fVec41[0];
			for (int j6 = 6; j6 > 0; j6 = j6 - 1) {
				fVec42[j6] = fVec42[j6 - 1];
			}
			for (int j7 = 14; j7 > 0; j7 = j7 - 1) {
				fVec43[j7] = fVec43[j7 - 1];
			}
			fRec10[1] = fRec10[0];
			fRec93[1] = fRec93[0];
			fRec94[1] = fRec94[0];
			fRec88[1] = fRec88[0];
			fRec89[1] = fRec89[0];
			fRec84[1] = fRec84[0];
			fRec85[1] = fRec85[0];
			fRec80[1] = fRec80[0];
			fRec81[1] = fRec81[0];
			fRec76[1] = fRec76[0];
			fRec77[1] = fRec77[0];
			fRec71[1] = fRec71[0];
			fRec72[1] = fRec72[0];
			fRec66[1] = fRec66[0];
			fRec67[1] = fRec67[0];
			fRec62[1] = fRec62[0];
			fRec63[1] = fRec63[0];
			fRec57[1] = fRec57[0];
			fRec58[1] = fRec58[0];
			fRec52[1] = fRec52[0];
			fRec53[1] = fRec53[0];
			fVec49[1] = fVec49[0];
			fVec50[1] = fVec50[0];
			fRec51[1] = fRec51[0];
			fRec50[1] = fRec50[0];
			fVec51[1] = fVec51[0];
			fRec49[1] = fRec49[0];
			fRec48[1] = fRec48[0];
			fRec47[1] = fRec47[0];
			fRec46[1] = fRec46[0];
			fVec52[1] = fVec52[0];
			fRec103[1] = fRec103[0];
			fRec102[1] = fRec102[0];
			fVec53[1] = fVec53[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec45[1] = fRec45[0];
			fRec111[1] = fRec111[0];
			fRec112[1] = fRec112[0];
			fRec113[1] = fRec113[0];
			fVec54[1] = fVec54[0];
			fRec110[1] = fRec110[0];
			fRec109[1] = fRec109[0];
			fVec55[1] = fVec55[0];
			fRec108[1] = fRec108[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fRec135[1] = fRec135[0];
			fRec136[1] = fRec136[0];
			fRec131[1] = fRec131[0];
			fRec132[1] = fRec132[0];
			fRec126[1] = fRec126[0];
			fRec127[1] = fRec127[0];
			fRec121[1] = fRec121[0];
			fRec122[1] = fRec122[0];
			fVec56[1] = fVec56[0];
			fVec57[1] = fVec57[0];
			fRec120[1] = fRec120[0];
			fRec119[1] = fRec119[0];
			fVec58[1] = fVec58[0];
			fRec118[1] = fRec118[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fRec115[1] = fRec115[0];
			fRec114[1] = fRec114[0];
			fRec145[1] = fRec145[0];
			fRec146[1] = fRec146[0];
			fRec147[1] = fRec147[0];
			fVec59[1] = fVec59[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			fVec60[1] = fVec60[0];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec140[1] = fRec140[0];
			fRec139[1] = fRec139[0];
			fRec138[1] = fRec138[0];
			fRec191[1] = fRec191[0];
			fRec192[1] = fRec192[0];
			fRec187[1] = fRec187[0];
			fRec188[1] = fRec188[0];
			fRec183[1] = fRec183[0];
			fRec184[1] = fRec184[0];
			fRec179[1] = fRec179[0];
			fRec180[1] = fRec180[0];
			fRec174[1] = fRec174[0];
			fRec175[1] = fRec175[0];
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
			fRec165[1] = fRec165[0];
			fRec166[1] = fRec166[0];
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
			fRec155[1] = fRec155[0];
			fRec156[1] = fRec156[0];
			fVec61[1] = fVec61[0];
			fVec62[1] = fVec62[0];
			fRec154[1] = fRec154[0];
			fRec153[1] = fRec153[0];
			fVec63[1] = fVec63[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			fRec148[1] = fRec148[0];
			fRec201[1] = fRec201[0];
			fRec202[1] = fRec202[0];
			fRec203[1] = fRec203[0];
			fVec64[1] = fVec64[0];
			fRec200[1] = fRec200[0];
			fRec199[1] = fRec199[0];
			fVec65[1] = fVec65[0];
			fRec198[1] = fRec198[0];
			fRec197[1] = fRec197[0];
			fRec196[1] = fRec196[0];
			fRec195[1] = fRec195[0];
			fRec194[1] = fRec194[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec211[1] = fRec211[0];
			fRec212[1] = fRec212[0];
			fVec66[1] = fVec66[0];
			fVec67[1] = fVec67[0];
			fRec210[1] = fRec210[0];
			fRec209[1] = fRec209[0];
			fVec68[1] = fVec68[0];
			fRec208[1] = fRec208[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			fRec235[1] = fRec235[0];
			fRec236[1] = fRec236[0];
			fRec237[1] = fRec237[0];
			fVec69[1] = fVec69[0];
			fRec234[1] = fRec234[0];
			fRec233[1] = fRec233[0];
			fVec70[1] = fVec70[0];
			fRec232[1] = fRec232[0];
			fRec231[1] = fRec231[0];
			fRec230[1] = fRec230[0];
			fRec229[1] = fRec229[0];
			fRec228[1] = fRec228[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec5[1] = fRec5[0];
			fRec6[1] = fRec6[0];
			fRec1[1] = fRec1[0];
			fRec2[1] = fRec2[0];
			fRec245[1] = fRec245[0];
			fRec246[1] = fRec246[0];
			fRec242[1] = fRec242[0];
			fRec243[1] = fRec243[0];
			fRec248[1] = fRec248[0];
			fRec249[1] = fRec249[0];
			fRec238[1] = fRec238[0];
			fRec239[1] = fRec239[0];
			fRec251[1] = fRec251[0];
			fRec252[1] = fRec252[0];
			fRec259[1] = fRec259[0];
			fRec260[1] = fRec260[0];
			fRec255[1] = fRec255[0];
			fRec256[1] = fRec256[0];
			fRec262[1] = fRec262[0];
			fRec263[1] = fRec263[0];
			fRec0[1] = fRec0[0];
			fRec267[1] = fRec267[0];
			fRec268[1] = fRec268[0];
			fRec266[1] = fRec266[0];
			fRec274[1] = fRec274[0];
			fRec275[1] = fRec275[0];
			fRec271[1] = fRec271[0];
			fRec272[1] = fRec272[0];
			fRec277[1] = fRec277[0];
			fRec278[1] = fRec278[0];
			fRec281[1] = fRec281[0];
			fRec282[1] = fRec282[0];
			fRec270[1] = fRec270[0];
			fRec286[1] = fRec286[0];
			fRec287[1] = fRec287[0];
			fRec285[1] = fRec285[0];
			fRec304[1] = fRec304[0];
			fRec305[1] = fRec305[0];
			fRec301[1] = fRec301[0];
			fRec302[1] = fRec302[0];
			fRec298[1] = fRec298[0];
			fRec299[1] = fRec299[0];
			fRec307[1] = fRec307[0];
			fRec308[1] = fRec308[0];
			fRec294[1] = fRec294[0];
			fRec295[1] = fRec295[0];
			fRec290[1] = fRec290[0];
			fRec291[1] = fRec291[0];
			fRec314[1] = fRec314[0];
			fRec315[1] = fRec315[0];
			fRec310[1] = fRec310[0];
			fRec311[1] = fRec311[0];
			fRec317[1] = fRec317[0];
			fRec318[1] = fRec318[0];
			fRec289[1] = fRec289[0];
			fRec322[1] = fRec322[0];
			fRec323[1] = fRec323[0];
			fRec321[1] = fRec321[0];
			fRec329[1] = fRec329[0];
			fRec330[1] = fRec330[0];
			fRec326[1] = fRec326[0];
			fRec327[1] = fRec327[0];
			fRec332[1] = fRec332[0];
			fRec333[1] = fRec333[0];
			fRec336[1] = fRec336[0];
			fRec337[1] = fRec337[0];
			fRec325[1] = fRec325[0];
			fRec341[1] = fRec341[0];
			fRec342[1] = fRec342[0];
			fRec340[1] = fRec340[0];
			iRec346[1] = iRec346[0];
			fRec347[1] = fRec347[0];
			fRec345[1] = fRec345[0];
			fRec344[1] = fRec344[0];
			fRec348[1] = fRec348[0];
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
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph20 = 0;
        
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
        case kParameter_leveler_expander_offset:
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
        case kParameter_mb_strength:
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
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter_sbmb_strength:
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
        case kParameter_leveler_brake:
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
        case kParameter_leveler_gain:
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
        case kParameter_leveler_meter_minimum:
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
        case kParameter_mb_comp_gain_0:
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
        case kParameter_mb_comp_gain_1:
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
        case kParameter_mb_comp_gain_2:
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
        case kParameter_mb_comp_gain_3:
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
        case kParameter_mb_comp_gain_4:
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
        case kParameter_mb_comp_gain_5:
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
        case kParameter_mb_comp_gain_6:
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
        case kParameter_mb_comp_gain_7:
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
        case kParameter_leveler_expander_offset:
            return dsp->fVslider2;
        case kParameter_mb_strength:
            return dsp->fVslider14;
        case kParameter_pre_lowcut:
            return dsp->fVslider1;
        case kParameter_sbmb_strength:
            return dsp->fVslider5;
        case kParameter_sb_expander:
            return dsp->fVbargraph3;
        case kParameter_sb_meter__0:
            return dsp->fVbargraph18;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph16;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph14;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph12;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph10;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph8;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph6;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph4;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph19;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph17;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph15;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph13;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph11;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph9;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph7;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph5;
        case kParameter_leveler_brake:
            return dsp->fVbargraph1;
        case kParameter_leveler_gain:
            return dsp->fVbargraph2;
        case kParameter_leveler_meter_minimum:
            return dsp->fVbargraph0;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph27;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph26;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph25;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph24;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph23;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph22;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph21;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph20;
        
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
        case kParameter_leveler_expander_offset:
            dsp->fVslider2 = value;
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
            dsp->fVslider2,
            dsp->fVslider14,
            dsp->fVslider1,
            dsp->fVslider5,
            
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
        dsp->fVslider2 = params[12];
        dsp->fVslider14 = params[13];
        dsp->fVslider1 = params[14];
        dsp->fVslider5 = params[15];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO