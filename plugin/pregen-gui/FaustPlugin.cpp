
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
// Version: 0.30
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
	FAUSTFLOAT fVslider0;
	float fConst13;
	FAUSTFLOAT fVslider1;
	float fConst14;
	float fRec43[2];
	float fRec42[2];
	FAUSTFLOAT fVbargraph0;
	float fVec0[2];
	float fRec41[2];
	FAUSTFLOAT fVslider2;
	float fConst15;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst16;
	float fRec52[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVbargraph2;
	float fConst17;
	FAUSTFLOAT fVslider6;
	float fConst18;
	float fConst19;
	float fConst20;
	int iConst21;
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
	float fConst32;
	float fConst33;
	float fConst34;
	float fVec1[2];
	float fConst35;
	float fConst36;
	float fRec56[2];
	float fRec55[2];
	float fConst37;
	float fVec2[2];
	float fConst38;
	float fRec54[2];
	float fRec53[2];
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
	int iConst39;
	int iConst40;
	int iConst41;
	int iConst42;
	int iConst43;
	int iConst44;
	int iConst45;
	int iConst46;
	int iConst47;
	int iConst48;
	int iConst49;
	int iConst50;
	int iConst51;
	int iConst52;
	int iConst53;
	float fVec12[2];
	float fRec60[2];
	float fRec59[2];
	float fVec13[2];
	float fRec58[2];
	float fRec57[2];
	float fVec14[2];
	float fVec15[3];
	float fVec16[5];
	float fVec17[12];
	float fVec18[32];
	float fVec19[64];
	float fVec20[128];
	float fVec21[256];
	float fVec22[512];
	float fRec47[2];
	float fRec48[2];
	float fRec45[2];
	FAUSTFLOAT fVbargraph3;
	float fRec44[2];
	float fVec23[2];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fConst54;
	float fConst55;
	float fVec24[2];
	float fRec68[2];
	float fRec67[2];
	float fVec25[2];
	float fRec66[2];
	float fRec65[2];
	float fConst56;
	float fConst57;
	float fRec64[2];
	float fRec63[2];
	float fRec76[2];
	FAUSTFLOAT fVbargraph4;
	float fVec26[2];
	float fRec75[2];
	float fVec27[2];
	float fVec28[2];
	float fRec74[2];
	float fRec73[2];
	float fVec29[2];
	float fRec72[2];
	float fRec71[2];
	float fRec70[2];
	float fRec69[2];
	float fRec62[2];
	float fConst58;
	float fConst59;
	FAUSTFLOAT fVslider9;
	float fConst60;
	float fConst61;
	float fRec80[2];
	float fConst62;
	float fRec81[2];
	float fConst63;
	float fRec79[2];
	float fRec78[2];
	float fRec85[2];
	float fRec86[2];
	float fRec84[2];
	float fRec83[2];
	FAUSTFLOAT fVbargraph5;
	float fConst64;
	float fConst65;
	float fConst66;
	float fRec94[2];
	float fConst67;
	float fRec95[2];
	float fConst68;
	float fRec96[2];
	float fVec30[2];
	float fConst69;
	float fConst70;
	float fRec93[2];
	float fRec92[2];
	float fVec31[2];
	float fRec91[2];
	float fRec90[2];
	float fRec89[2];
	float fRec88[2];
	float fRec103[2];
	float fRec104[2];
	float fRec105[2];
	float fVec32[2];
	float fRec102[2];
	float fRec101[2];
	float fVec33[2];
	float fRec100[2];
	float fRec99[2];
	float fRec98[2];
	float fRec97[2];
	FAUSTFLOAT fVbargraph6;
	float fConst71;
	float fConst72;
	float fRec108[2];
	float fConst73;
	float fRec109[2];
	float fConst74;
	float fRec107[2];
	float fRec106[2];
	float fRec113[2];
	float fRec114[2];
	float fRec112[2];
	float fRec111[2];
	FAUSTFLOAT fVbargraph7;
	float fConst75;
	float fConst76;
	float fRec118[2];
	float fConst77;
	float fRec119[2];
	float fConst78;
	float fRec117[2];
	float fRec116[2];
	float fRec123[2];
	float fRec124[2];
	float fRec122[2];
	float fRec121[2];
	FAUSTFLOAT fVbargraph8;
	float fConst79;
	float fConst80;
	float fRec128[2];
	float fConst81;
	float fRec129[2];
	float fConst82;
	float fRec127[2];
	float fRec126[2];
	float fRec133[2];
	float fRec134[2];
	float fRec132[2];
	float fRec131[2];
	FAUSTFLOAT fVbargraph9;
	float fConst83;
	float fConst84;
	float fRec138[2];
	float fConst85;
	float fRec139[2];
	float fConst86;
	float fRec137[2];
	float fRec136[2];
	float fRec143[2];
	float fRec144[2];
	float fRec142[2];
	float fRec141[2];
	FAUSTFLOAT fVbargraph10;
	float fConst87;
	float fConst88;
	float fRec148[2];
	float fConst89;
	float fRec149[2];
	float fConst90;
	float fRec147[2];
	float fRec146[2];
	float fRec153[2];
	float fRec154[2];
	float fRec152[2];
	float fRec151[2];
	FAUSTFLOAT fVbargraph11;
	float fConst91;
	float fConst92;
	float fRec158[2];
	float fConst93;
	float fRec159[2];
	float fConst94;
	float fRec157[2];
	float fRec156[2];
	float fRec163[2];
	float fRec164[2];
	float fRec162[2];
	float fRec161[2];
	FAUSTFLOAT fVbargraph12;
	float fRec77[2];
	FAUSTFLOAT fVbargraph13;
	float fVec34[2];
	float fConst95;
	float fConst96;
	float fRec61[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVslider11;
	int iConst97;
	int iConst98;
	float fVec35[3];
	int iConst99;
	float fVec36[5];
	int iConst100;
	int iConst101;
	float fVec37[12];
	int iConst102;
	int iConst103;
	float fVec38[32];
	int iConst104;
	int iConst105;
	float fVec39[64];
	int iConst106;
	int iConst107;
	float fVec40[128];
	int iConst108;
	int iConst109;
	float fVec41[256];
	int iConst110;
	int iConst111;
	float fVec42[512];
	int iConst112;
	int iConst113;
	float fVec43[512];
	int iConst114;
	FAUSTFLOAT fVslider12;
	float fRec166[2];
	FAUSTFLOAT fVbargraph15;
	float fConst115;
	float fConst116;
	float fRec168[2];
	FAUSTFLOAT fVbargraph16;
	float fVec44[2];
	float fConst117;
	float fConst118;
	float fRec167[2];
	FAUSTFLOAT fVbargraph17;
	float fVec45[3];
	float fVec46[5];
	float fVec47[12];
	float fVec48[32];
	float fVec49[64];
	float fVec50[128];
	float fVec51[256];
	float fVec52[512];
	float fVec53[512];
	float fRec169[2];
	FAUSTFLOAT fVbargraph18;
	float fConst119;
	float fConst120;
	float fRec171[2];
	FAUSTFLOAT fVbargraph19;
	float fVec54[2];
	float fConst121;
	float fRec170[2];
	FAUSTFLOAT fVbargraph20;
	float fVec55[3];
	float fVec56[5];
	float fVec57[12];
	float fVec58[32];
	float fVec59[64];
	float fVec60[128];
	float fVec61[256];
	float fVec62[512];
	float fVec63[512];
	float fRec172[2];
	FAUSTFLOAT fVbargraph21;
	float fConst122;
	float fRec174[2];
	FAUSTFLOAT fVbargraph22;
	float fVec64[2];
	float fConst123;
	float fRec173[2];
	FAUSTFLOAT fVbargraph23;
	float fVec65[3];
	float fVec66[5];
	float fVec67[12];
	float fVec68[32];
	float fVec69[64];
	float fVec70[128];
	float fVec71[256];
	float fVec72[512];
	float fVec73[512];
	float fRec175[2];
	FAUSTFLOAT fVbargraph24;
	float fConst124;
	float fConst125;
	float fRec177[2];
	FAUSTFLOAT fVbargraph25;
	float fVec74[2];
	float fConst126;
	float fRec176[2];
	FAUSTFLOAT fVbargraph26;
	float fVec75[3];
	float fVec76[5];
	float fVec77[12];
	float fVec78[32];
	float fVec79[64];
	float fVec80[128];
	float fVec81[256];
	float fVec82[512];
	float fVec83[512];
	float fRec178[2];
	FAUSTFLOAT fVbargraph27;
	float fConst127;
	float fConst128;
	float fRec180[2];
	FAUSTFLOAT fVbargraph28;
	float fVec84[2];
	float fConst129;
	float fConst130;
	float fRec179[2];
	FAUSTFLOAT fVbargraph29;
	float fVec85[3];
	float fVec86[5];
	float fVec87[12];
	float fVec88[32];
	float fVec89[64];
	float fVec90[128];
	float fVec91[256];
	float fVec92[512];
	float fVec93[512];
	float fRec181[2];
	FAUSTFLOAT fVbargraph30;
	float fConst131;
	float fRec183[2];
	FAUSTFLOAT fVbargraph31;
	float fVec94[2];
	float fRec182[2];
	FAUSTFLOAT fVbargraph32;
	float fVec95[3];
	float fVec96[5];
	float fVec97[12];
	float fVec98[32];
	float fVec99[64];
	float fVec100[128];
	float fVec101[256];
	float fVec102[512];
	float fVec103[512];
	float fRec184[2];
	FAUSTFLOAT fVbargraph33;
	float fConst132;
	float fConst133;
	float fRec186[2];
	FAUSTFLOAT fVbargraph34;
	float fVec104[2];
	float fConst134;
	float fRec185[2];
	FAUSTFLOAT fVbargraph35;
	float fVec105[3];
	float fVec106[5];
	float fVec107[12];
	float fVec108[32];
	float fVec109[64];
	float fVec110[128];
	float fVec111[256];
	float fVec112[512];
	float fVec113[512];
	float fRec187[2];
	FAUSTFLOAT fVbargraph36;
	float fRec37[2];
	float fRec38[2];
	float fRec33[2];
	float fRec34[2];
	float fRec29[2];
	float fRec30[2];
	float fRec25[2];
	float fRec26[2];
	float fRec21[2];
	float fRec22[2];
	float fRec17[2];
	float fRec18[2];
	float fRec13[2];
	float fRec14[2];
	float fRec9[2];
	float fRec10[2];
	float fRec5[3];
	float fRec216[2];
	float fRec217[2];
	float fRec212[2];
	float fRec213[2];
	float fRec208[2];
	float fRec209[2];
	float fRec204[2];
	float fRec205[2];
	float fRec200[2];
	float fRec201[2];
	float fRec196[2];
	float fRec197[2];
	float fRec192[2];
	float fRec193[2];
	float fRec188[2];
	float fRec189[2];
	float fRec6[3];
	float fRec7[2048];
	float fRec8[2048];
	int iRec3[2];
	float fRec4[2];
	float fRec2[2];
	float fConst135;
	float fConst136;
	float fRec1[2];
	FAUSTFLOAT fVbargraph37;
	int iConst137;
	float fRec0[2];
	FAUSTFLOAT fVbargraph38;
	float fVec114[2];
	float fConst138;
	float fConst139;
	int iConst140;
	float fVec115[2];
	float fRec223[2];
	float fRec222[2];
	float fVec116[2];
	float fRec221[2];
	float fRec220[2];
	float fVec117[2];
	float fVec118[3];
	float fVec119[5];
	float fVec120[12];
	float fVec121[32];
	float fVec122[64];
	float fVec123[128];
	float fVec124[256];
	float fVec125[512];
	float fVec126[1024];
	float fVec127[2048];
	float fVec128[4096];
	float fVec129[8192];
	float fVec130[16384];
	float fVec131[32768];
	float fVec132[65536];
	float fVec133[131072];
	float fVec134[262144];
	int iConst141;
	int iConst142;
	int iConst143;
	int iConst144;
	int iConst145;
	int iConst146;
	int iConst147;
	int iConst148;
	int iConst149;
	int iConst150;
	int iConst151;
	int iConst152;
	int iConst153;
	int iConst154;
	int iConst155;
	int iConst156;
	int iConst157;
	int iConst158;
	int iConst159;
	int iConst160;
	int iConst161;
	int iConst162;
	int iConst163;
	int iConst164;
	int iConst165;
	int iConst166;
	int iConst167;
	int iConst168;
	int iConst169;
	int iConst170;
	int iConst171;
	int iConst172;
	int iConst173;
	float fRec228[2];
	FAUSTFLOAT fVbargraph39;
	float fVec135[2];
	float fVec136[2];
	float fRec227[2];
	float fRec226[2];
	float fVec137[2];
	float fRec225[2];
	float fRec224[2];
	float fVec138[2];
	float fVec139[3];
	float fVec140[5];
	float fVec141[12];
	float fVec142[32];
	float fVec143[64];
	float fVec144[128];
	float fVec145[256];
	float fVec146[512];
	float fVec147[1024];
	float fVec148[2048];
	float fVec149[4096];
	float fVec150[8192];
	float fVec151[16384];
	float fVec152[32768];
	float fVec153[65536];
	float fVec154[131072];
	float fVec155[262144];
	FAUSTFLOAT fVbargraph40;
	
 public:
	mydsp() {
	}
	
	mydsp(const mydsp&) = default;
	
	FAUSTPP_VIRTUAL ~mydsp() = default;
	
	mydsp& operator=(const mydsp&) = default;
	
	void metadata(Meta* m) { 
		m->declare("analyzers.lib/name", "Faust Analyzer Library");
		m->declare("analyzers.lib/version", "1.3.0");
		m->declare("author", "Klaus Scheuermann");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/parallelOp:author", "Bart Brouns");
		m->declare("basics.lib/parallelOp:copyright", "Copyright (c) 2020 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/parallelOp:licence", "GPL-3.0");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/version", "1.22.0");
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/83245-md.cpp -lang cpp -fpga-mem-th 4 -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("filename", "bbba_gui.dsp");
		m->declare("filters.lib/highpass:author", "Julius O. Smith III");
		m->declare("filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:author", "Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:copyright", "Copyright (C) 2022 Jakob Dübel");
		m->declare("filters.lib/itu_r_bs_1770_4_kfilter:license", "ISC license");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
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
		m->declare("maths.lib/version", "2.9.0");
		m->declare("name", "bbba");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
		m->declare("routes.lib/name", "Faust Signal Routing Library");
		m->declare("routes.lib/version", "1.3.0");
		m->declare("signals.lib/name", "Faust Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("version", "0.30");
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
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, static_cast<float>(fSampleRate)));
		fConst1 = 2e+01f / fConst0;
		fConst2 = std::exp(-(628.31854f / fConst0));
		fConst3 = 1.0f - fConst2;
		fConst4 = std::tan(222.1106f / fConst0);
		fConst5 = std::tan(444.2212f / fConst0);
		fConst6 = std::tan(888.4424f / fConst0);
		fConst7 = std::tan(1777.199f / fConst0);
		fConst8 = std::tan(3554.398f / fConst0);
		fConst9 = std::tan(7108.482f / fConst0);
		fConst10 = std::tan(14217.277f / fConst0);
		fConst11 = std::tan(28434.555f / fConst0);
		fConst12 = 3.1415927f / fConst0;
		fConst13 = 44.1f / fConst0;
		fConst14 = 1.0f - fConst13;
		fConst15 = 0.125f * fConst0;
		fConst16 = 1.0f / fConst0;
		fConst17 = 1.1312305e-06f * fConst0;
		fConst18 = 0.01f * fConst0;
		fConst19 = std::rint(fConst18);
		fConst20 = 1.0f / std::max<float>(fConst19, 1.1920929e-07f);
		iConst21 = static_cast<int>(std::floor(0.00390625f * fConst19)) % 2;
		fConst22 = std::tan(119.806114f / fConst0);
		fConst23 = mydsp_faustpower2_f(fConst22);
		fConst24 = 0.50032705f * (fConst23 + 1.0f);
		fConst25 = 1.0f / (fConst22 + fConst24);
		fConst26 = std::tan(5283.415f / fConst0);
		fConst27 = mydsp_faustpower2_f(fConst26);
		fConst28 = 1.4142135f * fConst26;
		fConst29 = 1.0f / (fConst27 + fConst28 + 1.0f);
		fConst30 = fConst27 + -1.5848527f;
		fConst31 = 2.0f * fConst30;
		fConst32 = fConst27 + (1.0f - fConst28);
		fConst33 = 1.7803667f * fConst26;
		fConst34 = fConst27 + (1.5848527f - fConst33);
		fConst35 = 2.0f * (fConst27 + -1.0f);
		fConst36 = fConst27 + fConst33 + 1.5848527f;
		fConst37 = fConst24 - fConst22;
		fConst38 = 1.0006541f * (fConst23 + -1.0f);
		iConst39 = static_cast<int>(std::floor(fConst19)) % 2;
		iConst40 = static_cast<int>(std::floor(0.5f * fConst19)) % 2;
		iConst41 = iConst39 + 2 * iConst40;
		iConst42 = static_cast<int>(std::floor(0.25f * fConst19)) % 2;
		iConst43 = iConst41 + 4 * iConst42;
		iConst44 = static_cast<int>(std::floor(0.125f * fConst19)) % 2;
		iConst45 = iConst43 + 8 * iConst44;
		iConst46 = static_cast<int>(std::floor(0.0625f * fConst19)) % 2;
		iConst47 = iConst45 + 16 * iConst46;
		iConst48 = static_cast<int>(std::floor(0.03125f * fConst19)) % 2;
		iConst49 = iConst47 + 32 * iConst48;
		iConst50 = static_cast<int>(std::floor(0.015625f * fConst19)) % 2;
		iConst51 = iConst49 + 64 * iConst50;
		iConst52 = static_cast<int>(std::floor(0.0078125f * fConst19)) % 2;
		iConst53 = iConst51 + 128 * iConst52;
		fConst54 = std::exp(-(1e+02f / fConst0));
		fConst55 = 1.0f - fConst54;
		fConst56 = std::exp(-(1e+01f / fConst0));
		fConst57 = 1.0f - fConst56;
		fConst58 = std::exp(-(5.714286f / fConst0));
		fConst59 = 0.0001f * (1.0f - fConst58);
		fConst60 = fConst5 * (fConst5 + 0.70710677f) + 1.0f;
		fConst61 = 2.0f / fConst60;
		fConst62 = fConst5 / fConst60;
		fConst63 = 1.0f / fConst60;
		fConst64 = 2.8150427f * fConst34;
		fConst65 = fConst4 * (fConst4 + 0.70710677f) + 1.0f;
		fConst66 = 2.0f / fConst65;
		fConst67 = fConst4 / fConst65;
		fConst68 = 1.0f / fConst65;
		fConst69 = 5.6300855f * fConst30;
		fConst70 = 2.8150427f * fConst36;
		fConst71 = fConst6 * (fConst6 + 0.70710677f) + 1.0f;
		fConst72 = 2.0f / fConst71;
		fConst73 = fConst6 / fConst71;
		fConst74 = 1.0f / fConst71;
		fConst75 = fConst7 * (fConst7 + 0.70710677f) + 1.0f;
		fConst76 = 2.0f / fConst75;
		fConst77 = fConst7 / fConst75;
		fConst78 = 1.0f / fConst75;
		fConst79 = fConst8 * (fConst8 + 0.70710677f) + 1.0f;
		fConst80 = 2.0f / fConst79;
		fConst81 = fConst8 / fConst79;
		fConst82 = 1.0f / fConst79;
		fConst83 = fConst9 * (fConst9 + 0.70710677f) + 1.0f;
		fConst84 = 2.0f / fConst83;
		fConst85 = fConst9 / fConst83;
		fConst86 = 1.0f / fConst83;
		fConst87 = fConst10 * (fConst10 + 0.70710677f) + 1.0f;
		fConst88 = 2.0f / fConst87;
		fConst89 = fConst10 / fConst87;
		fConst90 = 1.0f / fConst87;
		fConst91 = fConst11 * (fConst11 + 0.70710677f) + 1.0f;
		fConst92 = 2.0f / fConst91;
		fConst93 = fConst11 / fConst91;
		fConst94 = 1.0f / fConst91;
		fConst95 = std::exp(-(4e+01f / fConst0));
		fConst96 = std::exp(-(12.5f / fConst0));
		iConst97 = static_cast<int>(std::floor(0.001f * fConst0)) % 2;
		iConst98 = static_cast<int>(std::floor(0.0005f * fConst0)) % 2;
		iConst99 = static_cast<int>(std::floor(0.00025f * fConst0)) % 2;
		iConst100 = iConst97 + 2 * iConst98;
		iConst101 = static_cast<int>(std::floor(0.000125f * fConst0)) % 2;
		iConst102 = iConst100 + 4 * iConst99;
		iConst103 = static_cast<int>(std::floor(6.25e-05f * fConst0)) % 2;
		iConst104 = iConst102 + 8 * iConst101;
		iConst105 = static_cast<int>(std::floor(3.125e-05f * fConst0)) % 2;
		iConst106 = iConst104 + 16 * iConst103;
		iConst107 = static_cast<int>(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst108 = iConst106 + 32 * iConst105;
		iConst109 = static_cast<int>(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst110 = iConst108 + 64 * iConst107;
		iConst111 = static_cast<int>(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst112 = iConst110 + 128 * iConst109;
		iConst113 = static_cast<int>(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst114 = iConst112 + 256 * iConst111;
		fConst115 = std::exp(-(8.0f / fConst0));
		fConst116 = 0.0001f * (1.0f - fConst115);
		fConst117 = std::exp(-(66.666664f / fConst0));
		fConst118 = std::exp(-(25.0f / fConst0));
		fConst119 = std::exp(-(13.333333f / fConst0));
		fConst120 = 0.0001f * (1.0f - fConst119);
		fConst121 = std::exp(-(2e+02f / fConst0));
		fConst122 = 0.0001f * (1.0f - fConst95);
		fConst123 = std::exp(-(5e+02f / fConst0));
		fConst124 = std::exp(-(5.0f / fConst0));
		fConst125 = 0.0001f * (1.0f - fConst124);
		fConst126 = std::exp(-(33.333332f / fConst0));
		fConst127 = std::exp(-(6.6666665f / fConst0));
		fConst128 = 0.0001f * (1.0f - fConst127);
		fConst129 = std::exp(-(5e+01f / fConst0));
		fConst130 = std::exp(-(16.666666f / fConst0));
		fConst131 = 0.0001f * fConst57;
		fConst132 = std::exp(-fConst1);
		fConst133 = 0.0001f * (1.0f - fConst132);
		fConst134 = std::exp(-(333.33334f / fConst0));
		fConst135 = std::exp(-(6.2831855f / fConst0));
		fConst136 = 1.0f - fConst135;
		iConst137 = static_cast<int>(fConst18);
		fConst138 = std::rint(3.0f * fConst0);
		fConst139 = 1.0f / std::max<float>(fConst138, 1.1920929e-07f);
		iConst140 = static_cast<int>(std::floor(7.6293945e-06f * fConst138)) % 2;
		iConst141 = static_cast<int>(std::floor(fConst138)) % 2;
		iConst142 = static_cast<int>(std::floor(0.5f * fConst138)) % 2;
		iConst143 = iConst141 + 2 * iConst142;
		iConst144 = static_cast<int>(std::floor(0.25f * fConst138)) % 2;
		iConst145 = iConst143 + 4 * iConst144;
		iConst146 = static_cast<int>(std::floor(0.125f * fConst138)) % 2;
		iConst147 = iConst145 + 8 * iConst146;
		iConst148 = static_cast<int>(std::floor(0.0625f * fConst138)) % 2;
		iConst149 = iConst147 + 16 * iConst148;
		iConst150 = static_cast<int>(std::floor(0.03125f * fConst138)) % 2;
		iConst151 = iConst149 + 32 * iConst150;
		iConst152 = static_cast<int>(std::floor(0.015625f * fConst138)) % 2;
		iConst153 = iConst151 + 64 * iConst152;
		iConst154 = static_cast<int>(std::floor(0.0078125f * fConst138)) % 2;
		iConst155 = iConst153 + 128 * iConst154;
		iConst156 = static_cast<int>(std::floor(0.00390625f * fConst138)) % 2;
		iConst157 = iConst155 + 256 * iConst156;
		iConst158 = static_cast<int>(std::floor(0.001953125f * fConst138)) % 2;
		iConst159 = iConst157 + 512 * iConst158;
		iConst160 = static_cast<int>(std::floor(0.0009765625f * fConst138)) % 2;
		iConst161 = iConst159 + 1024 * iConst160;
		iConst162 = static_cast<int>(std::floor(0.00048828125f * fConst138)) % 2;
		iConst163 = iConst161 + 2048 * iConst162;
		iConst164 = static_cast<int>(std::floor(0.00024414062f * fConst138)) % 2;
		iConst165 = iConst163 + 4096 * iConst164;
		iConst166 = static_cast<int>(std::floor(0.00012207031f * fConst138)) % 2;
		iConst167 = iConst165 + 8192 * iConst166;
		iConst168 = static_cast<int>(std::floor(6.1035156e-05f * fConst138)) % 2;
		iConst169 = iConst167 + 16384 * iConst168;
		iConst170 = static_cast<int>(std::floor(3.0517578e-05f * fConst138)) % 2;
		iConst171 = iConst169 + 32768 * iConst170;
		iConst172 = static_cast<int>(std::floor(1.5258789e-05f * fConst138)) % 2;
		iConst173 = iConst171 + 65536 * iConst172;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = static_cast<FAUSTFLOAT>(42.0f);
		fVslider1 = static_cast<FAUSTFLOAT>(0.0f);
		fVslider2 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider3 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider4 = static_cast<FAUSTFLOAT>(5e+01f);
		fVslider5 = static_cast<FAUSTFLOAT>(0.9f);
		fVslider6 = static_cast<FAUSTFLOAT>(-23.0f);
		fVslider7 = static_cast<FAUSTFLOAT>(1e+02f);
		fVslider8 = static_cast<FAUSTFLOAT>(5e+01f);
		fVslider9 = static_cast<FAUSTFLOAT>(5e+01f);
		fVslider10 = static_cast<FAUSTFLOAT>(1e+02f);
		fVslider11 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider12 = static_cast<FAUSTFLOAT>(6.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec43[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec42[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fVec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec41[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec52[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fVec1[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec56[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec55[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec2[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec54[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec53[l10] = 0.0f;
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
			fVec12[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec60[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec59[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec13[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec58[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec57[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fVec14[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 3; l27 = l27 + 1) {
			fVec15[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 5; l28 = l28 + 1) {
			fVec16[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 12; l29 = l29 + 1) {
			fVec17[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 32; l30 = l30 + 1) {
			fVec18[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 64; l31 = l31 + 1) {
			fVec19[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 128; l32 = l32 + 1) {
			fVec20[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 256; l33 = l33 + 1) {
			fVec21[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 512; l34 = l34 + 1) {
			fVec22[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec47[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec48[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec45[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec44[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fVec23[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fVec24[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec68[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec67[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fVec25[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec66[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec65[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec64[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec63[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec76[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fVec26[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec75[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fVec27[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fVec28[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec74[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec73[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec29[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec72[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec71[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec70[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec69[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec62[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec80[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec81[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec79[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec78[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec85[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec86[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec84[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec83[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec94[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec95[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec96[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fVec30[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec93[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec92[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fVec31[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec91[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec90[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec89[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec88[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec103[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec104[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec105[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec32[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec102[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec101[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec33[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec100[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec99[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec98[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec97[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec108[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec109[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec107[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec106[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec113[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec114[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec112[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec111[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec118[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec119[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec117[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec116[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec123[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec124[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec122[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec121[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec128[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec129[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec127[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec126[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec133[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec134[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec132[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec131[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec138[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec139[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec137[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec136[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec143[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec144[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec142[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec141[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec148[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec149[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec147[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec146[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec153[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec154[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec152[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec151[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec158[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec159[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec157[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec156[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec163[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec164[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec162[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec161[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec77[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fVec34[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec61[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 3; l142 = l142 + 1) {
			fVec35[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 5; l143 = l143 + 1) {
			fVec36[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 12; l144 = l144 + 1) {
			fVec37[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 32; l145 = l145 + 1) {
			fVec38[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 64; l146 = l146 + 1) {
			fVec39[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 128; l147 = l147 + 1) {
			fVec40[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 256; l148 = l148 + 1) {
			fVec41[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 512; l149 = l149 + 1) {
			fVec42[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 512; l150 = l150 + 1) {
			fVec43[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec166[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec168[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec44[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec167[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 3; l155 = l155 + 1) {
			fVec45[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 5; l156 = l156 + 1) {
			fVec46[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 12; l157 = l157 + 1) {
			fVec47[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 32; l158 = l158 + 1) {
			fVec48[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 64; l159 = l159 + 1) {
			fVec49[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 128; l160 = l160 + 1) {
			fVec50[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 256; l161 = l161 + 1) {
			fVec51[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 512; l162 = l162 + 1) {
			fVec52[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 512; l163 = l163 + 1) {
			fVec53[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec169[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec171[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec54[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec170[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 3; l168 = l168 + 1) {
			fVec55[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 5; l169 = l169 + 1) {
			fVec56[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 12; l170 = l170 + 1) {
			fVec57[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 32; l171 = l171 + 1) {
			fVec58[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 64; l172 = l172 + 1) {
			fVec59[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 128; l173 = l173 + 1) {
			fVec60[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 256; l174 = l174 + 1) {
			fVec61[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 512; l175 = l175 + 1) {
			fVec62[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 512; l176 = l176 + 1) {
			fVec63[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec172[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec174[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fVec64[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec173[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 3; l181 = l181 + 1) {
			fVec65[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 5; l182 = l182 + 1) {
			fVec66[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 12; l183 = l183 + 1) {
			fVec67[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 32; l184 = l184 + 1) {
			fVec68[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 64; l185 = l185 + 1) {
			fVec69[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 128; l186 = l186 + 1) {
			fVec70[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 256; l187 = l187 + 1) {
			fVec71[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 512; l188 = l188 + 1) {
			fVec72[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 512; l189 = l189 + 1) {
			fVec73[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec175[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec177[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fVec74[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec176[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fVec75[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 5; l195 = l195 + 1) {
			fVec76[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 12; l196 = l196 + 1) {
			fVec77[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 32; l197 = l197 + 1) {
			fVec78[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 64; l198 = l198 + 1) {
			fVec79[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 128; l199 = l199 + 1) {
			fVec80[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 256; l200 = l200 + 1) {
			fVec81[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 512; l201 = l201 + 1) {
			fVec82[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 512; l202 = l202 + 1) {
			fVec83[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec178[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec180[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fVec84[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec179[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 3; l207 = l207 + 1) {
			fVec85[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 5; l208 = l208 + 1) {
			fVec86[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 12; l209 = l209 + 1) {
			fVec87[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 32; l210 = l210 + 1) {
			fVec88[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 64; l211 = l211 + 1) {
			fVec89[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 128; l212 = l212 + 1) {
			fVec90[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 256; l213 = l213 + 1) {
			fVec91[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 512; l214 = l214 + 1) {
			fVec92[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 512; l215 = l215 + 1) {
			fVec93[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec181[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fRec183[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fVec94[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fRec182[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 3; l220 = l220 + 1) {
			fVec95[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 5; l221 = l221 + 1) {
			fVec96[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 12; l222 = l222 + 1) {
			fVec97[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 32; l223 = l223 + 1) {
			fVec98[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 64; l224 = l224 + 1) {
			fVec99[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 128; l225 = l225 + 1) {
			fVec100[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 256; l226 = l226 + 1) {
			fVec101[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 512; l227 = l227 + 1) {
			fVec102[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 512; l228 = l228 + 1) {
			fVec103[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec184[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec186[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fVec104[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec185[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 3; l233 = l233 + 1) {
			fVec105[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 5; l234 = l234 + 1) {
			fVec106[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 12; l235 = l235 + 1) {
			fVec107[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 32; l236 = l236 + 1) {
			fVec108[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 64; l237 = l237 + 1) {
			fVec109[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 128; l238 = l238 + 1) {
			fVec110[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 256; l239 = l239 + 1) {
			fVec111[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 512; l240 = l240 + 1) {
			fVec112[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 512; l241 = l241 + 1) {
			fVec113[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec187[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec37[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec38[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec33[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec34[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec29[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec30[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec25[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec26[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec21[l251] = 0.0f;
		}
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec22[l252] = 0.0f;
		}
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec17[l253] = 0.0f;
		}
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fRec18[l254] = 0.0f;
		}
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec13[l255] = 0.0f;
		}
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fRec14[l256] = 0.0f;
		}
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			fRec9[l257] = 0.0f;
		}
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec10[l258] = 0.0f;
		}
		for (int l259 = 0; l259 < 3; l259 = l259 + 1) {
			fRec5[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec216[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec217[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fRec212[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec213[l263] = 0.0f;
		}
		for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
			fRec208[l264] = 0.0f;
		}
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec209[l265] = 0.0f;
		}
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fRec204[l266] = 0.0f;
		}
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec205[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec200[l268] = 0.0f;
		}
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec201[l269] = 0.0f;
		}
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec196[l270] = 0.0f;
		}
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fRec197[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec192[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fRec193[l273] = 0.0f;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec188[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec189[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 3; l276 = l276 + 1) {
			fRec6[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2048; l277 = l277 + 1) {
			fRec7[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2048; l278 = l278 + 1) {
			fRec8[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			iRec3[l279] = 0;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec4[l280] = 0.0f;
		}
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fRec2[l281] = 0.0f;
		}
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fRec1[l282] = 0.0f;
		}
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec0[l283] = 0.0f;
		}
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fVec114[l284] = 0.0f;
		}
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fVec115[l285] = 0.0f;
		}
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec223[l286] = 0.0f;
		}
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fRec222[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
			fVec116[l288] = 0.0f;
		}
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec221[l289] = 0.0f;
		}
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec220[l290] = 0.0f;
		}
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fVec117[l291] = 0.0f;
		}
		for (int l292 = 0; l292 < 3; l292 = l292 + 1) {
			fVec118[l292] = 0.0f;
		}
		for (int l293 = 0; l293 < 5; l293 = l293 + 1) {
			fVec119[l293] = 0.0f;
		}
		for (int l294 = 0; l294 < 12; l294 = l294 + 1) {
			fVec120[l294] = 0.0f;
		}
		for (int l295 = 0; l295 < 32; l295 = l295 + 1) {
			fVec121[l295] = 0.0f;
		}
		for (int l296 = 0; l296 < 64; l296 = l296 + 1) {
			fVec122[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 128; l297 = l297 + 1) {
			fVec123[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 256; l298 = l298 + 1) {
			fVec124[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 512; l299 = l299 + 1) {
			fVec125[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 1024; l300 = l300 + 1) {
			fVec126[l300] = 0.0f;
		}
		for (int l301 = 0; l301 < 2048; l301 = l301 + 1) {
			fVec127[l301] = 0.0f;
		}
		for (int l302 = 0; l302 < 4096; l302 = l302 + 1) {
			fVec128[l302] = 0.0f;
		}
		for (int l303 = 0; l303 < 8192; l303 = l303 + 1) {
			fVec129[l303] = 0.0f;
		}
		for (int l304 = 0; l304 < 16384; l304 = l304 + 1) {
			fVec130[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 32768; l305 = l305 + 1) {
			fVec131[l305] = 0.0f;
		}
		for (int l306 = 0; l306 < 65536; l306 = l306 + 1) {
			fVec132[l306] = 0.0f;
		}
		for (int l307 = 0; l307 < 131072; l307 = l307 + 1) {
			fVec133[l307] = 0.0f;
		}
		for (int l308 = 0; l308 < 262144; l308 = l308 + 1) {
			fVec134[l308] = 0.0f;
		}
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec228[l309] = 0.0f;
		}
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fVec135[l310] = 0.0f;
		}
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			fVec136[l311] = 0.0f;
		}
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fRec227[l312] = 0.0f;
		}
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec226[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fVec137[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fRec225[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec224[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			fVec138[l317] = 0.0f;
		}
		for (int l318 = 0; l318 < 3; l318 = l318 + 1) {
			fVec139[l318] = 0.0f;
		}
		for (int l319 = 0; l319 < 5; l319 = l319 + 1) {
			fVec140[l319] = 0.0f;
		}
		for (int l320 = 0; l320 < 12; l320 = l320 + 1) {
			fVec141[l320] = 0.0f;
		}
		for (int l321 = 0; l321 < 32; l321 = l321 + 1) {
			fVec142[l321] = 0.0f;
		}
		for (int l322 = 0; l322 < 64; l322 = l322 + 1) {
			fVec143[l322] = 0.0f;
		}
		for (int l323 = 0; l323 < 128; l323 = l323 + 1) {
			fVec144[l323] = 0.0f;
		}
		for (int l324 = 0; l324 < 256; l324 = l324 + 1) {
			fVec145[l324] = 0.0f;
		}
		for (int l325 = 0; l325 < 512; l325 = l325 + 1) {
			fVec146[l325] = 0.0f;
		}
		for (int l326 = 0; l326 < 1024; l326 = l326 + 1) {
			fVec147[l326] = 0.0f;
		}
		for (int l327 = 0; l327 < 2048; l327 = l327 + 1) {
			fVec148[l327] = 0.0f;
		}
		for (int l328 = 0; l328 < 4096; l328 = l328 + 1) {
			fVec149[l328] = 0.0f;
		}
		for (int l329 = 0; l329 < 8192; l329 = l329 + 1) {
			fVec150[l329] = 0.0f;
		}
		for (int l330 = 0; l330 < 16384; l330 = l330 + 1) {
			fVec151[l330] = 0.0f;
		}
		for (int l331 = 0; l331 < 32768; l331 = l331 + 1) {
			fVec152[l331] = 0.0f;
		}
		for (int l332 = 0; l332 < 65536; l332 = l332 + 1) {
			fVec153[l332] = 0.0f;
		}
		for (int l333 = 0; l333 < 131072; l333 = l333 + 1) {
			fVec154[l333] = 0.0f;
		}
		for (int l334 = 0; l334 < 262144; l334 = l334 + 1) {
			fVec155[l334] = 0.0f;
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
		return new mydsp(*this);
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
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph6, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph6, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph5, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph7, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph8, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph8, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph9, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph10, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph10, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph11, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph11, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph12, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph12, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph25, "1", "");
		ui_interface->declare(&fVbargraph25, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph25, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph13, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph28, "1", "");
		ui_interface->declare(&fVbargraph28, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph28, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph31, "1", "");
		ui_interface->declare(&fVbargraph31, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph31, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph34, "1", "");
		ui_interface->declare(&fVbargraph34, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph34, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph22, "1", "");
		ui_interface->declare(&fVbargraph22, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph22, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fVslider11, "symbol", "voice_isolation_intensity");
		ui_interface->addVerticalSlider("VIintense", &fVslider11, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "pre_gain");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider7, "2", "");
		ui_interface->declare(&fVslider7, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider7, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph37, "99", "");
		ui_interface->declare(&fVbargraph37, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph37, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph0, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph0, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph4, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph4, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph40, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph40, "unit", "LUFS");
		ui_interface->addVerticalBargraph("lufs_out", &fVbargraph40, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph38, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph38, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph39, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph39, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph2, "symbol", "vad_meter");
		ui_interface->addVerticalBargraph("vad_meter", &fVbargraph2, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "symbol", "leveler_target");
		ui_interface->declare(&fVslider6, "unit", "LUFS");
		ui_interface->addVerticalSlider("target", &fVslider6, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph3, "8", "");
		ui_interface->declare(&fVbargraph3, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph3, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph3, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider2, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider2, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph27, "1", "");
		ui_interface->declare(&fVbargraph27, "symbol", "mb_exp_meter0");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp0", &fVbargraph27, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "mb_exp_meter1");
		ui_interface->declare(&fVbargraph15, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp1", &fVbargraph15, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "1", "");
		ui_interface->declare(&fVbargraph30, "symbol", "mb_exp_meter2");
		ui_interface->declare(&fVbargraph30, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp2", &fVbargraph30, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "mb_exp_meter3");
		ui_interface->declare(&fVbargraph18, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp3", &fVbargraph18, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph33, "1", "");
		ui_interface->declare(&fVbargraph33, "symbol", "mb_exp_meter4");
		ui_interface->declare(&fVbargraph33, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp4", &fVbargraph33, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph21, "1", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_exp_meter5");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp5", &fVbargraph21, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph36, "1", "");
		ui_interface->declare(&fVbargraph36, "symbol", "mb_exp_meter6");
		ui_interface->declare(&fVbargraph36, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp6", &fVbargraph36, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph24, "1", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_exp_meter7");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("Exp7", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph26, "2", "");
		ui_interface->declare(&fVbargraph26, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "2", "");
		ui_interface->declare(&fVbargraph14, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph14, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph29, "2", "");
		ui_interface->declare(&fVbargraph29, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph29, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph29, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph17, "2", "");
		ui_interface->declare(&fVbargraph17, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph17, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph17, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph32, "2", "");
		ui_interface->declare(&fVbargraph32, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph32, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph32, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph20, "2", "");
		ui_interface->declare(&fVbargraph20, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph20, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph35, "2", "");
		ui_interface->declare(&fVbargraph35, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph35, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph35, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph23, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVslider10, "symbol", "mb_exp_strength");
		ui_interface->declare(&fVslider10, "unit", "%");
		ui_interface->addVerticalSlider("mb_exp_strength", &fVslider10, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider8, "symbol", "mb_strength");
		ui_interface->declare(&fVslider8, "unit", "%");
		ui_interface->addVerticalSlider("mb_strength", &fVslider8, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider12, "symbol", "mb_exp_thresh");
		ui_interface->declare(&fVslider12, "unit", "dB");
		ui_interface->addVerticalSlider("mb_exp_thresh", &fVslider12, FAUSTFLOAT(6.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider0, "scale", "log");
		ui_interface->declare(&fVslider0, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider0, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider5, "symbol", "vad_gate_thresh");
		ui_interface->addVerticalSlider("vad_g_thr", &fVslider5, FAUSTFLOAT(0.9f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->declare(&fVbargraph1, "symbol", "vad_smoothing_meter");
		ui_interface->addVerticalBargraph("vad_smoo", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider4, "symbol", "vad_smoothing_time");
		ui_interface->declare(&fVslider4, "unit", "ms");
		ui_interface->addVerticalSlider("vad_smoo_t", &fVslider4, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+03f), FAUSTFLOAT(1e+01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = 1.0f / std::tan(fConst12 * static_cast<float>(fVslider0));
		float fSlow1 = 1.0f / (fSlow0 + 1.0f);
		float fSlow2 = 1.0f - fSlow0;
		float fSlow3 = fConst13 * std::pow(1e+01f, 0.05f * static_cast<float>(fVslider1));
		float fSlow4 = static_cast<float>(fVslider2);
		float fSlow5 = static_cast<float>(fVslider3);
		float fSlow6 = 0.001f * static_cast<float>(fVslider4);
		int iSlow7 = std::fabs(fSlow6) < 1.1920929e-07f;
		float fSlow8 = ((iSlow7) ? 0.0f : std::exp(-(fConst16 / ((iSlow7) ? 1.0f : fSlow6))));
		float fSlow9 = fSlow5 * (1.0f - fSlow8);
		float fSlow10 = static_cast<float>(fVslider5);
		float fSlow11 = static_cast<float>(fVslider6);
		float fSlow12 = static_cast<float>(fVslider7);
		float fSlow13 = 0.0001f * fSlow12 * static_cast<float>(fVslider8);
		float fSlow14 = fSlow5 * fSlow12 * static_cast<float>(fVslider9);
		float fSlow15 = fConst59 * fSlow14;
		float fSlow16 = fSlow11 + -6.5f;
		float fSlow17 = fSlow11 + -5.5f;
		float fSlow18 = 7.5e-05f * static_cast<float>(fVslider10) * fSlow12 * (1.0f - static_cast<float>(fVslider11));
		float fSlow19 = fSlow11 + static_cast<float>(fVslider12);
		float fSlow20 = fSlow19 + -15.0f;
		float fSlow21 = fSlow19 + -9.0f;
		float fSlow22 = fConst116 * fSlow14;
		float fSlow23 = fSlow11 + -8.5f;
		float fSlow24 = fSlow11 + -7.5f;
		float fSlow25 = fConst120 * fSlow14;
		float fSlow26 = fSlow11 + -12.5f;
		float fSlow27 = fSlow11 + -11.5f;
		float fSlow28 = fSlow19 + -16.0f;
		float fSlow29 = fSlow19 + -1e+01f;
		float fSlow30 = fConst122 * fSlow14;
		float fSlow31 = fSlow11 + -13.5f;
		float fSlow32 = fSlow19 + -18.0f;
		float fSlow33 = fSlow19 + -12.0f;
		float fSlow34 = fConst125 * fSlow14;
		float fSlow35 = fConst128 * fSlow14;
		float fSlow36 = fConst131 * fSlow14;
		float fSlow37 = fSlow11 + -10.5f;
		float fSlow38 = fConst133 * fSlow14;
		float fSlow39 = fSlow19 + -17.0f;
		float fSlow40 = fSlow19 + -11.0f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec43[0] = fSlow3 + fConst14 * fRec43[1];
			float fTemp0 = static_cast<float>(input0[i0]) * fRec43[0];
			fRec42[0] = std::max<float>(fRec42[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp0))))));
			fVbargraph0 = static_cast<FAUSTFLOAT>(fRec42[0]);
			float fTemp1 = fTemp0;
			fVec0[0] = fTemp1;
			fRec41[0] = -(fSlow1 * (fSlow2 * fRec41[1] - fSlow0 * (fTemp1 - fVec0[1])));
			fRec52[0] = fSlow9 + fSlow8 * fRec52[1];
			fVbargraph1 = static_cast<FAUSTFLOAT>(fRec52[0]);
			float fTemp2 = fRec52[0];
			float fTemp3 = fTemp2 * static_cast<float>(fTemp2 > fSlow10);
			fVbargraph2 = static_cast<FAUSTFLOAT>(fTemp3);
			float fTemp4 = fTemp3;
			float fTemp5 = std::tan(fConst12 * std::min<float>(fConst15, fTemp4 * (fConst17 * std::fabs(fRec45[1]) + 0.1316f)));
			fVec1[0] = fConst32 * fRec55[1] - fConst34 * fRec5[2];
			fRec56[0] = fConst29 * (fConst31 * fRec5[2] - (fVec1[1] + fConst35 * fRec56[1]) + fConst36 * fRec5[1]);
			fRec55[0] = fRec56[0];
			fVec2[0] = 0.50032705f * fRec55[1] - fConst37 * fRec53[1];
			fRec54[0] = fConst25 * (fVec2[1] - fConst38 * fRec54[1] - 1.0006541f * fRec55[1] + 0.50032705f * fRec55[0]);
			fRec53[0] = fRec54[0];
			float fTemp6 = mydsp_faustpower2_f(fRec53[0]);
			fVec3[0] = fTemp6;
			float fTemp7 = fTemp6 + fVec3[1];
			fVec4[0] = fTemp7;
			float fTemp8 = fTemp7 + fVec4[2];
			fVec5[0] = fTemp8;
			float fTemp9 = fTemp8 + fVec5[4];
			fVec6[0] = fTemp9;
			float fTemp10 = fTemp9 + fVec6[8];
			fVec7[IOTA0 & 31] = fTemp10;
			float fTemp11 = fTemp10 + fVec7[(IOTA0 - 16) & 31];
			fVec8[IOTA0 & 63] = fTemp11;
			float fTemp12 = fTemp11 + fVec8[(IOTA0 - 32) & 63];
			fVec9[IOTA0 & 127] = fTemp12;
			float fTemp13 = fTemp12 + fVec9[(IOTA0 - 64) & 127];
			fVec10[IOTA0 & 255] = fTemp13;
			fVec11[IOTA0 & 511] = fTemp13 + fVec10[(IOTA0 - 128) & 255];
			fVec12[0] = fConst32 * fRec59[1] - fConst34 * fRec6[2];
			fRec60[0] = fConst29 * (fConst31 * fRec6[2] - (fVec12[1] + fConst35 * fRec60[1]) + fConst36 * fRec6[1]);
			fRec59[0] = fRec60[0];
			fVec13[0] = 0.50032705f * fRec59[1] - fConst37 * fRec57[1];
			fRec58[0] = fConst25 * (fVec13[1] - fConst38 * fRec58[1] - 1.0006541f * fRec59[1] + 0.50032705f * fRec59[0]);
			fRec57[0] = fRec58[0];
			float fTemp14 = mydsp_faustpower2_f(fRec57[0]);
			fVec14[0] = fTemp14;
			float fTemp15 = fTemp14 + fVec14[1];
			fVec15[0] = fTemp15;
			float fTemp16 = fTemp15 + fVec15[2];
			fVec16[0] = fTemp16;
			float fTemp17 = fTemp16 + fVec16[4];
			fVec17[0] = fTemp17;
			float fTemp18 = fTemp17 + fVec17[8];
			fVec18[IOTA0 & 31] = fTemp18;
			float fTemp19 = fTemp18 + fVec18[(IOTA0 - 16) & 31];
			fVec19[IOTA0 & 63] = fTemp19;
			float fTemp20 = fTemp19 + fVec19[(IOTA0 - 32) & 63];
			fVec20[IOTA0 & 127] = fTemp20;
			float fTemp21 = fTemp20 + fVec20[(IOTA0 - 64) & 127];
			fVec21[IOTA0 & 255] = fTemp21;
			fVec22[IOTA0 & 511] = fTemp21 + fVec21[(IOTA0 - 128) & 255];
			float fTemp22 = fTemp5 + 2.0f;
			float fTemp23 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow11 + (fRec44[1] - std::max<float>(4.3429446f * std::log(std::max<float>(1e-12f, fConst20 * (((iConst21) ? 0.86000985f * fVec11[(IOTA0 - iConst53) & 511] : 0.0f) + ((iConst52) ? 0.86000985f * fVec10[(IOTA0 - iConst51) & 255] : 0.0f) + ((iConst50) ? 0.86000985f * fVec9[(IOTA0 - iConst49) & 127] : 0.0f) + ((iConst48) ? 0.86000985f * fVec8[(IOTA0 - iConst47) & 63] : 0.0f) + ((iConst46) ? 0.86000985f * fVec7[(IOTA0 - iConst45) & 31] : 0.0f) + ((iConst44) ? 0.86000985f * fVec6[iConst43] : 0.0f) + ((iConst42) ? 0.86000985f * fVec5[iConst41] : 0.0f) + ((iConst39) ? 0.86000985f * fTemp6 : 0.0f) + ((iConst40) ? 0.86000985f * fVec4[iConst39] : 0.0f)))) + -0.691f, 4.3429446f * std::log(std::max<float>(1e-12f, fConst20 * (((iConst21) ? 0.86000985f * fVec22[(IOTA0 - iConst53) & 511] : 0.0f) + ((iConst52) ? 0.86000985f * fVec21[(IOTA0 - iConst51) & 255] : 0.0f) + ((iConst50) ? 0.86000985f * fVec20[(IOTA0 - iConst49) & 127] : 0.0f) + ((iConst48) ? 0.86000985f * fVec19[(IOTA0 - iConst47) & 63] : 0.0f) + ((iConst46) ? 0.86000985f * fVec18[(IOTA0 - iConst45) & 31] : 0.0f) + ((iConst44) ? 0.86000985f * fVec17[iConst43] : 0.0f) + ((iConst42) ? 0.86000985f * fVec16[iConst41] : 0.0f) + ((iConst39) ? 0.86000985f * fTemp14 : 0.0f) + ((iConst40) ? 0.86000985f * fVec15[iConst39] : 0.0f)))) + -0.691f)))) - (fRec47[1] * fTemp22 + fRec48[1]);
			float fTemp24 = fTemp5 * fTemp22 + 1.0f;
			float fTemp25 = fTemp5 * fTemp23 / fTemp24;
			fRec47[0] = fRec47[1] + 2.0f * fTemp25;
			float fTemp26 = fRec47[1] + fTemp25;
			float fTemp27 = fTemp5 * fTemp26;
			fRec48[0] = fRec48[1] + 2.0f * fTemp27;
			float fRec49 = fTemp26;
			float fRec50 = fTemp23 / fTemp24;
			float fRec51 = fRec48[1] + fTemp27;
			fRec45[0] = fRec49;
			float fRec46 = fRec51;
			float fTemp28 = fSlow4 * fRec46;
			fVbargraph3 = static_cast<FAUSTFLOAT>(fTemp28);
			fRec44[0] = fTemp28;
			float fTemp29 = std::pow(1e+01f, 0.05f * fRec44[0]);
			float fTemp30 = fRec41[0] * fTemp29;
			fVec23[0] = fTemp30;
			fVec24[0] = fConst32 * fRec67[1] - fConst34 * fVec23[1];
			fRec68[0] = fConst29 * (fConst31 * fVec23[1] - (fVec24[1] + fConst35 * fRec68[1]) + fConst36 * fTemp30);
			fRec67[0] = fRec68[0];
			fVec25[0] = 0.50032705f * fRec67[1] - fConst37 * fRec65[1];
			fRec66[0] = fConst25 * (fVec25[1] - fConst38 * fRec66[1] - 1.0006541f * fRec67[1] + 0.50032705f * fRec67[0]);
			fRec65[0] = fRec66[0];
			float fTemp31 = std::fabs(0.92736715f * fRec65[0]);
			fRec64[0] = std::max<float>(fTemp31, fConst56 * fRec64[1] + fConst57 * fTemp31);
			fRec63[0] = fConst55 * fRec64[0] + fConst54 * fRec63[1];
			float fTemp32 = static_cast<float>(input1[i0]) * fRec43[0];
			fRec76[0] = std::max<float>(fRec76[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp32))))));
			fVbargraph4 = static_cast<FAUSTFLOAT>(fRec76[0]);
			float fTemp33 = fTemp32;
			fVec26[0] = fTemp33;
			fRec75[0] = -(fSlow1 * (fSlow2 * fRec75[1] - fSlow0 * (fTemp33 - fVec26[1])));
			float fTemp34 = fRec75[0] * fTemp29;
			fVec27[0] = fTemp34;
			fVec28[0] = fConst32 * fRec73[1] - fConst34 * fVec27[1];
			fRec74[0] = fConst29 * (fConst31 * fVec27[1] - (fVec28[1] + fConst35 * fRec74[1]) + fConst36 * fTemp34);
			fRec73[0] = fRec74[0];
			fVec29[0] = 0.50032705f * fRec73[1] - fConst37 * fRec71[1];
			fRec72[0] = fConst25 * (fVec29[1] - fConst38 * fRec72[1] - 1.0006541f * fRec73[1] + 0.50032705f * fRec73[0]);
			fRec71[0] = fRec72[0];
			float fTemp35 = std::fabs(0.92736715f * fRec71[0]);
			fRec70[0] = std::max<float>(fTemp35, fConst56 * fRec70[1] + fConst57 * fTemp35);
			fRec69[0] = fConst55 * fRec70[0] + fConst54 * fRec69[1];
			float fTemp36 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec63[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec69[0]))));
			fRec62[0] = fConst13 * std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp36 + 5e+01f))) + fConst14 * fRec62[1];
			float fTemp37 = fRec80[1] + fConst5 * (fTemp30 - fRec81[1]);
			fRec80[0] = fConst61 * fTemp37 - fRec80[1];
			float fTemp38 = fRec81[1] + fConst62 * fTemp37;
			fRec81[0] = 2.0f * fTemp38 - fRec81[1];
			float fRec82 = fConst63 * fTemp37;
			float fTemp39 = std::fabs(2.4153774f * fRec82);
			fRec79[0] = std::max<float>(fTemp39, fConst56 * fRec79[1] + fConst57 * fTemp39);
			fRec78[0] = fConst55 * fRec79[0] + fConst54 * fRec78[1];
			float fTemp40 = fRec85[1] + fConst5 * (fTemp34 - fRec86[1]);
			fRec85[0] = fConst61 * fTemp40 - fRec85[1];
			float fTemp41 = fRec86[1] + fConst62 * fTemp40;
			fRec86[0] = 2.0f * fTemp41 - fRec86[1];
			float fRec87 = fConst63 * fTemp40;
			float fTemp42 = std::fabs(2.4153774f * fRec87);
			fRec84[0] = std::max<float>(fTemp42, fConst56 * fRec84[1] + fConst57 * fTemp42);
			fRec83[0] = fConst55 * fRec84[0] + fConst54 * fRec83[1];
			float fTemp43 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec78[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec83[0])))) - fTemp36;
			fVbargraph5 = static_cast<FAUSTFLOAT>(fTemp43);
			float fTemp44 = fTemp43;
			float fTemp45 = fRec94[1] + fConst4 * (fTemp30 - fRec95[1]);
			fRec94[0] = fConst66 * fTemp45 - fRec94[1];
			float fTemp46 = fRec95[1] + fConst67 * fTemp45;
			fRec95[0] = 2.0f * fTemp46 - fRec95[1];
			fRec96[0] = fConst68 * fTemp45;
			fVec30[0] = fConst64 * fRec96[1] - fConst32 * fRec92[1];
			fRec93[0] = fConst29 * (fVec30[1] - fConst35 * fRec93[1] + fConst69 * fRec96[1] + fConst70 * fRec96[0]);
			fRec92[0] = fRec93[0];
			fVec31[0] = 0.50032705f * fRec92[1] - fConst37 * fRec90[1];
			fRec91[0] = fConst25 * (fVec31[1] - fConst38 * fRec91[1] - 1.0006541f * fRec92[1] + 0.50032705f * fRec92[0]);
			fRec90[0] = fRec91[0];
			float fTemp47 = std::fabs(0.92736715f * fRec90[0]);
			fRec89[0] = std::max<float>(fTemp47, fConst56 * fRec89[1] + fConst57 * fTemp47);
			fRec88[0] = fConst55 * fRec89[0] + fConst54 * fRec88[1];
			float fTemp48 = fRec103[1] + fConst4 * (fTemp34 - fRec104[1]);
			fRec103[0] = fConst66 * fTemp48 - fRec103[1];
			float fTemp49 = fRec104[1] + fConst67 * fTemp48;
			fRec104[0] = 2.0f * fTemp49 - fRec104[1];
			fRec105[0] = fConst68 * fTemp48;
			fVec32[0] = fConst64 * fRec105[1] - fConst32 * fRec101[1];
			fRec102[0] = fConst29 * (fVec32[1] - fConst35 * fRec102[1] + fConst69 * fRec105[1] + fConst70 * fRec105[0]);
			fRec101[0] = fRec102[0];
			fVec33[0] = 0.50032705f * fRec101[1] - fConst37 * fRec99[1];
			fRec100[0] = fConst25 * (fVec33[1] - fConst38 * fRec100[1] - 1.0006541f * fRec101[1] + 0.50032705f * fRec101[0]);
			fRec99[0] = fRec100[0];
			float fTemp50 = std::fabs(0.92736715f * fRec99[0]);
			fRec98[0] = std::max<float>(fTemp50, fConst56 * fRec98[1] + fConst57 * fTemp50);
			fRec97[0] = fConst55 * fRec98[0] + fConst54 * fRec97[1];
			float fTemp51 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec88[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec97[0])))) - fTemp36;
			fVbargraph6 = static_cast<FAUSTFLOAT>(fTemp51);
			float fTemp52 = fTemp51;
			float fTemp53 = fRec108[1] + fConst6 * (fTemp30 - fRec109[1]);
			fRec108[0] = fConst72 * fTemp53 - fRec108[1];
			float fTemp54 = fRec109[1] + fConst73 * fTemp53;
			fRec109[0] = 2.0f * fTemp54 - fRec109[1];
			float fRec110 = fConst74 * fTemp53;
			float fTemp55 = std::fabs(2.5673494f * fRec110);
			fRec107[0] = std::max<float>(fTemp55, fConst56 * fRec107[1] + fConst57 * fTemp55);
			fRec106[0] = fConst55 * fRec107[0] + fConst54 * fRec106[1];
			float fTemp56 = fRec113[1] + fConst6 * (fTemp34 - fRec114[1]);
			fRec113[0] = fConst72 * fTemp56 - fRec113[1];
			float fTemp57 = fRec114[1] + fConst73 * fTemp56;
			fRec114[0] = 2.0f * fTemp57 - fRec114[1];
			float fRec115 = fConst74 * fTemp56;
			float fTemp58 = std::fabs(2.5673494f * fRec115);
			fRec112[0] = std::max<float>(fTemp58, fConst56 * fRec112[1] + fConst57 * fTemp58);
			fRec111[0] = fConst55 * fRec112[0] + fConst54 * fRec111[1];
			float fTemp59 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec106[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec111[0])))) - fTemp36;
			fVbargraph7 = static_cast<FAUSTFLOAT>(fTemp59);
			float fTemp60 = fTemp59;
			float fTemp61 = fRec118[1] + fConst7 * (fTemp30 - fRec119[1]);
			fRec118[0] = fConst76 * fTemp61 - fRec118[1];
			float fTemp62 = fRec119[1] + fConst77 * fTemp61;
			fRec119[0] = 2.0f * fTemp62 - fRec119[1];
			float fRec120 = fConst78 * fTemp61;
			float fTemp63 = std::fabs(2.700754f * fRec120);
			fRec117[0] = std::max<float>(fTemp63, fConst56 * fRec117[1] + fConst57 * fTemp63);
			fRec116[0] = fConst55 * fRec117[0] + fConst54 * fRec116[1];
			float fTemp64 = fRec123[1] + fConst7 * (fTemp34 - fRec124[1]);
			fRec123[0] = fConst76 * fTemp64 - fRec123[1];
			float fTemp65 = fRec124[1] + fConst77 * fTemp64;
			fRec124[0] = 2.0f * fTemp65 - fRec124[1];
			float fRec125 = fConst78 * fTemp64;
			float fTemp66 = std::fabs(2.700754f * fRec125);
			fRec122[0] = std::max<float>(fTemp66, fConst56 * fRec122[1] + fConst57 * fTemp66);
			fRec121[0] = fConst55 * fRec122[0] + fConst54 * fRec121[1];
			float fTemp67 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec116[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec121[0])))) - fTemp36;
			fVbargraph8 = static_cast<FAUSTFLOAT>(fTemp67);
			float fTemp68 = fTemp67;
			float fTemp69 = fRec128[1] + fConst8 * (fTemp30 - fRec129[1]);
			fRec128[0] = fConst80 * fTemp69 - fRec128[1];
			float fTemp70 = fRec129[1] + fConst81 * fTemp69;
			fRec129[0] = 2.0f * fTemp70 - fRec129[1];
			float fRec130 = fConst82 * fTemp69;
			float fTemp71 = std::fabs(3.086633f * fRec130);
			fRec127[0] = std::max<float>(fTemp71, fConst56 * fRec127[1] + fConst57 * fTemp71);
			fRec126[0] = fConst55 * fRec127[0] + fConst54 * fRec126[1];
			float fTemp72 = fRec133[1] + fConst8 * (fTemp34 - fRec134[1]);
			fRec133[0] = fConst80 * fTemp72 - fRec133[1];
			float fTemp73 = fRec134[1] + fConst81 * fTemp72;
			fRec134[0] = 2.0f * fTemp73 - fRec134[1];
			float fRec135 = fConst82 * fTemp72;
			float fTemp74 = std::fabs(3.086633f * fRec135);
			fRec132[0] = std::max<float>(fTemp74, fConst56 * fRec132[1] + fConst57 * fTemp74);
			fRec131[0] = fConst55 * fRec132[0] + fConst54 * fRec131[1];
			float fTemp75 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec126[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec131[0])))) - fTemp36;
			fVbargraph9 = static_cast<FAUSTFLOAT>(fTemp75);
			float fTemp76 = fTemp75;
			float fTemp77 = fRec138[1] + fConst9 * (fTemp30 - fRec139[1]);
			fRec138[0] = fConst84 * fTemp77 - fRec138[1];
			float fTemp78 = fRec139[1] + fConst85 * fTemp77;
			fRec139[0] = 2.0f * fTemp78 - fRec139[1];
			float fRec140 = fConst86 * fTemp77;
			float fTemp79 = std::fabs(3.7323728f * fRec140);
			fRec137[0] = std::max<float>(fTemp79, fConst56 * fRec137[1] + fConst57 * fTemp79);
			fRec136[0] = fConst55 * fRec137[0] + fConst54 * fRec136[1];
			float fTemp80 = fRec143[1] + fConst9 * (fTemp34 - fRec144[1]);
			fRec143[0] = fConst84 * fTemp80 - fRec143[1];
			float fTemp81 = fRec144[1] + fConst85 * fTemp80;
			fRec144[0] = 2.0f * fTemp81 - fRec144[1];
			float fRec145 = fConst86 * fTemp80;
			float fTemp82 = std::fabs(3.7323728f * fRec145);
			fRec142[0] = std::max<float>(fTemp82, fConst56 * fRec142[1] + fConst57 * fTemp82);
			fRec141[0] = fConst55 * fRec142[0] + fConst54 * fRec141[1];
			float fTemp83 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec136[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec141[0])))) - fTemp36;
			fVbargraph10 = static_cast<FAUSTFLOAT>(fTemp83);
			float fTemp84 = fTemp83;
			float fTemp85 = fRec148[1] + fConst10 * (fTemp30 - fRec149[1]);
			fRec148[0] = fConst88 * fTemp85 - fRec148[1];
			float fTemp86 = fRec149[1] + fConst89 * fTemp85;
			fRec149[0] = 2.0f * fTemp86 - fRec149[1];
			float fRec150 = fConst90 * fTemp85;
			float fTemp87 = std::fabs(4.045619f * fRec150);
			fRec147[0] = std::max<float>(fTemp87, fConst56 * fRec147[1] + fConst57 * fTemp87);
			fRec146[0] = fConst55 * fRec147[0] + fConst54 * fRec146[1];
			float fTemp88 = fRec153[1] + fConst10 * (fTemp34 - fRec154[1]);
			fRec153[0] = fConst88 * fTemp88 - fRec153[1];
			float fTemp89 = fRec154[1] + fConst89 * fTemp88;
			fRec154[0] = 2.0f * fTemp89 - fRec154[1];
			float fRec155 = fConst90 * fTemp88;
			float fTemp90 = std::fabs(4.045619f * fRec155);
			fRec152[0] = std::max<float>(fTemp90, fConst56 * fRec152[1] + fConst57 * fTemp90);
			fRec151[0] = fConst55 * fRec152[0] + fConst54 * fRec151[1];
			float fTemp91 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec146[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec151[0])))) - fTemp36;
			fVbargraph11 = static_cast<FAUSTFLOAT>(fTemp91);
			float fTemp92 = fTemp91;
			float fTemp93 = fRec158[1] + fConst11 * (fTemp30 - fRec159[1]);
			fRec158[0] = fConst92 * fTemp93 - fRec158[1];
			float fTemp94 = fRec159[1] + fConst93 * fTemp93;
			fRec159[0] = 2.0f * fTemp94 - fRec159[1];
			float fRec160 = fConst94 * fTemp93;
			float fTemp95 = std::fabs(4.1160913f * fRec160);
			fRec157[0] = std::max<float>(fTemp95, fConst56 * fRec157[1] + fConst57 * fTemp95);
			fRec156[0] = fConst55 * fRec157[0] + fConst54 * fRec156[1];
			float fTemp96 = fRec163[1] + fConst11 * (fTemp34 - fRec164[1]);
			fRec163[0] = fConst92 * fTemp96 - fRec163[1];
			float fTemp97 = fRec164[1] + fConst93 * fTemp96;
			fRec164[0] = 2.0f * fTemp97 - fRec164[1];
			float fRec165 = fConst94 * fTemp96;
			float fTemp98 = std::fabs(4.1160913f * fRec165);
			fRec162[0] = std::max<float>(fTemp98, fConst56 * fRec162[1] + fConst57 * fTemp98);
			fRec161[0] = fConst55 * fRec162[0] + fConst54 * fRec161[1];
			float fTemp99 = std::max<float>(8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec156[0]))), 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec161[0])))) - fTemp36;
			fVbargraph12 = static_cast<FAUSTFLOAT>(fTemp99);
			float fTemp100 = fTemp99;
			float fTemp101 = 18.0f - 0.125f * (fTemp52 + fTemp44 + fTemp60 + fTemp68 + fTemp76 + fTemp84 + fTemp92 + fTemp100);
			float fTemp102 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp44 + fTemp101)));
			float fTemp103 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp52 + fTemp101)));
			float fTemp104 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp60 + fTemp101)));
			float fTemp105 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp68 + fTemp101)));
			float fTemp106 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp76 + fTemp101)));
			float fTemp107 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp84 + fTemp101)));
			float fTemp108 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp92 + fTemp101)));
			float fTemp109 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp100 + fTemp101)));
			float fTemp110 = ((-1e+01f - fTemp52) * fTemp103 + (-5.0f - fTemp44) * fTemp102 + (-5.0f - fTemp60) * fTemp104 + (-8.0f - fTemp68) * fTemp105 + (-9.0f - fTemp76) * fTemp106 + (-1e+01f - fTemp84) * fTemp107 + (-7.0f - fTemp92) * fTemp108 + (-4.0f - fTemp100) * fTemp109) / std::max<float>(1.1920929e-07f, fTemp109 + fTemp108 + fTemp107 + fTemp106 + fTemp105 + fTemp104 + fTemp103 + fTemp102);
			float fTemp111 = -5.0f - (fTemp44 + fTemp110);
			fRec77[0] = fSlow15 * fTemp102 * std::min<float>(9.0f, std::max<float>(-12.0f, static_cast<float>((fTemp111 > 0.0f) - (fTemp111 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp111) + -1.0f))) + fConst58 * fRec77[1];
			float fTemp112 = fRec62[0] * fRec77[0];
			fVbargraph13 = static_cast<FAUSTFLOAT>(fTemp112);
			float fTemp113 = fTemp112;
			float fTemp114 = std::max<float>(std::fabs(0.70710677f * fRec82), std::fabs(0.70710677f * fRec87));
			fVec34[0] = fTemp114;
			float fTemp115 = fTemp113 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp114));
			int iTemp116 = (fTemp115 > fSlow16) + (fTemp115 > fSlow17);
			float fTemp117 = std::max<float>(0.0f, ((iTemp116 == 0) ? 0.0f : ((iTemp116 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp115 + 6.5f - fSlow11) : fTemp115 + 6.0f - fSlow11)));
			float fTemp118 = ((-(0.75f * fTemp117) > fRec61[1]) ? fConst96 : fConst95);
			fRec61[0] = fRec61[1] * fTemp118 - 0.75f * fTemp117 * (1.0f - fTemp118);
			float fTemp119 = fSlow13 * (fRec61[0] + 1.5f);
			fVbargraph14 = static_cast<FAUSTFLOAT>(fTemp119);
			float fTemp120 = fTemp119;
			float fTemp121 = fSlow18 * (1.0f - 0.5f * fTemp4);
			int iTemp122 = fTemp121 > 0.0f;
			float fTemp123 = static_cast<float>(2 * iTemp122 + -1);
			float fTemp124 = std::fabs(fTemp121);
			float fTemp125 = std::max<float>(fTemp114, fVec34[1]);
			fVec35[0] = fTemp125;
			float fTemp126 = std::max<float>(fTemp125, fVec35[2]);
			fVec36[0] = fTemp126;
			float fTemp127 = std::max<float>(fTemp126, fVec36[4]);
			fVec37[0] = fTemp127;
			float fTemp128 = std::max<float>(fTemp127, fVec37[8]);
			fVec38[IOTA0 & 31] = fTemp128;
			float fTemp129 = std::max<float>(fTemp128, fVec38[(IOTA0 - 16) & 31]);
			fVec39[IOTA0 & 63] = fTemp129;
			float fTemp130 = std::max<float>(fTemp129, fVec39[(IOTA0 - 32) & 63]);
			fVec40[IOTA0 & 127] = fTemp130;
			float fTemp131 = std::max<float>(fTemp130, fVec40[(IOTA0 - 64) & 127]);
			fVec41[IOTA0 & 255] = fTemp131;
			float fTemp132 = std::max<float>(fTemp131, fVec41[(IOTA0 - 128) & 255]);
			fVec42[IOTA0 & 511] = fTemp132;
			fVec43[IOTA0 & 511] = std::max<float>(fTemp132, fVec42[(IOTA0 - 256) & 511]);
			float fTemp133 = fTemp113 + fTemp120 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp114 : -3.4028235e+38f), ((iConst98) ? fVec35[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec36[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec37[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec38[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec39[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec40[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec41[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec42[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec43[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp134 = (fTemp133 > fSlow20) + (fTemp133 > fSlow21);
			float fTemp135 = fTemp123 * std::max<float>(-12.0f, fTemp124 * ((iTemp134 == 0) ? fTemp133 + 12.0f - fSlow19 : ((iTemp134 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp133 + 9.0f - fSlow19)) : 0.0f)));
			float fTemp136 = ((iTemp122) ? 0.2f : 0.007f);
			int iTemp137 = std::fabs(fTemp136) < 1.1920929e-07f;
			float fTemp138 = ((iTemp122) ? 0.007f : 0.2f);
			int iTemp139 = std::fabs(fTemp138) < 1.1920929e-07f;
			float fTemp140 = ((fTemp135 > fRec166[1]) ? ((iTemp139) ? 0.0f : std::exp(-(fConst16 / ((iTemp139) ? 1.0f : fTemp138)))) : ((iTemp137) ? 0.0f : std::exp(-(fConst16 / ((iTemp137) ? 1.0f : fTemp136)))));
			fRec166[0] = fTemp135 * (1.0f - fTemp140) + fRec166[1] * fTemp140;
			fVbargraph15 = static_cast<FAUSTFLOAT>(fRec166[0]);
			float fTemp141 = fTemp120 + fRec166[0] + fTemp113;
			float fTemp142 = -8.0f - (fTemp68 + fTemp110);
			fRec168[0] = fSlow22 * fTemp105 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp142 > 0.0f) - (fTemp142 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp142) + -1.0f))) + fConst115 * fRec168[1];
			float fTemp143 = fRec62[0] * fRec168[0];
			fVbargraph16 = static_cast<FAUSTFLOAT>(fTemp143);
			float fTemp144 = fTemp143;
			float fTemp145 = std::max<float>(std::fabs(0.70710677f * fRec120), std::fabs(0.70710677f * fRec125));
			fVec44[0] = fTemp145;
			float fTemp146 = fTemp144 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp145));
			int iTemp147 = (fTemp146 > fSlow23) + (fTemp146 > fSlow24);
			float fTemp148 = std::max<float>(0.0f, ((iTemp147 == 0) ? 0.0f : ((iTemp147 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp146 + 8.5f - fSlow11) : fTemp146 + 8.0f - fSlow11)));
			float fTemp149 = ((-(0.75f * fTemp148) > fRec167[1]) ? fConst118 : fConst117);
			fRec167[0] = fRec167[1] * fTemp149 - 0.75f * fTemp148 * (1.0f - fTemp149);
			float fTemp150 = fSlow13 * (fRec167[0] + 1.5f);
			fVbargraph17 = static_cast<FAUSTFLOAT>(fTemp150);
			float fTemp151 = fTemp150;
			float fTemp152 = std::max<float>(fTemp145, fVec44[1]);
			fVec45[0] = fTemp152;
			float fTemp153 = std::max<float>(fTemp152, fVec45[2]);
			fVec46[0] = fTemp153;
			float fTemp154 = std::max<float>(fTemp153, fVec46[4]);
			fVec47[0] = fTemp154;
			float fTemp155 = std::max<float>(fTemp154, fVec47[8]);
			fVec48[IOTA0 & 31] = fTemp155;
			float fTemp156 = std::max<float>(fTemp155, fVec48[(IOTA0 - 16) & 31]);
			fVec49[IOTA0 & 63] = fTemp156;
			float fTemp157 = std::max<float>(fTemp156, fVec49[(IOTA0 - 32) & 63]);
			fVec50[IOTA0 & 127] = fTemp157;
			float fTemp158 = std::max<float>(fTemp157, fVec50[(IOTA0 - 64) & 127]);
			fVec51[IOTA0 & 255] = fTemp158;
			float fTemp159 = std::max<float>(fTemp158, fVec51[(IOTA0 - 128) & 255]);
			fVec52[IOTA0 & 511] = fTemp159;
			fVec53[IOTA0 & 511] = std::max<float>(fTemp159, fVec52[(IOTA0 - 256) & 511]);
			float fTemp160 = fTemp144 + fTemp151 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp145 : -3.4028235e+38f), ((iConst98) ? fVec45[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec46[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec47[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec48[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec49[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec50[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec51[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec52[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec53[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp161 = (fTemp160 > fSlow20) + (fTemp160 > fSlow21);
			float fTemp162 = fTemp123 * std::max<float>(-12.0f, fTemp124 * ((iTemp161 == 0) ? fTemp160 + 12.0f - fSlow19 : ((iTemp161 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp160 + 9.0f - fSlow19)) : 0.0f)));
			float fTemp163 = ((iTemp122) ? 0.2f : 0.005f);
			int iTemp164 = std::fabs(fTemp163) < 1.1920929e-07f;
			float fTemp165 = ((iTemp122) ? 0.005f : 0.2f);
			int iTemp166 = std::fabs(fTemp165) < 1.1920929e-07f;
			float fTemp167 = ((fTemp162 > fRec169[1]) ? ((iTemp166) ? 0.0f : std::exp(-(fConst16 / ((iTemp166) ? 1.0f : fTemp165)))) : ((iTemp164) ? 0.0f : std::exp(-(fConst16 / ((iTemp164) ? 1.0f : fTemp163)))));
			fRec169[0] = fTemp162 * (1.0f - fTemp167) + fRec169[1] * fTemp167;
			fVbargraph18 = static_cast<FAUSTFLOAT>(fRec169[0]);
			float fTemp168 = fTemp151 + fRec169[0] + fTemp144;
			float fTemp169 = -1e+01f - (fTemp84 + fTemp110);
			fRec171[0] = fSlow25 * fTemp107 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp169 > 0.0f) - (fTemp169 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp169) + -1.0f))) + fConst119 * fRec171[1];
			float fTemp170 = fRec62[0] * fRec171[0];
			fVbargraph19 = static_cast<FAUSTFLOAT>(fTemp170);
			float fTemp171 = fTemp170;
			float fTemp172 = std::max<float>(std::fabs(0.70710677f * fRec140), std::fabs(0.70710677f * fRec145));
			fVec54[0] = fTemp172;
			float fTemp173 = fTemp171 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp172));
			int iTemp174 = (fTemp173 > fSlow26) + (fTemp173 > fSlow27);
			float fTemp175 = std::max<float>(0.0f, ((iTemp174 == 0) ? 0.0f : ((iTemp174 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp173 + 12.5f - fSlow11) : fTemp173 + 12.0f - fSlow11)));
			float fTemp176 = ((-(0.75f * fTemp175) > fRec170[1]) ? fConst117 : fConst121);
			fRec170[0] = fRec170[1] * fTemp176 - 0.75f * fTemp175 * (1.0f - fTemp176);
			float fTemp177 = fSlow13 * (fRec170[0] + 1.5f);
			fVbargraph20 = static_cast<FAUSTFLOAT>(fTemp177);
			float fTemp178 = fTemp177;
			float fTemp179 = std::max<float>(fTemp172, fVec54[1]);
			fVec55[0] = fTemp179;
			float fTemp180 = std::max<float>(fTemp179, fVec55[2]);
			fVec56[0] = fTemp180;
			float fTemp181 = std::max<float>(fTemp180, fVec56[4]);
			fVec57[0] = fTemp181;
			float fTemp182 = std::max<float>(fTemp181, fVec57[8]);
			fVec58[IOTA0 & 31] = fTemp182;
			float fTemp183 = std::max<float>(fTemp182, fVec58[(IOTA0 - 16) & 31]);
			fVec59[IOTA0 & 63] = fTemp183;
			float fTemp184 = std::max<float>(fTemp183, fVec59[(IOTA0 - 32) & 63]);
			fVec60[IOTA0 & 127] = fTemp184;
			float fTemp185 = std::max<float>(fTemp184, fVec60[(IOTA0 - 64) & 127]);
			fVec61[IOTA0 & 255] = fTemp185;
			float fTemp186 = std::max<float>(fTemp185, fVec61[(IOTA0 - 128) & 255]);
			fVec62[IOTA0 & 511] = fTemp186;
			fVec63[IOTA0 & 511] = std::max<float>(fTemp186, fVec62[(IOTA0 - 256) & 511]);
			float fTemp187 = fTemp171 + fTemp178 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp172 : -3.4028235e+38f), ((iConst98) ? fVec55[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec56[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec57[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec58[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec59[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec60[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec61[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec62[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec63[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp188 = (fTemp187 > fSlow28) + (fTemp187 > fSlow29);
			float fTemp189 = fTemp123 * std::max<float>(-12.0f, fTemp124 * ((iTemp188 == 0) ? fTemp187 + 13.0f - fSlow19 : ((iTemp188 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp187 + 1e+01f - fSlow19)) : 0.0f)));
			float fTemp190 = ((iTemp122) ? 0.12f : 0.003f);
			int iTemp191 = std::fabs(fTemp190) < 1.1920929e-07f;
			float fTemp192 = ((iTemp122) ? 0.003f : 0.12f);
			int iTemp193 = std::fabs(fTemp192) < 1.1920929e-07f;
			float fTemp194 = ((fTemp189 > fRec172[1]) ? ((iTemp193) ? 0.0f : std::exp(-(fConst16 / ((iTemp193) ? 1.0f : fTemp192)))) : ((iTemp191) ? 0.0f : std::exp(-(fConst16 / ((iTemp191) ? 1.0f : fTemp190)))));
			fRec172[0] = fTemp189 * (1.0f - fTemp194) + fRec172[1] * fTemp194;
			fVbargraph21 = static_cast<FAUSTFLOAT>(fRec172[0]);
			float fTemp195 = fTemp178 + fRec172[0] + fTemp171;
			float fTemp196 = -4.0f - (fTemp100 + fTemp110);
			fRec174[0] = fSlow30 * fTemp109 * std::min<float>(6.0f, std::max<float>(-12.0f, static_cast<float>((fTemp196 > 0.0f) - (fTemp196 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp196) + -1.0f))) + fConst95 * fRec174[1];
			float fTemp197 = fRec62[0] * fRec174[0];
			fVbargraph22 = static_cast<FAUSTFLOAT>(fTemp197);
			float fTemp198 = fTemp197;
			float fTemp199 = std::max<float>(std::fabs(0.70710677f * fRec160), std::fabs(0.70710677f * fRec165));
			fVec64[0] = fTemp199;
			float fTemp200 = fTemp198 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp199));
			int iTemp201 = (fTemp200 > fSlow31) + (fTemp200 > fSlow26);
			float fTemp202 = std::max<float>(0.0f, ((iTemp201 == 0) ? 0.0f : ((iTemp201 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp200 + 13.5f - fSlow11) : fTemp200 + 13.0f - fSlow11)));
			float fTemp203 = ((-(0.75f * fTemp202) > fRec173[1]) ? fConst117 : fConst123);
			fRec173[0] = fRec173[1] * fTemp203 - 0.75f * fTemp202 * (1.0f - fTemp203);
			float fTemp204 = fSlow13 * (fRec173[0] + 1.5f);
			fVbargraph23 = static_cast<FAUSTFLOAT>(fTemp204);
			float fTemp205 = fTemp204;
			float fTemp206 = std::max<float>(fTemp199, fVec64[1]);
			fVec65[0] = fTemp206;
			float fTemp207 = std::max<float>(fTemp206, fVec65[2]);
			fVec66[0] = fTemp207;
			float fTemp208 = std::max<float>(fTemp207, fVec66[4]);
			fVec67[0] = fTemp208;
			float fTemp209 = std::max<float>(fTemp208, fVec67[8]);
			fVec68[IOTA0 & 31] = fTemp209;
			float fTemp210 = std::max<float>(fTemp209, fVec68[(IOTA0 - 16) & 31]);
			fVec69[IOTA0 & 63] = fTemp210;
			float fTemp211 = std::max<float>(fTemp210, fVec69[(IOTA0 - 32) & 63]);
			fVec70[IOTA0 & 127] = fTemp211;
			float fTemp212 = std::max<float>(fTemp211, fVec70[(IOTA0 - 64) & 127]);
			fVec71[IOTA0 & 255] = fTemp212;
			float fTemp213 = std::max<float>(fTemp212, fVec71[(IOTA0 - 128) & 255]);
			fVec72[IOTA0 & 511] = fTemp213;
			fVec73[IOTA0 & 511] = std::max<float>(fTemp213, fVec72[(IOTA0 - 256) & 511]);
			float fTemp214 = fTemp198 + fTemp205 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp199 : -3.4028235e+38f), ((iConst98) ? fVec65[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec66[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec67[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec68[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec69[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec70[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec71[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec72[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec73[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp215 = (fTemp214 > fSlow32) + (fTemp214 > fSlow33);
			float fTemp216 = fTemp123 * std::max<float>(-12.0f, fTemp124 * ((iTemp215 == 0) ? fTemp214 + 15.0f - fSlow19 : ((iTemp215 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp214 + 12.0f - fSlow19)) : 0.0f)));
			float fTemp217 = ((iTemp122) ? 0.05f : 0.001f);
			int iTemp218 = std::fabs(fTemp217) < 1.1920929e-07f;
			float fTemp219 = ((iTemp122) ? 0.001f : 0.05f);
			int iTemp220 = std::fabs(fTemp219) < 1.1920929e-07f;
			float fTemp221 = ((fTemp216 > fRec175[1]) ? ((iTemp220) ? 0.0f : std::exp(-(fConst16 / ((iTemp220) ? 1.0f : fTemp219)))) : ((iTemp218) ? 0.0f : std::exp(-(fConst16 / ((iTemp218) ? 1.0f : fTemp217)))));
			fRec175[0] = fTemp216 * (1.0f - fTemp221) + fRec175[1] * fTemp221;
			fVbargraph24 = static_cast<FAUSTFLOAT>(fRec175[0]);
			float fTemp222 = fTemp205 + fRec175[0] + fTemp198;
			float fTemp223 = -1e+01f - (fTemp52 + fTemp110);
			fRec177[0] = fSlow34 * fTemp103 * std::min<float>(6.0f, std::max<float>(-12.0f, static_cast<float>((fTemp223 > 0.0f) - (fTemp223 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp223) + -1.0f))) + fConst124 * fRec177[1];
			float fTemp224 = fRec177[0] * fRec62[0];
			fVbargraph25 = static_cast<FAUSTFLOAT>(fTemp224);
			float fTemp225 = fTemp224;
			float fTemp226 = std::max<float>(std::fabs(0.70710677f * fRec96[0]), std::fabs(0.70710677f * fRec105[0]));
			fVec74[0] = fTemp226;
			float fTemp227 = fTemp225 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp226));
			int iTemp228 = (fTemp227 > fSlow16) + (fTemp227 > fSlow17);
			float fTemp229 = std::max<float>(0.0f, ((iTemp228 == 0) ? 0.0f : ((iTemp228 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp227 + 6.5f - fSlow11) : fTemp227 + 6.0f - fSlow11)));
			float fTemp230 = ((-(0.75f * fTemp229) > fRec176[1]) ? fConst56 : fConst126);
			fRec176[0] = fRec176[1] * fTemp230 - 0.75f * fTemp229 * (1.0f - fTemp230);
			float fTemp231 = fSlow13 * (fRec176[0] + 1.5f);
			fVbargraph26 = static_cast<FAUSTFLOAT>(fTemp231);
			float fTemp232 = fTemp231;
			float fTemp233 = std::max<float>(fTemp226, fVec74[1]);
			fVec75[0] = fTemp233;
			float fTemp234 = std::max<float>(fTemp233, fVec75[2]);
			fVec76[0] = fTemp234;
			float fTemp235 = std::max<float>(fTemp234, fVec76[4]);
			fVec77[0] = fTemp235;
			float fTemp236 = std::max<float>(fTemp235, fVec77[8]);
			fVec78[IOTA0 & 31] = fTemp236;
			float fTemp237 = std::max<float>(fTemp236, fVec78[(IOTA0 - 16) & 31]);
			fVec79[IOTA0 & 63] = fTemp237;
			float fTemp238 = std::max<float>(fTemp237, fVec79[(IOTA0 - 32) & 63]);
			fVec80[IOTA0 & 127] = fTemp238;
			float fTemp239 = std::max<float>(fTemp238, fVec80[(IOTA0 - 64) & 127]);
			fVec81[IOTA0 & 255] = fTemp239;
			float fTemp240 = std::max<float>(fTemp239, fVec81[(IOTA0 - 128) & 255]);
			fVec82[IOTA0 & 511] = fTemp240;
			fVec83[IOTA0 & 511] = std::max<float>(fTemp240, fVec82[(IOTA0 - 256) & 511]);
			float fTemp241 = fTemp225 + fTemp232 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp226 : -3.4028235e+38f), ((iConst98) ? fVec75[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec76[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec77[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec78[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec79[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec80[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec81[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec82[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec83[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp242 = (fTemp241 > fSlow20) + (fTemp241 > fSlow21);
			float fTemp243 = std::max<float>(-12.0f, ((iTemp242 == 0) ? fTemp241 + 12.0f - fSlow19 : ((iTemp242 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp241 + 9.0f - fSlow19)) : 0.0f)) * fTemp124) * fTemp123;
			float fTemp244 = ((iTemp122) ? 0.2f : 0.008f);
			int iTemp245 = std::fabs(fTemp244) < 1.1920929e-07f;
			float fTemp246 = ((iTemp122) ? 0.008f : 0.2f);
			int iTemp247 = std::fabs(fTemp246) < 1.1920929e-07f;
			float fTemp248 = ((fTemp243 > fRec178[1]) ? ((iTemp247) ? 0.0f : std::exp(-(fConst16 / ((iTemp247) ? 1.0f : fTemp246)))) : ((iTemp245) ? 0.0f : std::exp(-(fConst16 / ((iTemp245) ? 1.0f : fTemp244)))));
			fRec178[0] = fTemp243 * (1.0f - fTemp248) + fRec178[1] * fTemp248;
			fVbargraph27 = static_cast<FAUSTFLOAT>(fRec178[0]);
			float fTemp249 = fTemp232 + fTemp225 + fRec178[0];
			float fTemp250 = -5.0f - (fTemp60 + fTemp110);
			fRec180[0] = fSlow35 * fTemp104 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp250 > 0.0f) - (fTemp250 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp250) + -1.0f))) + fConst127 * fRec180[1];
			float fTemp251 = fRec62[0] * fRec180[0];
			fVbargraph28 = static_cast<FAUSTFLOAT>(fTemp251);
			float fTemp252 = fTemp251;
			float fTemp253 = std::max<float>(std::fabs(0.70710677f * fRec110), std::fabs(0.70710677f * fRec115));
			fVec84[0] = fTemp253;
			float fTemp254 = fTemp252 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp253));
			int iTemp255 = (fTemp254 > fSlow24) + (fTemp254 > fSlow16);
			float fTemp256 = std::max<float>(0.0f, ((iTemp255 == 0) ? 0.0f : ((iTemp255 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp254 + 7.5f - fSlow11) : fTemp254 + 7.0f - fSlow11)));
			float fTemp257 = ((-(0.75f * fTemp256) > fRec179[1]) ? fConst130 : fConst129);
			fRec179[0] = fRec179[1] * fTemp257 - 0.75f * fTemp256 * (1.0f - fTemp257);
			float fTemp258 = fSlow13 * (fRec179[0] + 1.5f);
			fVbargraph29 = static_cast<FAUSTFLOAT>(fTemp258);
			float fTemp259 = fTemp258;
			float fTemp260 = std::max<float>(fTemp253, fVec84[1]);
			fVec85[0] = fTemp260;
			float fTemp261 = std::max<float>(fTemp260, fVec85[2]);
			fVec86[0] = fTemp261;
			float fTemp262 = std::max<float>(fTemp261, fVec86[4]);
			fVec87[0] = fTemp262;
			float fTemp263 = std::max<float>(fTemp262, fVec87[8]);
			fVec88[IOTA0 & 31] = fTemp263;
			float fTemp264 = std::max<float>(fTemp263, fVec88[(IOTA0 - 16) & 31]);
			fVec89[IOTA0 & 63] = fTemp264;
			float fTemp265 = std::max<float>(fTemp264, fVec89[(IOTA0 - 32) & 63]);
			fVec90[IOTA0 & 127] = fTemp265;
			float fTemp266 = std::max<float>(fTemp265, fVec90[(IOTA0 - 64) & 127]);
			fVec91[IOTA0 & 255] = fTemp266;
			float fTemp267 = std::max<float>(fTemp266, fVec91[(IOTA0 - 128) & 255]);
			fVec92[IOTA0 & 511] = fTemp267;
			fVec93[IOTA0 & 511] = std::max<float>(fTemp267, fVec92[(IOTA0 - 256) & 511]);
			float fTemp268 = fTemp252 + fTemp259 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp253 : -3.4028235e+38f), ((iConst98) ? fVec85[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec86[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec87[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec88[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec89[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec90[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec91[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec92[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec93[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp269 = (fTemp268 > fSlow20) + (fTemp268 > fSlow21);
			float fTemp270 = fTemp123 * std::max<float>(-12.0f, fTemp124 * ((iTemp269 == 0) ? fTemp268 + 12.0f - fSlow19 : ((iTemp269 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp268 + 9.0f - fSlow19)) : 0.0f)));
			float fTemp271 = ((iTemp122) ? 0.2f : 0.006f);
			int iTemp272 = std::fabs(fTemp271) < 1.1920929e-07f;
			float fTemp273 = ((iTemp122) ? 0.006f : 0.2f);
			int iTemp274 = std::fabs(fTemp273) < 1.1920929e-07f;
			float fTemp275 = ((fTemp270 > fRec181[1]) ? ((iTemp274) ? 0.0f : std::exp(-(fConst16 / ((iTemp274) ? 1.0f : fTemp273)))) : ((iTemp272) ? 0.0f : std::exp(-(fConst16 / ((iTemp272) ? 1.0f : fTemp271)))));
			fRec181[0] = fTemp270 * (1.0f - fTemp275) + fRec181[1] * fTemp275;
			fVbargraph30 = static_cast<FAUSTFLOAT>(fRec181[0]);
			float fTemp276 = fTemp259 + fRec181[0] + fTemp252;
			float fTemp277 = -9.0f - (fTemp76 + fTemp110);
			fRec183[0] = fSlow36 * fTemp106 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp277 > 0.0f) - (fTemp277 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp277) + -1.0f))) + fConst56 * fRec183[1];
			float fTemp278 = fRec62[0] * fRec183[0];
			fVbargraph31 = static_cast<FAUSTFLOAT>(fTemp278);
			float fTemp279 = fTemp278;
			float fTemp280 = std::max<float>(std::fabs(0.70710677f * fRec130), std::fabs(0.70710677f * fRec135));
			fVec94[0] = fTemp280;
			float fTemp281 = fTemp279 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp280));
			int iTemp282 = (fTemp281 > fSlow27) + (fTemp281 > fSlow37);
			float fTemp283 = std::max<float>(0.0f, ((iTemp282 == 0) ? 0.0f : ((iTemp282 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp281 + 11.5f - fSlow11) : fTemp281 + 11.0f - fSlow11)));
			float fTemp284 = ((-(0.75f * fTemp283) > fRec182[1]) ? fConst129 : fConst54);
			fRec182[0] = fRec182[1] * fTemp284 - 0.75f * fTemp283 * (1.0f - fTemp284);
			float fTemp285 = fSlow13 * (fRec182[0] + 1.5f);
			fVbargraph32 = static_cast<FAUSTFLOAT>(fTemp285);
			float fTemp286 = fTemp285;
			float fTemp287 = std::max<float>(fTemp280, fVec94[1]);
			fVec95[0] = fTemp287;
			float fTemp288 = std::max<float>(fTemp287, fVec95[2]);
			fVec96[0] = fTemp288;
			float fTemp289 = std::max<float>(fTemp288, fVec96[4]);
			fVec97[0] = fTemp289;
			float fTemp290 = std::max<float>(fTemp289, fVec97[8]);
			fVec98[IOTA0 & 31] = fTemp290;
			float fTemp291 = std::max<float>(fTemp290, fVec98[(IOTA0 - 16) & 31]);
			fVec99[IOTA0 & 63] = fTemp291;
			float fTemp292 = std::max<float>(fTemp291, fVec99[(IOTA0 - 32) & 63]);
			fVec100[IOTA0 & 127] = fTemp292;
			float fTemp293 = std::max<float>(fTemp292, fVec100[(IOTA0 - 64) & 127]);
			fVec101[IOTA0 & 255] = fTemp293;
			float fTemp294 = std::max<float>(fTemp293, fVec101[(IOTA0 - 128) & 255]);
			fVec102[IOTA0 & 511] = fTemp294;
			fVec103[IOTA0 & 511] = std::max<float>(fTemp294, fVec102[(IOTA0 - 256) & 511]);
			float fTemp295 = fTemp279 + fTemp286 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp280 : -3.4028235e+38f), ((iConst98) ? fVec95[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec96[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec97[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec98[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec99[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec100[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec101[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec102[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec103[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp296 = (fTemp295 > fSlow28) + (fTemp295 > fSlow29);
			float fTemp297 = fTemp123 * std::max<float>(-12.0f, fTemp124 * ((iTemp296 == 0) ? fTemp295 + 13.0f - fSlow19 : ((iTemp296 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp295 + 1e+01f - fSlow19)) : 0.0f)));
			float fTemp298 = ((iTemp122) ? 0.16f : 0.004f);
			int iTemp299 = std::fabs(fTemp298) < 1.1920929e-07f;
			float fTemp300 = ((iTemp122) ? 0.004f : 0.16f);
			int iTemp301 = std::fabs(fTemp300) < 1.1920929e-07f;
			float fTemp302 = ((fTemp297 > fRec184[1]) ? ((iTemp301) ? 0.0f : std::exp(-(fConst16 / ((iTemp301) ? 1.0f : fTemp300)))) : ((iTemp299) ? 0.0f : std::exp(-(fConst16 / ((iTemp299) ? 1.0f : fTemp298)))));
			fRec184[0] = fTemp297 * (1.0f - fTemp302) + fRec184[1] * fTemp302;
			fVbargraph33 = static_cast<FAUSTFLOAT>(fRec184[0]);
			float fTemp303 = fTemp286 + fRec184[0] + fTemp279;
			float fTemp304 = -7.0f - (fTemp92 + fTemp110);
			fRec186[0] = fSlow38 * fTemp108 * std::min<float>(9.0f, std::max<float>(-12.0f, static_cast<float>((fTemp304 > 0.0f) - (fTemp304 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp304) + -1.0f))) + fConst132 * fRec186[1];
			float fTemp305 = fRec62[0] * fRec186[0];
			fVbargraph34 = static_cast<FAUSTFLOAT>(fTemp305);
			float fTemp306 = fTemp305;
			float fTemp307 = std::max<float>(std::fabs(0.70710677f * fRec150), std::fabs(0.70710677f * fRec155));
			fVec104[0] = fTemp307;
			float fTemp308 = fTemp306 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp307));
			int iTemp309 = (fTemp308 > fSlow26) + (fTemp308 > fSlow27);
			float fTemp310 = std::max<float>(0.0f, ((iTemp309 == 0) ? 0.0f : ((iTemp309 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp308 + 12.5f - fSlow11) : fTemp308 + 12.0f - fSlow11)));
			float fTemp311 = ((-(0.75f * fTemp310) > fRec185[1]) ? fConst117 : fConst134);
			fRec185[0] = fRec185[1] * fTemp311 - 0.75f * fTemp310 * (1.0f - fTemp311);
			float fTemp312 = fSlow13 * (fRec185[0] + 1.5f);
			fVbargraph35 = static_cast<FAUSTFLOAT>(fTemp312);
			float fTemp313 = fTemp312;
			float fTemp314 = std::max<float>(fTemp307, fVec104[1]);
			fVec105[0] = fTemp314;
			float fTemp315 = std::max<float>(fTemp314, fVec105[2]);
			fVec106[0] = fTemp315;
			float fTemp316 = std::max<float>(fTemp315, fVec106[4]);
			fVec107[0] = fTemp316;
			float fTemp317 = std::max<float>(fTemp316, fVec107[8]);
			fVec108[IOTA0 & 31] = fTemp317;
			float fTemp318 = std::max<float>(fTemp317, fVec108[(IOTA0 - 16) & 31]);
			fVec109[IOTA0 & 63] = fTemp318;
			float fTemp319 = std::max<float>(fTemp318, fVec109[(IOTA0 - 32) & 63]);
			fVec110[IOTA0 & 127] = fTemp319;
			float fTemp320 = std::max<float>(fTemp319, fVec110[(IOTA0 - 64) & 127]);
			fVec111[IOTA0 & 255] = fTemp320;
			float fTemp321 = std::max<float>(fTemp320, fVec111[(IOTA0 - 128) & 255]);
			fVec112[IOTA0 & 511] = fTemp321;
			fVec113[IOTA0 & 511] = std::max<float>(fTemp321, fVec112[(IOTA0 - 256) & 511]);
			float fTemp322 = fTemp306 + fTemp313 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp307 : -3.4028235e+38f), ((iConst98) ? fVec105[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec106[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec107[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec108[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec109[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec110[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec111[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec112[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec113[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp323 = (fTemp322 > fSlow39) + (fTemp322 > fSlow40);
			float fTemp324 = fTemp123 * std::max<float>(-12.0f, fTemp124 * ((iTemp323 == 0) ? fTemp322 + 14.0f - fSlow19 : ((iTemp323 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp322 + 11.0f - fSlow19)) : 0.0f)));
			float fTemp325 = ((iTemp122) ? 0.08f : 0.002f);
			int iTemp326 = std::fabs(fTemp325) < 1.1920929e-07f;
			float fTemp327 = ((iTemp122) ? 0.002f : 0.08f);
			int iTemp328 = std::fabs(fTemp327) < 1.1920929e-07f;
			float fTemp329 = ((fTemp324 > fRec187[1]) ? ((iTemp328) ? 0.0f : std::exp(-(fConst16 / ((iTemp328) ? 1.0f : fTemp327)))) : ((iTemp326) ? 0.0f : std::exp(-(fConst16 / ((iTemp326) ? 1.0f : fTemp325)))));
			fRec187[0] = fTemp324 * (1.0f - fTemp329) + fRec187[1] * fTemp329;
			fVbargraph36 = static_cast<FAUSTFLOAT>(fRec187[0]);
			float fTemp330 = fTemp313 + fRec187[0] + fTemp306;
			float fTemp331 = std::exp(0.057564627f * (0.00059f * fTemp141 + 0.01003f * fTemp168 + 0.16735f * fTemp195 + 1.23852f * fTemp222 - (0.00012f * fTemp249 + 0.00245f * fTemp276 + 0.04112f * fTemp303 + 0.6028f * fTemp330)));
			float fTemp332 = fConst11 * (fConst11 + 1.5f / fTemp331) + 1.0f;
			float fTemp333 = (fRec37[1] + fConst11 * (fTemp30 - fRec38[1])) / fTemp332;
			fRec37[0] = 2.0f * fTemp333 - fRec37[1];
			float fTemp334 = fRec38[1] + fConst11 * fTemp333;
			fRec38[0] = 2.0f * fTemp334 - fRec38[1];
			float fRec39 = fTemp30;
			float fRec40 = fTemp333;
			float fTemp335 = mydsp_faustpower2_f(fTemp331) + -1.0f;
			float fTemp336 = fRec39 + 1.5f * (fRec40 * fTemp335 / fTemp331);
			float fTemp337 = std::exp(0.057564627f * (0.00068f * fTemp249 + 0.0135f * fTemp276 + 0.22574f * fTemp303 + 1.62165f * fTemp330 - (0.00325f * fTemp141 + 0.05536f * fTemp168 + 0.81715f * fTemp195 + 0.60264f * fTemp222)));
			float fTemp338 = fConst10 * (fConst10 + 1.5f / fTemp337) + 1.0f;
			float fTemp339 = (fRec33[1] + fConst10 * (fTemp336 - fRec34[1])) / fTemp338;
			fRec33[0] = 2.0f * fTemp339 - fRec33[1];
			float fTemp340 = fRec34[1] + fConst10 * fTemp339;
			fRec34[0] = 2.0f * fTemp340 - fRec34[1];
			float fRec35 = fTemp336;
			float fRec36 = fTemp339;
			float fTemp341 = mydsp_faustpower2_f(fTemp337) + -1.0f;
			float fTemp342 = fRec35 + 1.5f * (fRec36 * fTemp341 / fTemp337);
			float fTemp343 = std::exp(0.057564627f * (0.01451f * fTemp141 + 0.24587f * fTemp168 + 1.78298f * fTemp195 + 0.16725f * fTemp222 - (0.00302f * fTemp249 + 0.06024f * fTemp276 + 0.89053f * fTemp303 + 0.81733f * fTemp330)));
			float fTemp344 = fConst9 * (fConst9 + 1.5f / fTemp343) + 1.0f;
			float fTemp345 = (fRec29[1] + fConst9 * (fTemp342 - fRec30[1])) / fTemp344;
			fRec29[0] = 2.0f * fTemp345 - fRec29[1];
			float fTemp346 = fRec30[1] + fConst9 * fTemp345;
			fRec30[0] = 2.0f * fTemp346 - fRec30[1];
			float fRec31 = fTemp342;
			float fRec32 = fTemp345;
			float fTemp347 = mydsp_faustpower2_f(fTemp343) + -1.0f;
			float fTemp348 = fRec31 + 1.5f * (fRec32 * fTemp347 / fTemp343);
			float fTemp349 = std::exp(0.057564627f * (0.0127f * fTemp249 + 0.25175f * fTemp276 + 1.83204f * fTemp303 + 0.22587f * fTemp330 - (0.06095f * fTemp141 + 0.91263f * fTemp168 + 0.89004f * fTemp195 + 0.04111f * fTemp222)));
			float fTemp350 = fConst8 * (fConst8 + 1.5f / fTemp349) + 1.0f;
			float fTemp351 = (fRec25[1] + fConst8 * (fTemp348 - fRec26[1])) / fTemp350;
			fRec25[0] = 2.0f * fTemp351 - fRec25[1];
			float fTemp352 = fRec26[1] + fConst8 * fTemp351;
			fRec26[0] = 2.0f * fTemp352 - fRec26[1];
			float fRec27 = fTemp348;
			float fRec28 = fTemp351;
			float fTemp353 = mydsp_faustpower2_f(fTemp349) + -1.0f;
			float fTemp354 = fRec27 + 1.5f * (fRec28 * fTemp353 / fTemp349);
			float fTemp355 = std::exp(0.057564627f * (0.25035f * fTemp141 + 1.84578f * fTemp168 + 0.24485f * fTemp195 + 0.00999f * fTemp222 - (0.05244f * fTemp249 + 0.9186f * fTemp276 + 0.91077f * fTemp303 + 0.05519f * fTemp330)));
			float fTemp356 = fConst7 * (fConst7 + 1.5f / fTemp355) + 1.0f;
			float fTemp357 = (fRec21[1] + fConst7 * (fTemp354 - fRec22[1])) / fTemp356;
			fRec21[0] = 2.0f * fTemp357 - fRec21[1];
			float fTemp358 = fRec22[1] + fConst7 * fTemp357;
			fRec22[0] = 2.0f * fTemp358 - fRec22[1];
			float fRec23 = fTemp354;
			float fRec24 = fTemp357;
			float fTemp359 = mydsp_faustpower2_f(fTemp355) + -1.0f;
			float fTemp360 = fRec23 + 1.5f * (fRec24 * fTemp359 / fTemp355);
			float fTemp361 = std::exp(0.057564627f * (0.21506f * fTemp249 + 1.85152f * fTemp276 + 0.25042f * fTemp303 + 0.0134f * fTemp330 - (0.9089f * fTemp141 + 0.91688f * fTemp168 + 0.05976f * fTemp195 + 0.00243f * fTemp222)));
			float fTemp362 = fConst6 * (fConst6 + 1.5f / fTemp361) + 1.0f;
			float fTemp363 = (fRec17[1] + fConst6 * (fTemp360 - fRec18[1])) / fTemp362;
			fRec17[0] = 2.0f * fTemp363 - fRec17[1];
			float fTemp364 = fRec18[1] + fConst6 * fTemp363;
			fRec18[0] = 2.0f * fTemp364 - fRec18[1];
			float fRec19 = fTemp360;
			float fRec20 = fTemp363;
			float fTemp365 = mydsp_faustpower2_f(fTemp361) + -1.0f;
			float fTemp366 = fRec19 + 1.5f * (fRec20 * fTemp365 / fTemp361);
			float fTemp367 = std::exp(0.057564627f * (1.80799f * fTemp141 + 0.25175f * fTemp168 + 0.01449f * fTemp195 + 0.00059f * fTemp222 - (0.77301f * fTemp249 + 0.91783f * fTemp276 + 0.06104f * fTemp303 + 0.00325f * fTemp330)));
			float fTemp368 = fConst5 * (fConst5 + 1.5f / fTemp367) + 1.0f;
			float fTemp369 = (fRec13[1] + fConst5 * (fTemp366 - fRec14[1])) / fTemp368;
			fRec13[0] = 2.0f * fTemp369 - fRec13[1];
			float fTemp370 = fRec14[1] + fConst5 * fTemp369;
			fRec14[0] = 2.0f * fTemp370 - fRec14[1];
			float fRec15 = fTemp366;
			float fRec16 = fTemp369;
			float fTemp371 = mydsp_faustpower2_f(fTemp367) + -1.0f;
			float fTemp372 = fRec15 + 1.5f * (fRec16 * fTemp371 / fTemp367);
			float fTemp373 = std::exp(0.057564627f * (1.35422f * fTemp249 + 0.22165f * fTemp276 + 0.01302f * fTemp303 + 0.00069f * fTemp330 - (0.77469f * fTemp141 + 0.05398f * fTemp168 + 0.00309f * fTemp195 + 0.00013f * fTemp222)));
			float fTemp374 = fConst4 * (fConst4 + 1.5f / fTemp373) + 1.0f;
			float fTemp375 = (fRec9[1] + fConst4 * (fTemp372 - fRec10[1])) / fTemp374;
			fRec9[0] = 2.0f * fTemp375 - fRec9[1];
			float fTemp376 = fRec10[1] + fConst4 * fTemp375;
			fRec10[0] = 2.0f * fTemp376 - fRec10[1];
			float fRec11 = fTemp372;
			float fRec12 = fTemp375;
			float fTemp377 = mydsp_faustpower2_f(fTemp373) + -1.0f;
			float fTemp378 = fRec11 + 1.5f * (fRec12 * fTemp377 / fTemp373);
			fRec5[0] = fTemp378;
			float fTemp379 = (fRec216[1] + fConst11 * (fTemp34 - fRec217[1])) / fTemp332;
			fRec216[0] = 2.0f * fTemp379 - fRec216[1];
			float fTemp380 = fRec217[1] + fConst11 * fTemp379;
			fRec217[0] = 2.0f * fTemp380 - fRec217[1];
			float fRec218 = fTemp34;
			float fRec219 = fTemp379;
			float fTemp381 = fRec218 + 1.5f * (fRec219 * fTemp335 / fTemp331);
			float fTemp382 = (fRec212[1] + fConst10 * (fTemp381 - fRec213[1])) / fTemp338;
			fRec212[0] = 2.0f * fTemp382 - fRec212[1];
			float fTemp383 = fRec213[1] + fConst10 * fTemp382;
			fRec213[0] = 2.0f * fTemp383 - fRec213[1];
			float fRec214 = fTemp381;
			float fRec215 = fTemp382;
			float fTemp384 = fRec214 + 1.5f * (fRec215 * fTemp341 / fTemp337);
			float fTemp385 = (fRec208[1] + fConst9 * (fTemp384 - fRec209[1])) / fTemp344;
			fRec208[0] = 2.0f * fTemp385 - fRec208[1];
			float fTemp386 = fRec209[1] + fConst9 * fTemp385;
			fRec209[0] = 2.0f * fTemp386 - fRec209[1];
			float fRec210 = fTemp384;
			float fRec211 = fTemp385;
			float fTemp387 = fRec210 + 1.5f * (fRec211 * fTemp347 / fTemp343);
			float fTemp388 = (fRec204[1] + fConst8 * (fTemp387 - fRec205[1])) / fTemp350;
			fRec204[0] = 2.0f * fTemp388 - fRec204[1];
			float fTemp389 = fRec205[1] + fConst8 * fTemp388;
			fRec205[0] = 2.0f * fTemp389 - fRec205[1];
			float fRec206 = fTemp387;
			float fRec207 = fTemp388;
			float fTemp390 = fRec206 + 1.5f * (fRec207 * fTemp353 / fTemp349);
			float fTemp391 = (fRec200[1] + fConst7 * (fTemp390 - fRec201[1])) / fTemp356;
			fRec200[0] = 2.0f * fTemp391 - fRec200[1];
			float fTemp392 = fRec201[1] + fConst7 * fTemp391;
			fRec201[0] = 2.0f * fTemp392 - fRec201[1];
			float fRec202 = fTemp390;
			float fRec203 = fTemp391;
			float fTemp393 = fRec202 + 1.5f * (fRec203 * fTemp359 / fTemp355);
			float fTemp394 = (fRec196[1] + fConst6 * (fTemp393 - fRec197[1])) / fTemp362;
			fRec196[0] = 2.0f * fTemp394 - fRec196[1];
			float fTemp395 = fRec197[1] + fConst6 * fTemp394;
			fRec197[0] = 2.0f * fTemp395 - fRec197[1];
			float fRec198 = fTemp393;
			float fRec199 = fTemp394;
			float fTemp396 = fRec198 + 1.5f * (fRec199 * fTemp365 / fTemp361);
			float fTemp397 = (fRec192[1] + fConst5 * (fTemp396 - fRec193[1])) / fTemp368;
			fRec192[0] = 2.0f * fTemp397 - fRec192[1];
			float fTemp398 = fRec193[1] + fConst5 * fTemp397;
			fRec193[0] = 2.0f * fTemp398 - fRec193[1];
			float fRec194 = fTemp396;
			float fRec195 = fTemp397;
			float fTemp399 = fRec194 + 1.5f * (fRec195 * fTemp371 / fTemp367);
			float fTemp400 = (fRec188[1] + fConst4 * (fTemp399 - fRec189[1])) / fTemp374;
			fRec188[0] = 2.0f * fTemp400 - fRec188[1];
			float fTemp401 = fRec189[1] + fConst4 * fTemp400;
			fRec189[0] = 2.0f * fTemp401 - fRec189[1];
			float fRec190 = fTemp399;
			float fRec191 = fTemp400;
			float fTemp402 = fRec190 + 1.5f * (fRec191 * fTemp377 / fTemp373);
			fRec6[0] = fTemp402;
			fRec7[IOTA0 & 2047] = fTemp378;
			fRec8[IOTA0 & 2047] = fTemp402;
			float fTemp403 = std::fabs(std::max<float>(std::fabs(fRec7[IOTA0 & 2047]), std::fabs(fRec8[IOTA0 & 2047])));
			int iTemp404 = (fTemp403 >= fRec4[1]) | (static_cast<float>(iRec3[1]) >= fConst18);
			iRec3[0] = ((iTemp404) ? 0 : iRec3[1] + 1);
			fRec4[0] = ((iTemp404) ? fTemp403 : fRec4[1]);
			fRec2[0] = fConst3 * fRec4[0] + fConst2 * fRec2[1];
			float fTemp405 = std::fabs(fRec2[0]);
			fRec1[0] = std::max<float>(fTemp405, fConst135 * fRec1[1] + fConst136 * fTemp405);
			float fTemp406 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec1[0], 1.1920929e-07f));
			fVbargraph37 = static_cast<FAUSTFLOAT>(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp406))));
			float fTemp407 = fTemp406;
			float fTemp408 = fTemp407 * fRec7[(IOTA0 - iConst137) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp408))))));
			fVbargraph38 = static_cast<FAUSTFLOAT>(fRec0[0]);
			float fTemp409 = fTemp408;
			fVec114[0] = fTemp409;
			output0[i0] = static_cast<FAUSTFLOAT>(fTemp409);
			fVec115[0] = fConst32 * fRec222[1] - fConst34 * fVec114[1];
			fRec223[0] = fConst29 * (fConst31 * fVec114[1] - (fVec115[1] + fConst35 * fRec223[1]) + fConst36 * fTemp409);
			fRec222[0] = fRec223[0];
			fVec116[0] = 0.50032705f * fRec222[1] - fConst37 * fRec220[1];
			fRec221[0] = fConst25 * (fVec116[1] - fConst38 * fRec221[1] - 1.0006541f * fRec222[1] + 0.50032705f * fRec222[0]);
			fRec220[0] = fRec221[0];
			float fTemp410 = mydsp_faustpower2_f(fRec220[0]);
			fVec117[0] = fTemp410;
			float fTemp411 = fTemp410 + fVec117[1];
			fVec118[0] = fTemp411;
			float fTemp412 = fTemp411 + fVec118[2];
			fVec119[0] = fTemp412;
			float fTemp413 = fTemp412 + fVec119[4];
			fVec120[0] = fTemp413;
			float fTemp414 = fTemp413 + fVec120[8];
			fVec121[IOTA0 & 31] = fTemp414;
			float fTemp415 = fTemp414 + fVec121[(IOTA0 - 16) & 31];
			fVec122[IOTA0 & 63] = fTemp415;
			float fTemp416 = fTemp415 + fVec122[(IOTA0 - 32) & 63];
			fVec123[IOTA0 & 127] = fTemp416;
			float fTemp417 = fTemp416 + fVec123[(IOTA0 - 64) & 127];
			fVec124[IOTA0 & 255] = fTemp417;
			float fTemp418 = fTemp417 + fVec124[(IOTA0 - 128) & 255];
			fVec125[IOTA0 & 511] = fTemp418;
			float fTemp419 = fTemp418 + fVec125[(IOTA0 - 256) & 511];
			fVec126[IOTA0 & 1023] = fTemp419;
			float fTemp420 = fTemp419 + fVec126[(IOTA0 - 512) & 1023];
			fVec127[IOTA0 & 2047] = fTemp420;
			float fTemp421 = fTemp420 + fVec127[(IOTA0 - 1024) & 2047];
			fVec128[IOTA0 & 4095] = fTemp421;
			float fTemp422 = fTemp421 + fVec128[(IOTA0 - 2048) & 4095];
			fVec129[IOTA0 & 8191] = fTemp422;
			float fTemp423 = fTemp422 + fVec129[(IOTA0 - 4096) & 8191];
			fVec130[IOTA0 & 16383] = fTemp423;
			float fTemp424 = fTemp423 + fVec130[(IOTA0 - 8192) & 16383];
			fVec131[IOTA0 & 32767] = fTemp424;
			float fTemp425 = fTemp424 + fVec131[(IOTA0 - 16384) & 32767];
			fVec132[IOTA0 & 65535] = fTemp425;
			float fTemp426 = fTemp425 + fVec132[(IOTA0 - 32768) & 65535];
			fVec133[IOTA0 & 131071] = fTemp426;
			fVec134[IOTA0 & 262143] = fTemp426 + fVec133[(IOTA0 - 65536) & 131071];
			float fTemp427 = fTemp407 * fRec8[(IOTA0 - iConst137) & 2047];
			fRec228[0] = std::max<float>(fRec228[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp427))))));
			fVbargraph39 = static_cast<FAUSTFLOAT>(fRec228[0]);
			float fTemp428 = fTemp427;
			fVec135[0] = fTemp428;
			fVec136[0] = fConst32 * fRec226[1] - fConst34 * fVec135[1];
			fRec227[0] = fConst29 * (fConst31 * fVec135[1] - (fVec136[1] + fConst35 * fRec227[1]) + fConst36 * fTemp428);
			fRec226[0] = fRec227[0];
			fVec137[0] = 0.50032705f * fRec226[1] - fConst37 * fRec224[1];
			fRec225[0] = fConst25 * (fVec137[1] - fConst38 * fRec225[1] - 1.0006541f * fRec226[1] + 0.50032705f * fRec226[0]);
			fRec224[0] = fRec225[0];
			float fTemp429 = mydsp_faustpower2_f(fRec224[0]);
			fVec138[0] = fTemp429;
			float fTemp430 = fTemp429 + fVec138[1];
			fVec139[0] = fTemp430;
			float fTemp431 = fTemp430 + fVec139[2];
			fVec140[0] = fTemp431;
			float fTemp432 = fTemp431 + fVec140[4];
			fVec141[0] = fTemp432;
			float fTemp433 = fTemp432 + fVec141[8];
			fVec142[IOTA0 & 31] = fTemp433;
			float fTemp434 = fTemp433 + fVec142[(IOTA0 - 16) & 31];
			fVec143[IOTA0 & 63] = fTemp434;
			float fTemp435 = fTemp434 + fVec143[(IOTA0 - 32) & 63];
			fVec144[IOTA0 & 127] = fTemp435;
			float fTemp436 = fTemp435 + fVec144[(IOTA0 - 64) & 127];
			fVec145[IOTA0 & 255] = fTemp436;
			float fTemp437 = fTemp436 + fVec145[(IOTA0 - 128) & 255];
			fVec146[IOTA0 & 511] = fTemp437;
			float fTemp438 = fTemp437 + fVec146[(IOTA0 - 256) & 511];
			fVec147[IOTA0 & 1023] = fTemp438;
			float fTemp439 = fTemp438 + fVec147[(IOTA0 - 512) & 1023];
			fVec148[IOTA0 & 2047] = fTemp439;
			float fTemp440 = fTemp439 + fVec148[(IOTA0 - 1024) & 2047];
			fVec149[IOTA0 & 4095] = fTemp440;
			float fTemp441 = fTemp440 + fVec149[(IOTA0 - 2048) & 4095];
			fVec150[IOTA0 & 8191] = fTemp441;
			float fTemp442 = fTemp441 + fVec150[(IOTA0 - 4096) & 8191];
			fVec151[IOTA0 & 16383] = fTemp442;
			float fTemp443 = fTemp442 + fVec151[(IOTA0 - 8192) & 16383];
			fVec152[IOTA0 & 32767] = fTemp443;
			float fTemp444 = fTemp443 + fVec152[(IOTA0 - 16384) & 32767];
			fVec153[IOTA0 & 65535] = fTemp444;
			float fTemp445 = fTemp444 + fVec153[(IOTA0 - 32768) & 65535];
			fVec154[IOTA0 & 131071] = fTemp445;
			fVec155[IOTA0 & 262143] = fTemp445 + fVec154[(IOTA0 - 65536) & 131071];
			fVbargraph40 = static_cast<FAUSTFLOAT>(4.3429446f * std::log(std::max<float>(1e-12f, fConst139 * (((iConst140) ? 0.86000985f * fVec134[(IOTA0 - iConst173) & 262143] : 0.0f) + ((iConst172) ? 0.86000985f * fVec133[(IOTA0 - iConst171) & 131071] : 0.0f) + ((iConst170) ? 0.86000985f * fVec132[(IOTA0 - iConst169) & 65535] : 0.0f) + ((iConst168) ? 0.86000985f * fVec131[(IOTA0 - iConst167) & 32767] : 0.0f) + ((iConst166) ? 0.86000985f * fVec130[(IOTA0 - iConst165) & 16383] : 0.0f) + ((iConst164) ? 0.86000985f * fVec129[(IOTA0 - iConst163) & 8191] : 0.0f) + ((iConst162) ? 0.86000985f * fVec128[(IOTA0 - iConst161) & 4095] : 0.0f) + ((iConst160) ? 0.86000985f * fVec127[(IOTA0 - iConst159) & 2047] : 0.0f) + ((iConst158) ? 0.86000985f * fVec126[(IOTA0 - iConst157) & 1023] : 0.0f) + ((iConst156) ? 0.86000985f * fVec125[(IOTA0 - iConst155) & 511] : 0.0f) + ((iConst154) ? 0.86000985f * fVec124[(IOTA0 - iConst153) & 255] : 0.0f) + ((iConst152) ? 0.86000985f * fVec123[(IOTA0 - iConst151) & 127] : 0.0f) + ((iConst150) ? 0.86000985f * fVec122[(IOTA0 - iConst149) & 63] : 0.0f) + ((iConst148) ? 0.86000985f * fVec121[(IOTA0 - iConst147) & 31] : 0.0f) + ((iConst146) ? 0.86000985f * fVec120[iConst145] : 0.0f) + ((iConst144) ? 0.86000985f * fVec119[iConst143] : 0.0f) + ((iConst141) ? 0.86000985f * fTemp410 : 0.0f) + ((iConst142) ? 0.86000985f * fVec118[iConst141] : 0.0f) + ((iConst140) ? 0.86000985f * fVec155[(IOTA0 - iConst173) & 262143] : 0.0f) + ((iConst172) ? 0.86000985f * fVec154[(IOTA0 - iConst171) & 131071] : 0.0f) + ((iConst170) ? 0.86000985f * fVec153[(IOTA0 - iConst169) & 65535] : 0.0f) + ((iConst168) ? 0.86000985f * fVec152[(IOTA0 - iConst167) & 32767] : 0.0f) + ((iConst166) ? 0.86000985f * fVec151[(IOTA0 - iConst165) & 16383] : 0.0f) + ((iConst164) ? 0.86000985f * fVec150[(IOTA0 - iConst163) & 8191] : 0.0f) + ((iConst162) ? 0.86000985f * fVec149[(IOTA0 - iConst161) & 4095] : 0.0f) + ((iConst160) ? 0.86000985f * fVec148[(IOTA0 - iConst159) & 2047] : 0.0f) + ((iConst158) ? 0.86000985f * fVec147[(IOTA0 - iConst157) & 1023] : 0.0f) + ((iConst156) ? 0.86000985f * fVec146[(IOTA0 - iConst155) & 511] : 0.0f) + ((iConst154) ? 0.86000985f * fVec145[(IOTA0 - iConst153) & 255] : 0.0f) + ((iConst152) ? 0.86000985f * fVec144[(IOTA0 - iConst151) & 127] : 0.0f) + ((iConst150) ? 0.86000985f * fVec143[(IOTA0 - iConst149) & 63] : 0.0f) + ((iConst148) ? 0.86000985f * fVec142[(IOTA0 - iConst147) & 31] : 0.0f) + ((iConst146) ? 0.86000985f * fVec141[iConst145] : 0.0f) + ((iConst144) ? 0.86000985f * fVec140[iConst143] : 0.0f) + ((iConst141) ? 0.86000985f * fTemp429 : 0.0f) + ((iConst142) ? 0.86000985f * fVec139[iConst141] : 0.0f)))) + -0.691f);
			output1[i0] = static_cast<FAUSTFLOAT>(fTemp428);
			fRec43[1] = fRec43[0];
			fRec42[1] = fRec42[0];
			fVec0[1] = fVec0[0];
			fRec41[1] = fRec41[0];
			fRec52[1] = fRec52[0];
			fVec1[1] = fVec1[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fVec2[1] = fVec2[0];
			fRec54[1] = fRec54[0];
			fRec53[1] = fRec53[0];
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
			fVec12[1] = fVec12[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fVec13[1] = fVec13[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fVec14[1] = fVec14[0];
			fVec15[2] = fVec15[1];
			fVec15[1] = fVec15[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec16[j2] = fVec16[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec17[j3] = fVec17[j3 - 1];
			}
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec45[1] = fRec45[0];
			fRec44[1] = fRec44[0];
			fVec23[1] = fVec23[0];
			fVec24[1] = fVec24[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			fVec25[1] = fVec25[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fRec64[1] = fRec64[0];
			fRec63[1] = fRec63[0];
			fRec76[1] = fRec76[0];
			fVec26[1] = fVec26[0];
			fRec75[1] = fRec75[0];
			fVec27[1] = fVec27[0];
			fVec28[1] = fVec28[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fVec29[1] = fVec29[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			fRec69[1] = fRec69[0];
			fRec62[1] = fRec62[0];
			fRec80[1] = fRec80[0];
			fRec81[1] = fRec81[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fRec85[1] = fRec85[0];
			fRec86[1] = fRec86[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fRec94[1] = fRec94[0];
			fRec95[1] = fRec95[0];
			fRec96[1] = fRec96[0];
			fVec30[1] = fVec30[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fVec31[1] = fVec31[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fRec103[1] = fRec103[0];
			fRec104[1] = fRec104[0];
			fRec105[1] = fRec105[0];
			fVec32[1] = fVec32[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fVec33[1] = fVec33[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fRec108[1] = fRec108[0];
			fRec109[1] = fRec109[0];
			fRec107[1] = fRec107[0];
			fRec106[1] = fRec106[0];
			fRec113[1] = fRec113[0];
			fRec114[1] = fRec114[0];
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			fRec118[1] = fRec118[0];
			fRec119[1] = fRec119[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fRec123[1] = fRec123[0];
			fRec124[1] = fRec124[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			fRec128[1] = fRec128[0];
			fRec129[1] = fRec129[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fRec138[1] = fRec138[0];
			fRec139[1] = fRec139[0];
			fRec137[1] = fRec137[0];
			fRec136[1] = fRec136[0];
			fRec143[1] = fRec143[0];
			fRec144[1] = fRec144[0];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fRec147[1] = fRec147[0];
			fRec146[1] = fRec146[0];
			fRec153[1] = fRec153[0];
			fRec154[1] = fRec154[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fRec158[1] = fRec158[0];
			fRec159[1] = fRec159[0];
			fRec157[1] = fRec157[0];
			fRec156[1] = fRec156[0];
			fRec163[1] = fRec163[0];
			fRec164[1] = fRec164[0];
			fRec162[1] = fRec162[0];
			fRec161[1] = fRec161[0];
			fRec77[1] = fRec77[0];
			fVec34[1] = fVec34[0];
			fRec61[1] = fRec61[0];
			fVec35[2] = fVec35[1];
			fVec35[1] = fVec35[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec36[j4] = fVec36[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec37[j5] = fVec37[j5 - 1];
			}
			fRec166[1] = fRec166[0];
			fRec168[1] = fRec168[0];
			fVec44[1] = fVec44[0];
			fRec167[1] = fRec167[0];
			fVec45[2] = fVec45[1];
			fVec45[1] = fVec45[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec46[j6] = fVec46[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec47[j7] = fVec47[j7 - 1];
			}
			fRec169[1] = fRec169[0];
			fRec171[1] = fRec171[0];
			fVec54[1] = fVec54[0];
			fRec170[1] = fRec170[0];
			fVec55[2] = fVec55[1];
			fVec55[1] = fVec55[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec56[j8] = fVec56[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec57[j9] = fVec57[j9 - 1];
			}
			fRec172[1] = fRec172[0];
			fRec174[1] = fRec174[0];
			fVec64[1] = fVec64[0];
			fRec173[1] = fRec173[0];
			fVec65[2] = fVec65[1];
			fVec65[1] = fVec65[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec66[j10] = fVec66[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec67[j11] = fVec67[j11 - 1];
			}
			fRec175[1] = fRec175[0];
			fRec177[1] = fRec177[0];
			fVec74[1] = fVec74[0];
			fRec176[1] = fRec176[0];
			fVec75[2] = fVec75[1];
			fVec75[1] = fVec75[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec76[j12] = fVec76[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec77[j13] = fVec77[j13 - 1];
			}
			fRec178[1] = fRec178[0];
			fRec180[1] = fRec180[0];
			fVec84[1] = fVec84[0];
			fRec179[1] = fRec179[0];
			fVec85[2] = fVec85[1];
			fVec85[1] = fVec85[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec86[j14] = fVec86[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec87[j15] = fVec87[j15 - 1];
			}
			fRec181[1] = fRec181[0];
			fRec183[1] = fRec183[0];
			fVec94[1] = fVec94[0];
			fRec182[1] = fRec182[0];
			fVec95[2] = fVec95[1];
			fVec95[1] = fVec95[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec96[j16] = fVec96[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec97[j17] = fVec97[j17 - 1];
			}
			fRec184[1] = fRec184[0];
			fRec186[1] = fRec186[0];
			fVec104[1] = fVec104[0];
			fRec185[1] = fRec185[0];
			fVec105[2] = fVec105[1];
			fVec105[1] = fVec105[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec106[j18] = fVec106[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec107[j19] = fVec107[j19 - 1];
			}
			fRec187[1] = fRec187[0];
			fRec37[1] = fRec37[0];
			fRec38[1] = fRec38[0];
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fRec29[1] = fRec29[0];
			fRec30[1] = fRec30[0];
			fRec25[1] = fRec25[0];
			fRec26[1] = fRec26[0];
			fRec21[1] = fRec21[0];
			fRec22[1] = fRec22[0];
			fRec17[1] = fRec17[0];
			fRec18[1] = fRec18[0];
			fRec13[1] = fRec13[0];
			fRec14[1] = fRec14[0];
			fRec9[1] = fRec9[0];
			fRec10[1] = fRec10[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
			fRec212[1] = fRec212[0];
			fRec213[1] = fRec213[0];
			fRec208[1] = fRec208[0];
			fRec209[1] = fRec209[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fRec200[1] = fRec200[0];
			fRec201[1] = fRec201[0];
			fRec196[1] = fRec196[0];
			fRec197[1] = fRec197[0];
			fRec192[1] = fRec192[0];
			fRec193[1] = fRec193[0];
			fRec188[1] = fRec188[0];
			fRec189[1] = fRec189[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			iRec3[1] = iRec3[0];
			fRec4[1] = fRec4[0];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fVec114[1] = fVec114[0];
			fVec115[1] = fVec115[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			fVec116[1] = fVec116[0];
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			fVec117[1] = fVec117[0];
			fVec118[2] = fVec118[1];
			fVec118[1] = fVec118[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec119[j20] = fVec119[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec120[j21] = fVec120[j21 - 1];
			}
			fRec228[1] = fRec228[0];
			fVec135[1] = fVec135[0];
			fVec136[1] = fVec136[0];
			fRec227[1] = fRec227[0];
			fRec226[1] = fRec226[0];
			fVec137[1] = fVec137[0];
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			fVec138[1] = fVec138[0];
			fVec139[2] = fVec139[1];
			fVec139[1] = fVec139[0];
			for (int j22 = 4; j22 > 0; j22 = j22 - 1) {
				fVec140[j22] = fVec140[j22 - 1];
			}
			for (int j23 = 11; j23 > 0; j23 = j23 - 1) {
				fVec141[j23] = fVec141[j23 - 1];
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
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph31 = 0;
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph34 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph37 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph40 = 0;
        dsp->fVbargraph38 = 0;
        dsp->fVbargraph39 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph33 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph36 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph32 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph35 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph1 = 0;
        
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
        case kParameter_voice_isolation_intensity:
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
        case kParameter_pre_gain:
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
        case kParameter_sbmb_strength:
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
        case kParameter_vad_ext:
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
        case kParameter_leveler_target:
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
        case kParameter_leveler_scale:
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
        case kParameter_mb_exp_strength:
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
        case kParameter_mb_strength:
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
        case kParameter_mb_exp_thresh:
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
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[10];
            param.unit = kParameterUnits[10];
            param.symbol = kParameterSymbols[10];
            param.shortName = "";
            param.ranges.def = kParameterRanges[10].def;
            param.ranges.min = kParameterRanges[10].min;
            param.ranges.max = kParameterRanges[10].max;
            break;
        case kParameter_vad_gate_thresh:
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
        case kParameter_vad_smoothing_time:
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
        
        case kParameter_sb_meter__0:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[13];
            param.unit = kParameterUnits[13];
            param.symbol = kParameterSymbols[13];
            param.shortName = "";
            param.ranges.def = kParameterRanges[13].def;
            param.ranges.min = kParameterRanges[13].min;
            param.ranges.max = kParameterRanges[13].max;
            break;
        case kParameter_sb_meter__1:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[14];
            param.unit = kParameterUnits[14];
            param.symbol = kParameterSymbols[14];
            param.shortName = "";
            param.ranges.def = kParameterRanges[14].def;
            param.ranges.min = kParameterRanges[14].min;
            param.ranges.max = kParameterRanges[14].max;
            break;
        case kParameter_sb_meter__2:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[15];
            param.unit = kParameterUnits[15];
            param.symbol = kParameterSymbols[15];
            param.shortName = "";
            param.ranges.def = kParameterRanges[15].def;
            param.ranges.min = kParameterRanges[15].min;
            param.ranges.max = kParameterRanges[15].max;
            break;
        case kParameter_sb_meter__3:
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
        case kParameter_sb_meter__4:
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
        case kParameter_sb_meter__5:
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
        case kParameter_sb_meter__6:
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
        case kParameter_sb_meter__7:
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
        case kParameter_sb_gain__0:
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
        case kParameter_sb_gain__1:
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
        case kParameter_sb_gain__2:
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
        case kParameter_sb_gain__3:
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
        case kParameter_sb_gain__4:
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
        case kParameter_sb_gain__5:
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
        case kParameter_sb_gain__6:
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
        case kParameter_sb_gain__7:
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
        case kParameter_limiter_gain:
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
        case kParameter_input_peak_channel_0:
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
        case kParameter_input_peak_channel_1:
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
        case kParameter_lufs_out_meter:
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
        case kParameter_output_peak_channel_0:
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
        case kParameter_output_peak_channel_1:
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
        case kParameter_vad_meter:
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
        case kParameter_leveler_gain:
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
        case kParameter_mb_exp_meter0:
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
        case kParameter_mb_exp_meter1:
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
        case kParameter_mb_exp_meter2:
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
        case kParameter_mb_exp_meter3:
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
        case kParameter_mb_exp_meter4:
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
        case kParameter_mb_exp_meter5:
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
        case kParameter_mb_exp_meter6:
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
        case kParameter_mb_exp_meter7:
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
        case kParameter_mb_comp_gain_0:
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
        case kParameter_mb_comp_gain_1:
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
        case kParameter_mb_comp_gain_2:
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
        case kParameter_mb_comp_gain_3:
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
        case kParameter_mb_comp_gain_4:
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
        case kParameter_mb_comp_gain_5:
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
        case kParameter_mb_comp_gain_6:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[51];
            param.unit = kParameterUnits[51];
            param.symbol = kParameterSymbols[51];
            param.shortName = "";
            param.ranges.def = kParameterRanges[51].def;
            param.ranges.min = kParameterRanges[51].min;
            param.ranges.max = kParameterRanges[51].max;
            break;
        case kParameter_mb_comp_gain_7:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[52];
            param.unit = kParameterUnits[52];
            param.symbol = kParameterSymbols[52];
            param.shortName = "";
            param.ranges.def = kParameterRanges[52].def;
            param.ranges.min = kParameterRanges[52].min;
            param.ranges.max = kParameterRanges[52].max;
            break;
        case kParameter_vad_smoothing_meter:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[53];
            param.unit = kParameterUnits[53];
            param.symbol = kParameterSymbols[53];
            param.shortName = "";
            param.ranges.def = kParameterRanges[53].def;
            param.ranges.min = kParameterRanges[53].min;
            param.ranges.max = kParameterRanges[53].max;
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
        case kParameter_voice_isolation_intensity:
            return dsp->fVslider11;
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
        case kParameter_mb_exp_strength:
            return dsp->fVslider10;
        case kParameter_mb_strength:
            return dsp->fVslider8;
        case kParameter_mb_exp_thresh:
            return dsp->fVslider12;
        case kParameter_pre_lowcut:
            return dsp->fVslider0;
        case kParameter_vad_gate_thresh:
            return dsp->fVslider5;
        case kParameter_vad_smoothing_time:
            return dsp->fVslider4;
        case kParameter_sb_meter__0:
            return dsp->fVbargraph6;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph5;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph7;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph8;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph9;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph10;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph11;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph12;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph25;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph13;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph28;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph16;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph31;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph19;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph34;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph22;
        case kParameter_limiter_gain:
            return dsp->fVbargraph37;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph0;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph4;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph40;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph38;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph39;
        case kParameter_vad_meter:
            return dsp->fVbargraph2;
        case kParameter_leveler_gain:
            return dsp->fVbargraph3;
        case kParameter_mb_exp_meter0:
            return dsp->fVbargraph27;
        case kParameter_mb_exp_meter1:
            return dsp->fVbargraph15;
        case kParameter_mb_exp_meter2:
            return dsp->fVbargraph30;
        case kParameter_mb_exp_meter3:
            return dsp->fVbargraph18;
        case kParameter_mb_exp_meter4:
            return dsp->fVbargraph33;
        case kParameter_mb_exp_meter5:
            return dsp->fVbargraph21;
        case kParameter_mb_exp_meter6:
            return dsp->fVbargraph36;
        case kParameter_mb_exp_meter7:
            return dsp->fVbargraph24;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph26;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph14;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph29;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph17;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph32;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph20;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph35;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph23;
        case kParameter_vad_smoothing_meter:
            return dsp->fVbargraph1;
        
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
        case kParameter_voice_isolation_intensity:
            dsp->fVslider11 = value;
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
        case kParameter_mb_exp_strength:
            dsp->fVslider10 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider8 = value;
            break;
        case kParameter_mb_exp_thresh:
            dsp->fVslider12 = value;
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
        float params[13] = {
            dsp->fVslider9,
            dsp->fVslider11,
            dsp->fVslider1,
            dsp->fVslider7,
            dsp->fVslider3,
            dsp->fVslider6,
            dsp->fVslider2,
            dsp->fVslider10,
            dsp->fVslider8,
            dsp->fVslider12,
            dsp->fVslider0,
            dsp->fVslider5,
            dsp->fVslider4,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider9 = params[0];
        dsp->fVslider11 = params[1];
        dsp->fVslider1 = params[2];
        dsp->fVslider7 = params[3];
        dsp->fVslider3 = params[4];
        dsp->fVslider6 = params[5];
        dsp->fVslider2 = params[6];
        dsp->fVslider10 = params[7];
        dsp->fVslider8 = params[8];
        dsp->fVslider12 = params[9];
        dsp->fVslider0 = params[10];
        dsp->fVslider5 = params[11];
        dsp->fVslider4 = params[12];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
