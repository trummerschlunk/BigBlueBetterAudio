
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
	float fRec41[2];
	float fRec40[2];
	FAUSTFLOAT fVbargraph0;
	float fRec42[2];
	FAUSTFLOAT fVbargraph1;
	float fVec0[2];
	float fRec39[2];
	FAUSTFLOAT fVslider2;
	float fConst15;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst16;
	float fRec51[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVbargraph3;
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
	float fRec55[2];
	float fRec54[2];
	float fConst37;
	float fVec2[2];
	float fConst38;
	float fRec53[2];
	float fRec52[2];
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
	float fRec46[2];
	float fRec47[2];
	float fRec44[2];
	FAUSTFLOAT fVbargraph4;
	float fRec43[2];
	float fVec12[2];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	float fConst54;
	float fConst55;
	float fVec13[2];
	float fRec63[2];
	float fRec62[2];
	float fVec14[2];
	float fRec61[2];
	float fRec60[2];
	float fConst56;
	float fConst57;
	float fRec59[2];
	float fRec58[2];
	float fRec57[2];
	float fConst58;
	float fConst59;
	FAUSTFLOAT fVslider9;
	float fConst60;
	float fConst61;
	float fRec67[2];
	float fConst62;
	float fRec68[2];
	float fConst63;
	float fRec66[2];
	float fRec65[2];
	FAUSTFLOAT fVbargraph5;
	float fConst64;
	float fConst65;
	float fConst66;
	float fRec76[2];
	float fConst67;
	float fRec77[2];
	float fConst68;
	float fRec78[2];
	float fVec15[2];
	float fConst69;
	float fConst70;
	float fRec75[2];
	float fRec74[2];
	float fVec16[2];
	float fRec73[2];
	float fRec72[2];
	float fRec71[2];
	float fRec70[2];
	FAUSTFLOAT fVbargraph6;
	float fConst71;
	float fConst72;
	float fRec81[2];
	float fConst73;
	float fRec82[2];
	float fConst74;
	float fRec80[2];
	float fRec79[2];
	FAUSTFLOAT fVbargraph7;
	float fConst75;
	float fConst76;
	float fRec86[2];
	float fConst77;
	float fRec87[2];
	float fConst78;
	float fRec85[2];
	float fRec84[2];
	FAUSTFLOAT fVbargraph8;
	float fConst79;
	float fConst80;
	float fRec91[2];
	float fConst81;
	float fRec92[2];
	float fConst82;
	float fRec90[2];
	float fRec89[2];
	FAUSTFLOAT fVbargraph9;
	float fConst83;
	float fConst84;
	float fRec96[2];
	float fConst85;
	float fRec97[2];
	float fConst86;
	float fRec95[2];
	float fRec94[2];
	FAUSTFLOAT fVbargraph10;
	float fConst87;
	float fConst88;
	float fRec101[2];
	float fConst89;
	float fRec102[2];
	float fConst90;
	float fRec100[2];
	float fRec99[2];
	FAUSTFLOAT fVbargraph11;
	float fConst91;
	float fConst92;
	float fRec106[2];
	float fConst93;
	float fRec107[2];
	float fConst94;
	float fRec105[2];
	float fRec104[2];
	FAUSTFLOAT fVbargraph12;
	float fRec64[2];
	FAUSTFLOAT fVbargraph13;
	float fVec17[2];
	float fConst95;
	float fConst96;
	float fRec56[2];
	FAUSTFLOAT fVbargraph14;
	FAUSTFLOAT fVslider10;
	FAUSTFLOAT fVslider11;
	int iConst97;
	int iConst98;
	float fVec18[3];
	int iConst99;
	float fVec19[5];
	int iConst100;
	int iConst101;
	float fVec20[12];
	int iConst102;
	int iConst103;
	float fVec21[32];
	int iConst104;
	int iConst105;
	float fVec22[64];
	int iConst106;
	int iConst107;
	float fVec23[128];
	int iConst108;
	int iConst109;
	float fVec24[256];
	int iConst110;
	int iConst111;
	float fVec25[512];
	int iConst112;
	int iConst113;
	float fVec26[512];
	int iConst114;
	FAUSTFLOAT fVslider12;
	float fRec109[2];
	FAUSTFLOAT fVbargraph15;
	float fConst115;
	float fConst116;
	float fRec111[2];
	FAUSTFLOAT fVbargraph16;
	float fVec27[2];
	float fConst117;
	float fConst118;
	float fRec110[2];
	FAUSTFLOAT fVbargraph17;
	float fVec28[3];
	float fVec29[5];
	float fVec30[12];
	float fVec31[32];
	float fVec32[64];
	float fVec33[128];
	float fVec34[256];
	float fVec35[512];
	float fVec36[512];
	float fRec112[2];
	FAUSTFLOAT fVbargraph18;
	float fConst119;
	float fConst120;
	float fRec114[2];
	FAUSTFLOAT fVbargraph19;
	float fVec37[2];
	float fConst121;
	float fRec113[2];
	FAUSTFLOAT fVbargraph20;
	float fVec38[3];
	float fVec39[5];
	float fVec40[12];
	float fVec41[32];
	float fVec42[64];
	float fVec43[128];
	float fVec44[256];
	float fVec45[512];
	float fVec46[512];
	float fRec115[2];
	FAUSTFLOAT fVbargraph21;
	float fConst122;
	float fRec117[2];
	FAUSTFLOAT fVbargraph22;
	float fVec47[2];
	float fConst123;
	float fRec116[2];
	FAUSTFLOAT fVbargraph23;
	float fVec48[3];
	float fVec49[5];
	float fVec50[12];
	float fVec51[32];
	float fVec52[64];
	float fVec53[128];
	float fVec54[256];
	float fVec55[512];
	float fVec56[512];
	float fRec118[2];
	FAUSTFLOAT fVbargraph24;
	float fConst124;
	float fConst125;
	float fRec120[2];
	FAUSTFLOAT fVbargraph25;
	float fVec57[2];
	float fConst126;
	float fRec119[2];
	FAUSTFLOAT fVbargraph26;
	float fVec58[3];
	float fVec59[5];
	float fVec60[12];
	float fVec61[32];
	float fVec62[64];
	float fVec63[128];
	float fVec64[256];
	float fVec65[512];
	float fVec66[512];
	float fRec121[2];
	FAUSTFLOAT fVbargraph27;
	float fConst127;
	float fConst128;
	float fRec123[2];
	FAUSTFLOAT fVbargraph28;
	float fVec67[2];
	float fConst129;
	float fConst130;
	float fRec122[2];
	FAUSTFLOAT fVbargraph29;
	float fVec68[3];
	float fVec69[5];
	float fVec70[12];
	float fVec71[32];
	float fVec72[64];
	float fVec73[128];
	float fVec74[256];
	float fVec75[512];
	float fVec76[512];
	float fRec124[2];
	FAUSTFLOAT fVbargraph30;
	float fConst131;
	float fRec126[2];
	FAUSTFLOAT fVbargraph31;
	float fVec77[2];
	float fRec125[2];
	FAUSTFLOAT fVbargraph32;
	float fVec78[3];
	float fVec79[5];
	float fVec80[12];
	float fVec81[32];
	float fVec82[64];
	float fVec83[128];
	float fVec84[256];
	float fVec85[512];
	float fVec86[512];
	float fRec127[2];
	FAUSTFLOAT fVbargraph33;
	float fConst132;
	float fConst133;
	float fRec129[2];
	FAUSTFLOAT fVbargraph34;
	float fVec87[2];
	float fConst134;
	float fRec128[2];
	FAUSTFLOAT fVbargraph35;
	float fVec88[3];
	float fVec89[5];
	float fVec90[12];
	float fVec91[32];
	float fVec92[64];
	float fVec93[128];
	float fVec94[256];
	float fVec95[512];
	float fVec96[512];
	float fRec130[2];
	FAUSTFLOAT fVbargraph36;
	float fRec35[2];
	float fRec36[2];
	float fRec31[2];
	float fRec32[2];
	float fRec27[2];
	float fRec28[2];
	float fRec23[2];
	float fRec24[2];
	float fRec19[2];
	float fRec20[2];
	float fRec15[2];
	float fRec16[2];
	float fRec11[2];
	float fRec12[2];
	float fRec7[2];
	float fRec8[2];
	float fRec5[3];
	float fRec6[2048];
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
	float fVec97[2];
	float fConst138;
	float fConst139;
	int iConst140;
	float fVec98[2];
	float fRec134[2];
	float fRec133[2];
	float fVec99[2];
	float fRec132[2];
	float fRec131[2];
	float fVec100[2];
	float fVec101[3];
	float fVec102[5];
	float fVec103[12];
	float fVec104[32];
	float fVec105[64];
	float fVec106[128];
	float fVec107[256];
	float fVec108[512];
	float fVec109[1024];
	float fVec110[2048];
	float fVec111[4096];
	float fVec112[8192];
	float fVec113[16384];
	float fVec114[32768];
	float fVec115[65536];
	float fVec116[131072];
	float fVec117[262144];
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
	FAUSTFLOAT fVbargraph39;
	float fVec118[2];
	float fVec119[2];
	float fRec138[2];
	float fRec137[2];
	float fVec120[2];
	float fRec136[2];
	float fRec135[2];
	float fVec121[2];
	float fVec122[3];
	float fVec123[5];
	float fVec124[12];
	float fVec125[32];
	float fVec126[64];
	float fVec127[128];
	float fVec128[256];
	float fVec129[512];
	float fVec130[1024];
	float fVec131[2048];
	float fVec132[4096];
	float fVec133[8192];
	float fVec134[16384];
	float fVec135[32768];
	float fVec136[65536];
	float fVec137[131072];
	float fVec138[262144];
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
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/26522-md.cpp -lang cpp -fpga-mem-th 4 -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
			fRec41[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec40[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec42[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec0[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec39[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec51[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fVec1[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec55[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec54[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fVec2[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec53[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec52[l11] = 0.0f;
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
			fRec46[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec47[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec44[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec43[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec12[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fVec13[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec63[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec62[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fVec14[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec61[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec60[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec59[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec58[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec57[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec67[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec68[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec66[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec65[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec76[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec77[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec78[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fVec15[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec75[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec74[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec16[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec73[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec72[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec71[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec70[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec81[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec82[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec80[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec79[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec86[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec87[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec85[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec84[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec91[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec92[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec90[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec89[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec96[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec97[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec95[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec94[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec101[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec102[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec100[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec99[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec106[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec107[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec105[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec104[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec64[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fVec17[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec56[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 3; l77 = l77 + 1) {
			fVec18[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 5; l78 = l78 + 1) {
			fVec19[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 12; l79 = l79 + 1) {
			fVec20[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 32; l80 = l80 + 1) {
			fVec21[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 64; l81 = l81 + 1) {
			fVec22[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 128; l82 = l82 + 1) {
			fVec23[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 256; l83 = l83 + 1) {
			fVec24[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 512; l84 = l84 + 1) {
			fVec25[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 512; l85 = l85 + 1) {
			fVec26[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec109[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec111[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec27[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec110[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 3; l90 = l90 + 1) {
			fVec28[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 5; l91 = l91 + 1) {
			fVec29[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 12; l92 = l92 + 1) {
			fVec30[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 32; l93 = l93 + 1) {
			fVec31[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 64; l94 = l94 + 1) {
			fVec32[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 128; l95 = l95 + 1) {
			fVec33[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 256; l96 = l96 + 1) {
			fVec34[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 512; l97 = l97 + 1) {
			fVec35[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 512; l98 = l98 + 1) {
			fVec36[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec112[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec114[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fVec37[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec113[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 3; l103 = l103 + 1) {
			fVec38[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 5; l104 = l104 + 1) {
			fVec39[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 12; l105 = l105 + 1) {
			fVec40[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 32; l106 = l106 + 1) {
			fVec41[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 64; l107 = l107 + 1) {
			fVec42[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 128; l108 = l108 + 1) {
			fVec43[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 256; l109 = l109 + 1) {
			fVec44[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 512; l110 = l110 + 1) {
			fVec45[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 512; l111 = l111 + 1) {
			fVec46[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec115[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec117[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fVec47[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec116[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 3; l116 = l116 + 1) {
			fVec48[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 5; l117 = l117 + 1) {
			fVec49[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 12; l118 = l118 + 1) {
			fVec50[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 32; l119 = l119 + 1) {
			fVec51[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 64; l120 = l120 + 1) {
			fVec52[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 128; l121 = l121 + 1) {
			fVec53[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 256; l122 = l122 + 1) {
			fVec54[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 512; l123 = l123 + 1) {
			fVec55[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 512; l124 = l124 + 1) {
			fVec56[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec118[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec120[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec57[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec119[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 3; l129 = l129 + 1) {
			fVec58[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 5; l130 = l130 + 1) {
			fVec59[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 12; l131 = l131 + 1) {
			fVec60[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 32; l132 = l132 + 1) {
			fVec61[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 64; l133 = l133 + 1) {
			fVec62[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 128; l134 = l134 + 1) {
			fVec63[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 256; l135 = l135 + 1) {
			fVec64[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 512; l136 = l136 + 1) {
			fVec65[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 512; l137 = l137 + 1) {
			fVec66[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec121[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec123[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fVec67[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec122[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 3; l142 = l142 + 1) {
			fVec68[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 5; l143 = l143 + 1) {
			fVec69[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 12; l144 = l144 + 1) {
			fVec70[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 32; l145 = l145 + 1) {
			fVec71[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 64; l146 = l146 + 1) {
			fVec72[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 128; l147 = l147 + 1) {
			fVec73[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 256; l148 = l148 + 1) {
			fVec74[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 512; l149 = l149 + 1) {
			fVec75[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 512; l150 = l150 + 1) {
			fVec76[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec124[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec126[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec77[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec125[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 3; l155 = l155 + 1) {
			fVec78[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 5; l156 = l156 + 1) {
			fVec79[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 12; l157 = l157 + 1) {
			fVec80[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 32; l158 = l158 + 1) {
			fVec81[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 64; l159 = l159 + 1) {
			fVec82[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 128; l160 = l160 + 1) {
			fVec83[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 256; l161 = l161 + 1) {
			fVec84[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 512; l162 = l162 + 1) {
			fVec85[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 512; l163 = l163 + 1) {
			fVec86[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec127[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec129[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec87[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec128[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 3; l168 = l168 + 1) {
			fVec88[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 5; l169 = l169 + 1) {
			fVec89[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 12; l170 = l170 + 1) {
			fVec90[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 32; l171 = l171 + 1) {
			fVec91[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 64; l172 = l172 + 1) {
			fVec92[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 128; l173 = l173 + 1) {
			fVec93[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 256; l174 = l174 + 1) {
			fVec94[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 512; l175 = l175 + 1) {
			fVec95[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 512; l176 = l176 + 1) {
			fVec96[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec130[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec35[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec36[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec31[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec32[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec27[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec28[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec23[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec24[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec19[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec20[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec15[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec16[l189] = 0.0f;
		}
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec11[l190] = 0.0f;
		}
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec12[l191] = 0.0f;
		}
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec7[l192] = 0.0f;
		}
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec8[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 3; l194 = l194 + 1) {
			fRec5[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2048; l195 = l195 + 1) {
			fRec6[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			iRec3[l196] = 0;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec4[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec2[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fRec1[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec0[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fVec97[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fVec98[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec134[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec133[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fVec99[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec132[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec131[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fVec100[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 3; l209 = l209 + 1) {
			fVec101[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 5; l210 = l210 + 1) {
			fVec102[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 12; l211 = l211 + 1) {
			fVec103[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 32; l212 = l212 + 1) {
			fVec104[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 64; l213 = l213 + 1) {
			fVec105[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 128; l214 = l214 + 1) {
			fVec106[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 256; l215 = l215 + 1) {
			fVec107[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 512; l216 = l216 + 1) {
			fVec108[l216] = 0.0f;
		}
		for (int l217 = 0; l217 < 1024; l217 = l217 + 1) {
			fVec109[l217] = 0.0f;
		}
		for (int l218 = 0; l218 < 2048; l218 = l218 + 1) {
			fVec110[l218] = 0.0f;
		}
		for (int l219 = 0; l219 < 4096; l219 = l219 + 1) {
			fVec111[l219] = 0.0f;
		}
		for (int l220 = 0; l220 < 8192; l220 = l220 + 1) {
			fVec112[l220] = 0.0f;
		}
		for (int l221 = 0; l221 < 16384; l221 = l221 + 1) {
			fVec113[l221] = 0.0f;
		}
		for (int l222 = 0; l222 < 32768; l222 = l222 + 1) {
			fVec114[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 65536; l223 = l223 + 1) {
			fVec115[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 131072; l224 = l224 + 1) {
			fVec116[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 262144; l225 = l225 + 1) {
			fVec117[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fVec118[l226] = 0.0f;
		}
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fVec119[l227] = 0.0f;
		}
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec138[l228] = 0.0f;
		}
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec137[l229] = 0.0f;
		}
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fVec120[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec136[l231] = 0.0f;
		}
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec135[l232] = 0.0f;
		}
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fVec121[l233] = 0.0f;
		}
		for (int l234 = 0; l234 < 3; l234 = l234 + 1) {
			fVec122[l234] = 0.0f;
		}
		for (int l235 = 0; l235 < 5; l235 = l235 + 1) {
			fVec123[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 12; l236 = l236 + 1) {
			fVec124[l236] = 0.0f;
		}
		for (int l237 = 0; l237 < 32; l237 = l237 + 1) {
			fVec125[l237] = 0.0f;
		}
		for (int l238 = 0; l238 < 64; l238 = l238 + 1) {
			fVec126[l238] = 0.0f;
		}
		for (int l239 = 0; l239 < 128; l239 = l239 + 1) {
			fVec127[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 256; l240 = l240 + 1) {
			fVec128[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 512; l241 = l241 + 1) {
			fVec129[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 1024; l242 = l242 + 1) {
			fVec130[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2048; l243 = l243 + 1) {
			fVec131[l243] = 0.0f;
		}
		for (int l244 = 0; l244 < 4096; l244 = l244 + 1) {
			fVec132[l244] = 0.0f;
		}
		for (int l245 = 0; l245 < 8192; l245 = l245 + 1) {
			fVec133[l245] = 0.0f;
		}
		for (int l246 = 0; l246 < 16384; l246 = l246 + 1) {
			fVec134[l246] = 0.0f;
		}
		for (int l247 = 0; l247 < 32768; l247 = l247 + 1) {
			fVec135[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 65536; l248 = l248 + 1) {
			fVec136[l248] = 0.0f;
		}
		for (int l249 = 0; l249 < 131072; l249 = l249 + 1) {
			fVec137[l249] = 0.0f;
		}
		for (int l250 = 0; l250 < 262144; l250 = l250 + 1) {
			fVec138[l250] = 0.0f;
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
		ui_interface->declare(&fVbargraph1, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph1, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph40, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph40, "unit", "LUFS");
		ui_interface->addVerticalBargraph("lufs_out", &fVbargraph40, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph38, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph38, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph39, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph39, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
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
		ui_interface->declare(&fVbargraph2, "symbol", "vad_smoothing_meter");
		ui_interface->addVerticalBargraph("vad_smoo", &fVbargraph2, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
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
		float fSlow0 = std::tan(fConst12 * static_cast<float>(fVslider0));
		float fSlow1 = 1.0f / fSlow0;
		float fSlow2 = 1.0f / (fSlow1 + 1.0f);
		float fSlow3 = 0.5f / fSlow0;
		float fSlow4 = fConst13 * std::pow(1e+01f, 0.05f * static_cast<float>(fVslider1));
		float fSlow5 = 1.0f - fSlow1;
		float fSlow6 = static_cast<float>(fVslider2);
		float fSlow7 = static_cast<float>(fVslider3);
		float fSlow8 = 0.001f * static_cast<float>(fVslider4);
		int iSlow9 = std::fabs(fSlow8) < 1.1920929e-07f;
		float fSlow10 = ((iSlow9) ? 0.0f : std::exp(-(fConst16 / ((iSlow9) ? 1.0f : fSlow8))));
		float fSlow11 = fSlow7 * (1.0f - fSlow10);
		float fSlow12 = static_cast<float>(fVslider5);
		float fSlow13 = static_cast<float>(fVslider6);
		float fSlow14 = static_cast<float>(fVslider7);
		float fSlow15 = 0.0001f * fSlow14 * static_cast<float>(fVslider8);
		float fSlow16 = fSlow7 * fSlow14 * static_cast<float>(fVslider9);
		float fSlow17 = fConst59 * fSlow16;
		float fSlow18 = fSlow13 + -6.5f;
		float fSlow19 = fSlow13 + -5.5f;
		float fSlow20 = 7.5e-05f * static_cast<float>(fVslider10) * fSlow14 * (1.0f - static_cast<float>(fVslider11));
		float fSlow21 = fSlow13 + static_cast<float>(fVslider12);
		float fSlow22 = fSlow21 + -15.0f;
		float fSlow23 = fSlow21 + -9.0f;
		float fSlow24 = fConst116 * fSlow16;
		float fSlow25 = fSlow13 + -8.5f;
		float fSlow26 = fSlow13 + -7.5f;
		float fSlow27 = fConst120 * fSlow16;
		float fSlow28 = fSlow13 + -12.5f;
		float fSlow29 = fSlow13 + -11.5f;
		float fSlow30 = fSlow21 + -16.0f;
		float fSlow31 = fSlow21 + -1e+01f;
		float fSlow32 = fConst122 * fSlow16;
		float fSlow33 = fSlow13 + -13.5f;
		float fSlow34 = fSlow21 + -18.0f;
		float fSlow35 = fSlow21 + -12.0f;
		float fSlow36 = fConst125 * fSlow16;
		float fSlow37 = fConst128 * fSlow16;
		float fSlow38 = fConst131 * fSlow16;
		float fSlow39 = fSlow13 + -10.5f;
		float fSlow40 = fConst133 * fSlow16;
		float fSlow41 = fSlow21 + -17.0f;
		float fSlow42 = fSlow21 + -11.0f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec41[0] = fSlow4 + fConst14 * fRec41[1];
			float fTemp0 = static_cast<float>(input0[i0]) * fRec41[0];
			fRec40[0] = std::max<float>(fRec40[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp0))))));
			fVbargraph0 = static_cast<FAUSTFLOAT>(fRec40[0]);
			float fTemp1 = static_cast<float>(input1[i0]) * fRec41[0];
			fRec42[0] = std::max<float>(fRec42[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp1))))));
			fVbargraph1 = static_cast<FAUSTFLOAT>(fRec42[0]);
			float fTemp2 = fTemp0 + fTemp1;
			fVec0[0] = fTemp2;
			fRec39[0] = fSlow2 * (fSlow3 * (fTemp2 - fVec0[1]) - fSlow5 * fRec39[1]);
			fRec51[0] = fSlow11 + fSlow10 * fRec51[1];
			fVbargraph2 = static_cast<FAUSTFLOAT>(fRec51[0]);
			float fTemp3 = fRec51[0];
			float fTemp4 = fTemp3 * static_cast<float>(fTemp3 > fSlow12);
			fVbargraph3 = static_cast<FAUSTFLOAT>(fTemp4);
			float fTemp5 = fTemp4;
			float fTemp6 = std::tan(fConst12 * std::min<float>(fConst15, fTemp5 * (fConst17 * std::fabs(fRec44[1]) + 0.1316f)));
			fVec1[0] = fConst32 * fRec54[1] - fConst34 * fRec5[2];
			fRec55[0] = fConst29 * (fConst31 * fRec5[2] - (fVec1[1] + fConst35 * fRec55[1]) + fConst36 * fRec5[1]);
			fRec54[0] = fRec55[0];
			fVec2[0] = 0.50032705f * fRec54[1] - fConst37 * fRec52[1];
			fRec53[0] = fConst25 * (fVec2[1] - fConst38 * fRec53[1] - 1.0006541f * fRec54[1] + 0.50032705f * fRec54[0]);
			fRec52[0] = fRec53[0];
			float fTemp7 = mydsp_faustpower2_f(fRec52[0]);
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
			float fTemp16 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow13 + fRec43[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst20 * (((iConst21) ? 0.86000985f * fVec11[(IOTA0 - iConst53) & 511] : 0.0f) + ((iConst52) ? 0.86000985f * fVec10[(IOTA0 - iConst51) & 255] : 0.0f) + ((iConst50) ? 0.86000985f * fVec9[(IOTA0 - iConst49) & 127] : 0.0f) + ((iConst48) ? 0.86000985f * fVec8[(IOTA0 - iConst47) & 63] : 0.0f) + ((iConst46) ? 0.86000985f * fVec7[(IOTA0 - iConst45) & 31] : 0.0f) + ((iConst44) ? 0.86000985f * fVec6[iConst43] : 0.0f) + ((iConst42) ? 0.86000985f * fVec5[iConst41] : 0.0f) + ((iConst39) ? 0.86000985f * fTemp7 : 0.0f) + ((iConst40) ? 0.86000985f * fVec4[iConst39] : 0.0f))))))) - (fRec46[1] * fTemp15 + fRec47[1]);
			float fTemp17 = fTemp6 * fTemp15 + 1.0f;
			float fTemp18 = fTemp6 * fTemp16 / fTemp17;
			fRec46[0] = fRec46[1] + 2.0f * fTemp18;
			float fTemp19 = fRec46[1] + fTemp18;
			float fTemp20 = fTemp6 * fTemp19;
			fRec47[0] = fRec47[1] + 2.0f * fTemp20;
			float fRec48 = fTemp19;
			float fRec49 = fTemp16 / fTemp17;
			float fRec50 = fRec47[1] + fTemp20;
			fRec44[0] = fRec48;
			float fRec45 = fRec50;
			float fTemp21 = fSlow6 * fRec45;
			fVbargraph4 = static_cast<FAUSTFLOAT>(fTemp21);
			fRec43[0] = fTemp21;
			float fTemp22 = fRec39[0] * std::pow(1e+01f, 0.05f * fRec43[0]);
			fVec12[0] = fTemp22;
			fVec13[0] = fConst32 * fRec62[1] - fConst34 * fVec12[1];
			fRec63[0] = fConst29 * (fConst31 * fVec12[1] - (fVec13[1] + fConst35 * fRec63[1]) + fConst36 * fTemp22);
			fRec62[0] = fRec63[0];
			fVec14[0] = 0.50032705f * fRec62[1] - fConst37 * fRec60[1];
			fRec61[0] = fConst25 * (fVec14[1] - fConst38 * fRec61[1] - 1.0006541f * fRec62[1] + 0.50032705f * fRec62[0]);
			fRec60[0] = fRec61[0];
			float fTemp23 = std::fabs(0.92736715f * fRec60[0]);
			fRec59[0] = std::max<float>(fTemp23, fConst56 * fRec59[1] + fConst57 * fTemp23);
			fRec58[0] = fConst55 * fRec59[0] + fConst54 * fRec58[1];
			float fTemp24 = std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec58[0])));
			fRec57[0] = fConst13 * std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (8.685889f * fTemp24 + 5e+01f))) + fConst14 * fRec57[1];
			float fTemp25 = fRec67[1] + fConst5 * (fTemp22 - fRec68[1]);
			fRec67[0] = fConst61 * fTemp25 - fRec67[1];
			float fTemp26 = fRec68[1] + fConst62 * fTemp25;
			fRec68[0] = 2.0f * fTemp26 - fRec68[1];
			float fRec69 = fConst63 * fTemp25;
			float fTemp27 = std::fabs(2.4153774f * fRec69);
			fRec66[0] = std::max<float>(fTemp27, fConst56 * fRec66[1] + fConst57 * fTemp27);
			fRec65[0] = fConst55 * fRec66[0] + fConst54 * fRec65[1];
			float fTemp28 = 8.685889f * (fTemp24 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec65[0]))));
			fVbargraph5 = static_cast<FAUSTFLOAT>(-fTemp28);
			float fTemp29 = -fTemp28;
			float fTemp30 = fRec76[1] + fConst4 * (fTemp22 - fRec77[1]);
			fRec76[0] = fConst66 * fTemp30 - fRec76[1];
			float fTemp31 = fRec77[1] + fConst67 * fTemp30;
			fRec77[0] = 2.0f * fTemp31 - fRec77[1];
			fRec78[0] = fConst68 * fTemp30;
			fVec15[0] = fConst64 * fRec78[1] - fConst32 * fRec74[1];
			fRec75[0] = fConst29 * (fVec15[1] - fConst35 * fRec75[1] + fConst69 * fRec78[1] + fConst70 * fRec78[0]);
			fRec74[0] = fRec75[0];
			fVec16[0] = 0.50032705f * fRec74[1] - fConst37 * fRec72[1];
			fRec73[0] = fConst25 * (fVec16[1] - fConst38 * fRec73[1] - 1.0006541f * fRec74[1] + 0.50032705f * fRec74[0]);
			fRec72[0] = fRec73[0];
			float fTemp32 = std::fabs(0.92736715f * fRec72[0]);
			fRec71[0] = std::max<float>(fTemp32, fConst56 * fRec71[1] + fConst57 * fTemp32);
			fRec70[0] = fConst55 * fRec71[0] + fConst54 * fRec70[1];
			float fTemp33 = 8.685889f * (std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec70[0]))) - fTemp24);
			fVbargraph6 = static_cast<FAUSTFLOAT>(fTemp33);
			float fTemp34 = fTemp33;
			float fTemp35 = fRec81[1] + fConst6 * (fTemp22 - fRec82[1]);
			fRec81[0] = fConst72 * fTemp35 - fRec81[1];
			float fTemp36 = fRec82[1] + fConst73 * fTemp35;
			fRec82[0] = 2.0f * fTemp36 - fRec82[1];
			float fRec83 = fConst74 * fTemp35;
			float fTemp37 = std::fabs(2.5673494f * fRec83);
			fRec80[0] = std::max<float>(fTemp37, fConst56 * fRec80[1] + fConst57 * fTemp37);
			fRec79[0] = fConst55 * fRec80[0] + fConst54 * fRec79[1];
			float fTemp38 = 8.685889f * (fTemp24 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec79[0]))));
			fVbargraph7 = static_cast<FAUSTFLOAT>(-fTemp38);
			float fTemp39 = -fTemp38;
			float fTemp40 = fRec86[1] + fConst7 * (fTemp22 - fRec87[1]);
			fRec86[0] = fConst76 * fTemp40 - fRec86[1];
			float fTemp41 = fRec87[1] + fConst77 * fTemp40;
			fRec87[0] = 2.0f * fTemp41 - fRec87[1];
			float fRec88 = fConst78 * fTemp40;
			float fTemp42 = std::fabs(2.700754f * fRec88);
			fRec85[0] = std::max<float>(fTemp42, fConst56 * fRec85[1] + fConst57 * fTemp42);
			fRec84[0] = fConst55 * fRec85[0] + fConst54 * fRec84[1];
			float fTemp43 = 8.685889f * (fTemp24 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec84[0]))));
			fVbargraph8 = static_cast<FAUSTFLOAT>(-fTemp43);
			float fTemp44 = -fTemp43;
			float fTemp45 = fRec91[1] + fConst8 * (fTemp22 - fRec92[1]);
			fRec91[0] = fConst80 * fTemp45 - fRec91[1];
			float fTemp46 = fRec92[1] + fConst81 * fTemp45;
			fRec92[0] = 2.0f * fTemp46 - fRec92[1];
			float fRec93 = fConst82 * fTemp45;
			float fTemp47 = std::fabs(3.086633f * fRec93);
			fRec90[0] = std::max<float>(fTemp47, fConst56 * fRec90[1] + fConst57 * fTemp47);
			fRec89[0] = fConst55 * fRec90[0] + fConst54 * fRec89[1];
			float fTemp48 = 8.685889f * (fTemp24 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec89[0]))));
			fVbargraph9 = static_cast<FAUSTFLOAT>(-fTemp48);
			float fTemp49 = -fTemp48;
			float fTemp50 = fRec96[1] + fConst9 * (fTemp22 - fRec97[1]);
			fRec96[0] = fConst84 * fTemp50 - fRec96[1];
			float fTemp51 = fRec97[1] + fConst85 * fTemp50;
			fRec97[0] = 2.0f * fTemp51 - fRec97[1];
			float fRec98 = fConst86 * fTemp50;
			float fTemp52 = std::fabs(3.7323728f * fRec98);
			fRec95[0] = std::max<float>(fTemp52, fConst56 * fRec95[1] + fConst57 * fTemp52);
			fRec94[0] = fConst55 * fRec95[0] + fConst54 * fRec94[1];
			float fTemp53 = 8.685889f * (fTemp24 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec94[0]))));
			fVbargraph10 = static_cast<FAUSTFLOAT>(-fTemp53);
			float fTemp54 = -fTemp53;
			float fTemp55 = fRec101[1] + fConst10 * (fTemp22 - fRec102[1]);
			fRec101[0] = fConst88 * fTemp55 - fRec101[1];
			float fTemp56 = fRec102[1] + fConst89 * fTemp55;
			fRec102[0] = 2.0f * fTemp56 - fRec102[1];
			float fRec103 = fConst90 * fTemp55;
			float fTemp57 = std::fabs(4.045619f * fRec103);
			fRec100[0] = std::max<float>(fTemp57, fConst56 * fRec100[1] + fConst57 * fTemp57);
			fRec99[0] = fConst55 * fRec100[0] + fConst54 * fRec99[1];
			float fTemp58 = 8.685889f * (fTemp24 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec99[0]))));
			fVbargraph11 = static_cast<FAUSTFLOAT>(-fTemp58);
			float fTemp59 = -fTemp58;
			float fTemp60 = fRec106[1] + fConst11 * (fTemp22 - fRec107[1]);
			fRec106[0] = fConst92 * fTemp60 - fRec106[1];
			float fTemp61 = fRec107[1] + fConst93 * fTemp60;
			fRec107[0] = 2.0f * fTemp61 - fRec107[1];
			float fRec108 = fConst94 * fTemp60;
			float fTemp62 = std::fabs(4.1160913f * fRec108);
			fRec105[0] = std::max<float>(fTemp62, fConst56 * fRec105[1] + fConst57 * fTemp62);
			fRec104[0] = fConst55 * fRec105[0] + fConst54 * fRec104[1];
			float fTemp63 = 8.685889f * (fTemp24 - std::log(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec104[0]))));
			fVbargraph12 = static_cast<FAUSTFLOAT>(-fTemp63);
			float fTemp64 = -fTemp63;
			float fTemp65 = 18.0f - 0.125f * (fTemp34 + fTemp29 + fTemp39 + fTemp44 + fTemp49 + fTemp54 + fTemp59 + fTemp64);
			float fTemp66 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp29 + fTemp65)));
			float fTemp67 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp34 + fTemp65)));
			float fTemp68 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp39 + fTemp65)));
			float fTemp69 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp44 + fTemp65)));
			float fTemp70 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp49 + fTemp65)));
			float fTemp71 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp54 + fTemp65)));
			float fTemp72 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp59 + fTemp65)));
			float fTemp73 = std::min<float>(1.0f, std::max<float>(0.0f, 0.16666667f * (fTemp64 + fTemp65)));
			float fTemp74 = ((-1e+01f - fTemp34) * fTemp67 + (-5.0f - fTemp29) * fTemp66 + (-5.0f - fTemp39) * fTemp68 + (-8.0f - fTemp44) * fTemp69 + (-9.0f - fTemp49) * fTemp70 + (-1e+01f - fTemp54) * fTemp71 + (-7.0f - fTemp59) * fTemp72 + (-4.0f - fTemp64) * fTemp73) / std::max<float>(1.1920929e-07f, fTemp73 + fTemp72 + fTemp71 + fTemp70 + fTemp69 + fTemp68 + fTemp67 + fTemp66);
			float fTemp75 = -5.0f - (fTemp29 + fTemp74);
			fRec64[0] = fSlow17 * fTemp66 * std::min<float>(9.0f, std::max<float>(-12.0f, static_cast<float>((fTemp75 > 0.0f) - (fTemp75 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp75) + -1.0f))) + fConst58 * fRec64[1];
			float fTemp76 = fRec57[0] * fRec64[0];
			fVbargraph13 = static_cast<FAUSTFLOAT>(fTemp76);
			float fTemp77 = fTemp76;
			float fTemp78 = std::fabs(0.70710677f * fRec69);
			fVec17[0] = fTemp78;
			float fTemp79 = fTemp77 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp78));
			int iTemp80 = (fTemp79 > fSlow18) + (fTemp79 > fSlow19);
			float fTemp81 = std::max<float>(0.0f, ((iTemp80 == 0) ? 0.0f : ((iTemp80 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp79 + 6.5f - fSlow13) : fTemp79 + 6.0f - fSlow13)));
			float fTemp82 = ((-(0.75f * fTemp81) > fRec56[1]) ? fConst96 : fConst95);
			fRec56[0] = fRec56[1] * fTemp82 - 0.75f * fTemp81 * (1.0f - fTemp82);
			float fTemp83 = fSlow15 * (fRec56[0] + 1.5f);
			fVbargraph14 = static_cast<FAUSTFLOAT>(fTemp83);
			float fTemp84 = fTemp83;
			float fTemp85 = fSlow20 * (1.0f - 0.5f * fTemp5);
			int iTemp86 = fTemp85 > 0.0f;
			float fTemp87 = static_cast<float>(2 * iTemp86 + -1);
			float fTemp88 = std::fabs(fTemp85);
			float fTemp89 = std::max<float>(fTemp78, fVec17[1]);
			fVec18[0] = fTemp89;
			float fTemp90 = std::max<float>(fTemp89, fVec18[2]);
			fVec19[0] = fTemp90;
			float fTemp91 = std::max<float>(fTemp90, fVec19[4]);
			fVec20[0] = fTemp91;
			float fTemp92 = std::max<float>(fTemp91, fVec20[8]);
			fVec21[IOTA0 & 31] = fTemp92;
			float fTemp93 = std::max<float>(fTemp92, fVec21[(IOTA0 - 16) & 31]);
			fVec22[IOTA0 & 63] = fTemp93;
			float fTemp94 = std::max<float>(fTemp93, fVec22[(IOTA0 - 32) & 63]);
			fVec23[IOTA0 & 127] = fTemp94;
			float fTemp95 = std::max<float>(fTemp94, fVec23[(IOTA0 - 64) & 127]);
			fVec24[IOTA0 & 255] = fTemp95;
			float fTemp96 = std::max<float>(fTemp95, fVec24[(IOTA0 - 128) & 255]);
			fVec25[IOTA0 & 511] = fTemp96;
			fVec26[IOTA0 & 511] = std::max<float>(fTemp96, fVec25[(IOTA0 - 256) & 511]);
			float fTemp97 = fTemp77 + fTemp84 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp78 : -3.4028235e+38f), ((iConst98) ? fVec18[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec19[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec20[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec21[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec22[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec23[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec24[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec25[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec26[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp98 = (fTemp97 > fSlow22) + (fTemp97 > fSlow23);
			float fTemp99 = fTemp87 * std::max<float>(-12.0f, fTemp88 * ((iTemp98 == 0) ? fTemp97 + 12.0f - fSlow21 : ((iTemp98 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp97 + 9.0f - fSlow21)) : 0.0f)));
			float fTemp100 = ((iTemp86) ? 0.2f : 0.007f);
			int iTemp101 = std::fabs(fTemp100) < 1.1920929e-07f;
			float fTemp102 = ((iTemp86) ? 0.007f : 0.2f);
			int iTemp103 = std::fabs(fTemp102) < 1.1920929e-07f;
			float fTemp104 = ((fTemp99 > fRec109[1]) ? ((iTemp103) ? 0.0f : std::exp(-(fConst16 / ((iTemp103) ? 1.0f : fTemp102)))) : ((iTemp101) ? 0.0f : std::exp(-(fConst16 / ((iTemp101) ? 1.0f : fTemp100)))));
			fRec109[0] = fTemp99 * (1.0f - fTemp104) + fRec109[1] * fTemp104;
			fVbargraph15 = static_cast<FAUSTFLOAT>(fRec109[0]);
			float fTemp105 = fTemp84 + fRec109[0] + fTemp77;
			float fTemp106 = -8.0f - (fTemp44 + fTemp74);
			fRec111[0] = fSlow24 * fTemp69 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp106 > 0.0f) - (fTemp106 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp106) + -1.0f))) + fConst115 * fRec111[1];
			float fTemp107 = fRec57[0] * fRec111[0];
			fVbargraph16 = static_cast<FAUSTFLOAT>(fTemp107);
			float fTemp108 = fTemp107;
			float fTemp109 = std::fabs(0.70710677f * fRec88);
			fVec27[0] = fTemp109;
			float fTemp110 = fTemp108 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp109));
			int iTemp111 = (fTemp110 > fSlow25) + (fTemp110 > fSlow26);
			float fTemp112 = std::max<float>(0.0f, ((iTemp111 == 0) ? 0.0f : ((iTemp111 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp110 + 8.5f - fSlow13) : fTemp110 + 8.0f - fSlow13)));
			float fTemp113 = ((-(0.75f * fTemp112) > fRec110[1]) ? fConst118 : fConst117);
			fRec110[0] = fRec110[1] * fTemp113 - 0.75f * fTemp112 * (1.0f - fTemp113);
			float fTemp114 = fSlow15 * (fRec110[0] + 1.5f);
			fVbargraph17 = static_cast<FAUSTFLOAT>(fTemp114);
			float fTemp115 = fTemp114;
			float fTemp116 = std::max<float>(fTemp109, fVec27[1]);
			fVec28[0] = fTemp116;
			float fTemp117 = std::max<float>(fTemp116, fVec28[2]);
			fVec29[0] = fTemp117;
			float fTemp118 = std::max<float>(fTemp117, fVec29[4]);
			fVec30[0] = fTemp118;
			float fTemp119 = std::max<float>(fTemp118, fVec30[8]);
			fVec31[IOTA0 & 31] = fTemp119;
			float fTemp120 = std::max<float>(fTemp119, fVec31[(IOTA0 - 16) & 31]);
			fVec32[IOTA0 & 63] = fTemp120;
			float fTemp121 = std::max<float>(fTemp120, fVec32[(IOTA0 - 32) & 63]);
			fVec33[IOTA0 & 127] = fTemp121;
			float fTemp122 = std::max<float>(fTemp121, fVec33[(IOTA0 - 64) & 127]);
			fVec34[IOTA0 & 255] = fTemp122;
			float fTemp123 = std::max<float>(fTemp122, fVec34[(IOTA0 - 128) & 255]);
			fVec35[IOTA0 & 511] = fTemp123;
			fVec36[IOTA0 & 511] = std::max<float>(fTemp123, fVec35[(IOTA0 - 256) & 511]);
			float fTemp124 = fTemp108 + fTemp115 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp109 : -3.4028235e+38f), ((iConst98) ? fVec28[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec29[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec30[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec31[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec32[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec33[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec34[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec35[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec36[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp125 = (fTemp124 > fSlow22) + (fTemp124 > fSlow23);
			float fTemp126 = fTemp87 * std::max<float>(-12.0f, fTemp88 * ((iTemp125 == 0) ? fTemp124 + 12.0f - fSlow21 : ((iTemp125 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp124 + 9.0f - fSlow21)) : 0.0f)));
			float fTemp127 = ((iTemp86) ? 0.2f : 0.005f);
			int iTemp128 = std::fabs(fTemp127) < 1.1920929e-07f;
			float fTemp129 = ((iTemp86) ? 0.005f : 0.2f);
			int iTemp130 = std::fabs(fTemp129) < 1.1920929e-07f;
			float fTemp131 = ((fTemp126 > fRec112[1]) ? ((iTemp130) ? 0.0f : std::exp(-(fConst16 / ((iTemp130) ? 1.0f : fTemp129)))) : ((iTemp128) ? 0.0f : std::exp(-(fConst16 / ((iTemp128) ? 1.0f : fTemp127)))));
			fRec112[0] = fTemp126 * (1.0f - fTemp131) + fRec112[1] * fTemp131;
			fVbargraph18 = static_cast<FAUSTFLOAT>(fRec112[0]);
			float fTemp132 = fTemp115 + fRec112[0] + fTemp108;
			float fTemp133 = -1e+01f - (fTemp54 + fTemp74);
			fRec114[0] = fSlow27 * fTemp71 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp133 > 0.0f) - (fTemp133 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp133) + -1.0f))) + fConst119 * fRec114[1];
			float fTemp134 = fRec57[0] * fRec114[0];
			fVbargraph19 = static_cast<FAUSTFLOAT>(fTemp134);
			float fTemp135 = fTemp134;
			float fTemp136 = std::fabs(0.70710677f * fRec98);
			fVec37[0] = fTemp136;
			float fTemp137 = fTemp135 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp136));
			int iTemp138 = (fTemp137 > fSlow28) + (fTemp137 > fSlow29);
			float fTemp139 = std::max<float>(0.0f, ((iTemp138 == 0) ? 0.0f : ((iTemp138 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp137 + 12.5f - fSlow13) : fTemp137 + 12.0f - fSlow13)));
			float fTemp140 = ((-(0.75f * fTemp139) > fRec113[1]) ? fConst117 : fConst121);
			fRec113[0] = fRec113[1] * fTemp140 - 0.75f * fTemp139 * (1.0f - fTemp140);
			float fTemp141 = fSlow15 * (fRec113[0] + 1.5f);
			fVbargraph20 = static_cast<FAUSTFLOAT>(fTemp141);
			float fTemp142 = fTemp141;
			float fTemp143 = std::max<float>(fTemp136, fVec37[1]);
			fVec38[0] = fTemp143;
			float fTemp144 = std::max<float>(fTemp143, fVec38[2]);
			fVec39[0] = fTemp144;
			float fTemp145 = std::max<float>(fTemp144, fVec39[4]);
			fVec40[0] = fTemp145;
			float fTemp146 = std::max<float>(fTemp145, fVec40[8]);
			fVec41[IOTA0 & 31] = fTemp146;
			float fTemp147 = std::max<float>(fTemp146, fVec41[(IOTA0 - 16) & 31]);
			fVec42[IOTA0 & 63] = fTemp147;
			float fTemp148 = std::max<float>(fTemp147, fVec42[(IOTA0 - 32) & 63]);
			fVec43[IOTA0 & 127] = fTemp148;
			float fTemp149 = std::max<float>(fTemp148, fVec43[(IOTA0 - 64) & 127]);
			fVec44[IOTA0 & 255] = fTemp149;
			float fTemp150 = std::max<float>(fTemp149, fVec44[(IOTA0 - 128) & 255]);
			fVec45[IOTA0 & 511] = fTemp150;
			fVec46[IOTA0 & 511] = std::max<float>(fTemp150, fVec45[(IOTA0 - 256) & 511]);
			float fTemp151 = fTemp135 + fTemp142 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp136 : -3.4028235e+38f), ((iConst98) ? fVec38[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec39[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec40[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec41[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec42[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec43[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec44[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec45[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec46[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp152 = (fTemp151 > fSlow30) + (fTemp151 > fSlow31);
			float fTemp153 = fTemp87 * std::max<float>(-12.0f, fTemp88 * ((iTemp152 == 0) ? fTemp151 + 13.0f - fSlow21 : ((iTemp152 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp151 + 1e+01f - fSlow21)) : 0.0f)));
			float fTemp154 = ((iTemp86) ? 0.12f : 0.003f);
			int iTemp155 = std::fabs(fTemp154) < 1.1920929e-07f;
			float fTemp156 = ((iTemp86) ? 0.003f : 0.12f);
			int iTemp157 = std::fabs(fTemp156) < 1.1920929e-07f;
			float fTemp158 = ((fTemp153 > fRec115[1]) ? ((iTemp157) ? 0.0f : std::exp(-(fConst16 / ((iTemp157) ? 1.0f : fTemp156)))) : ((iTemp155) ? 0.0f : std::exp(-(fConst16 / ((iTemp155) ? 1.0f : fTemp154)))));
			fRec115[0] = fTemp153 * (1.0f - fTemp158) + fRec115[1] * fTemp158;
			fVbargraph21 = static_cast<FAUSTFLOAT>(fRec115[0]);
			float fTemp159 = fTemp142 + fRec115[0] + fTemp135;
			float fTemp160 = -4.0f - (fTemp64 + fTemp74);
			fRec117[0] = fSlow32 * fTemp73 * std::min<float>(6.0f, std::max<float>(-12.0f, static_cast<float>((fTemp160 > 0.0f) - (fTemp160 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp160) + -1.0f))) + fConst95 * fRec117[1];
			float fTemp161 = fRec57[0] * fRec117[0];
			fVbargraph22 = static_cast<FAUSTFLOAT>(fTemp161);
			float fTemp162 = fTemp161;
			float fTemp163 = std::fabs(0.70710677f * fRec108);
			fVec47[0] = fTemp163;
			float fTemp164 = fTemp162 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp163));
			int iTemp165 = (fTemp164 > fSlow33) + (fTemp164 > fSlow28);
			float fTemp166 = std::max<float>(0.0f, ((iTemp165 == 0) ? 0.0f : ((iTemp165 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp164 + 13.5f - fSlow13) : fTemp164 + 13.0f - fSlow13)));
			float fTemp167 = ((-(0.75f * fTemp166) > fRec116[1]) ? fConst117 : fConst123);
			fRec116[0] = fRec116[1] * fTemp167 - 0.75f * fTemp166 * (1.0f - fTemp167);
			float fTemp168 = fSlow15 * (fRec116[0] + 1.5f);
			fVbargraph23 = static_cast<FAUSTFLOAT>(fTemp168);
			float fTemp169 = fTemp168;
			float fTemp170 = std::max<float>(fTemp163, fVec47[1]);
			fVec48[0] = fTemp170;
			float fTemp171 = std::max<float>(fTemp170, fVec48[2]);
			fVec49[0] = fTemp171;
			float fTemp172 = std::max<float>(fTemp171, fVec49[4]);
			fVec50[0] = fTemp172;
			float fTemp173 = std::max<float>(fTemp172, fVec50[8]);
			fVec51[IOTA0 & 31] = fTemp173;
			float fTemp174 = std::max<float>(fTemp173, fVec51[(IOTA0 - 16) & 31]);
			fVec52[IOTA0 & 63] = fTemp174;
			float fTemp175 = std::max<float>(fTemp174, fVec52[(IOTA0 - 32) & 63]);
			fVec53[IOTA0 & 127] = fTemp175;
			float fTemp176 = std::max<float>(fTemp175, fVec53[(IOTA0 - 64) & 127]);
			fVec54[IOTA0 & 255] = fTemp176;
			float fTemp177 = std::max<float>(fTemp176, fVec54[(IOTA0 - 128) & 255]);
			fVec55[IOTA0 & 511] = fTemp177;
			fVec56[IOTA0 & 511] = std::max<float>(fTemp177, fVec55[(IOTA0 - 256) & 511]);
			float fTemp178 = fTemp162 + fTemp169 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp163 : -3.4028235e+38f), ((iConst98) ? fVec48[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec49[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec50[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec51[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec52[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec53[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec54[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec55[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec56[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp179 = (fTemp178 > fSlow34) + (fTemp178 > fSlow35);
			float fTemp180 = fTemp87 * std::max<float>(-12.0f, fTemp88 * ((iTemp179 == 0) ? fTemp178 + 15.0f - fSlow21 : ((iTemp179 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp178 + 12.0f - fSlow21)) : 0.0f)));
			float fTemp181 = ((iTemp86) ? 0.05f : 0.001f);
			int iTemp182 = std::fabs(fTemp181) < 1.1920929e-07f;
			float fTemp183 = ((iTemp86) ? 0.001f : 0.05f);
			int iTemp184 = std::fabs(fTemp183) < 1.1920929e-07f;
			float fTemp185 = ((fTemp180 > fRec118[1]) ? ((iTemp184) ? 0.0f : std::exp(-(fConst16 / ((iTemp184) ? 1.0f : fTemp183)))) : ((iTemp182) ? 0.0f : std::exp(-(fConst16 / ((iTemp182) ? 1.0f : fTemp181)))));
			fRec118[0] = fTemp180 * (1.0f - fTemp185) + fRec118[1] * fTemp185;
			fVbargraph24 = static_cast<FAUSTFLOAT>(fRec118[0]);
			float fTemp186 = fTemp169 + fRec118[0] + fTemp162;
			float fTemp187 = -1e+01f - (fTemp34 + fTemp74);
			fRec120[0] = fSlow36 * fTemp67 * std::min<float>(6.0f, std::max<float>(-12.0f, static_cast<float>((fTemp187 > 0.0f) - (fTemp187 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp187) + -1.0f))) + fConst124 * fRec120[1];
			float fTemp188 = fRec120[0] * fRec57[0];
			fVbargraph25 = static_cast<FAUSTFLOAT>(fTemp188);
			float fTemp189 = fTemp188;
			float fTemp190 = std::fabs(0.70710677f * fRec78[0]);
			fVec57[0] = fTemp190;
			float fTemp191 = fTemp189 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp190));
			int iTemp192 = (fTemp191 > fSlow18) + (fTemp191 > fSlow19);
			float fTemp193 = std::max<float>(0.0f, ((iTemp192 == 0) ? 0.0f : ((iTemp192 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp191 + 6.5f - fSlow13) : fTemp191 + 6.0f - fSlow13)));
			float fTemp194 = ((-(0.75f * fTemp193) > fRec119[1]) ? fConst56 : fConst126);
			fRec119[0] = fRec119[1] * fTemp194 - 0.75f * fTemp193 * (1.0f - fTemp194);
			float fTemp195 = fSlow15 * (fRec119[0] + 1.5f);
			fVbargraph26 = static_cast<FAUSTFLOAT>(fTemp195);
			float fTemp196 = fTemp195;
			float fTemp197 = std::max<float>(fTemp190, fVec57[1]);
			fVec58[0] = fTemp197;
			float fTemp198 = std::max<float>(fTemp197, fVec58[2]);
			fVec59[0] = fTemp198;
			float fTemp199 = std::max<float>(fTemp198, fVec59[4]);
			fVec60[0] = fTemp199;
			float fTemp200 = std::max<float>(fTemp199, fVec60[8]);
			fVec61[IOTA0 & 31] = fTemp200;
			float fTemp201 = std::max<float>(fTemp200, fVec61[(IOTA0 - 16) & 31]);
			fVec62[IOTA0 & 63] = fTemp201;
			float fTemp202 = std::max<float>(fTemp201, fVec62[(IOTA0 - 32) & 63]);
			fVec63[IOTA0 & 127] = fTemp202;
			float fTemp203 = std::max<float>(fTemp202, fVec63[(IOTA0 - 64) & 127]);
			fVec64[IOTA0 & 255] = fTemp203;
			float fTemp204 = std::max<float>(fTemp203, fVec64[(IOTA0 - 128) & 255]);
			fVec65[IOTA0 & 511] = fTemp204;
			fVec66[IOTA0 & 511] = std::max<float>(fTemp204, fVec65[(IOTA0 - 256) & 511]);
			float fTemp205 = fTemp189 + fTemp196 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp190 : -3.4028235e+38f), ((iConst98) ? fVec58[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec59[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec60[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec61[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec62[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec63[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec64[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec65[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec66[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp206 = (fTemp205 > fSlow22) + (fTemp205 > fSlow23);
			float fTemp207 = std::max<float>(-12.0f, ((iTemp206 == 0) ? fTemp205 + 12.0f - fSlow21 : ((iTemp206 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp205 + 9.0f - fSlow21)) : 0.0f)) * fTemp88) * fTemp87;
			float fTemp208 = ((iTemp86) ? 0.2f : 0.008f);
			int iTemp209 = std::fabs(fTemp208) < 1.1920929e-07f;
			float fTemp210 = ((iTemp86) ? 0.008f : 0.2f);
			int iTemp211 = std::fabs(fTemp210) < 1.1920929e-07f;
			float fTemp212 = ((fTemp207 > fRec121[1]) ? ((iTemp211) ? 0.0f : std::exp(-(fConst16 / ((iTemp211) ? 1.0f : fTemp210)))) : ((iTemp209) ? 0.0f : std::exp(-(fConst16 / ((iTemp209) ? 1.0f : fTemp208)))));
			fRec121[0] = fTemp207 * (1.0f - fTemp212) + fRec121[1] * fTemp212;
			fVbargraph27 = static_cast<FAUSTFLOAT>(fRec121[0]);
			float fTemp213 = fTemp196 + fTemp189 + fRec121[0];
			float fTemp214 = -5.0f - (fTemp39 + fTemp74);
			fRec123[0] = fSlow37 * fTemp68 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp214 > 0.0f) - (fTemp214 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp214) + -1.0f))) + fConst127 * fRec123[1];
			float fTemp215 = fRec57[0] * fRec123[0];
			fVbargraph28 = static_cast<FAUSTFLOAT>(fTemp215);
			float fTemp216 = fTemp215;
			float fTemp217 = std::fabs(0.70710677f * fRec83);
			fVec67[0] = fTemp217;
			float fTemp218 = fTemp216 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp217));
			int iTemp219 = (fTemp218 > fSlow26) + (fTemp218 > fSlow18);
			float fTemp220 = std::max<float>(0.0f, ((iTemp219 == 0) ? 0.0f : ((iTemp219 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp218 + 7.5f - fSlow13) : fTemp218 + 7.0f - fSlow13)));
			float fTemp221 = ((-(0.75f * fTemp220) > fRec122[1]) ? fConst130 : fConst129);
			fRec122[0] = fRec122[1] * fTemp221 - 0.75f * fTemp220 * (1.0f - fTemp221);
			float fTemp222 = fSlow15 * (fRec122[0] + 1.5f);
			fVbargraph29 = static_cast<FAUSTFLOAT>(fTemp222);
			float fTemp223 = fTemp222;
			float fTemp224 = std::max<float>(fTemp217, fVec67[1]);
			fVec68[0] = fTemp224;
			float fTemp225 = std::max<float>(fTemp224, fVec68[2]);
			fVec69[0] = fTemp225;
			float fTemp226 = std::max<float>(fTemp225, fVec69[4]);
			fVec70[0] = fTemp226;
			float fTemp227 = std::max<float>(fTemp226, fVec70[8]);
			fVec71[IOTA0 & 31] = fTemp227;
			float fTemp228 = std::max<float>(fTemp227, fVec71[(IOTA0 - 16) & 31]);
			fVec72[IOTA0 & 63] = fTemp228;
			float fTemp229 = std::max<float>(fTemp228, fVec72[(IOTA0 - 32) & 63]);
			fVec73[IOTA0 & 127] = fTemp229;
			float fTemp230 = std::max<float>(fTemp229, fVec73[(IOTA0 - 64) & 127]);
			fVec74[IOTA0 & 255] = fTemp230;
			float fTemp231 = std::max<float>(fTemp230, fVec74[(IOTA0 - 128) & 255]);
			fVec75[IOTA0 & 511] = fTemp231;
			fVec76[IOTA0 & 511] = std::max<float>(fTemp231, fVec75[(IOTA0 - 256) & 511]);
			float fTemp232 = fTemp216 + fTemp223 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp217 : -3.4028235e+38f), ((iConst98) ? fVec68[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec69[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec70[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec71[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec72[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec73[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec74[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec75[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec76[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp233 = (fTemp232 > fSlow22) + (fTemp232 > fSlow23);
			float fTemp234 = fTemp87 * std::max<float>(-12.0f, fTemp88 * ((iTemp233 == 0) ? fTemp232 + 12.0f - fSlow21 : ((iTemp233 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp232 + 9.0f - fSlow21)) : 0.0f)));
			float fTemp235 = ((iTemp86) ? 0.2f : 0.006f);
			int iTemp236 = std::fabs(fTemp235) < 1.1920929e-07f;
			float fTemp237 = ((iTemp86) ? 0.006f : 0.2f);
			int iTemp238 = std::fabs(fTemp237) < 1.1920929e-07f;
			float fTemp239 = ((fTemp234 > fRec124[1]) ? ((iTemp238) ? 0.0f : std::exp(-(fConst16 / ((iTemp238) ? 1.0f : fTemp237)))) : ((iTemp236) ? 0.0f : std::exp(-(fConst16 / ((iTemp236) ? 1.0f : fTemp235)))));
			fRec124[0] = fTemp234 * (1.0f - fTemp239) + fRec124[1] * fTemp239;
			fVbargraph30 = static_cast<FAUSTFLOAT>(fRec124[0]);
			float fTemp240 = fTemp223 + fRec124[0] + fTemp216;
			float fTemp241 = -9.0f - (fTemp49 + fTemp74);
			fRec126[0] = fSlow38 * fTemp70 * std::min<float>(12.0f, std::max<float>(-12.0f, static_cast<float>((fTemp241 > 0.0f) - (fTemp241 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp241) + -1.0f))) + fConst56 * fRec126[1];
			float fTemp242 = fRec57[0] * fRec126[0];
			fVbargraph31 = static_cast<FAUSTFLOAT>(fTemp242);
			float fTemp243 = fTemp242;
			float fTemp244 = std::fabs(0.70710677f * fRec93);
			fVec77[0] = fTemp244;
			float fTemp245 = fTemp243 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp244));
			int iTemp246 = (fTemp245 > fSlow29) + (fTemp245 > fSlow39);
			float fTemp247 = std::max<float>(0.0f, ((iTemp246 == 0) ? 0.0f : ((iTemp246 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp245 + 11.5f - fSlow13) : fTemp245 + 11.0f - fSlow13)));
			float fTemp248 = ((-(0.75f * fTemp247) > fRec125[1]) ? fConst129 : fConst54);
			fRec125[0] = fRec125[1] * fTemp248 - 0.75f * fTemp247 * (1.0f - fTemp248);
			float fTemp249 = fSlow15 * (fRec125[0] + 1.5f);
			fVbargraph32 = static_cast<FAUSTFLOAT>(fTemp249);
			float fTemp250 = fTemp249;
			float fTemp251 = std::max<float>(fTemp244, fVec77[1]);
			fVec78[0] = fTemp251;
			float fTemp252 = std::max<float>(fTemp251, fVec78[2]);
			fVec79[0] = fTemp252;
			float fTemp253 = std::max<float>(fTemp252, fVec79[4]);
			fVec80[0] = fTemp253;
			float fTemp254 = std::max<float>(fTemp253, fVec80[8]);
			fVec81[IOTA0 & 31] = fTemp254;
			float fTemp255 = std::max<float>(fTemp254, fVec81[(IOTA0 - 16) & 31]);
			fVec82[IOTA0 & 63] = fTemp255;
			float fTemp256 = std::max<float>(fTemp255, fVec82[(IOTA0 - 32) & 63]);
			fVec83[IOTA0 & 127] = fTemp256;
			float fTemp257 = std::max<float>(fTemp256, fVec83[(IOTA0 - 64) & 127]);
			fVec84[IOTA0 & 255] = fTemp257;
			float fTemp258 = std::max<float>(fTemp257, fVec84[(IOTA0 - 128) & 255]);
			fVec85[IOTA0 & 511] = fTemp258;
			fVec86[IOTA0 & 511] = std::max<float>(fTemp258, fVec85[(IOTA0 - 256) & 511]);
			float fTemp259 = fTemp243 + fTemp250 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp244 : -3.4028235e+38f), ((iConst98) ? fVec78[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec79[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec80[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec81[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec82[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec83[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec84[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec85[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec86[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp260 = (fTemp259 > fSlow30) + (fTemp259 > fSlow31);
			float fTemp261 = fTemp87 * std::max<float>(-12.0f, fTemp88 * ((iTemp260 == 0) ? fTemp259 + 13.0f - fSlow21 : ((iTemp260 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp259 + 1e+01f - fSlow21)) : 0.0f)));
			float fTemp262 = ((iTemp86) ? 0.16f : 0.004f);
			int iTemp263 = std::fabs(fTemp262) < 1.1920929e-07f;
			float fTemp264 = ((iTemp86) ? 0.004f : 0.16f);
			int iTemp265 = std::fabs(fTemp264) < 1.1920929e-07f;
			float fTemp266 = ((fTemp261 > fRec127[1]) ? ((iTemp265) ? 0.0f : std::exp(-(fConst16 / ((iTemp265) ? 1.0f : fTemp264)))) : ((iTemp263) ? 0.0f : std::exp(-(fConst16 / ((iTemp263) ? 1.0f : fTemp262)))));
			fRec127[0] = fTemp261 * (1.0f - fTemp266) + fRec127[1] * fTemp266;
			fVbargraph33 = static_cast<FAUSTFLOAT>(fRec127[0]);
			float fTemp267 = fTemp250 + fRec127[0] + fTemp243;
			float fTemp268 = -7.0f - (fTemp59 + fTemp74);
			fRec129[0] = fSlow40 * fTemp72 * std::min<float>(9.0f, std::max<float>(-12.0f, static_cast<float>((fTemp268 > 0.0f) - (fTemp268 < 0.0f)) * std::max<float>(0.0f, std::fabs(fTemp268) + -1.0f))) + fConst132 * fRec129[1];
			float fTemp269 = fRec57[0] * fRec129[0];
			fVbargraph34 = static_cast<FAUSTFLOAT>(fTemp269);
			float fTemp270 = fTemp269;
			float fTemp271 = std::fabs(0.70710677f * fRec103);
			fVec87[0] = fTemp271;
			float fTemp272 = fTemp270 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, fTemp271));
			int iTemp273 = (fTemp272 > fSlow28) + (fTemp272 > fSlow29);
			float fTemp274 = std::max<float>(0.0f, ((iTemp273 == 0) ? 0.0f : ((iTemp273 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp272 + 12.5f - fSlow13) : fTemp272 + 12.0f - fSlow13)));
			float fTemp275 = ((-(0.75f * fTemp274) > fRec128[1]) ? fConst117 : fConst134);
			fRec128[0] = fRec128[1] * fTemp275 - 0.75f * fTemp274 * (1.0f - fTemp275);
			float fTemp276 = fSlow15 * (fRec128[0] + 1.5f);
			fVbargraph35 = static_cast<FAUSTFLOAT>(fTemp276);
			float fTemp277 = fTemp276;
			float fTemp278 = std::max<float>(fTemp271, fVec87[1]);
			fVec88[0] = fTemp278;
			float fTemp279 = std::max<float>(fTemp278, fVec88[2]);
			fVec89[0] = fTemp279;
			float fTemp280 = std::max<float>(fTemp279, fVec89[4]);
			fVec90[0] = fTemp280;
			float fTemp281 = std::max<float>(fTemp280, fVec90[8]);
			fVec91[IOTA0 & 31] = fTemp281;
			float fTemp282 = std::max<float>(fTemp281, fVec91[(IOTA0 - 16) & 31]);
			fVec92[IOTA0 & 63] = fTemp282;
			float fTemp283 = std::max<float>(fTemp282, fVec92[(IOTA0 - 32) & 63]);
			fVec93[IOTA0 & 127] = fTemp283;
			float fTemp284 = std::max<float>(fTemp283, fVec93[(IOTA0 - 64) & 127]);
			fVec94[IOTA0 & 255] = fTemp284;
			float fTemp285 = std::max<float>(fTemp284, fVec94[(IOTA0 - 128) & 255]);
			fVec95[IOTA0 & 511] = fTemp285;
			fVec96[IOTA0 & 511] = std::max<float>(fTemp285, fVec95[(IOTA0 - 256) & 511]);
			float fTemp286 = fTemp270 + fTemp277 + 8.685889f * std::log(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst97) ? fTemp271 : -3.4028235e+38f), ((iConst98) ? fVec88[iConst97] : -3.4028235e+38f)), ((iConst99) ? fVec89[iConst100] : -3.4028235e+38f)), ((iConst101) ? fVec90[iConst102] : -3.4028235e+38f)), ((iConst103) ? fVec91[(IOTA0 - iConst104) & 31] : -3.4028235e+38f)), ((iConst105) ? fVec92[(IOTA0 - iConst106) & 63] : -3.4028235e+38f)), ((iConst107) ? fVec93[(IOTA0 - iConst108) & 127] : -3.4028235e+38f)), ((iConst109) ? fVec94[(IOTA0 - iConst110) & 255] : -3.4028235e+38f)), ((iConst111) ? fVec95[(IOTA0 - iConst112) & 511] : -3.4028235e+38f)), ((iConst113) ? fVec96[(IOTA0 - iConst114) & 511] : -3.4028235e+38f))));
			int iTemp287 = (fTemp286 > fSlow41) + (fTemp286 > fSlow42);
			float fTemp288 = fTemp87 * std::max<float>(-12.0f, fTemp88 * ((iTemp287 == 0) ? fTemp286 + 14.0f - fSlow21 : ((iTemp287 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp286 + 11.0f - fSlow21)) : 0.0f)));
			float fTemp289 = ((iTemp86) ? 0.08f : 0.002f);
			int iTemp290 = std::fabs(fTemp289) < 1.1920929e-07f;
			float fTemp291 = ((iTemp86) ? 0.002f : 0.08f);
			int iTemp292 = std::fabs(fTemp291) < 1.1920929e-07f;
			float fTemp293 = ((fTemp288 > fRec130[1]) ? ((iTemp292) ? 0.0f : std::exp(-(fConst16 / ((iTemp292) ? 1.0f : fTemp291)))) : ((iTemp290) ? 0.0f : std::exp(-(fConst16 / ((iTemp290) ? 1.0f : fTemp289)))));
			fRec130[0] = fTemp288 * (1.0f - fTemp293) + fRec130[1] * fTemp293;
			fVbargraph36 = static_cast<FAUSTFLOAT>(fRec130[0]);
			float fTemp294 = fTemp277 + fRec130[0] + fTemp270;
			float fTemp295 = std::exp(0.057564627f * (0.00059f * fTemp105 + 0.01003f * fTemp132 + 0.16735f * fTemp159 + 1.23852f * fTemp186 - (0.00012f * fTemp213 + 0.00245f * fTemp240 + 0.04112f * fTemp267 + 0.6028f * fTemp294)));
			float fTemp296 = (fRec35[1] + fConst11 * (fTemp22 - fRec36[1])) / (fConst11 * (fConst11 + 1.5f / fTemp295) + 1.0f);
			fRec35[0] = 2.0f * fTemp296 - fRec35[1];
			float fTemp297 = fRec36[1] + fConst11 * fTemp296;
			fRec36[0] = 2.0f * fTemp297 - fRec36[1];
			float fRec37 = fTemp22;
			float fRec38 = fTemp296;
			float fTemp298 = fRec37 + 1.5f * (fRec38 * (mydsp_faustpower2_f(fTemp295) + -1.0f) / fTemp295);
			float fTemp299 = std::exp(0.057564627f * (0.00068f * fTemp213 + 0.0135f * fTemp240 + 0.22574f * fTemp267 + 1.62165f * fTemp294 - (0.00325f * fTemp105 + 0.05536f * fTemp132 + 0.81715f * fTemp159 + 0.60264f * fTemp186)));
			float fTemp300 = (fRec31[1] + fConst10 * (fTemp298 - fRec32[1])) / (fConst10 * (fConst10 + 1.5f / fTemp299) + 1.0f);
			fRec31[0] = 2.0f * fTemp300 - fRec31[1];
			float fTemp301 = fRec32[1] + fConst10 * fTemp300;
			fRec32[0] = 2.0f * fTemp301 - fRec32[1];
			float fRec33 = fTemp298;
			float fRec34 = fTemp300;
			float fTemp302 = fRec33 + 1.5f * (fRec34 * (mydsp_faustpower2_f(fTemp299) + -1.0f) / fTemp299);
			float fTemp303 = std::exp(0.057564627f * (0.01451f * fTemp105 + 0.24587f * fTemp132 + 1.78298f * fTemp159 + 0.16725f * fTemp186 - (0.00302f * fTemp213 + 0.06024f * fTemp240 + 0.89053f * fTemp267 + 0.81733f * fTemp294)));
			float fTemp304 = (fRec27[1] + fConst9 * (fTemp302 - fRec28[1])) / (fConst9 * (fConst9 + 1.5f / fTemp303) + 1.0f);
			fRec27[0] = 2.0f * fTemp304 - fRec27[1];
			float fTemp305 = fRec28[1] + fConst9 * fTemp304;
			fRec28[0] = 2.0f * fTemp305 - fRec28[1];
			float fRec29 = fTemp302;
			float fRec30 = fTemp304;
			float fTemp306 = fRec29 + 1.5f * (fRec30 * (mydsp_faustpower2_f(fTemp303) + -1.0f) / fTemp303);
			float fTemp307 = std::exp(0.057564627f * (0.0127f * fTemp213 + 0.25175f * fTemp240 + 1.83204f * fTemp267 + 0.22587f * fTemp294 - (0.06095f * fTemp105 + 0.91263f * fTemp132 + 0.89004f * fTemp159 + 0.04111f * fTemp186)));
			float fTemp308 = (fRec23[1] + fConst8 * (fTemp306 - fRec24[1])) / (fConst8 * (fConst8 + 1.5f / fTemp307) + 1.0f);
			fRec23[0] = 2.0f * fTemp308 - fRec23[1];
			float fTemp309 = fRec24[1] + fConst8 * fTemp308;
			fRec24[0] = 2.0f * fTemp309 - fRec24[1];
			float fRec25 = fTemp306;
			float fRec26 = fTemp308;
			float fTemp310 = fRec25 + 1.5f * (fRec26 * (mydsp_faustpower2_f(fTemp307) + -1.0f) / fTemp307);
			float fTemp311 = std::exp(0.057564627f * (0.25035f * fTemp105 + 1.84578f * fTemp132 + 0.24485f * fTemp159 + 0.00999f * fTemp186 - (0.05244f * fTemp213 + 0.9186f * fTemp240 + 0.91077f * fTemp267 + 0.05519f * fTemp294)));
			float fTemp312 = (fRec19[1] + fConst7 * (fTemp310 - fRec20[1])) / (fConst7 * (fConst7 + 1.5f / fTemp311) + 1.0f);
			fRec19[0] = 2.0f * fTemp312 - fRec19[1];
			float fTemp313 = fRec20[1] + fConst7 * fTemp312;
			fRec20[0] = 2.0f * fTemp313 - fRec20[1];
			float fRec21 = fTemp310;
			float fRec22 = fTemp312;
			float fTemp314 = fRec21 + 1.5f * (fRec22 * (mydsp_faustpower2_f(fTemp311) + -1.0f) / fTemp311);
			float fTemp315 = std::exp(0.057564627f * (0.21506f * fTemp213 + 1.85152f * fTemp240 + 0.25042f * fTemp267 + 0.0134f * fTemp294 - (0.9089f * fTemp105 + 0.91688f * fTemp132 + 0.05976f * fTemp159 + 0.00243f * fTemp186)));
			float fTemp316 = (fRec15[1] + fConst6 * (fTemp314 - fRec16[1])) / (fConst6 * (fConst6 + 1.5f / fTemp315) + 1.0f);
			fRec15[0] = 2.0f * fTemp316 - fRec15[1];
			float fTemp317 = fRec16[1] + fConst6 * fTemp316;
			fRec16[0] = 2.0f * fTemp317 - fRec16[1];
			float fRec17 = fTemp314;
			float fRec18 = fTemp316;
			float fTemp318 = fRec17 + 1.5f * (fRec18 * (mydsp_faustpower2_f(fTemp315) + -1.0f) / fTemp315);
			float fTemp319 = std::exp(0.057564627f * (1.80799f * fTemp105 + 0.25175f * fTemp132 + 0.01449f * fTemp159 + 0.00059f * fTemp186 - (0.77301f * fTemp213 + 0.91783f * fTemp240 + 0.06104f * fTemp267 + 0.00325f * fTemp294)));
			float fTemp320 = (fRec11[1] + fConst5 * (fTemp318 - fRec12[1])) / (fConst5 * (fConst5 + 1.5f / fTemp319) + 1.0f);
			fRec11[0] = 2.0f * fTemp320 - fRec11[1];
			float fTemp321 = fRec12[1] + fConst5 * fTemp320;
			fRec12[0] = 2.0f * fTemp321 - fRec12[1];
			float fRec13 = fTemp318;
			float fRec14 = fTemp320;
			float fTemp322 = fRec13 + 1.5f * (fRec14 * (mydsp_faustpower2_f(fTemp319) + -1.0f) / fTemp319);
			float fTemp323 = std::exp(0.057564627f * (1.35422f * fTemp213 + 0.22165f * fTemp240 + 0.01302f * fTemp267 + 0.00069f * fTemp294 - (0.77469f * fTemp105 + 0.05398f * fTemp132 + 0.00309f * fTemp159 + 0.00013f * fTemp186)));
			float fTemp324 = (fRec7[1] + fConst4 * (fTemp322 - fRec8[1])) / (fConst4 * (fConst4 + 1.5f / fTemp323) + 1.0f);
			fRec7[0] = 2.0f * fTemp324 - fRec7[1];
			float fTemp325 = fRec8[1] + fConst4 * fTemp324;
			fRec8[0] = 2.0f * fTemp325 - fRec8[1];
			float fRec9 = fTemp322;
			float fRec10 = fTemp324;
			float fTemp326 = fRec9 + 1.5f * (fRec10 * (mydsp_faustpower2_f(fTemp323) + -1.0f) / fTemp323);
			fRec5[0] = fTemp326;
			fRec6[IOTA0 & 2047] = fTemp326;
			float fTemp327 = std::fabs(fRec6[IOTA0 & 2047]);
			int iTemp328 = (fTemp327 >= fRec4[1]) | (static_cast<float>(iRec3[1]) >= fConst18);
			iRec3[0] = ((iTemp328) ? 0 : iRec3[1] + 1);
			fRec4[0] = ((iTemp328) ? fTemp327 : fRec4[1]);
			fRec2[0] = fConst3 * fRec4[0] + fConst2 * fRec2[1];
			float fTemp329 = std::fabs(fRec2[0]);
			fRec1[0] = std::max<float>(fTemp329, fConst135 * fRec1[1] + fConst136 * fTemp329);
			float fTemp330 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec1[0], 1.1920929e-07f));
			fVbargraph37 = static_cast<FAUSTFLOAT>(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp330))));
			float fTemp331 = fTemp330 * fRec6[(IOTA0 - iConst137) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp331))))));
			fVbargraph38 = static_cast<FAUSTFLOAT>(fRec0[0]);
			float fTemp332 = fTemp331;
			fVec97[0] = fTemp332;
			output0[i0] = static_cast<FAUSTFLOAT>(fTemp332);
			fVec98[0] = fConst32 * fRec133[1] - fConst34 * fVec97[1];
			fRec134[0] = fConst29 * (fConst31 * fVec97[1] - (fVec98[1] + fConst35 * fRec134[1]) + fConst36 * fTemp332);
			fRec133[0] = fRec134[0];
			fVec99[0] = 0.50032705f * fRec133[1] - fConst37 * fRec131[1];
			fRec132[0] = fConst25 * (fVec99[1] - fConst38 * fRec132[1] - 1.0006541f * fRec133[1] + 0.50032705f * fRec133[0]);
			fRec131[0] = fRec132[0];
			float fTemp333 = mydsp_faustpower2_f(fRec131[0]);
			fVec100[0] = fTemp333;
			float fTemp334 = fTemp333 + fVec100[1];
			fVec101[0] = fTemp334;
			float fTemp335 = fTemp334 + fVec101[2];
			fVec102[0] = fTemp335;
			float fTemp336 = fTemp335 + fVec102[4];
			fVec103[0] = fTemp336;
			float fTemp337 = fTemp336 + fVec103[8];
			fVec104[IOTA0 & 31] = fTemp337;
			float fTemp338 = fTemp337 + fVec104[(IOTA0 - 16) & 31];
			fVec105[IOTA0 & 63] = fTemp338;
			float fTemp339 = fTemp338 + fVec105[(IOTA0 - 32) & 63];
			fVec106[IOTA0 & 127] = fTemp339;
			float fTemp340 = fTemp339 + fVec106[(IOTA0 - 64) & 127];
			fVec107[IOTA0 & 255] = fTemp340;
			float fTemp341 = fTemp340 + fVec107[(IOTA0 - 128) & 255];
			fVec108[IOTA0 & 511] = fTemp341;
			float fTemp342 = fTemp341 + fVec108[(IOTA0 - 256) & 511];
			fVec109[IOTA0 & 1023] = fTemp342;
			float fTemp343 = fTemp342 + fVec109[(IOTA0 - 512) & 1023];
			fVec110[IOTA0 & 2047] = fTemp343;
			float fTemp344 = fTemp343 + fVec110[(IOTA0 - 1024) & 2047];
			fVec111[IOTA0 & 4095] = fTemp344;
			float fTemp345 = fTemp344 + fVec111[(IOTA0 - 2048) & 4095];
			fVec112[IOTA0 & 8191] = fTemp345;
			float fTemp346 = fTemp345 + fVec112[(IOTA0 - 4096) & 8191];
			fVec113[IOTA0 & 16383] = fTemp346;
			float fTemp347 = fTemp346 + fVec113[(IOTA0 - 8192) & 16383];
			fVec114[IOTA0 & 32767] = fTemp347;
			float fTemp348 = fTemp347 + fVec114[(IOTA0 - 16384) & 32767];
			fVec115[IOTA0 & 65535] = fTemp348;
			float fTemp349 = fTemp348 + fVec115[(IOTA0 - 32768) & 65535];
			fVec116[IOTA0 & 131071] = fTemp349;
			fVec117[IOTA0 & 262143] = fTemp349 + fVec116[(IOTA0 - 65536) & 131071];
			fVbargraph39 = static_cast<FAUSTFLOAT>(fRec0[0]);
			float fTemp350 = fTemp331;
			fVec118[0] = fTemp350;
			fVec119[0] = fConst32 * fRec137[1] - fConst34 * fVec118[1];
			fRec138[0] = fConst29 * (fConst31 * fVec118[1] - (fVec119[1] + fConst35 * fRec138[1]) + fConst36 * fTemp350);
			fRec137[0] = fRec138[0];
			fVec120[0] = 0.50032705f * fRec137[1] - fConst37 * fRec135[1];
			fRec136[0] = fConst25 * (fVec120[1] - fConst38 * fRec136[1] - 1.0006541f * fRec137[1] + 0.50032705f * fRec137[0]);
			fRec135[0] = fRec136[0];
			float fTemp351 = mydsp_faustpower2_f(fRec135[0]);
			fVec121[0] = fTemp351;
			float fTemp352 = fTemp351 + fVec121[1];
			fVec122[0] = fTemp352;
			float fTemp353 = fTemp352 + fVec122[2];
			fVec123[0] = fTemp353;
			float fTemp354 = fTemp353 + fVec123[4];
			fVec124[0] = fTemp354;
			float fTemp355 = fTemp354 + fVec124[8];
			fVec125[IOTA0 & 31] = fTemp355;
			float fTemp356 = fTemp355 + fVec125[(IOTA0 - 16) & 31];
			fVec126[IOTA0 & 63] = fTemp356;
			float fTemp357 = fTemp356 + fVec126[(IOTA0 - 32) & 63];
			fVec127[IOTA0 & 127] = fTemp357;
			float fTemp358 = fTemp357 + fVec127[(IOTA0 - 64) & 127];
			fVec128[IOTA0 & 255] = fTemp358;
			float fTemp359 = fTemp358 + fVec128[(IOTA0 - 128) & 255];
			fVec129[IOTA0 & 511] = fTemp359;
			float fTemp360 = fTemp359 + fVec129[(IOTA0 - 256) & 511];
			fVec130[IOTA0 & 1023] = fTemp360;
			float fTemp361 = fTemp360 + fVec130[(IOTA0 - 512) & 1023];
			fVec131[IOTA0 & 2047] = fTemp361;
			float fTemp362 = fTemp361 + fVec131[(IOTA0 - 1024) & 2047];
			fVec132[IOTA0 & 4095] = fTemp362;
			float fTemp363 = fTemp362 + fVec132[(IOTA0 - 2048) & 4095];
			fVec133[IOTA0 & 8191] = fTemp363;
			float fTemp364 = fTemp363 + fVec133[(IOTA0 - 4096) & 8191];
			fVec134[IOTA0 & 16383] = fTemp364;
			float fTemp365 = fTemp364 + fVec134[(IOTA0 - 8192) & 16383];
			fVec135[IOTA0 & 32767] = fTemp365;
			float fTemp366 = fTemp365 + fVec135[(IOTA0 - 16384) & 32767];
			fVec136[IOTA0 & 65535] = fTemp366;
			float fTemp367 = fTemp366 + fVec136[(IOTA0 - 32768) & 65535];
			fVec137[IOTA0 & 131071] = fTemp367;
			fVec138[IOTA0 & 262143] = fTemp367 + fVec137[(IOTA0 - 65536) & 131071];
			fVbargraph40 = static_cast<FAUSTFLOAT>(4.3429446f * std::log(std::max<float>(1e-12f, fConst139 * (((iConst140) ? 0.86000985f * fVec117[(IOTA0 - iConst173) & 262143] : 0.0f) + ((iConst172) ? 0.86000985f * fVec116[(IOTA0 - iConst171) & 131071] : 0.0f) + ((iConst170) ? 0.86000985f * fVec115[(IOTA0 - iConst169) & 65535] : 0.0f) + ((iConst168) ? 0.86000985f * fVec114[(IOTA0 - iConst167) & 32767] : 0.0f) + ((iConst166) ? 0.86000985f * fVec113[(IOTA0 - iConst165) & 16383] : 0.0f) + ((iConst164) ? 0.86000985f * fVec112[(IOTA0 - iConst163) & 8191] : 0.0f) + ((iConst162) ? 0.86000985f * fVec111[(IOTA0 - iConst161) & 4095] : 0.0f) + ((iConst160) ? 0.86000985f * fVec110[(IOTA0 - iConst159) & 2047] : 0.0f) + ((iConst158) ? 0.86000985f * fVec109[(IOTA0 - iConst157) & 1023] : 0.0f) + ((iConst156) ? 0.86000985f * fVec108[(IOTA0 - iConst155) & 511] : 0.0f) + ((iConst154) ? 0.86000985f * fVec107[(IOTA0 - iConst153) & 255] : 0.0f) + ((iConst152) ? 0.86000985f * fVec106[(IOTA0 - iConst151) & 127] : 0.0f) + ((iConst150) ? 0.86000985f * fVec105[(IOTA0 - iConst149) & 63] : 0.0f) + ((iConst148) ? 0.86000985f * fVec104[(IOTA0 - iConst147) & 31] : 0.0f) + ((iConst146) ? 0.86000985f * fVec103[iConst145] : 0.0f) + ((iConst144) ? 0.86000985f * fVec102[iConst143] : 0.0f) + ((iConst141) ? 0.86000985f * fTemp333 : 0.0f) + ((iConst142) ? 0.86000985f * fVec101[iConst141] : 0.0f) + ((iConst140) ? 0.86000985f * fVec138[(IOTA0 - iConst173) & 262143] : 0.0f) + ((iConst172) ? 0.86000985f * fVec137[(IOTA0 - iConst171) & 131071] : 0.0f) + ((iConst170) ? 0.86000985f * fVec136[(IOTA0 - iConst169) & 65535] : 0.0f) + ((iConst168) ? 0.86000985f * fVec135[(IOTA0 - iConst167) & 32767] : 0.0f) + ((iConst166) ? 0.86000985f * fVec134[(IOTA0 - iConst165) & 16383] : 0.0f) + ((iConst164) ? 0.86000985f * fVec133[(IOTA0 - iConst163) & 8191] : 0.0f) + ((iConst162) ? 0.86000985f * fVec132[(IOTA0 - iConst161) & 4095] : 0.0f) + ((iConst160) ? 0.86000985f * fVec131[(IOTA0 - iConst159) & 2047] : 0.0f) + ((iConst158) ? 0.86000985f * fVec130[(IOTA0 - iConst157) & 1023] : 0.0f) + ((iConst156) ? 0.86000985f * fVec129[(IOTA0 - iConst155) & 511] : 0.0f) + ((iConst154) ? 0.86000985f * fVec128[(IOTA0 - iConst153) & 255] : 0.0f) + ((iConst152) ? 0.86000985f * fVec127[(IOTA0 - iConst151) & 127] : 0.0f) + ((iConst150) ? 0.86000985f * fVec126[(IOTA0 - iConst149) & 63] : 0.0f) + ((iConst148) ? 0.86000985f * fVec125[(IOTA0 - iConst147) & 31] : 0.0f) + ((iConst146) ? 0.86000985f * fVec124[iConst145] : 0.0f) + ((iConst144) ? 0.86000985f * fVec123[iConst143] : 0.0f) + ((iConst141) ? 0.86000985f * fTemp351 : 0.0f) + ((iConst142) ? 0.86000985f * fVec122[iConst141] : 0.0f)))) + -0.691f);
			output1[i0] = static_cast<FAUSTFLOAT>(fTemp350);
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fRec42[1] = fRec42[0];
			fVec0[1] = fVec0[0];
			fRec39[1] = fRec39[0];
			fRec51[1] = fRec51[0];
			fVec1[1] = fVec1[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			fVec2[1] = fVec2[0];
			fRec53[1] = fRec53[0];
			fRec52[1] = fRec52[0];
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
			fRec46[1] = fRec46[0];
			fRec47[1] = fRec47[0];
			fRec44[1] = fRec44[0];
			fRec43[1] = fRec43[0];
			fVec12[1] = fVec12[0];
			fVec13[1] = fVec13[0];
			fRec63[1] = fRec63[0];
			fRec62[1] = fRec62[0];
			fVec14[1] = fVec14[0];
			fRec61[1] = fRec61[0];
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fRec67[1] = fRec67[0];
			fRec68[1] = fRec68[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fRec76[1] = fRec76[0];
			fRec77[1] = fRec77[0];
			fRec78[1] = fRec78[0];
			fVec15[1] = fVec15[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fVec16[1] = fVec16[0];
			fRec73[1] = fRec73[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			fRec81[1] = fRec81[0];
			fRec82[1] = fRec82[0];
			fRec80[1] = fRec80[0];
			fRec79[1] = fRec79[0];
			fRec86[1] = fRec86[0];
			fRec87[1] = fRec87[0];
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fRec91[1] = fRec91[0];
			fRec92[1] = fRec92[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fRec101[1] = fRec101[0];
			fRec102[1] = fRec102[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec106[1] = fRec106[0];
			fRec107[1] = fRec107[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fRec64[1] = fRec64[0];
			fVec17[1] = fVec17[0];
			fRec56[1] = fRec56[0];
			fVec18[2] = fVec18[1];
			fVec18[1] = fVec18[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec19[j2] = fVec19[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec20[j3] = fVec20[j3 - 1];
			}
			fRec109[1] = fRec109[0];
			fRec111[1] = fRec111[0];
			fVec27[1] = fVec27[0];
			fRec110[1] = fRec110[0];
			fVec28[2] = fVec28[1];
			fVec28[1] = fVec28[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec29[j4] = fVec29[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec30[j5] = fVec30[j5 - 1];
			}
			fRec112[1] = fRec112[0];
			fRec114[1] = fRec114[0];
			fVec37[1] = fVec37[0];
			fRec113[1] = fRec113[0];
			fVec38[2] = fVec38[1];
			fVec38[1] = fVec38[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec39[j6] = fVec39[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec40[j7] = fVec40[j7 - 1];
			}
			fRec115[1] = fRec115[0];
			fRec117[1] = fRec117[0];
			fVec47[1] = fVec47[0];
			fRec116[1] = fRec116[0];
			fVec48[2] = fVec48[1];
			fVec48[1] = fVec48[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec49[j8] = fVec49[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec50[j9] = fVec50[j9 - 1];
			}
			fRec118[1] = fRec118[0];
			fRec120[1] = fRec120[0];
			fVec57[1] = fVec57[0];
			fRec119[1] = fRec119[0];
			fVec58[2] = fVec58[1];
			fVec58[1] = fVec58[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec59[j10] = fVec59[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec60[j11] = fVec60[j11 - 1];
			}
			fRec121[1] = fRec121[0];
			fRec123[1] = fRec123[0];
			fVec67[1] = fVec67[0];
			fRec122[1] = fRec122[0];
			fVec68[2] = fVec68[1];
			fVec68[1] = fVec68[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec69[j12] = fVec69[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec70[j13] = fVec70[j13 - 1];
			}
			fRec124[1] = fRec124[0];
			fRec126[1] = fRec126[0];
			fVec77[1] = fVec77[0];
			fRec125[1] = fRec125[0];
			fVec78[2] = fVec78[1];
			fVec78[1] = fVec78[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec79[j14] = fVec79[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec80[j15] = fVec80[j15 - 1];
			}
			fRec127[1] = fRec127[0];
			fRec129[1] = fRec129[0];
			fVec87[1] = fVec87[0];
			fRec128[1] = fRec128[0];
			fVec88[2] = fVec88[1];
			fVec88[1] = fVec88[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec89[j16] = fVec89[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec90[j17] = fVec90[j17 - 1];
			}
			fRec130[1] = fRec130[0];
			fRec35[1] = fRec35[0];
			fRec36[1] = fRec36[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec23[1] = fRec23[0];
			fRec24[1] = fRec24[0];
			fRec19[1] = fRec19[0];
			fRec20[1] = fRec20[0];
			fRec15[1] = fRec15[0];
			fRec16[1] = fRec16[0];
			fRec11[1] = fRec11[0];
			fRec12[1] = fRec12[0];
			fRec7[1] = fRec7[0];
			fRec8[1] = fRec8[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			iRec3[1] = iRec3[0];
			fRec4[1] = fRec4[0];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fRec0[1] = fRec0[0];
			fVec97[1] = fVec97[0];
			fVec98[1] = fVec98[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fVec99[1] = fVec99[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fVec100[1] = fVec100[0];
			fVec101[2] = fVec101[1];
			fVec101[1] = fVec101[0];
			for (int j18 = 4; j18 > 0; j18 = j18 - 1) {
				fVec102[j18] = fVec102[j18 - 1];
			}
			for (int j19 = 11; j19 > 0; j19 = j19 - 1) {
				fVec103[j19] = fVec103[j19 - 1];
			}
			fVec118[1] = fVec118[0];
			fVec119[1] = fVec119[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fVec120[1] = fVec120[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fVec121[1] = fVec121[0];
			fVec122[2] = fVec122[1];
			fVec122[1] = fVec122[0];
			for (int j20 = 4; j20 > 0; j20 = j20 - 1) {
				fVec123[j20] = fVec123[j20 - 1];
			}
			for (int j21 = 11; j21 > 0; j21 = j21 - 1) {
				fVec124[j21] = fVec124[j21 - 1];
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
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph40 = 0;
        dsp->fVbargraph38 = 0;
        dsp->fVbargraph39 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph4 = 0;
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
            return dsp->fVbargraph1;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph40;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph38;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph39;
        case kParameter_vad_meter:
            return dsp->fVbargraph3;
        case kParameter_leveler_gain:
            return dsp->fVbargraph4;
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
