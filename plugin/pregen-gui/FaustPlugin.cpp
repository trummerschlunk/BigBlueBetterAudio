
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
	FAUSTFLOAT fVslider0;
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
	FAUSTFLOAT fVbargraph1;
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
	FAUSTFLOAT fVbargraph2;
	float fRec64[2];
	FAUSTFLOAT fVslider5;
	float fConst44;
	float fConst45;
	FAUSTFLOAT fVslider6;
	float fRec79[2];
	float fRec78[2];
	FAUSTFLOAT fVbargraph3;
	float fRec80[2];
	FAUSTFLOAT fVbargraph4;
	float fVec11[2];
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
	float fRec86[2];
	float fRec85[2];
	float fVec17[2];
	float fRec84[2];
	float fRec83[2];
	float fRec82[2];
	float fRec81[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fVslider7;
	float fConst87;
	float fRec11[2];
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	FAUSTFLOAT fVbargraph6;
	float fConst88;
	float fRec94[2];
	float fRec95[2];
	float fRec96[2];
	float fVec18[2];
	float fRec93[2];
	float fRec92[2];
	float fVec19[2];
	float fRec91[2];
	float fRec90[2];
	float fRec89[2];
	float fRec88[2];
	FAUSTFLOAT fVbargraph7;
	FAUSTFLOAT fVslider10;
	float fConst89;
	float fRec87[2];
	FAUSTFLOAT fVbargraph8;
	float fConst90;
	float fRec118[2];
	float fRec119[2];
	float fRec114[2];
	float fRec115[2];
	float fRec109[2];
	float fRec110[2];
	float fRec104[2];
	float fRec105[2];
	float fVec20[2];
	float fVec21[2];
	float fRec103[2];
	float fRec102[2];
	float fVec22[2];
	float fRec101[2];
	float fRec100[2];
	float fRec99[2];
	float fRec98[2];
	FAUSTFLOAT fVbargraph9;
	FAUSTFLOAT fVslider11;
	float fConst91;
	float fRec97[2];
	FAUSTFLOAT fVbargraph10;
	float fRec128[2];
	float fRec129[2];
	float fRec130[2];
	float fVec23[2];
	float fRec127[2];
	float fRec126[2];
	float fVec24[2];
	float fRec125[2];
	float fRec124[2];
	float fRec123[2];
	float fRec122[2];
	FAUSTFLOAT fVbargraph11;
	FAUSTFLOAT fVslider12;
	float fRec121[2];
	FAUSTFLOAT fVbargraph12;
	float fConst92;
	float fRec174[2];
	float fRec175[2];
	float fRec170[2];
	float fRec171[2];
	float fRec166[2];
	float fRec167[2];
	float fRec162[2];
	float fRec163[2];
	float fRec157[2];
	float fRec158[2];
	float fRec152[2];
	float fRec153[2];
	float fRec148[2];
	float fRec149[2];
	float fRec143[2];
	float fRec144[2];
	float fRec138[2];
	float fRec139[2];
	float fVec25[2];
	float fVec26[2];
	float fRec137[2];
	float fRec136[2];
	float fVec27[2];
	float fRec135[2];
	float fRec134[2];
	float fRec133[2];
	float fRec132[2];
	FAUSTFLOAT fVbargraph13;
	FAUSTFLOAT fVslider13;
	float fConst93;
	float fRec131[2];
	FAUSTFLOAT fVbargraph14;
	float fConst94;
	float fRec184[2];
	float fRec185[2];
	float fRec186[2];
	float fVec28[2];
	float fRec183[2];
	float fRec182[2];
	float fVec29[2];
	float fRec181[2];
	float fRec180[2];
	float fRec179[2];
	float fRec178[2];
	FAUSTFLOAT fVbargraph15;
	FAUSTFLOAT fVslider14;
	float fConst95;
	float fRec177[2];
	FAUSTFLOAT fVbargraph16;
	float fConst96;
	float fRec208[2];
	float fRec209[2];
	float fRec204[2];
	float fRec205[2];
	float fRec199[2];
	float fRec200[2];
	float fRec194[2];
	float fRec195[2];
	float fVec30[2];
	float fVec31[2];
	float fRec193[2];
	float fRec192[2];
	float fVec32[2];
	float fRec191[2];
	float fRec190[2];
	float fRec189[2];
	float fRec188[2];
	FAUSTFLOAT fVbargraph17;
	FAUSTFLOAT fVslider15;
	float fConst97;
	float fRec187[2];
	FAUSTFLOAT fVbargraph18;
	float fConst98;
	float fRec218[2];
	float fRec219[2];
	float fRec220[2];
	float fVec33[2];
	float fRec217[2];
	float fRec216[2];
	float fVec34[2];
	float fRec215[2];
	float fRec214[2];
	float fRec213[2];
	float fRec212[2];
	FAUSTFLOAT fVbargraph19;
	FAUSTFLOAT fVslider16;
	float fConst99;
	float fRec211[2];
	FAUSTFLOAT fVbargraph20;
	float fRec2[3];
	float fConst100;
	float fConst101;
	float fRec1[2];
	FAUSTFLOAT fVslider17;
	FAUSTFLOAT fVbargraph21;
	float fConst102;
	float fRec221[2];
	FAUSTFLOAT fVbargraph22;
	float fConst103;
	float fRec222[2];
	FAUSTFLOAT fVbargraph23;
	float fConst104;
	float fRec223[2];
	FAUSTFLOAT fVbargraph24;
	float fConst105;
	float fRec224[2];
	FAUSTFLOAT fVbargraph25;
	float fConst106;
	float fRec225[2];
	FAUSTFLOAT fVbargraph26;
	float fConst107;
	float fRec226[2];
	FAUSTFLOAT fVbargraph27;
	float fConst108;
	float fRec227[2];
	FAUSTFLOAT fVbargraph28;
	float fVec35[2048];
	int iConst109;
	float fConst110;
	int iRec230[2];
	float fRec231[2];
	float fConst111;
	float fRec229[2];
	float fConst112;
	float fConst113;
	float fRec228[2];
	FAUSTFLOAT fVbargraph29;
	float fRec0[2];
	FAUSTFLOAT fVbargraph30;
	float fVec36[2];
	float fConst114;
	int iConst115;
	FAUSTFLOAT fVbargraph31;
	float fVec37[2];
	float fVec38[2];
	float fRec235[2];
	float fRec234[2];
	float fVec39[2];
	float fRec233[2];
	float fRec232[2];
	float fVec40[2];
	float fVec41[3];
	int iConst116;
	int iConst117;
	float fVec42[5];
	int iConst118;
	int iConst119;
	float fVec43[12];
	int iConst120;
	int iConst121;
	float fVec44[32];
	int iConst122;
	int iConst123;
	float fVec45[64];
	int iConst124;
	int iConst125;
	float fVec46[128];
	int iConst126;
	int iConst127;
	float fVec47[256];
	int iConst128;
	int iConst129;
	float fVec48[512];
	int iConst130;
	int iConst131;
	float fVec49[1024];
	int iConst132;
	int iConst133;
	float fVec50[2048];
	int iConst134;
	int iConst135;
	float fVec51[4096];
	int iConst136;
	int iConst137;
	float fVec52[8192];
	int iConst138;
	int iConst139;
	float fVec53[16384];
	int iConst140;
	int iConst141;
	float fVec54[32768];
	int iConst142;
	int iConst143;
	float fVec55[65536];
	int iConst144;
	int iConst145;
	float fVec56[131072];
	int iConst146;
	int iConst147;
	float fVec57[262144];
	int iConst148;
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
	float fConst149;
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
		m->declare("basics.lib/version", "1.21.0");
		m->declare("compile_options", "-a /tmp/tmp0s9d_lhm.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		fConst88 = std::exp(-fConst1);
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
		fConst102 = std::exp(-(333.33334f / fConst0));
		fConst103 = std::exp(-(2e+02f / fConst0));
		fConst104 = std::exp(-(5e+01f / fConst0));
		fConst105 = std::exp(-(25.0f / fConst0));
		fConst106 = std::exp(-(16.666666f / fConst0));
		fConst107 = std::exp(-(12.5f / fConst0));
		fConst108 = std::exp(-(33.333332f / fConst0));
		iConst109 = int(fConst8);
		fConst110 = std::exp(-(628.31854f / fConst0));
		fConst111 = 1.0f - fConst110;
		fConst112 = std::exp(-(6.2831855f / fConst0));
		fConst113 = 1.0f - fConst112;
		fConst114 = std::rint(3.0f * fConst0);
		iConst115 = int(std::floor(0.5f * fConst114)) % 2;
		iConst116 = int(std::floor(fConst114)) % 2;
		iConst117 = int(std::floor(0.25f * fConst114)) % 2;
		iConst118 = iConst116 + 2 * iConst115;
		iConst119 = int(std::floor(0.125f * fConst114)) % 2;
		iConst120 = iConst118 + 4 * iConst117;
		iConst121 = int(std::floor(0.0625f * fConst114)) % 2;
		iConst122 = iConst120 + 8 * iConst119;
		iConst123 = int(std::floor(0.03125f * fConst114)) % 2;
		iConst124 = iConst122 + 16 * iConst121;
		iConst125 = int(std::floor(0.015625f * fConst114)) % 2;
		iConst126 = iConst124 + 32 * iConst123;
		iConst127 = int(std::floor(0.0078125f * fConst114)) % 2;
		iConst128 = iConst126 + 64 * iConst125;
		iConst129 = int(std::floor(0.00390625f * fConst114)) % 2;
		iConst130 = iConst128 + 128 * iConst127;
		iConst131 = int(std::floor(0.001953125f * fConst114)) % 2;
		iConst132 = iConst130 + 256 * iConst129;
		iConst133 = int(std::floor(0.0009765625f * fConst114)) % 2;
		iConst134 = iConst132 + 512 * iConst131;
		iConst135 = int(std::floor(0.00048828125f * fConst114)) % 2;
		iConst136 = iConst134 + 1024 * iConst133;
		iConst137 = int(std::floor(0.00024414062f * fConst114)) % 2;
		iConst138 = iConst136 + 2048 * iConst135;
		iConst139 = int(std::floor(0.00012207031f * fConst114)) % 2;
		iConst140 = iConst138 + 4096 * iConst137;
		iConst141 = int(std::floor(6.1035156e-05f * fConst114)) % 2;
		iConst142 = iConst140 + 8192 * iConst139;
		iConst143 = int(std::floor(3.0517578e-05f * fConst114)) % 2;
		iConst144 = iConst142 + 16384 * iConst141;
		iConst145 = int(std::floor(1.5258789e-05f * fConst114)) % 2;
		iConst146 = iConst144 + 32768 * iConst143;
		iConst147 = int(std::floor(7.6293945e-06f * fConst114)) % 2;
		iConst148 = iConst146 + 65536 * iConst145;
		fConst149 = 1.0f / std::max<float>(fConst114, 1.1920929e-07f);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-23.0f);
		fVslider1 = FAUSTFLOAT(0.9f);
		fVslider2 = FAUSTFLOAT(0.1f);
		fVslider3 = FAUSTFLOAT(1.0f);
		fVslider4 = FAUSTFLOAT(1.0f);
		fVslider5 = FAUSTFLOAT(42.0f);
		fVslider6 = FAUSTFLOAT(0.0f);
		fVslider7 = FAUSTFLOAT(-4.0f);
		fVslider8 = FAUSTFLOAT(1e+02f);
		fVslider9 = FAUSTFLOAT(5e+01f);
		fVslider10 = FAUSTFLOAT(-7.0f);
		fVslider11 = FAUSTFLOAT(-1e+01f);
		fVslider12 = FAUSTFLOAT(-9.0f);
		fVslider13 = FAUSTFLOAT(-8.0f);
		fVslider14 = FAUSTFLOAT(-5.0f);
		fVslider15 = FAUSTFLOAT(-5.0f);
		fVslider16 = FAUSTFLOAT(-1e+01f);
		fVslider17 = FAUSTFLOAT(8e+01f);
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
			fRec79[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec78[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec80[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec11[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec77[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fVec12[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec59[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec60[l27] = 0.0f;
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
			fRec42[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec43[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec37[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec38[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec32[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec33[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec28[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec29[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec23[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec24[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec18[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec19[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec13[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fVec14[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec17[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec16[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fVec15[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec15[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec14[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec13[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec12[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fVec16[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec86[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec85[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fVec17[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec84[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec83[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec82[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec81[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec11[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec94[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec95[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec96[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fVec18[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec93[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec92[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fVec19[l70] = 0.0f;
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
			fRec88[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec87[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec118[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec119[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec114[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec115[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec109[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec110[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec104[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec105[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec20[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fVec21[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec103[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec102[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec22[l88] = 0.0f;
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
			fRec98[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec97[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec128[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec129[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec130[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fVec23[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec127[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec126[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fVec24[l100] = 0.0f;
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
			fRec122[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec121[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec174[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec175[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec170[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec171[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec166[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec167[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec162[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec163[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec157[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec158[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec152[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec153[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec148[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec149[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec143[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec144[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec138[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec139[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec25[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec26[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec137[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec136[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fVec27[l128] = 0.0f;
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
			fRec132[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec131[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec184[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec185[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec186[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec28[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec183[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec182[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fVec29[l140] = 0.0f;
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
			fRec178[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec177[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec208[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec209[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec204[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec205[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec199[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec200[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec194[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec195[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec30[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fVec31[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec193[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec192[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fVec32[l158] = 0.0f;
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
			fRec188[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec187[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec218[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec219[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec220[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fVec33[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec217[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec216[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fVec34[l170] = 0.0f;
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
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec212[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec211[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 3; l176 = l176 + 1) {
			fRec2[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec1[l177] = 0.0f;
		}
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec221[l178] = 0.0f;
		}
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec222[l179] = 0.0f;
		}
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fRec223[l180] = 0.0f;
		}
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec224[l181] = 0.0f;
		}
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fRec225[l182] = 0.0f;
		}
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			fRec226[l183] = 0.0f;
		}
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec227[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2048; l185 = l185 + 1) {
			fVec35[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			iRec230[l186] = 0;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec231[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec229[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec228[l189] = 0.0f;
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
			fVec38[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec235[l194] = 0.0f;
		}
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec234[l195] = 0.0f;
		}
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fVec39[l196] = 0.0f;
		}
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fRec233[l197] = 0.0f;
		}
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec232[l198] = 0.0f;
		}
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fVec40[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 3; l200 = l200 + 1) {
			fVec41[l200] = 0.0f;
		}
		for (int l201 = 0; l201 < 5; l201 = l201 + 1) {
			fVec42[l201] = 0.0f;
		}
		for (int l202 = 0; l202 < 12; l202 = l202 + 1) {
			fVec43[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 32; l203 = l203 + 1) {
			fVec44[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 64; l204 = l204 + 1) {
			fVec45[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 128; l205 = l205 + 1) {
			fVec46[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 256; l206 = l206 + 1) {
			fVec47[l206] = 0.0f;
		}
		for (int l207 = 0; l207 < 512; l207 = l207 + 1) {
			fVec48[l207] = 0.0f;
		}
		for (int l208 = 0; l208 < 1024; l208 = l208 + 1) {
			fVec49[l208] = 0.0f;
		}
		for (int l209 = 0; l209 < 2048; l209 = l209 + 1) {
			fVec50[l209] = 0.0f;
		}
		for (int l210 = 0; l210 < 4096; l210 = l210 + 1) {
			fVec51[l210] = 0.0f;
		}
		for (int l211 = 0; l211 < 8192; l211 = l211 + 1) {
			fVec52[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 16384; l212 = l212 + 1) {
			fVec53[l212] = 0.0f;
		}
		for (int l213 = 0; l213 < 32768; l213 = l213 + 1) {
			fVec54[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 65536; l214 = l214 + 1) {
			fVec55[l214] = 0.0f;
		}
		for (int l215 = 0; l215 < 131072; l215 = l215 + 1) {
			fVec56[l215] = 0.0f;
		}
		for (int l216 = 0; l216 < 262144; l216 = l216 + 1) {
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
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph19, "1", "");
		ui_interface->declare(&fVbargraph19, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph19, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph19, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph17, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph17, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph15, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph15, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph13, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph13, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph11, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph11, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph9, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph7, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph5, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph20, "1", "");
		ui_interface->declare(&fVbargraph20, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph18, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph12, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph10, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fVslider6, "1", "");
		ui_interface->declare(&fVslider6, "symbol", "pre_gain");
		ui_interface->declare(&fVslider6, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider6, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider8, "2", "");
		ui_interface->declare(&fVslider8, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider8, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph29, "99", "");
		ui_interface->declare(&fVbargraph29, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph29, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph4, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph4, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph3, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph3, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph32, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph32, "unit", "LUFS");
		ui_interface->addVerticalBargraph("lufs_out", &fVbargraph32, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph30, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph31, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph31, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph1, "symbol", "vad_meter");
		ui_interface->addVerticalBargraph("vad_meter", &fVbargraph1, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "LUFS");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-23.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVbargraph2, "8", "");
		ui_interface->declare(&fVbargraph2, "symbol", "leveler_gain");
		ui_interface->declare(&fVbargraph2, "unit", "dB");
		ui_interface->addVerticalBargraph("gain", &fVbargraph2, FAUSTFLOAT(-5e+01f), FAUSTFLOAT(5e+01f));
		ui_interface->declare(&fVslider4, "symbol", "leveler_scale");
		ui_interface->addVerticalSlider("leveler_scale", &fVslider4, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVbargraph28, "2", "");
		ui_interface->declare(&fVbargraph28, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph28, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph28, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph27, "2", "");
		ui_interface->declare(&fVbargraph27, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph27, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph27, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph26, "2", "");
		ui_interface->declare(&fVbargraph26, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph25, "2", "");
		ui_interface->declare(&fVbargraph25, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph25, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph24, "2", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph23, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph22, "2", "");
		ui_interface->declare(&fVbargraph22, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph22, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph21, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVslider17, "symbol", "mb_strength");
		ui_interface->declare(&fVslider17, "unit", "%");
		ui_interface->addVerticalSlider("mb_strength", &fVslider17, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider5, "scale", "log");
		ui_interface->declare(&fVslider5, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider5, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider1, "symbol", "vad_gate_thresh");
		ui_interface->addVerticalSlider("vad_g_thr", &fVslider1, FAUSTFLOAT(0.9f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVbargraph0, "symbol", "vad_smoothing_meter");
		ui_interface->addVerticalBargraph("vad_smoo", &fVbargraph0, FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider2, "symbol", "vad_smoothing_time");
		ui_interface->addVerticalSlider("vad_smoo_t", &fVslider2, FAUSTFLOAT(0.1f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fVslider0);
		float fSlow1 = fSlow0 + -12.5f;
		float fSlow2 = float(fVslider1);
		float fSlow3 = float(fVslider2);
		int iSlow4 = std::fabs(fSlow3) < 1.1920929e-07f;
		float fSlow5 = ((iSlow4) ? 0.0f : std::exp(-(fConst6 / ((iSlow4) ? 1.0f : fSlow3))));
		float fSlow6 = float(fVslider3) * (1.0f - fSlow5);
		float fSlow7 = float(fVslider4);
		float fSlow8 = std::tan(fConst7 * float(fVslider5));
		float fSlow9 = 1.0f / fSlow8;
		float fSlow10 = 1.0f - fSlow9;
		float fSlow11 = fConst44 * std::pow(1e+01f, 0.05f * float(fVslider6));
		float fSlow12 = 0.5f / fSlow8;
		float fSlow13 = 1.0f / (fSlow9 + 1.0f);
		float fSlow14 = float(fVslider7);
		float fSlow15 = float(fVslider8);
		float fSlow16 = 5e-06f * float(fVslider9) * fSlow15;
		float fSlow17 = float(fVslider10);
		float fSlow18 = float(fVslider11);
		float fSlow19 = float(fVslider12);
		float fSlow20 = float(fVslider13);
		float fSlow21 = float(fVslider14);
		float fSlow22 = float(fVslider15);
		float fSlow23 = float(fVslider16);
		float fSlow24 = fSlow0 + -13.5f;
		float fSlow25 = 0.0001f * fSlow15 * float(fVslider17);
		float fSlow26 = fSlow0 + -11.5f;
		float fSlow27 = fSlow0 + -10.5f;
		float fSlow28 = fSlow0 + -7.5f;
		float fSlow29 = fSlow0 + -8.5f;
		float fSlow30 = fSlow0 + -6.5f;
		float fSlow31 = fSlow0 + -5.5f;
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec72[0] = fSlow6 + fSlow5 * fRec72[1];
			fVbargraph0 = FAUSTFLOAT(fRec72[0]);
			float fTemp0 = fRec72[0];
			float fTemp1 = fTemp0 * float(fTemp0 > fSlow2);
			fVbargraph1 = FAUSTFLOAT(fTemp1);
			float fTemp2 = fTemp1;
			float fTemp3 = std::tan(fConst7 * std::min<float>(fConst4, fTemp2 * (fConst5 * std::fabs(fRec65[1]) + 0.1316f)));
			float fTemp4 = fTemp3 + 2.0f;
			float fTemp5 = fTemp3 * fTemp4 + 1.0f;
			fVec0[0] = fConst18 * fRec75[1] - fConst16 * fRec2[2];
			fRec76[0] = fConst21 * (fConst20 * fRec2[2] - (fVec0[1] + fConst15 * fRec76[1]) + fConst14 * fRec2[1]);
			fRec75[0] = fRec76[0];
			fVec1[0] = 0.50032705f * fRec75[1] - fConst26 * fRec73[1];
			fRec74[0] = fConst27 * (fVec1[1] - fConst24 * fRec74[1] - 1.0006541f * fRec75[1] + 0.50032705f * fRec75[0]);
			fRec73[0] = fRec74[0];
			float fTemp6 = mydsp_faustpower2_f(fRec73[0]);
			fVec2[0] = fTemp6;
			float fTemp7 = fTemp6 + fVec2[1];
			fVec3[0] = fTemp7;
			float fTemp8 = fTemp7 + fVec3[2];
			fVec4[0] = fTemp8;
			float fTemp9 = fTemp8 + fVec4[4];
			fVec5[0] = fTemp9;
			float fTemp10 = fTemp9 + fVec5[8];
			fVec6[IOTA0 & 31] = fTemp10;
			float fTemp11 = fTemp10 + fVec6[(IOTA0 - 16) & 31];
			fVec7[IOTA0 & 63] = fTemp11;
			float fTemp12 = fTemp11 + fVec7[(IOTA0 - 32) & 63];
			fVec8[IOTA0 & 127] = fTemp12;
			float fTemp13 = fTemp12 + fVec8[(IOTA0 - 64) & 127];
			fVec9[IOTA0 & 255] = fTemp13;
			fVec10[IOTA0 & 511] = fTemp13 + fVec9[(IOTA0 - 128) & 255];
			float fTemp14 = std::max<float>(-2e+01f, std::min<float>(2e+01f, fSlow0 + fRec64[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst43 * (((iConst41) ? 0.86000985f * fVec10[(IOTA0 - iConst42) & 511] : 0.0f) + ((iConst39) ? 0.86000985f * fVec9[(IOTA0 - iConst40) & 255] : 0.0f) + ((iConst37) ? 0.86000985f * fVec8[(IOTA0 - iConst38) & 127] : 0.0f) + ((iConst35) ? 0.86000985f * fVec7[(IOTA0 - iConst36) & 63] : 0.0f) + ((iConst33) ? 0.86000985f * fVec6[(IOTA0 - iConst34) & 31] : 0.0f) + ((iConst31) ? 0.86000985f * fVec5[iConst32] : 0.0f) + ((iConst29) ? 0.86000985f * fVec4[iConst30] : 0.0f) + ((iConst28) ? 0.86000985f * fTemp6 : 0.0f) + ((iConst10) ? 0.86000985f * fVec3[iConst28] : 0.0f))))))) - (fRec67[1] * fTemp4 + fRec68[1]);
			float fTemp15 = fTemp3 * fTemp14 / fTemp5;
			fRec67[0] = fRec67[1] + 2.0f * fTemp15;
			float fTemp16 = fRec67[1] + fTemp15;
			float fTemp17 = fTemp3 * fTemp16;
			fRec68[0] = fRec68[1] + 2.0f * fTemp17;
			float fRec69 = fTemp16;
			float fRec70 = fTemp14 / fTemp5;
			float fRec71 = fRec68[1] + fTemp17;
			fRec65[0] = fRec69;
			float fRec66 = fRec71;
			float fTemp18 = fSlow7 * fRec66;
			fVbargraph2 = FAUSTFLOAT(fTemp18);
			fRec64[0] = fTemp18;
			fRec79[0] = fSlow11 + fConst45 * fRec79[1];
			float fTemp19 = float(input1[i0]) * fRec79[0];
			fRec78[0] = std::max<float>(fRec78[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp19))))));
			fVbargraph3 = FAUSTFLOAT(fRec78[0]);
			float fTemp20 = float(input0[i0]) * fRec79[0];
			fRec80[0] = std::max<float>(fRec80[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp20))))));
			fVbargraph4 = FAUSTFLOAT(fRec80[0]);
			float fTemp21 = fTemp20 + fTemp19;
			fVec11[0] = fTemp21;
			fRec77[0] = fSlow13 * (fSlow12 * (fTemp21 - fVec11[1]) - fSlow10 * fRec77[1]);
			float fTemp22 = fRec77[0] * std::pow(1e+01f, 0.05f * fRec64[0]);
			fVec12[0] = fTemp22;
			float fTemp23 = fRec59[1] + fConst46 * (fTemp22 - fRec60[1]);
			fRec59[0] = fConst48 * fTemp23 - fRec59[1];
			float fTemp24 = fRec60[1] + fConst49 * fTemp23;
			fRec60[0] = 2.0f * fTemp24 - fRec60[1];
			float fRec61 = fTemp22;
			float fRec62 = fConst50 * fTemp23;
			float fRec63 = fTemp24;
			float fTemp25 = fRec63 + 1.4142135f * fRec62;
			float fTemp26 = fRec54[1] + fConst46 * (fRec61 - (fTemp25 + fRec55[1]));
			fRec54[0] = fConst48 * fTemp26 - fRec54[1];
			float fTemp27 = fRec55[1] + fConst49 * fTemp26;
			fRec55[0] = 2.0f * fTemp27 - fRec55[1];
			float fRec56 = fRec61 - fTemp25;
			float fRec57 = fConst50 * fTemp26;
			float fRec58 = fTemp27;
			float fTemp28 = fRec58 + 1.4142135f * fRec57;
			float fTemp29 = fRec50[1] + fConst51 * (fRec56 - (fTemp28 + fRec51[1]));
			fRec50[0] = fConst53 * fTemp29 - fRec50[1];
			float fTemp30 = fRec51[1] + fConst54 * fTemp29;
			fRec51[0] = 2.0f * fTemp30 - fRec51[1];
			float fRec52 = fRec56 - fTemp28;
			float fRec53 = fConst55 * fTemp29;
			float fTemp31 = 2.828427f * fRec53;
			float fTemp32 = fRec46[1] + fConst56 * (fRec52 - (fTemp31 + fRec47[1]));
			fRec46[0] = fConst58 * fTemp32 - fRec46[1];
			float fTemp33 = fRec47[1] + fConst59 * fTemp32;
			fRec47[0] = 2.0f * fTemp33 - fRec47[1];
			float fRec48 = fRec52 - fTemp31;
			float fRec49 = fConst60 * fTemp32;
			float fTemp34 = 2.828427f * fRec49;
			float fTemp35 = fRec42[1] + fConst61 * (fRec48 - (fTemp34 + fRec43[1]));
			fRec42[0] = fConst63 * fTemp35 - fRec42[1];
			float fTemp36 = fRec43[1] + fConst64 * fTemp35;
			fRec43[0] = 2.0f * fTemp36 - fRec43[1];
			float fRec44 = fRec48 - fTemp34;
			float fRec45 = fConst65 * fTemp35;
			float fTemp37 = 2.828427f * fRec45;
			float fTemp38 = fRec37[1] + fConst66 * (fRec44 - (fTemp37 + fRec38[1]));
			fRec37[0] = fConst68 * fTemp38 - fRec37[1];
			float fTemp39 = fRec38[1] + fConst69 * fTemp38;
			fRec38[0] = 2.0f * fTemp39 - fRec38[1];
			float fRec39 = fRec44 - fTemp37;
			float fRec40 = fConst70 * fTemp38;
			float fRec41 = fTemp39;
			float fTemp40 = fRec41 + 1.4142135f * fRec40;
			float fTemp41 = fRec32[1] + fConst66 * (fRec39 - (fTemp40 + fRec33[1]));
			fRec32[0] = fConst68 * fTemp41 - fRec32[1];
			float fTemp42 = fRec33[1] + fConst69 * fTemp41;
			fRec33[0] = 2.0f * fTemp42 - fRec33[1];
			float fRec34 = fRec39 - fTemp40;
			float fRec35 = fConst70 * fTemp41;
			float fRec36 = fTemp42;
			float fTemp43 = fRec36 + 1.4142135f * fRec35;
			float fTemp44 = fRec28[1] + fConst71 * (fRec34 - (fTemp43 + fRec29[1]));
			fRec28[0] = fConst73 * fTemp44 - fRec28[1];
			float fTemp45 = fRec29[1] + fConst74 * fTemp44;
			fRec29[0] = 2.0f * fTemp45 - fRec29[1];
			float fRec30 = fRec34 - fTemp43;
			float fRec31 = fConst75 * fTemp44;
			float fTemp46 = 2.828427f * fRec31;
			float fTemp47 = fRec23[1] + fConst76 * (fRec30 - (fTemp46 + fRec24[1]));
			fRec23[0] = fConst78 * fTemp47 - fRec23[1];
			float fTemp48 = fRec24[1] + fConst79 * fTemp47;
			fRec24[0] = 2.0f * fTemp48 - fRec24[1];
			float fRec25 = fRec30 - fTemp46;
			float fRec26 = fConst80 * fTemp47;
			float fRec27 = fTemp48;
			float fTemp49 = fRec27 + 1.4142135f * fRec26;
			float fTemp50 = fRec18[1] + fConst76 * (fRec25 - (fTemp49 + fRec19[1]));
			fRec18[0] = fConst78 * fTemp50 - fRec18[1];
			float fTemp51 = fRec19[1] + fConst79 * fTemp50;
			fRec19[0] = 2.0f * fTemp51 - fRec19[1];
			float fRec20 = fRec25 - fTemp49;
			float fRec21 = fConst80 * fTemp50;
			float fRec22 = fTemp51;
			float fTemp52 = fRec20 - (fRec22 + 1.4142135f * fRec21);
			fVec13[0] = fTemp52;
			fVec14[0] = fConst83 * fVec13[1] - fConst18 * fRec16[1];
			fRec17[0] = fConst21 * (fVec14[1] - fConst15 * fRec17[1] + fConst82 * fVec13[1] + fConst81 * fTemp52);
			fRec16[0] = fRec17[0];
			fVec15[0] = 0.50032705f * fRec16[1] - fConst26 * fRec14[1];
			fRec15[0] = fConst27 * (fVec15[1] - fConst24 * fRec15[1] - 1.0006541f * fRec16[1] + 0.50032705f * fRec16[0]);
			fRec14[0] = fRec15[0];
			float fTemp53 = std::fabs(0.92736715f * fRec14[0]);
			fRec13[0] = std::max<float>(fTemp53, fConst84 * fRec13[1] + fConst85 * fTemp53);
			fRec12[0] = fConst86 * fRec13[0] + fConst3 * fRec12[1];
			fVec16[0] = fConst18 * fRec85[1] - fConst16 * fVec12[1];
			fRec86[0] = fConst21 * (fConst20 * fVec12[1] - (fVec16[1] + fConst15 * fRec86[1]) + fConst14 * fTemp22);
			fRec85[0] = fRec86[0];
			fVec17[0] = 0.50032705f * fRec85[1] - fConst26 * fRec83[1];
			fRec84[0] = fConst27 * (fVec17[1] - fConst24 * fRec84[1] - 1.0006541f * fRec85[1] + 0.50032705f * fRec85[0]);
			fRec83[0] = fRec84[0];
			float fTemp54 = std::fabs(0.92736715f * fRec83[0]);
			fRec82[0] = std::max<float>(fTemp54, fConst84 * fRec82[1] + fConst85 * fTemp54);
			fRec81[0] = fConst86 * fRec82[0] + fConst3 * fRec81[1];
			float fTemp55 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec81[0])));
			float fTemp56 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec12[0]))));
			fVbargraph5 = FAUSTFLOAT(-fTemp56);
			fRec11[0] = fConst87 * (fSlow14 - -fTemp56) + fConst2 * fRec11[1];
			float fTemp57 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec11[0])));
			fVbargraph6 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp57)));
			float fTemp58 = fTemp52 * fTemp57;
			float fTemp59 = fRec94[1] + fConst76 * (fRec27 - fRec95[1]);
			fRec94[0] = fConst78 * fTemp59 - fRec94[1];
			float fTemp60 = fRec95[1] + fConst79 * fTemp59;
			fRec95[0] = 2.0f * fTemp60 - fRec95[1];
			fRec96[0] = fTemp60;
			fVec18[0] = fConst83 * fRec96[1] - fConst18 * fRec92[1];
			fRec93[0] = fConst21 * (fVec18[1] - fConst15 * fRec93[1] + fConst82 * fRec96[1] + fConst81 * fRec96[0]);
			fRec92[0] = fRec93[0];
			fVec19[0] = 0.50032705f * fRec92[1] - fConst26 * fRec90[1];
			fRec91[0] = fConst27 * (fVec19[1] - fConst24 * fRec91[1] - 1.0006541f * fRec92[1] + 0.50032705f * fRec92[0]);
			fRec90[0] = fRec91[0];
			float fTemp61 = std::fabs(0.92736715f * fRec90[0]);
			fRec89[0] = std::max<float>(fTemp61, fConst84 * fRec89[1] + fConst85 * fTemp61);
			fRec88[0] = fConst86 * fRec89[0] + fConst3 * fRec88[1];
			float fTemp62 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec88[0]))));
			fVbargraph7 = FAUSTFLOAT(-fTemp62);
			fRec87[0] = fConst89 * (fSlow17 - -fTemp62) + fConst88 * fRec87[1];
			float fTemp63 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec87[0])));
			fVbargraph8 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp63)));
			float fTemp64 = fRec96[0] * fTemp63;
			float fTemp65 = fRec118[1] + fConst66 * (fRec41 - fRec119[1]);
			fRec118[0] = fConst68 * fTemp65 - fRec118[1];
			float fTemp66 = fRec119[1] + fConst69 * fTemp65;
			fRec119[0] = 2.0f * fTemp66 - fRec119[1];
			float fRec120 = fTemp66;
			float fTemp67 = fRec114[1] + fConst76 * (fRec120 - fRec115[1]);
			fRec114[0] = fConst78 * fTemp67 - fRec114[1];
			float fTemp68 = fRec115[1] + fConst79 * fTemp67;
			fRec115[0] = 2.0f * fTemp68 - fRec115[1];
			float fRec116 = fRec120;
			float fRec117 = fConst80 * fTemp67;
			float fTemp69 = 2.828427f * fRec117;
			float fTemp70 = fRec109[1] + fConst71 * (fRec116 - (fTemp69 + fRec110[1]));
			fRec109[0] = fConst73 * fTemp70 - fRec109[1];
			float fTemp71 = fRec110[1] + fConst74 * fTemp70;
			fRec110[0] = 2.0f * fTemp71 - fRec110[1];
			float fRec111 = fRec116 - fTemp69;
			float fRec112 = fConst75 * fTemp70;
			float fRec113 = fTemp71;
			float fTemp72 = fRec113 + 1.4142135f * fRec112;
			float fTemp73 = fRec104[1] + fConst71 * (fRec111 - (fTemp72 + fRec105[1]));
			fRec104[0] = fConst73 * fTemp73 - fRec104[1];
			float fTemp74 = fRec105[1] + fConst74 * fTemp73;
			fRec105[0] = 2.0f * fTemp74 - fRec105[1];
			float fRec106 = fRec111 - fTemp72;
			float fRec107 = fConst75 * fTemp73;
			float fRec108 = fTemp74;
			float fTemp75 = fRec106 - (fRec108 + 1.4142135f * fRec107);
			fVec20[0] = fTemp75;
			fVec21[0] = fConst83 * fVec20[1] - fConst18 * fRec102[1];
			fRec103[0] = fConst21 * (fVec21[1] - fConst15 * fRec103[1] + fConst82 * fVec20[1] + fConst81 * fTemp75);
			fRec102[0] = fRec103[0];
			fVec22[0] = 0.50032705f * fRec102[1] - fConst26 * fRec100[1];
			fRec101[0] = fConst27 * (fVec22[1] - fConst24 * fRec101[1] - 1.0006541f * fRec102[1] + 0.50032705f * fRec102[0]);
			fRec100[0] = fRec101[0];
			float fTemp76 = std::fabs(0.92736715f * fRec100[0]);
			fRec99[0] = std::max<float>(fTemp76, fConst84 * fRec99[1] + fConst85 * fTemp76);
			fRec98[0] = fConst86 * fRec99[0] + fConst3 * fRec98[1];
			float fTemp77 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec98[0]))));
			fVbargraph9 = FAUSTFLOAT(-fTemp77);
			fRec97[0] = fConst91 * (fSlow18 - -fTemp77) + fConst90 * fRec97[1];
			float fTemp78 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec97[0])));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp78)));
			float fTemp79 = fTemp75 * fTemp78;
			float fTemp80 = fRec128[1] + fConst71 * (fRec113 - fRec129[1]);
			fRec128[0] = fConst73 * fTemp80 - fRec128[1];
			float fTemp81 = fRec129[1] + fConst74 * fTemp80;
			fRec129[0] = 2.0f * fTemp81 - fRec129[1];
			fRec130[0] = fTemp81;
			fVec23[0] = fConst83 * fRec130[1] - fConst18 * fRec126[1];
			fRec127[0] = fConst21 * (fVec23[1] - fConst15 * fRec127[1] + fConst82 * fRec130[1] + fConst81 * fRec130[0]);
			fRec126[0] = fRec127[0];
			fVec24[0] = 0.50032705f * fRec126[1] - fConst26 * fRec124[1];
			fRec125[0] = fConst27 * (fVec24[1] - fConst24 * fRec125[1] - 1.0006541f * fRec126[1] + 0.50032705f * fRec126[0]);
			fRec124[0] = fRec125[0];
			float fTemp82 = std::fabs(0.92736715f * fRec124[0]);
			fRec123[0] = std::max<float>(fTemp82, fConst84 * fRec123[1] + fConst85 * fTemp82);
			fRec122[0] = fConst86 * fRec123[0] + fConst3 * fRec122[1];
			float fTemp83 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec122[0]))));
			fVbargraph11 = FAUSTFLOAT(-fTemp83);
			fRec121[0] = fConst85 * (fSlow19 - -fTemp83) + fConst84 * fRec121[1];
			float fTemp84 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec121[0])));
			fVbargraph12 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp84)));
			float fTemp85 = fRec130[0] * fTemp84;
			float fTemp86 = fRec174[1] + fConst46 * (fRec63 - fRec175[1]);
			fRec174[0] = fConst48 * fTemp86 - fRec174[1];
			float fTemp87 = fRec175[1] + fConst49 * fTemp86;
			fRec175[0] = 2.0f * fTemp87 - fRec175[1];
			float fRec176 = fTemp87;
			float fTemp88 = fRec170[1] + fConst66 * (fRec176 - fRec171[1]);
			fRec170[0] = fConst68 * fTemp88 - fRec170[1];
			float fTemp89 = fRec171[1] + fConst69 * fTemp88;
			fRec171[0] = 2.0f * fTemp89 - fRec171[1];
			float fRec172 = fRec176;
			float fRec173 = fConst70 * fTemp88;
			float fTemp90 = 2.828427f * fRec173;
			float fTemp91 = fRec166[1] + fConst71 * (fRec172 - (fTemp90 + fRec167[1]));
			fRec166[0] = fConst73 * fTemp91 - fRec166[1];
			float fTemp92 = fRec167[1] + fConst74 * fTemp91;
			fRec167[0] = 2.0f * fTemp92 - fRec167[1];
			float fRec168 = fRec172 - fTemp90;
			float fRec169 = fConst75 * fTemp91;
			float fTemp93 = 2.828427f * fRec169;
			float fTemp94 = fRec162[1] + fConst76 * (fRec168 - (fTemp93 + fRec163[1]));
			fRec162[0] = fConst78 * fTemp94 - fRec162[1];
			float fTemp95 = fRec163[1] + fConst79 * fTemp94;
			fRec163[0] = 2.0f * fTemp95 - fRec163[1];
			float fRec164 = fRec168 - fTemp93;
			float fRec165 = fConst80 * fTemp94;
			float fTemp96 = 2.828427f * fRec165;
			float fTemp97 = fRec157[1] + fConst51 * (fRec164 - (fTemp96 + fRec158[1]));
			fRec157[0] = fConst53 * fTemp97 - fRec157[1];
			float fTemp98 = fRec158[1] + fConst54 * fTemp97;
			fRec158[0] = 2.0f * fTemp98 - fRec158[1];
			float fRec159 = fRec164 - fTemp96;
			float fRec160 = fConst55 * fTemp97;
			float fRec161 = fTemp98;
			float fTemp99 = fRec161 + 1.4142135f * fRec160;
			float fTemp100 = fRec152[1] + fConst51 * (fRec159 - (fTemp99 + fRec153[1]));
			fRec152[0] = fConst53 * fTemp100 - fRec152[1];
			float fTemp101 = fRec153[1] + fConst54 * fTemp100;
			fRec153[0] = 2.0f * fTemp101 - fRec153[1];
			float fRec154 = fRec159 - fTemp99;
			float fRec155 = fConst55 * fTemp100;
			float fRec156 = fTemp101;
			float fTemp102 = fRec156 + 1.4142135f * fRec155;
			float fTemp103 = fRec148[1] + fConst56 * (fRec154 - (fTemp102 + fRec149[1]));
			fRec148[0] = fConst58 * fTemp103 - fRec148[1];
			float fTemp104 = fRec149[1] + fConst59 * fTemp103;
			fRec149[0] = 2.0f * fTemp104 - fRec149[1];
			float fRec150 = fRec154 - fTemp102;
			float fRec151 = fConst60 * fTemp103;
			float fTemp105 = 2.828427f * fRec151;
			float fTemp106 = fRec143[1] + fConst61 * (fRec150 - (fTemp105 + fRec144[1]));
			fRec143[0] = fConst63 * fTemp106 - fRec143[1];
			float fTemp107 = fRec144[1] + fConst64 * fTemp106;
			fRec144[0] = 2.0f * fTemp107 - fRec144[1];
			float fRec145 = fRec150 - fTemp105;
			float fRec146 = fConst65 * fTemp106;
			float fRec147 = fTemp107;
			float fTemp108 = fRec147 + 1.4142135f * fRec146;
			float fTemp109 = fRec138[1] + fConst61 * (fRec145 - (fTemp108 + fRec139[1]));
			fRec138[0] = fConst63 * fTemp109 - fRec138[1];
			float fTemp110 = fRec139[1] + fConst64 * fTemp109;
			fRec139[0] = 2.0f * fTemp110 - fRec139[1];
			float fRec140 = fRec145 - fTemp108;
			float fRec141 = fConst65 * fTemp109;
			float fRec142 = fTemp110;
			float fTemp111 = fRec140 - (fRec142 + 1.4142135f * fRec141);
			fVec25[0] = fTemp111;
			fVec26[0] = fConst83 * fVec25[1] - fConst18 * fRec136[1];
			fRec137[0] = fConst21 * (fVec26[1] - fConst15 * fRec137[1] + fConst82 * fVec25[1] + fConst81 * fTemp111);
			fRec136[0] = fRec137[0];
			fVec27[0] = 0.50032705f * fRec136[1] - fConst26 * fRec134[1];
			fRec135[0] = fConst27 * (fVec27[1] - fConst24 * fRec135[1] - 1.0006541f * fRec136[1] + 0.50032705f * fRec136[0]);
			fRec134[0] = fRec135[0];
			float fTemp112 = std::fabs(0.92736715f * fRec134[0]);
			fRec133[0] = std::max<float>(fTemp112, fConst84 * fRec133[1] + fConst85 * fTemp112);
			fRec132[0] = fConst86 * fRec133[0] + fConst3 * fRec132[1];
			float fTemp113 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec132[0]))));
			fVbargraph13 = FAUSTFLOAT(-fTemp113);
			fRec131[0] = fConst93 * (fSlow20 - -fTemp113) + fConst92 * fRec131[1];
			float fTemp114 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec131[0])));
			fVbargraph14 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp114)));
			float fTemp115 = fTemp111 * fTemp114;
			float fTemp116 = fRec184[1] + fConst61 * (fRec147 - fRec185[1]);
			fRec184[0] = fConst63 * fTemp116 - fRec184[1];
			float fTemp117 = fRec185[1] + fConst64 * fTemp116;
			fRec185[0] = 2.0f * fTemp117 - fRec185[1];
			fRec186[0] = fTemp117;
			fVec28[0] = fConst83 * fRec186[1] - fConst18 * fRec182[1];
			fRec183[0] = fConst21 * (fVec28[1] - fConst15 * fRec183[1] + fConst82 * fRec186[1] + fConst81 * fRec186[0]);
			fRec182[0] = fRec183[0];
			fVec29[0] = 0.50032705f * fRec182[1] - fConst26 * fRec180[1];
			fRec181[0] = fConst27 * (fVec29[1] - fConst24 * fRec181[1] - 1.0006541f * fRec182[1] + 0.50032705f * fRec182[0]);
			fRec180[0] = fRec181[0];
			float fTemp118 = std::fabs(0.92736715f * fRec180[0]);
			fRec179[0] = std::max<float>(fTemp118, fConst84 * fRec179[1] + fConst85 * fTemp118);
			fRec178[0] = fConst86 * fRec179[0] + fConst3 * fRec178[1];
			float fTemp119 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec178[0]))));
			fVbargraph15 = FAUSTFLOAT(-fTemp119);
			fRec177[0] = fConst95 * (fSlow21 - -fTemp119) + fConst94 * fRec177[1];
			float fTemp120 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec177[0])));
			fVbargraph16 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp120)));
			float fTemp121 = fRec186[0] * fTemp120;
			float fTemp122 = fRec208[1] + fConst51 * (fRec161 - fRec209[1]);
			fRec208[0] = fConst53 * fTemp122 - fRec208[1];
			float fTemp123 = fRec209[1] + fConst54 * fTemp122;
			fRec209[0] = 2.0f * fTemp123 - fRec209[1];
			float fRec210 = fTemp123;
			float fTemp124 = fRec204[1] + fConst61 * (fRec210 - fRec205[1]);
			fRec204[0] = fConst63 * fTemp124 - fRec204[1];
			float fTemp125 = fRec205[1] + fConst64 * fTemp124;
			fRec205[0] = 2.0f * fTemp125 - fRec205[1];
			float fRec206 = fRec210;
			float fRec207 = fConst65 * fTemp124;
			float fTemp126 = 2.828427f * fRec207;
			float fTemp127 = fRec199[1] + fConst56 * (fRec206 - (fTemp126 + fRec200[1]));
			fRec199[0] = fConst58 * fTemp127 - fRec199[1];
			float fTemp128 = fRec200[1] + fConst59 * fTemp127;
			fRec200[0] = 2.0f * fTemp128 - fRec200[1];
			float fRec201 = fRec206 - fTemp126;
			float fRec202 = fConst60 * fTemp127;
			float fRec203 = fTemp128;
			float fTemp129 = fRec203 + 1.4142135f * fRec202;
			float fTemp130 = fRec194[1] + fConst56 * (fRec201 - (fTemp129 + fRec195[1]));
			fRec194[0] = fConst58 * fTemp130 - fRec194[1];
			float fTemp131 = fRec195[1] + fConst59 * fTemp130;
			fRec195[0] = 2.0f * fTemp131 - fRec195[1];
			float fRec196 = fRec201 - fTemp129;
			float fRec197 = fConst60 * fTemp130;
			float fRec198 = fTemp131;
			float fTemp132 = fRec196 - (fRec198 + 1.4142135f * fRec197);
			fVec30[0] = fTemp132;
			fVec31[0] = fConst83 * fVec30[1] - fConst18 * fRec192[1];
			fRec193[0] = fConst21 * (fVec31[1] - fConst15 * fRec193[1] + fConst82 * fVec30[1] + fConst81 * fTemp132);
			fRec192[0] = fRec193[0];
			fVec32[0] = 0.50032705f * fRec192[1] - fConst26 * fRec190[1];
			fRec191[0] = fConst27 * (fVec32[1] - fConst24 * fRec191[1] - 1.0006541f * fRec192[1] + 0.50032705f * fRec192[0]);
			fRec190[0] = fRec191[0];
			float fTemp133 = std::fabs(0.92736715f * fRec190[0]);
			fRec189[0] = std::max<float>(fTemp133, fConst84 * fRec189[1] + fConst85 * fTemp133);
			fRec188[0] = fConst86 * fRec189[0] + fConst3 * fRec188[1];
			float fTemp134 = 2e+01f * (fTemp55 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec188[0]))));
			fVbargraph17 = FAUSTFLOAT(-fTemp134);
			fRec187[0] = fConst97 * (fSlow22 - -fTemp134) + fConst96 * fRec187[1];
			float fTemp135 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec187[0])));
			fVbargraph18 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp135)));
			float fTemp136 = fTemp132 * fTemp135;
			float fTemp137 = fRec218[1] + fConst56 * (fRec203 - fRec219[1]);
			fRec218[0] = fConst58 * fTemp137 - fRec218[1];
			float fTemp138 = fRec219[1] + fConst59 * fTemp137;
			fRec219[0] = 2.0f * fTemp138 - fRec219[1];
			fRec220[0] = fTemp138;
			fVec33[0] = fConst83 * fRec220[1] - fConst18 * fRec216[1];
			fRec217[0] = fConst21 * (fVec33[1] - fConst15 * fRec217[1] + fConst82 * fRec220[1] + fConst81 * fRec220[0]);
			fRec216[0] = fRec217[0];
			fVec34[0] = 0.50032705f * fRec216[1] - fConst26 * fRec214[1];
			fRec215[0] = fConst27 * (fVec34[1] - fConst24 * fRec215[1] - 1.0006541f * fRec216[1] + 0.50032705f * fRec216[0]);
			fRec214[0] = fRec215[0];
			float fTemp139 = std::fabs(0.92736715f * fRec214[0]);
			fRec213[0] = std::max<float>(fTemp139, fConst84 * fRec213[1] + fConst85 * fTemp139);
			fRec212[0] = fConst86 * fRec213[0] + fConst3 * fRec212[1];
			float fTemp140 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec212[0]))) - fTemp55);
			fVbargraph19 = FAUSTFLOAT(fTemp140);
			fRec211[0] = fConst99 * (fSlow23 - fTemp140) + fConst98 * fRec211[1];
			float fTemp141 = std::pow(1e+01f, fSlow16 * fTemp2 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec211[0])));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp141)));
			float fTemp142 = fRec220[0] * fTemp141;
			fRec2[0] = fTemp142 + fTemp136 + fTemp121 + fTemp115 + fTemp85 + fTemp79 + fTemp64 + fTemp58;
			float fRec3 = fTemp142;
			float fRec4 = fTemp136;
			float fRec5 = fTemp121;
			float fRec6 = fTemp115;
			float fRec7 = fTemp85;
			float fRec8 = fTemp79;
			float fRec9 = fTemp64;
			float fRec10 = fTemp58;
			float fTemp143 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp144 = (fTemp143 > fSlow24) + (fTemp143 > fSlow1);
			float fTemp145 = std::max<float>(0.0f, ((iTemp144 == 0) ? 0.0f : ((iTemp144 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp143 + 13.5f - fSlow0) : fTemp143 + 13.0f - fSlow0)));
			float fTemp146 = ((-(0.75f * fTemp145) > fRec1[1]) ? fConst101 : fConst100);
			fRec1[0] = fRec1[1] * fTemp146 - 0.75f * fTemp145 * (1.0f - fTemp146);
			float fTemp147 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec1[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp147)));
			float fTemp148 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp149 = (fTemp148 > fSlow1) + (fTemp148 > fSlow26);
			float fTemp150 = std::max<float>(0.0f, ((iTemp149 == 0) ? 0.0f : ((iTemp149 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp148 + 12.5f - fSlow0) : fTemp148 + 12.0f - fSlow0)));
			float fTemp151 = ((-(0.75f * fTemp150) > fRec221[1]) ? fConst101 : fConst102);
			fRec221[0] = fRec221[1] * fTemp151 - 0.75f * fTemp150 * (1.0f - fTemp151);
			float fTemp152 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec221[0]))) + 1.5f)))));
			fVbargraph22 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp152)));
			float fTemp153 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp154 = (fTemp153 > fSlow1) + (fTemp153 > fSlow26);
			float fTemp155 = std::max<float>(0.0f, ((iTemp154 == 0) ? 0.0f : ((iTemp154 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp153 + 12.5f - fSlow0) : fTemp153 + 12.0f - fSlow0)));
			float fTemp156 = ((-(0.75f * fTemp155) > fRec222[1]) ? fConst101 : fConst103);
			fRec222[0] = fRec222[1] * fTemp156 - 0.75f * fTemp155 * (1.0f - fTemp156);
			float fTemp157 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec222[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp157)));
			float fTemp158 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp159 = (fTemp158 > fSlow26) + (fTemp158 > fSlow27);
			float fTemp160 = std::max<float>(0.0f, ((iTemp159 == 0) ? 0.0f : ((iTemp159 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp158 + 11.5f - fSlow0) : fTemp158 + 11.0f - fSlow0)));
			float fTemp161 = ((-(0.75f * fTemp160) > fRec223[1]) ? fConst104 : fConst3);
			fRec223[0] = fRec223[1] * fTemp161 - 0.75f * fTemp160 * (1.0f - fTemp161);
			float fTemp162 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec223[0]))) + 1.5f)))));
			fVbargraph24 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp162)));
			float fTemp163 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp164 = (fTemp163 > fSlow29) + (fTemp163 > fSlow28);
			float fTemp165 = std::max<float>(0.0f, ((iTemp164 == 0) ? 0.0f : ((iTemp164 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp163 + 8.5f - fSlow0) : fTemp163 + 8.0f - fSlow0)));
			float fTemp166 = ((-(0.75f * fTemp165) > fRec224[1]) ? fConst105 : fConst101);
			fRec224[0] = fRec224[1] * fTemp166 - 0.75f * fTemp165 * (1.0f - fTemp166);
			float fTemp167 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f)))));
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp167)));
			float fTemp168 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec5)));
			int iTemp169 = (fTemp168 > fSlow28) + (fTemp168 > fSlow30);
			float fTemp170 = std::max<float>(0.0f, ((iTemp169 == 0) ? 0.0f : ((iTemp169 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp168 + 7.5f - fSlow0) : fTemp168 + 7.0f - fSlow0)));
			float fTemp171 = ((-(0.75f * fTemp170) > fRec225[1]) ? fConst106 : fConst104);
			fRec225[0] = fRec225[1] * fTemp171 - 0.75f * fTemp170 * (1.0f - fTemp171);
			float fTemp172 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec225[0]))) + 1.5f)))));
			fVbargraph26 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp172)));
			float fTemp173 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec4)));
			int iTemp174 = (fTemp173 > fSlow30) + (fTemp173 > fSlow31);
			float fTemp175 = std::max<float>(0.0f, ((iTemp174 == 0) ? 0.0f : ((iTemp174 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp173 + 6.5f - fSlow0) : fTemp173 + 6.0f - fSlow0)));
			float fTemp176 = ((-(0.75f * fTemp175) > fRec226[1]) ? fConst107 : fConst2);
			fRec226[0] = fRec226[1] * fTemp176 - 0.75f * fTemp175 * (1.0f - fTemp176);
			float fTemp177 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec226[0]))) + 1.5f)))));
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp177)));
			float fTemp178 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec3)));
			int iTemp179 = (fTemp178 > fSlow30) + (fTemp178 > fSlow31);
			float fTemp180 = std::max<float>(0.0f, ((iTemp179 == 0) ? 0.0f : ((iTemp179 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp178 + 6.5f - fSlow0) : fTemp178 + 6.0f - fSlow0)));
			float fTemp181 = ((-(0.75f * fTemp180) > fRec227[1]) ? fConst84 : fConst108);
			fRec227[0] = fRec227[1] * fTemp181 - 0.75f * fTemp180 * (1.0f - fTemp181);
			float fTemp182 = std::pow(1e+01f, fSlow25 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec227[0]))) + 1.5f)))));
			fVbargraph28 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp182)));
			float fTemp183 = fRec3 * fTemp182 + fRec4 * fTemp177 + fRec5 * fTemp172 + fRec6 * fTemp167 + fRec7 * fTemp162 + fRec8 * fTemp157 + fRec9 * fTemp152 + fRec10 * fTemp147;
			fVec35[IOTA0 & 2047] = fTemp183;
			float fTemp184 = std::fabs(fTemp183);
			int iTemp185 = (fTemp184 >= fRec231[1]) | (float(iRec230[1]) >= fConst8);
			iRec230[0] = ((iTemp185) ? 0 : iRec230[1] + 1);
			fRec231[0] = ((iTemp185) ? fTemp184 : fRec231[1]);
			fRec229[0] = fConst111 * fRec231[0] + fConst110 * fRec229[1];
			float fTemp186 = std::fabs(fRec229[0]);
			fRec228[0] = std::max<float>(fTemp186, fConst112 * fRec228[1] + fConst113 * fTemp186);
			float fTemp187 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec228[0], 1.1920929e-07f));
			fVbargraph29 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp187))));
			float fTemp188 = fTemp187 * fVec35[(IOTA0 - iConst109) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp188))))));
			fVbargraph30 = FAUSTFLOAT(fRec0[0]);
			float fTemp189 = fTemp188;
			fVec36[0] = fTemp189;
			output0[i0] = FAUSTFLOAT(fTemp189);
			fVbargraph31 = FAUSTFLOAT(fRec0[0]);
			float fTemp190 = fTemp188;
			fVec37[0] = fTemp190;
			fVec38[0] = fConst18 * fRec234[1] - fConst16 * fVec37[1];
			fRec235[0] = fConst21 * (fConst20 * fVec37[1] - (fVec38[1] + fConst15 * fRec235[1]) + fConst14 * fTemp190);
			fRec234[0] = fRec235[0];
			fVec39[0] = 0.50032705f * fRec234[1] - fConst26 * fRec232[1];
			fRec233[0] = fConst27 * (fVec39[1] - fConst24 * fRec233[1] - 1.0006541f * fRec234[1] + 0.50032705f * fRec234[0]);
			fRec232[0] = fRec233[0];
			float fTemp191 = mydsp_faustpower2_f(fRec232[0]);
			fVec40[0] = fTemp191;
			float fTemp192 = fTemp191 + fVec40[1];
			fVec41[0] = fTemp192;
			float fTemp193 = fTemp192 + fVec41[2];
			fVec42[0] = fTemp193;
			float fTemp194 = fTemp193 + fVec42[4];
			fVec43[0] = fTemp194;
			float fTemp195 = fTemp194 + fVec43[8];
			fVec44[IOTA0 & 31] = fTemp195;
			float fTemp196 = fTemp195 + fVec44[(IOTA0 - 16) & 31];
			fVec45[IOTA0 & 63] = fTemp196;
			float fTemp197 = fTemp196 + fVec45[(IOTA0 - 32) & 63];
			fVec46[IOTA0 & 127] = fTemp197;
			float fTemp198 = fTemp197 + fVec46[(IOTA0 - 64) & 127];
			fVec47[IOTA0 & 255] = fTemp198;
			float fTemp199 = fTemp198 + fVec47[(IOTA0 - 128) & 255];
			fVec48[IOTA0 & 511] = fTemp199;
			float fTemp200 = fTemp199 + fVec48[(IOTA0 - 256) & 511];
			fVec49[IOTA0 & 1023] = fTemp200;
			float fTemp201 = fTemp200 + fVec49[(IOTA0 - 512) & 1023];
			fVec50[IOTA0 & 2047] = fTemp201;
			float fTemp202 = fTemp201 + fVec50[(IOTA0 - 1024) & 2047];
			fVec51[IOTA0 & 4095] = fTemp202;
			float fTemp203 = fTemp202 + fVec51[(IOTA0 - 2048) & 4095];
			fVec52[IOTA0 & 8191] = fTemp203;
			float fTemp204 = fTemp203 + fVec52[(IOTA0 - 4096) & 8191];
			fVec53[IOTA0 & 16383] = fTemp204;
			float fTemp205 = fTemp204 + fVec53[(IOTA0 - 8192) & 16383];
			fVec54[IOTA0 & 32767] = fTemp205;
			float fTemp206 = fTemp205 + fVec54[(IOTA0 - 16384) & 32767];
			fVec55[IOTA0 & 65535] = fTemp206;
			float fTemp207 = fTemp206 + fVec55[(IOTA0 - 32768) & 65535];
			fVec56[IOTA0 & 131071] = fTemp207;
			fVec57[IOTA0 & 262143] = fTemp207 + fVec56[(IOTA0 - 65536) & 131071];
			fVec58[0] = fConst18 * fRec238[1] - fConst16 * fVec36[1];
			fRec239[0] = fConst21 * (fConst20 * fVec36[1] - (fVec58[1] + fConst15 * fRec239[1]) + fConst14 * fTemp189);
			fRec238[0] = fRec239[0];
			fVec59[0] = 0.50032705f * fRec238[1] - fConst26 * fRec236[1];
			fRec237[0] = fConst27 * (fVec59[1] - fConst24 * fRec237[1] - 1.0006541f * fRec238[1] + 0.50032705f * fRec238[0]);
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
			fVbargraph32 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst149 * (((iConst147) ? 0.86000985f * fVec77[(IOTA0 - iConst148) & 262143] : 0.0f) + ((iConst145) ? 0.86000985f * fVec76[(IOTA0 - iConst146) & 131071] : 0.0f) + ((iConst143) ? 0.86000985f * fVec75[(IOTA0 - iConst144) & 65535] : 0.0f) + ((iConst141) ? 0.86000985f * fVec74[(IOTA0 - iConst142) & 32767] : 0.0f) + ((iConst139) ? 0.86000985f * fVec73[(IOTA0 - iConst140) & 16383] : 0.0f) + ((iConst137) ? 0.86000985f * fVec72[(IOTA0 - iConst138) & 8191] : 0.0f) + ((iConst135) ? 0.86000985f * fVec71[(IOTA0 - iConst136) & 4095] : 0.0f) + ((iConst133) ? 0.86000985f * fVec70[(IOTA0 - iConst134) & 2047] : 0.0f) + ((iConst131) ? 0.86000985f * fVec69[(IOTA0 - iConst132) & 1023] : 0.0f) + ((iConst129) ? 0.86000985f * fVec68[(IOTA0 - iConst130) & 511] : 0.0f) + ((iConst127) ? 0.86000985f * fVec67[(IOTA0 - iConst128) & 255] : 0.0f) + ((iConst125) ? 0.86000985f * fVec66[(IOTA0 - iConst126) & 127] : 0.0f) + ((iConst123) ? 0.86000985f * fVec65[(IOTA0 - iConst124) & 63] : 0.0f) + ((iConst121) ? 0.86000985f * fVec64[(IOTA0 - iConst122) & 31] : 0.0f) + ((iConst119) ? 0.86000985f * fVec63[iConst120] : 0.0f) + ((iConst117) ? 0.86000985f * fVec62[iConst118] : 0.0f) + ((iConst116) ? 0.86000985f * fTemp208 : 0.0f) + ((iConst115) ? 0.86000985f * fVec61[iConst116] : 0.0f) + ((iConst147) ? 0.86000985f * fVec57[(IOTA0 - iConst148) & 262143] : 0.0f) + ((iConst145) ? 0.86000985f * fVec56[(IOTA0 - iConst146) & 131071] : 0.0f) + ((iConst143) ? 0.86000985f * fVec55[(IOTA0 - iConst144) & 65535] : 0.0f) + ((iConst141) ? 0.86000985f * fVec54[(IOTA0 - iConst142) & 32767] : 0.0f) + ((iConst139) ? 0.86000985f * fVec53[(IOTA0 - iConst140) & 16383] : 0.0f) + ((iConst137) ? 0.86000985f * fVec52[(IOTA0 - iConst138) & 8191] : 0.0f) + ((iConst135) ? 0.86000985f * fVec51[(IOTA0 - iConst136) & 4095] : 0.0f) + ((iConst133) ? 0.86000985f * fVec50[(IOTA0 - iConst134) & 2047] : 0.0f) + ((iConst131) ? 0.86000985f * fVec49[(IOTA0 - iConst132) & 1023] : 0.0f) + ((iConst129) ? 0.86000985f * fVec48[(IOTA0 - iConst130) & 511] : 0.0f) + ((iConst127) ? 0.86000985f * fVec47[(IOTA0 - iConst128) & 255] : 0.0f) + ((iConst125) ? 0.86000985f * fVec46[(IOTA0 - iConst126) & 127] : 0.0f) + ((iConst123) ? 0.86000985f * fVec45[(IOTA0 - iConst124) & 63] : 0.0f) + ((iConst121) ? 0.86000985f * fVec44[(IOTA0 - iConst122) & 31] : 0.0f) + ((iConst119) ? 0.86000985f * fVec43[iConst120] : 0.0f) + ((iConst117) ? 0.86000985f * fVec42[iConst118] : 0.0f) + ((iConst116) ? 0.86000985f * fTemp191 : 0.0f) + ((iConst115) ? 0.86000985f * fVec41[iConst116] : 0.0f)))) + -0.691f);
			output1[i0] = FAUSTFLOAT(fTemp190);
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
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fRec80[1] = fRec80[0];
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
			fRec86[1] = fRec86[0];
			fRec85[1] = fRec85[0];
			fVec17[1] = fVec17[0];
			fRec84[1] = fRec84[0];
			fRec83[1] = fRec83[0];
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			fRec11[1] = fRec11[0];
			fRec94[1] = fRec94[0];
			fRec95[1] = fRec95[0];
			fRec96[1] = fRec96[0];
			fVec18[1] = fVec18[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fVec19[1] = fVec19[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fRec118[1] = fRec118[0];
			fRec119[1] = fRec119[0];
			fRec114[1] = fRec114[0];
			fRec115[1] = fRec115[0];
			fRec109[1] = fRec109[0];
			fRec110[1] = fRec110[0];
			fRec104[1] = fRec104[0];
			fRec105[1] = fRec105[0];
			fVec20[1] = fVec20[0];
			fVec21[1] = fVec21[0];
			fRec103[1] = fRec103[0];
			fRec102[1] = fRec102[0];
			fVec22[1] = fVec22[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fRec128[1] = fRec128[0];
			fRec129[1] = fRec129[0];
			fRec130[1] = fRec130[0];
			fVec23[1] = fVec23[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fVec24[1] = fVec24[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			fRec174[1] = fRec174[0];
			fRec175[1] = fRec175[0];
			fRec170[1] = fRec170[0];
			fRec171[1] = fRec171[0];
			fRec166[1] = fRec166[0];
			fRec167[1] = fRec167[0];
			fRec162[1] = fRec162[0];
			fRec163[1] = fRec163[0];
			fRec157[1] = fRec157[0];
			fRec158[1] = fRec158[0];
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			fRec148[1] = fRec148[0];
			fRec149[1] = fRec149[0];
			fRec143[1] = fRec143[0];
			fRec144[1] = fRec144[0];
			fRec138[1] = fRec138[0];
			fRec139[1] = fRec139[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec137[1] = fRec137[0];
			fRec136[1] = fRec136[0];
			fVec27[1] = fVec27[0];
			fRec135[1] = fRec135[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fRec184[1] = fRec184[0];
			fRec185[1] = fRec185[0];
			fRec186[1] = fRec186[0];
			fVec28[1] = fVec28[0];
			fRec183[1] = fRec183[0];
			fRec182[1] = fRec182[0];
			fVec29[1] = fVec29[0];
			fRec181[1] = fRec181[0];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			fRec177[1] = fRec177[0];
			fRec208[1] = fRec208[0];
			fRec209[1] = fRec209[0];
			fRec204[1] = fRec204[0];
			fRec205[1] = fRec205[0];
			fRec199[1] = fRec199[0];
			fRec200[1] = fRec200[0];
			fRec194[1] = fRec194[0];
			fRec195[1] = fRec195[0];
			fVec30[1] = fVec30[0];
			fVec31[1] = fVec31[0];
			fRec193[1] = fRec193[0];
			fRec192[1] = fRec192[0];
			fVec32[1] = fVec32[0];
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
			fVec33[1] = fVec33[0];
			fRec217[1] = fRec217[0];
			fRec216[1] = fRec216[0];
			fVec34[1] = fVec34[0];
			fRec215[1] = fRec215[0];
			fRec214[1] = fRec214[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fRec227[1] = fRec227[0];
			iRec230[1] = iRec230[0];
			fRec231[1] = fRec231[0];
			fRec229[1] = fRec229[0];
			fRec228[1] = fRec228[0];
			fRec0[1] = fRec0[0];
			fVec36[1] = fVec36[0];
			fVec37[1] = fVec37[0];
			fVec38[1] = fVec38[0];
			fRec235[1] = fRec235[0];
			fRec234[1] = fRec234[0];
			fVec39[1] = fVec39[0];
			fRec233[1] = fRec233[0];
			fRec232[1] = fRec232[0];
			fVec40[1] = fVec40[0];
			fVec41[2] = fVec41[1];
			fVec41[1] = fVec41[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec42[j2] = fVec42[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec43[j3] = fVec43[j3 - 1];
			}
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
        dsp->fVbargraph19 = 0;
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph32 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph31 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph21 = 0;
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
        case kParameter_pre_gain:
            return dsp->fVslider6;
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
            return dsp->fVslider5;
        case kParameter_vad_gate_thresh:
            return dsp->fVslider1;
        case kParameter_vad_smoothing_time:
            return dsp->fVslider2;
        case kParameter_sb_meter__0:
            return dsp->fVbargraph19;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph17;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph15;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph13;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph11;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph9;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph7;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph5;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph20;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph18;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph16;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph14;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph12;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph10;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph8;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph6;
        case kParameter_limiter_gain:
            return dsp->fVbargraph29;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph4;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph3;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph32;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph30;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph31;
        case kParameter_vad_meter:
            return dsp->fVbargraph1;
        case kParameter_leveler_gain:
            return dsp->fVbargraph2;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph28;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph27;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph26;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph25;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph24;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph23;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph22;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph21;
        case kParameter_vad_smoothing_meter:
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
        case kParameter_pre_gain:
            dsp->fVslider6 = value;
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
            dsp->fVslider5 = value;
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
        float params[18] = {
            dsp->fVslider9,
            dsp->fVslider16,
            dsp->fVslider15,
            dsp->fVslider14,
            dsp->fVslider13,
            dsp->fVslider12,
            dsp->fVslider11,
            dsp->fVslider10,
            dsp->fVslider7,
            dsp->fVslider6,
            dsp->fVslider8,
            dsp->fVslider3,
            dsp->fVslider0,
            dsp->fVslider4,
            dsp->fVslider17,
            dsp->fVslider5,
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
        dsp->fVslider6 = params[9];
        dsp->fVslider8 = params[10];
        dsp->fVslider3 = params[11];
        dsp->fVslider0 = params[12];
        dsp->fVslider4 = params[13];
        dsp->fVslider17 = params[14];
        dsp->fVslider5 = params[15];
        dsp->fVslider1 = params[16];
        dsp->fVslider2 = params[17];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO