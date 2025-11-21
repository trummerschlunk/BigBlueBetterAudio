
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
	
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fVslider0;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	FAUSTFLOAT fVslider1;
	float fConst6;
	float fConst7;
	float fConst8;
	int iConst9;
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fConst15;
	float fConst16;
	float fConst17;
	float fVec0[2];
	float fConst18;
	float fConst19;
	float fConst20;
	float fRec75[2];
	float fRec74[2];
	float fConst21;
	float fConst22;
	float fConst23;
	float fConst24;
	float fConst25;
	float fVec1[2];
	float fConst26;
	float fRec73[2];
	float fRec72[2];
	float fVec2[2];
	float fVec3[3];
	int iConst27;
	int iConst28;
	float fVec4[5];
	int iConst29;
	int iConst30;
	float fVec5[12];
	int iConst31;
	int iConst32;
	int IOTA0;
	float fVec6[32];
	int iConst33;
	int iConst34;
	float fVec7[64];
	int iConst35;
	int iConst36;
	float fVec8[128];
	int iConst37;
	int iConst38;
	float fVec9[256];
	int iConst39;
	int iConst40;
	float fVec10[512];
	int iConst41;
	float fConst42;
	float fRec67[2];
	float fRec68[2];
	float fRec65[2];
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVbargraph0;
	float fRec64[2];
	FAUSTFLOAT fVslider3;
	float fConst43;
	float fConst44;
	FAUSTFLOAT fVslider4;
	float fRec78[2];
	float fRec77[2];
	FAUSTFLOAT fVbargraph1;
	float fRec79[2];
	FAUSTFLOAT fVbargraph2;
	float fVec11[2];
	float fRec76[2];
	float fVec12[2];
	float fConst45;
	float fConst46;
	float fConst47;
	float fRec59[2];
	float fConst48;
	float fRec60[2];
	float fConst49;
	float fRec54[2];
	float fRec55[2];
	float fConst50;
	float fConst51;
	float fConst52;
	float fRec50[2];
	float fConst53;
	float fRec51[2];
	float fConst54;
	float fConst55;
	float fConst56;
	float fConst57;
	float fRec46[2];
	float fConst58;
	float fRec47[2];
	float fConst59;
	float fConst60;
	float fConst61;
	float fConst62;
	float fRec42[2];
	float fConst63;
	float fRec43[2];
	float fConst64;
	float fConst65;
	float fConst66;
	float fConst67;
	float fRec37[2];
	float fConst68;
	float fRec38[2];
	float fConst69;
	float fRec32[2];
	float fRec33[2];
	float fConst70;
	float fConst71;
	float fConst72;
	float fRec28[2];
	float fConst73;
	float fRec29[2];
	float fConst74;
	float fConst75;
	float fConst76;
	float fConst77;
	float fRec23[2];
	float fConst78;
	float fRec24[2];
	float fConst79;
	float fRec18[2];
	float fRec19[2];
	float fVec13[2];
	float fConst80;
	float fConst81;
	float fConst82;
	float fVec14[2];
	float fRec17[2];
	float fRec16[2];
	float fVec15[2];
	float fRec15[2];
	float fRec14[2];
	float fConst83;
	float fConst84;
	float fRec13[2];
	float fConst85;
	float fRec12[2];
	float fVec16[2];
	float fRec85[2];
	float fRec84[2];
	float fVec17[2];
	float fRec83[2];
	float fRec82[2];
	float fRec81[2];
	float fRec80[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fVslider5;
	float fConst86;
	float fRec11[2];
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVbargraph4;
	float fConst87;
	float fRec93[2];
	float fRec94[2];
	float fRec95[2];
	float fVec18[2];
	float fRec92[2];
	float fRec91[2];
	float fVec19[2];
	float fRec90[2];
	float fRec89[2];
	float fRec88[2];
	float fRec87[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fVslider8;
	float fConst88;
	float fRec86[2];
	FAUSTFLOAT fVbargraph6;
	float fConst89;
	float fRec117[2];
	float fRec118[2];
	float fRec113[2];
	float fRec114[2];
	float fRec108[2];
	float fRec109[2];
	float fRec103[2];
	float fRec104[2];
	float fVec20[2];
	float fVec21[2];
	float fRec102[2];
	float fRec101[2];
	float fVec22[2];
	float fRec100[2];
	float fRec99[2];
	float fRec98[2];
	float fRec97[2];
	FAUSTFLOAT fVbargraph7;
	FAUSTFLOAT fVslider9;
	float fConst90;
	float fRec96[2];
	FAUSTFLOAT fVbargraph8;
	float fRec127[2];
	float fRec128[2];
	float fRec129[2];
	float fVec23[2];
	float fRec126[2];
	float fRec125[2];
	float fVec24[2];
	float fRec124[2];
	float fRec123[2];
	float fRec122[2];
	float fRec121[2];
	FAUSTFLOAT fVbargraph9;
	FAUSTFLOAT fVslider10;
	float fRec120[2];
	FAUSTFLOAT fVbargraph10;
	float fConst91;
	float fRec173[2];
	float fRec174[2];
	float fRec169[2];
	float fRec170[2];
	float fRec165[2];
	float fRec166[2];
	float fRec161[2];
	float fRec162[2];
	float fRec156[2];
	float fRec157[2];
	float fRec151[2];
	float fRec152[2];
	float fRec147[2];
	float fRec148[2];
	float fRec142[2];
	float fRec143[2];
	float fRec137[2];
	float fRec138[2];
	float fVec25[2];
	float fVec26[2];
	float fRec136[2];
	float fRec135[2];
	float fVec27[2];
	float fRec134[2];
	float fRec133[2];
	float fRec132[2];
	float fRec131[2];
	FAUSTFLOAT fVbargraph11;
	FAUSTFLOAT fVslider11;
	float fConst92;
	float fRec130[2];
	FAUSTFLOAT fVbargraph12;
	float fConst93;
	float fRec183[2];
	float fRec184[2];
	float fRec185[2];
	float fVec28[2];
	float fRec182[2];
	float fRec181[2];
	float fVec29[2];
	float fRec180[2];
	float fRec179[2];
	float fRec178[2];
	float fRec177[2];
	FAUSTFLOAT fVbargraph13;
	FAUSTFLOAT fVslider12;
	float fConst94;
	float fRec176[2];
	FAUSTFLOAT fVbargraph14;
	float fConst95;
	float fRec207[2];
	float fRec208[2];
	float fRec203[2];
	float fRec204[2];
	float fRec198[2];
	float fRec199[2];
	float fRec193[2];
	float fRec194[2];
	float fVec30[2];
	float fVec31[2];
	float fRec192[2];
	float fRec191[2];
	float fVec32[2];
	float fRec190[2];
	float fRec189[2];
	float fRec188[2];
	float fRec187[2];
	FAUSTFLOAT fVbargraph15;
	FAUSTFLOAT fVslider13;
	float fConst96;
	float fRec186[2];
	FAUSTFLOAT fVbargraph16;
	float fConst97;
	float fRec217[2];
	float fRec218[2];
	float fRec219[2];
	float fVec33[2];
	float fRec216[2];
	float fRec215[2];
	float fVec34[2];
	float fRec214[2];
	float fRec213[2];
	float fRec212[2];
	float fRec211[2];
	FAUSTFLOAT fVbargraph17;
	FAUSTFLOAT fVslider14;
	float fConst98;
	float fRec210[2];
	FAUSTFLOAT fVbargraph18;
	float fRec2[3];
	float fConst99;
	float fConst100;
	float fRec1[2];
	FAUSTFLOAT fVslider15;
	FAUSTFLOAT fVbargraph19;
	float fConst101;
	float fRec220[2];
	FAUSTFLOAT fVbargraph20;
	float fConst102;
	float fRec221[2];
	FAUSTFLOAT fVbargraph21;
	float fConst103;
	float fRec222[2];
	FAUSTFLOAT fVbargraph22;
	float fConst104;
	float fRec223[2];
	FAUSTFLOAT fVbargraph23;
	float fConst105;
	float fRec224[2];
	FAUSTFLOAT fVbargraph24;
	float fConst106;
	float fRec225[2];
	FAUSTFLOAT fVbargraph25;
	float fConst107;
	float fRec226[2];
	FAUSTFLOAT fVbargraph26;
	float fVec35[2048];
	int iConst108;
	float fConst109;
	int iRec229[2];
	float fRec230[2];
	float fConst110;
	float fRec228[2];
	float fConst111;
	float fConst112;
	float fRec227[2];
	FAUSTFLOAT fVbargraph27;
	FAUSTFLOAT fCheckbox0;
	float fRec231[2];
	float fRec0[2];
	FAUSTFLOAT fVbargraph28;
	float fVec36[2];
	float fConst113;
	int iConst114;
	FAUSTFLOAT fVbargraph29;
	float fVec37[2];
	float fVec38[2];
	float fRec235[2];
	float fRec234[2];
	float fVec39[2];
	float fRec233[2];
	float fRec232[2];
	float fVec40[2];
	float fVec41[3];
	int iConst115;
	int iConst116;
	float fVec42[5];
	int iConst117;
	int iConst118;
	float fVec43[12];
	int iConst119;
	int iConst120;
	float fVec44[32];
	int iConst121;
	int iConst122;
	float fVec45[64];
	int iConst123;
	int iConst124;
	float fVec46[128];
	int iConst125;
	int iConst126;
	float fVec47[256];
	int iConst127;
	int iConst128;
	float fVec48[512];
	int iConst129;
	int iConst130;
	float fVec49[1024];
	int iConst131;
	int iConst132;
	float fVec50[2048];
	int iConst133;
	int iConst134;
	float fVec51[4096];
	int iConst135;
	int iConst136;
	float fVec52[8192];
	int iConst137;
	int iConst138;
	float fVec53[16384];
	int iConst139;
	int iConst140;
	float fVec54[32768];
	int iConst141;
	int iConst142;
	float fVec55[65536];
	int iConst143;
	int iConst144;
	float fVec56[131072];
	int iConst145;
	int iConst146;
	float fVec57[262144];
	int iConst147;
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
	float fConst148;
	FAUSTFLOAT fVbargraph30;
	
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
		m->declare("compile_options", "-a /tmp/tmpjrkvboew.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("version", "0.24");
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
		fConst6 = 3.1415927f / fConst0;
		fConst7 = 0.01f * fConst0;
		fConst8 = std::rint(fConst7);
		iConst9 = int(std::floor(0.5f * fConst8)) % 2;
		fConst10 = std::tan(5283.415f / fConst0);
		fConst11 = 1.7803667f * fConst10;
		fConst12 = mydsp_faustpower2_f(fConst10);
		fConst13 = fConst12 + fConst11 + 1.5848527f;
		fConst14 = 2.0f * (fConst12 + -1.0f);
		fConst15 = fConst12 + (1.5848527f - fConst11);
		fConst16 = 1.4142135f * fConst10;
		fConst17 = fConst12 + (1.0f - fConst16);
		fConst18 = fConst12 + -1.5848527f;
		fConst19 = 2.0f * fConst18;
		fConst20 = 1.0f / (fConst12 + fConst16 + 1.0f);
		fConst21 = std::tan(119.806114f / fConst0);
		fConst22 = mydsp_faustpower2_f(fConst21);
		fConst23 = 1.0006541f * (fConst22 + -1.0f);
		fConst24 = 0.50032705f * (fConst22 + 1.0f);
		fConst25 = fConst24 - fConst21;
		fConst26 = 1.0f / (fConst21 + fConst24);
		iConst27 = int(std::floor(fConst8)) % 2;
		iConst28 = int(std::floor(0.25f * fConst8)) % 2;
		iConst29 = iConst27 + 2 * iConst9;
		iConst30 = int(std::floor(0.125f * fConst8)) % 2;
		iConst31 = iConst29 + 4 * iConst28;
		iConst32 = int(std::floor(0.0625f * fConst8)) % 2;
		iConst33 = iConst31 + 8 * iConst30;
		iConst34 = int(std::floor(0.03125f * fConst8)) % 2;
		iConst35 = iConst33 + 16 * iConst32;
		iConst36 = int(std::floor(0.015625f * fConst8)) % 2;
		iConst37 = iConst35 + 32 * iConst34;
		iConst38 = int(std::floor(0.0078125f * fConst8)) % 2;
		iConst39 = iConst37 + 64 * iConst36;
		iConst40 = int(std::floor(0.00390625f * fConst8)) % 2;
		iConst41 = iConst39 + 128 * iConst38;
		fConst42 = 1.0f / std::max<float>(fConst8, 1.1920929e-07f);
		fConst43 = 44.1f / fConst0;
		fConst44 = 1.0f - fConst43;
		fConst45 = std::tan(2513.2742f / fConst0);
		fConst46 = fConst45 * (fConst45 + 1.4142135f) + 1.0f;
		fConst47 = 2.0f / fConst46;
		fConst48 = fConst45 / fConst46;
		fConst49 = 1.0f / fConst46;
		fConst50 = std::tan(628.31854f / fConst0);
		fConst51 = fConst50 * (fConst50 + 1.4142135f) + 1.0f;
		fConst52 = 2.0f / fConst51;
		fConst53 = fConst50 / fConst51;
		fConst54 = 1.0f / fConst51;
		fConst55 = std::tan(314.15927f / fConst0);
		fConst56 = fConst55 * (fConst55 + 1.4142135f) + 1.0f;
		fConst57 = 2.0f / fConst56;
		fConst58 = fConst55 / fConst56;
		fConst59 = 1.0f / fConst56;
		fConst60 = std::tan(1256.6371f / fConst0);
		fConst61 = fConst60 * (fConst60 + 1.4142135f) + 1.0f;
		fConst62 = 2.0f / fConst61;
		fConst63 = fConst60 / fConst61;
		fConst64 = 1.0f / fConst61;
		fConst65 = std::tan(10053.097f / fConst0);
		fConst66 = fConst65 * (fConst65 + 1.4142135f) + 1.0f;
		fConst67 = 2.0f / fConst66;
		fConst68 = fConst65 / fConst66;
		fConst69 = 1.0f / fConst66;
		fConst70 = std::tan(5026.5483f / fConst0);
		fConst71 = fConst70 * (fConst70 + 1.4142135f) + 1.0f;
		fConst72 = 2.0f / fConst71;
		fConst73 = fConst70 / fConst71;
		fConst74 = 1.0f / fConst71;
		fConst75 = std::tan(20106.193f / fConst0);
		fConst76 = fConst75 * (fConst75 + 1.4142135f) + 1.0f;
		fConst77 = 2.0f / fConst76;
		fConst78 = fConst75 / fConst76;
		fConst79 = 1.0f / fConst76;
		fConst80 = 3.9810717f * fConst13;
		fConst81 = 7.9621434f * fConst18;
		fConst82 = 3.9810717f * fConst15;
		fConst83 = std::exp(-(1e+01f / fConst0));
		fConst84 = 1.0f - fConst83;
		fConst85 = 1.0f - fConst3;
		fConst86 = 1.0f - fConst2;
		fConst87 = std::exp(-fConst1);
		fConst88 = 1.0f - fConst87;
		fConst89 = std::exp(-(13.333333f / fConst0));
		fConst90 = 1.0f - fConst89;
		fConst91 = std::exp(-(8.0f / fConst0));
		fConst92 = 1.0f - fConst91;
		fConst93 = std::exp(-(6.6666665f / fConst0));
		fConst94 = 1.0f - fConst93;
		fConst95 = std::exp(-(5.714286f / fConst0));
		fConst96 = 1.0f - fConst95;
		fConst97 = std::exp(-(5.0f / fConst0));
		fConst98 = 1.0f - fConst97;
		fConst99 = std::exp(-(5e+02f / fConst0));
		fConst100 = std::exp(-(66.666664f / fConst0));
		fConst101 = std::exp(-(333.33334f / fConst0));
		fConst102 = std::exp(-(2e+02f / fConst0));
		fConst103 = std::exp(-(5e+01f / fConst0));
		fConst104 = std::exp(-(25.0f / fConst0));
		fConst105 = std::exp(-(16.666666f / fConst0));
		fConst106 = std::exp(-(12.5f / fConst0));
		fConst107 = std::exp(-(33.333332f / fConst0));
		iConst108 = int(fConst7);
		fConst109 = std::exp(-(628.31854f / fConst0));
		fConst110 = 1.0f - fConst109;
		fConst111 = std::exp(-(6.2831855f / fConst0));
		fConst112 = 1.0f - fConst111;
		fConst113 = std::rint(3.0f * fConst0);
		iConst114 = int(std::floor(0.5f * fConst113)) % 2;
		iConst115 = int(std::floor(fConst113)) % 2;
		iConst116 = int(std::floor(0.25f * fConst113)) % 2;
		iConst117 = iConst115 + 2 * iConst114;
		iConst118 = int(std::floor(0.125f * fConst113)) % 2;
		iConst119 = iConst117 + 4 * iConst116;
		iConst120 = int(std::floor(0.0625f * fConst113)) % 2;
		iConst121 = iConst119 + 8 * iConst118;
		iConst122 = int(std::floor(0.03125f * fConst113)) % 2;
		iConst123 = iConst121 + 16 * iConst120;
		iConst124 = int(std::floor(0.015625f * fConst113)) % 2;
		iConst125 = iConst123 + 32 * iConst122;
		iConst126 = int(std::floor(0.0078125f * fConst113)) % 2;
		iConst127 = iConst125 + 64 * iConst124;
		iConst128 = int(std::floor(0.00390625f * fConst113)) % 2;
		iConst129 = iConst127 + 128 * iConst126;
		iConst130 = int(std::floor(0.001953125f * fConst113)) % 2;
		iConst131 = iConst129 + 256 * iConst128;
		iConst132 = int(std::floor(0.0009765625f * fConst113)) % 2;
		iConst133 = iConst131 + 512 * iConst130;
		iConst134 = int(std::floor(0.00048828125f * fConst113)) % 2;
		iConst135 = iConst133 + 1024 * iConst132;
		iConst136 = int(std::floor(0.00024414062f * fConst113)) % 2;
		iConst137 = iConst135 + 2048 * iConst134;
		iConst138 = int(std::floor(0.00012207031f * fConst113)) % 2;
		iConst139 = iConst137 + 4096 * iConst136;
		iConst140 = int(std::floor(6.1035156e-05f * fConst113)) % 2;
		iConst141 = iConst139 + 8192 * iConst138;
		iConst142 = int(std::floor(3.0517578e-05f * fConst113)) % 2;
		iConst143 = iConst141 + 16384 * iConst140;
		iConst144 = int(std::floor(1.5258789e-05f * fConst113)) % 2;
		iConst145 = iConst143 + 32768 * iConst142;
		iConst146 = int(std::floor(7.6293945e-06f * fConst113)) % 2;
		iConst147 = iConst145 + 65536 * iConst144;
		fConst148 = 1.0f / std::max<float>(fConst113, 1.1920929e-07f);
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = FAUSTFLOAT(-23.0f);
		fVslider1 = FAUSTFLOAT(1.0f);
		fVslider2 = FAUSTFLOAT(1.0f);
		fVslider3 = FAUSTFLOAT(42.0f);
		fVslider4 = FAUSTFLOAT(0.0f);
		fVslider5 = FAUSTFLOAT(-4.0f);
		fVslider6 = FAUSTFLOAT(1e+02f);
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
			fRec75[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec74[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fVec1[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec73[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec72[l5] = 0.0f;
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
			fRec67[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec68[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec65[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec64[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec78[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec77[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec79[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fVec11[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec76[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fVec12[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec59[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec60[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec54[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec55[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec50[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec51[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec46[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec47[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec42[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec43[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec37[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec38[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec32[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec33[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec28[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec29[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec23[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec24[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec18[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec19[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec13[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec14[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec17[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec16[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fVec15[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec15[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec14[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec13[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec12[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fVec16[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec85[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec84[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fVec17[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec83[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec82[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec81[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec80[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec11[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec93[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec94[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec95[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec18[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec92[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec91[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fVec19[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec90[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec89[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec88[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec87[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec86[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec117[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec118[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec113[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec114[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec108[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec109[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec103[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec104[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fVec20[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec21[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec102[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec101[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fVec22[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec100[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec99[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec98[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec97[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec96[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec127[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec128[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec129[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec23[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec126[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec125[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fVec24[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec124[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec123[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec122[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec121[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec120[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec173[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec174[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec169[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec170[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec165[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec166[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec161[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec162[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec156[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec157[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec151[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec152[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec147[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec148[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec142[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec143[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec137[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec138[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec25[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec26[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec136[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec135[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec27[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec134[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec133[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec132[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec131[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec130[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec183[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec184[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec185[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fVec28[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec182[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec181[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fVec29[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec180[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec179[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec178[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec177[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec176[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec207[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec208[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec203[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec204[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec198[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec199[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec193[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec194[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fVec30[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec31[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec192[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec191[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fVec32[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec190[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec189[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec188[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec187[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec186[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec217[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec218[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec219[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec33[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec216[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec215[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fVec34[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec214[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec213[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec212[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec211[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec210[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 3; l175 = l175 + 1) {
			fRec2[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec1[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec220[l177] = 0.0f;
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
		for (int l184 = 0; l184 < 2048; l184 = l184 + 1) {
			fVec35[l184] = 0.0f;
		}
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			iRec229[l185] = 0;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec230[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec228[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec227[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec231[l189] = 0.0f;
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
		ui_interface->addVerticalSlider("spec 7", &fVslider5, FAUSTFLOAT(-4.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(0, "2", "");
		ui_interface->openHorizontalBox("loudness normalized spectrum");
		ui_interface->declare(&fVbargraph17, "1", "");
		ui_interface->declare(&fVbargraph17, "symbol", "sb_meter_ 0");
		ui_interface->declare(&fVbargraph17, "unit", "dB");
		ui_interface->addVerticalBargraph("band  0", &fVbargraph17, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph15, "1", "");
		ui_interface->declare(&fVbargraph15, "symbol", "sb_meter_ 1");
		ui_interface->declare(&fVbargraph15, "unit", "dB");
		ui_interface->addVerticalBargraph("band  1", &fVbargraph15, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph13, "1", "");
		ui_interface->declare(&fVbargraph13, "symbol", "sb_meter_ 2");
		ui_interface->declare(&fVbargraph13, "unit", "dB");
		ui_interface->addVerticalBargraph("band  2", &fVbargraph13, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph11, "1", "");
		ui_interface->declare(&fVbargraph11, "symbol", "sb_meter_ 3");
		ui_interface->declare(&fVbargraph11, "unit", "dB");
		ui_interface->addVerticalBargraph("band  3", &fVbargraph11, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph9, "1", "");
		ui_interface->declare(&fVbargraph9, "symbol", "sb_meter_ 4");
		ui_interface->declare(&fVbargraph9, "unit", "dB");
		ui_interface->addVerticalBargraph("band  4", &fVbargraph9, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph7, "1", "");
		ui_interface->declare(&fVbargraph7, "symbol", "sb_meter_ 5");
		ui_interface->declare(&fVbargraph7, "unit", "dB");
		ui_interface->addVerticalBargraph("band  5", &fVbargraph7, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph5, "1", "");
		ui_interface->declare(&fVbargraph5, "symbol", "sb_meter_ 6");
		ui_interface->declare(&fVbargraph5, "unit", "dB");
		ui_interface->addVerticalBargraph("band  6", &fVbargraph5, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->declare(&fVbargraph3, "1", "");
		ui_interface->declare(&fVbargraph3, "symbol", "sb_meter_ 7");
		ui_interface->declare(&fVbargraph3, "unit", "dB");
		ui_interface->addVerticalBargraph("band  7", &fVbargraph3, FAUSTFLOAT(-4e+01f), FAUSTFLOAT(4e+01f));
		ui_interface->closeBox();
		ui_interface->declare(0, "3", "");
		ui_interface->openHorizontalBox("resulting gain");
		ui_interface->declare(&fVbargraph18, "1", "");
		ui_interface->declare(&fVbargraph18, "symbol", "sb_gain_ 0");
		ui_interface->addVerticalBargraph("sb_gain  0", &fVbargraph18, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph16, "1", "");
		ui_interface->declare(&fVbargraph16, "symbol", "sb_gain_ 1");
		ui_interface->addVerticalBargraph("sb_gain  1", &fVbargraph16, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph14, "1", "");
		ui_interface->declare(&fVbargraph14, "symbol", "sb_gain_ 2");
		ui_interface->addVerticalBargraph("sb_gain  2", &fVbargraph14, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph12, "1", "");
		ui_interface->declare(&fVbargraph12, "symbol", "sb_gain_ 3");
		ui_interface->addVerticalBargraph("sb_gain  3", &fVbargraph12, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph10, "1", "");
		ui_interface->declare(&fVbargraph10, "symbol", "sb_gain_ 4");
		ui_interface->addVerticalBargraph("sb_gain  4", &fVbargraph10, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph8, "1", "");
		ui_interface->declare(&fVbargraph8, "symbol", "sb_gain_ 5");
		ui_interface->addVerticalBargraph("sb_gain  5", &fVbargraph8, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph6, "1", "");
		ui_interface->declare(&fVbargraph6, "symbol", "sb_gain_ 6");
		ui_interface->addVerticalBargraph("sb_gain  6", &fVbargraph6, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph4, "1", "");
		ui_interface->declare(&fVbargraph4, "symbol", "sb_gain_ 7");
		ui_interface->addVerticalBargraph("sb_gain  7", &fVbargraph4, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->declare(&fVslider4, "symbol", "pre_gain");
		ui_interface->declare(&fVslider4, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider4, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider6, "2", "");
		ui_interface->declare(&fVslider6, "symbol", "sbmb_strength");
		ui_interface->addVerticalSlider("sbmb_strength", &fVslider6, FAUSTFLOAT(1e+02f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fVslider1, "3", "");
		ui_interface->declare(&fVslider1, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider1, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph27, "99", "");
		ui_interface->declare(&fVbargraph27, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph27, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph2, "symbol", "input_peak_channel_0");
		ui_interface->addVerticalBargraph("In 0", &fVbargraph2, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph1, "symbol", "input_peak_channel_1");
		ui_interface->addVerticalBargraph("In 1", &fVbargraph1, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph30, "symbol", "lufs_out_meter");
		ui_interface->declare(&fVbargraph30, "unit", "dB");
		ui_interface->addVerticalBargraph("lufs_out", &fVbargraph30, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph28, "symbol", "output_peak_channel_0");
		ui_interface->addVerticalBargraph("Out 0", &fVbargraph28, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVbargraph29, "symbol", "output_peak_channel_1");
		ui_interface->addVerticalBargraph("Out 1", &fVbargraph29, FAUSTFLOAT(-7e+01f), FAUSTFLOAT(0.0f));
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
		ui_interface->declare(&fVbargraph26, "2", "");
		ui_interface->declare(&fVbargraph26, "symbol", "mb_comp_gain 0");
		ui_interface->declare(&fVbargraph26, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 0", &fVbargraph26, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph25, "2", "");
		ui_interface->declare(&fVbargraph25, "symbol", "mb_comp_gain 1");
		ui_interface->declare(&fVbargraph25, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 1", &fVbargraph25, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph24, "2", "");
		ui_interface->declare(&fVbargraph24, "symbol", "mb_comp_gain 2");
		ui_interface->declare(&fVbargraph24, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 2", &fVbargraph24, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph23, "2", "");
		ui_interface->declare(&fVbargraph23, "symbol", "mb_comp_gain 3");
		ui_interface->declare(&fVbargraph23, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 3", &fVbargraph23, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph22, "2", "");
		ui_interface->declare(&fVbargraph22, "symbol", "mb_comp_gain 4");
		ui_interface->declare(&fVbargraph22, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 4", &fVbargraph22, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph21, "2", "");
		ui_interface->declare(&fVbargraph21, "symbol", "mb_comp_gain 5");
		ui_interface->declare(&fVbargraph21, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 5", &fVbargraph21, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph20, "2", "");
		ui_interface->declare(&fVbargraph20, "symbol", "mb_comp_gain 6");
		ui_interface->declare(&fVbargraph20, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 6", &fVbargraph20, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVbargraph19, "2", "");
		ui_interface->declare(&fVbargraph19, "symbol", "mb_comp_gain 7");
		ui_interface->declare(&fVbargraph19, "unit", "dB");
		ui_interface->addVerticalBargraph("MBgr 7", &fVbargraph19, FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f));
		ui_interface->declare(&fVslider15, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider15, FAUSTFLOAT(8e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider3, "scale", "log");
		ui_interface->declare(&fVslider3, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider3, FAUSTFLOAT(42.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
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
		float fSlow4 = std::tan(fConst6 * float(fVslider3));
		float fSlow5 = 1.0f / fSlow4;
		float fSlow6 = 1.0f - fSlow5;
		float fSlow7 = fConst43 * std::pow(1e+01f, 0.05f * float(fVslider4));
		float fSlow8 = 0.5f / fSlow4;
		float fSlow9 = 1.0f / (fSlow5 + 1.0f);
		float fSlow10 = float(fVslider5);
		float fSlow11 = float(fVslider6);
		float fSlow12 = 5e-06f * fSlow2 * float(fVslider7) * fSlow11;
		float fSlow13 = float(fVslider8);
		float fSlow14 = float(fVslider9);
		float fSlow15 = float(fVslider10);
		float fSlow16 = float(fVslider11);
		float fSlow17 = float(fVslider12);
		float fSlow18 = float(fVslider13);
		float fSlow19 = float(fVslider14);
		float fSlow20 = fSlow0 + -13.5f;
		float fSlow21 = 0.0001f * fSlow11 * float(fVslider15);
		float fSlow22 = fSlow0 + -11.5f;
		float fSlow23 = fSlow0 + -10.5f;
		float fSlow24 = fSlow0 + -7.5f;
		float fSlow25 = fSlow0 + -8.5f;
		float fSlow26 = fSlow0 + -6.5f;
		float fSlow27 = fSlow0 + -5.5f;
		float fSlow28 = fConst43 * float(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = std::tan(fConst6 * std::min<float>(fConst4, fSlow2 * (fConst5 * std::fabs(fRec65[1]) + 0.1316f)));
			float fTemp1 = fTemp0 + 2.0f;
			float fTemp2 = fTemp0 * fTemp1 + 1.0f;
			fVec0[0] = fConst17 * fRec74[1] - fConst15 * fRec2[2];
			fRec75[0] = fConst20 * (fConst19 * fRec2[2] - (fVec0[1] + fConst14 * fRec75[1]) + fConst13 * fRec2[1]);
			fRec74[0] = fRec75[0];
			fVec1[0] = 0.50032705f * fRec74[1] - fConst25 * fRec72[1];
			fRec73[0] = fConst26 * (fVec1[1] - fConst23 * fRec73[1] - 1.0006541f * fRec74[1] + 0.50032705f * fRec74[0]);
			fRec72[0] = fRec73[0];
			float fTemp3 = mydsp_faustpower2_f(fRec72[0]);
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
			float fTemp11 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow0 + fRec64[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst42 * (((iConst40) ? 0.86000985f * fVec10[(IOTA0 - iConst41) & 511] : 0.0f) + ((iConst38) ? 0.86000985f * fVec9[(IOTA0 - iConst39) & 255] : 0.0f) + ((iConst36) ? 0.86000985f * fVec8[(IOTA0 - iConst37) & 127] : 0.0f) + ((iConst34) ? 0.86000985f * fVec7[(IOTA0 - iConst35) & 63] : 0.0f) + ((iConst32) ? 0.86000985f * fVec6[(IOTA0 - iConst33) & 31] : 0.0f) + ((iConst30) ? 0.86000985f * fVec5[iConst31] : 0.0f) + ((iConst28) ? 0.86000985f * fVec4[iConst29] : 0.0f) + ((iConst27) ? 0.86000985f * fTemp3 : 0.0f) + ((iConst9) ? 0.86000985f * fVec3[iConst27] : 0.0f))))))) - (fRec67[1] * fTemp1 + fRec68[1]);
			float fTemp12 = fTemp0 * fTemp11 / fTemp2;
			fRec67[0] = fRec67[1] + 2.0f * fTemp12;
			float fTemp13 = fRec67[1] + fTemp12;
			float fTemp14 = fTemp0 * fTemp13;
			fRec68[0] = fRec68[1] + 2.0f * fTemp14;
			float fRec69 = fTemp13;
			float fRec70 = fTemp11 / fTemp2;
			float fRec71 = fRec68[1] + fTemp14;
			fRec65[0] = fRec69;
			float fRec66 = fRec71;
			float fTemp15 = fSlow3 * fRec66;
			fVbargraph0 = FAUSTFLOAT(fTemp15);
			fRec64[0] = fTemp15;
			fRec78[0] = fSlow7 + fConst44 * fRec78[1];
			float fTemp16 = float(input1[i0]) * fRec78[0];
			fRec77[0] = std::max<float>(fRec77[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp16))))));
			fVbargraph1 = FAUSTFLOAT(fRec77[0]);
			float fTemp17 = float(input0[i0]) * fRec78[0];
			fRec79[0] = std::max<float>(fRec79[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp17))))));
			fVbargraph2 = FAUSTFLOAT(fRec79[0]);
			float fTemp18 = fTemp17 + fTemp16;
			fVec11[0] = fTemp18;
			fRec76[0] = fSlow9 * (fSlow8 * (fTemp18 - fVec11[1]) - fSlow6 * fRec76[1]);
			float fTemp19 = fRec76[0] * std::pow(1e+01f, 0.05f * fRec64[0]);
			fVec12[0] = fTemp19;
			float fTemp20 = fRec59[1] + fConst45 * (fTemp19 - fRec60[1]);
			fRec59[0] = fConst47 * fTemp20 - fRec59[1];
			float fTemp21 = fRec60[1] + fConst48 * fTemp20;
			fRec60[0] = 2.0f * fTemp21 - fRec60[1];
			float fRec61 = fTemp19;
			float fRec62 = fConst49 * fTemp20;
			float fRec63 = fTemp21;
			float fTemp22 = fRec63 + 1.4142135f * fRec62;
			float fTemp23 = fRec54[1] + fConst45 * (fRec61 - (fTemp22 + fRec55[1]));
			fRec54[0] = fConst47 * fTemp23 - fRec54[1];
			float fTemp24 = fRec55[1] + fConst48 * fTemp23;
			fRec55[0] = 2.0f * fTemp24 - fRec55[1];
			float fRec56 = fRec61 - fTemp22;
			float fRec57 = fConst49 * fTemp23;
			float fRec58 = fTemp24;
			float fTemp25 = fRec58 + 1.4142135f * fRec57;
			float fTemp26 = fRec50[1] + fConst50 * (fRec56 - (fTemp25 + fRec51[1]));
			fRec50[0] = fConst52 * fTemp26 - fRec50[1];
			float fTemp27 = fRec51[1] + fConst53 * fTemp26;
			fRec51[0] = 2.0f * fTemp27 - fRec51[1];
			float fRec52 = fRec56 - fTemp25;
			float fRec53 = fConst54 * fTemp26;
			float fTemp28 = 2.828427f * fRec53;
			float fTemp29 = fRec46[1] + fConst55 * (fRec52 - (fTemp28 + fRec47[1]));
			fRec46[0] = fConst57 * fTemp29 - fRec46[1];
			float fTemp30 = fRec47[1] + fConst58 * fTemp29;
			fRec47[0] = 2.0f * fTemp30 - fRec47[1];
			float fRec48 = fRec52 - fTemp28;
			float fRec49 = fConst59 * fTemp29;
			float fTemp31 = 2.828427f * fRec49;
			float fTemp32 = fRec42[1] + fConst60 * (fRec48 - (fTemp31 + fRec43[1]));
			fRec42[0] = fConst62 * fTemp32 - fRec42[1];
			float fTemp33 = fRec43[1] + fConst63 * fTemp32;
			fRec43[0] = 2.0f * fTemp33 - fRec43[1];
			float fRec44 = fRec48 - fTemp31;
			float fRec45 = fConst64 * fTemp32;
			float fTemp34 = 2.828427f * fRec45;
			float fTemp35 = fRec37[1] + fConst65 * (fRec44 - (fTemp34 + fRec38[1]));
			fRec37[0] = fConst67 * fTemp35 - fRec37[1];
			float fTemp36 = fRec38[1] + fConst68 * fTemp35;
			fRec38[0] = 2.0f * fTemp36 - fRec38[1];
			float fRec39 = fRec44 - fTemp34;
			float fRec40 = fConst69 * fTemp35;
			float fRec41 = fTemp36;
			float fTemp37 = fRec41 + 1.4142135f * fRec40;
			float fTemp38 = fRec32[1] + fConst65 * (fRec39 - (fTemp37 + fRec33[1]));
			fRec32[0] = fConst67 * fTemp38 - fRec32[1];
			float fTemp39 = fRec33[1] + fConst68 * fTemp38;
			fRec33[0] = 2.0f * fTemp39 - fRec33[1];
			float fRec34 = fRec39 - fTemp37;
			float fRec35 = fConst69 * fTemp38;
			float fRec36 = fTemp39;
			float fTemp40 = fRec36 + 1.4142135f * fRec35;
			float fTemp41 = fRec28[1] + fConst70 * (fRec34 - (fTemp40 + fRec29[1]));
			fRec28[0] = fConst72 * fTemp41 - fRec28[1];
			float fTemp42 = fRec29[1] + fConst73 * fTemp41;
			fRec29[0] = 2.0f * fTemp42 - fRec29[1];
			float fRec30 = fRec34 - fTemp40;
			float fRec31 = fConst74 * fTemp41;
			float fTemp43 = 2.828427f * fRec31;
			float fTemp44 = fRec23[1] + fConst75 * (fRec30 - (fTemp43 + fRec24[1]));
			fRec23[0] = fConst77 * fTemp44 - fRec23[1];
			float fTemp45 = fRec24[1] + fConst78 * fTemp44;
			fRec24[0] = 2.0f * fTemp45 - fRec24[1];
			float fRec25 = fRec30 - fTemp43;
			float fRec26 = fConst79 * fTemp44;
			float fRec27 = fTemp45;
			float fTemp46 = fRec27 + 1.4142135f * fRec26;
			float fTemp47 = fRec18[1] + fConst75 * (fRec25 - (fTemp46 + fRec19[1]));
			fRec18[0] = fConst77 * fTemp47 - fRec18[1];
			float fTemp48 = fRec19[1] + fConst78 * fTemp47;
			fRec19[0] = 2.0f * fTemp48 - fRec19[1];
			float fRec20 = fRec25 - fTemp46;
			float fRec21 = fConst79 * fTemp47;
			float fRec22 = fTemp48;
			float fTemp49 = fRec20 - (fRec22 + 1.4142135f * fRec21);
			fVec13[0] = fTemp49;
			fVec14[0] = fConst82 * fVec13[1] - fConst17 * fRec16[1];
			fRec17[0] = fConst20 * (fVec14[1] - fConst14 * fRec17[1] + fConst81 * fVec13[1] + fConst80 * fTemp49);
			fRec16[0] = fRec17[0];
			fVec15[0] = 0.50032705f * fRec16[1] - fConst25 * fRec14[1];
			fRec15[0] = fConst26 * (fVec15[1] - fConst23 * fRec15[1] - 1.0006541f * fRec16[1] + 0.50032705f * fRec16[0]);
			fRec14[0] = fRec15[0];
			float fTemp50 = std::fabs(0.92736715f * fRec14[0]);
			fRec13[0] = std::max<float>(fTemp50, fConst83 * fRec13[1] + fConst84 * fTemp50);
			fRec12[0] = fConst85 * fRec13[0] + fConst3 * fRec12[1];
			fVec16[0] = fConst17 * fRec84[1] - fConst15 * fVec12[1];
			fRec85[0] = fConst20 * (fConst19 * fVec12[1] - (fVec16[1] + fConst14 * fRec85[1]) + fConst13 * fTemp19);
			fRec84[0] = fRec85[0];
			fVec17[0] = 0.50032705f * fRec84[1] - fConst25 * fRec82[1];
			fRec83[0] = fConst26 * (fVec17[1] - fConst23 * fRec83[1] - 1.0006541f * fRec84[1] + 0.50032705f * fRec84[0]);
			fRec82[0] = fRec83[0];
			float fTemp51 = std::fabs(0.92736715f * fRec82[0]);
			fRec81[0] = std::max<float>(fTemp51, fConst83 * fRec81[1] + fConst84 * fTemp51);
			fRec80[0] = fConst85 * fRec81[0] + fConst3 * fRec80[1];
			float fTemp52 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec80[0])));
			float fTemp53 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec12[0]))));
			fVbargraph3 = FAUSTFLOAT(-fTemp53);
			fRec11[0] = fConst86 * (fSlow10 - -fTemp53) + fConst2 * fRec11[1];
			float fTemp54 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec11[0])));
			fVbargraph4 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp54)));
			float fTemp55 = fTemp49 * fTemp54;
			float fTemp56 = fRec93[1] + fConst75 * (fRec27 - fRec94[1]);
			fRec93[0] = fConst77 * fTemp56 - fRec93[1];
			float fTemp57 = fRec94[1] + fConst78 * fTemp56;
			fRec94[0] = 2.0f * fTemp57 - fRec94[1];
			fRec95[0] = fTemp57;
			fVec18[0] = fConst82 * fRec95[1] - fConst17 * fRec91[1];
			fRec92[0] = fConst20 * (fVec18[1] - fConst14 * fRec92[1] + fConst81 * fRec95[1] + fConst80 * fRec95[0]);
			fRec91[0] = fRec92[0];
			fVec19[0] = 0.50032705f * fRec91[1] - fConst25 * fRec89[1];
			fRec90[0] = fConst26 * (fVec19[1] - fConst23 * fRec90[1] - 1.0006541f * fRec91[1] + 0.50032705f * fRec91[0]);
			fRec89[0] = fRec90[0];
			float fTemp58 = std::fabs(0.92736715f * fRec89[0]);
			fRec88[0] = std::max<float>(fTemp58, fConst83 * fRec88[1] + fConst84 * fTemp58);
			fRec87[0] = fConst85 * fRec88[0] + fConst3 * fRec87[1];
			float fTemp59 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec87[0]))));
			fVbargraph5 = FAUSTFLOAT(-fTemp59);
			fRec86[0] = fConst88 * (fSlow13 - -fTemp59) + fConst87 * fRec86[1];
			float fTemp60 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec86[0])));
			fVbargraph6 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp60)));
			float fTemp61 = fRec95[0] * fTemp60;
			float fTemp62 = fRec117[1] + fConst65 * (fRec41 - fRec118[1]);
			fRec117[0] = fConst67 * fTemp62 - fRec117[1];
			float fTemp63 = fRec118[1] + fConst68 * fTemp62;
			fRec118[0] = 2.0f * fTemp63 - fRec118[1];
			float fRec119 = fTemp63;
			float fTemp64 = fRec113[1] + fConst75 * (fRec119 - fRec114[1]);
			fRec113[0] = fConst77 * fTemp64 - fRec113[1];
			float fTemp65 = fRec114[1] + fConst78 * fTemp64;
			fRec114[0] = 2.0f * fTemp65 - fRec114[1];
			float fRec115 = fRec119;
			float fRec116 = fConst79 * fTemp64;
			float fTemp66 = 2.828427f * fRec116;
			float fTemp67 = fRec108[1] + fConst70 * (fRec115 - (fTemp66 + fRec109[1]));
			fRec108[0] = fConst72 * fTemp67 - fRec108[1];
			float fTemp68 = fRec109[1] + fConst73 * fTemp67;
			fRec109[0] = 2.0f * fTemp68 - fRec109[1];
			float fRec110 = fRec115 - fTemp66;
			float fRec111 = fConst74 * fTemp67;
			float fRec112 = fTemp68;
			float fTemp69 = fRec112 + 1.4142135f * fRec111;
			float fTemp70 = fRec103[1] + fConst70 * (fRec110 - (fTemp69 + fRec104[1]));
			fRec103[0] = fConst72 * fTemp70 - fRec103[1];
			float fTemp71 = fRec104[1] + fConst73 * fTemp70;
			fRec104[0] = 2.0f * fTemp71 - fRec104[1];
			float fRec105 = fRec110 - fTemp69;
			float fRec106 = fConst74 * fTemp70;
			float fRec107 = fTemp71;
			float fTemp72 = fRec105 - (fRec107 + 1.4142135f * fRec106);
			fVec20[0] = fTemp72;
			fVec21[0] = fConst82 * fVec20[1] - fConst17 * fRec101[1];
			fRec102[0] = fConst20 * (fVec21[1] - fConst14 * fRec102[1] + fConst81 * fVec20[1] + fConst80 * fTemp72);
			fRec101[0] = fRec102[0];
			fVec22[0] = 0.50032705f * fRec101[1] - fConst25 * fRec99[1];
			fRec100[0] = fConst26 * (fVec22[1] - fConst23 * fRec100[1] - 1.0006541f * fRec101[1] + 0.50032705f * fRec101[0]);
			fRec99[0] = fRec100[0];
			float fTemp73 = std::fabs(0.92736715f * fRec99[0]);
			fRec98[0] = std::max<float>(fTemp73, fConst83 * fRec98[1] + fConst84 * fTemp73);
			fRec97[0] = fConst85 * fRec98[0] + fConst3 * fRec97[1];
			float fTemp74 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec97[0]))));
			fVbargraph7 = FAUSTFLOAT(-fTemp74);
			fRec96[0] = fConst90 * (fSlow14 - -fTemp74) + fConst89 * fRec96[1];
			float fTemp75 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec96[0])));
			fVbargraph8 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp75)));
			float fTemp76 = fTemp72 * fTemp75;
			float fTemp77 = fRec127[1] + fConst70 * (fRec112 - fRec128[1]);
			fRec127[0] = fConst72 * fTemp77 - fRec127[1];
			float fTemp78 = fRec128[1] + fConst73 * fTemp77;
			fRec128[0] = 2.0f * fTemp78 - fRec128[1];
			fRec129[0] = fTemp78;
			fVec23[0] = fConst82 * fRec129[1] - fConst17 * fRec125[1];
			fRec126[0] = fConst20 * (fVec23[1] - fConst14 * fRec126[1] + fConst81 * fRec129[1] + fConst80 * fRec129[0]);
			fRec125[0] = fRec126[0];
			fVec24[0] = 0.50032705f * fRec125[1] - fConst25 * fRec123[1];
			fRec124[0] = fConst26 * (fVec24[1] - fConst23 * fRec124[1] - 1.0006541f * fRec125[1] + 0.50032705f * fRec125[0]);
			fRec123[0] = fRec124[0];
			float fTemp79 = std::fabs(0.92736715f * fRec123[0]);
			fRec122[0] = std::max<float>(fTemp79, fConst83 * fRec122[1] + fConst84 * fTemp79);
			fRec121[0] = fConst85 * fRec122[0] + fConst3 * fRec121[1];
			float fTemp80 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec121[0]))));
			fVbargraph9 = FAUSTFLOAT(-fTemp80);
			fRec120[0] = fConst84 * (fSlow15 - -fTemp80) + fConst83 * fRec120[1];
			float fTemp81 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec120[0])));
			fVbargraph10 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp81)));
			float fTemp82 = fRec129[0] * fTemp81;
			float fTemp83 = fRec173[1] + fConst45 * (fRec63 - fRec174[1]);
			fRec173[0] = fConst47 * fTemp83 - fRec173[1];
			float fTemp84 = fRec174[1] + fConst48 * fTemp83;
			fRec174[0] = 2.0f * fTemp84 - fRec174[1];
			float fRec175 = fTemp84;
			float fTemp85 = fRec169[1] + fConst65 * (fRec175 - fRec170[1]);
			fRec169[0] = fConst67 * fTemp85 - fRec169[1];
			float fTemp86 = fRec170[1] + fConst68 * fTemp85;
			fRec170[0] = 2.0f * fTemp86 - fRec170[1];
			float fRec171 = fRec175;
			float fRec172 = fConst69 * fTemp85;
			float fTemp87 = 2.828427f * fRec172;
			float fTemp88 = fRec165[1] + fConst70 * (fRec171 - (fTemp87 + fRec166[1]));
			fRec165[0] = fConst72 * fTemp88 - fRec165[1];
			float fTemp89 = fRec166[1] + fConst73 * fTemp88;
			fRec166[0] = 2.0f * fTemp89 - fRec166[1];
			float fRec167 = fRec171 - fTemp87;
			float fRec168 = fConst74 * fTemp88;
			float fTemp90 = 2.828427f * fRec168;
			float fTemp91 = fRec161[1] + fConst75 * (fRec167 - (fTemp90 + fRec162[1]));
			fRec161[0] = fConst77 * fTemp91 - fRec161[1];
			float fTemp92 = fRec162[1] + fConst78 * fTemp91;
			fRec162[0] = 2.0f * fTemp92 - fRec162[1];
			float fRec163 = fRec167 - fTemp90;
			float fRec164 = fConst79 * fTemp91;
			float fTemp93 = 2.828427f * fRec164;
			float fTemp94 = fRec156[1] + fConst50 * (fRec163 - (fTemp93 + fRec157[1]));
			fRec156[0] = fConst52 * fTemp94 - fRec156[1];
			float fTemp95 = fRec157[1] + fConst53 * fTemp94;
			fRec157[0] = 2.0f * fTemp95 - fRec157[1];
			float fRec158 = fRec163 - fTemp93;
			float fRec159 = fConst54 * fTemp94;
			float fRec160 = fTemp95;
			float fTemp96 = fRec160 + 1.4142135f * fRec159;
			float fTemp97 = fRec151[1] + fConst50 * (fRec158 - (fTemp96 + fRec152[1]));
			fRec151[0] = fConst52 * fTemp97 - fRec151[1];
			float fTemp98 = fRec152[1] + fConst53 * fTemp97;
			fRec152[0] = 2.0f * fTemp98 - fRec152[1];
			float fRec153 = fRec158 - fTemp96;
			float fRec154 = fConst54 * fTemp97;
			float fRec155 = fTemp98;
			float fTemp99 = fRec155 + 1.4142135f * fRec154;
			float fTemp100 = fRec147[1] + fConst55 * (fRec153 - (fTemp99 + fRec148[1]));
			fRec147[0] = fConst57 * fTemp100 - fRec147[1];
			float fTemp101 = fRec148[1] + fConst58 * fTemp100;
			fRec148[0] = 2.0f * fTemp101 - fRec148[1];
			float fRec149 = fRec153 - fTemp99;
			float fRec150 = fConst59 * fTemp100;
			float fTemp102 = 2.828427f * fRec150;
			float fTemp103 = fRec142[1] + fConst60 * (fRec149 - (fTemp102 + fRec143[1]));
			fRec142[0] = fConst62 * fTemp103 - fRec142[1];
			float fTemp104 = fRec143[1] + fConst63 * fTemp103;
			fRec143[0] = 2.0f * fTemp104 - fRec143[1];
			float fRec144 = fRec149 - fTemp102;
			float fRec145 = fConst64 * fTemp103;
			float fRec146 = fTemp104;
			float fTemp105 = fRec146 + 1.4142135f * fRec145;
			float fTemp106 = fRec137[1] + fConst60 * (fRec144 - (fTemp105 + fRec138[1]));
			fRec137[0] = fConst62 * fTemp106 - fRec137[1];
			float fTemp107 = fRec138[1] + fConst63 * fTemp106;
			fRec138[0] = 2.0f * fTemp107 - fRec138[1];
			float fRec139 = fRec144 - fTemp105;
			float fRec140 = fConst64 * fTemp106;
			float fRec141 = fTemp107;
			float fTemp108 = fRec139 - (fRec141 + 1.4142135f * fRec140);
			fVec25[0] = fTemp108;
			fVec26[0] = fConst82 * fVec25[1] - fConst17 * fRec135[1];
			fRec136[0] = fConst20 * (fVec26[1] - fConst14 * fRec136[1] + fConst81 * fVec25[1] + fConst80 * fTemp108);
			fRec135[0] = fRec136[0];
			fVec27[0] = 0.50032705f * fRec135[1] - fConst25 * fRec133[1];
			fRec134[0] = fConst26 * (fVec27[1] - fConst23 * fRec134[1] - 1.0006541f * fRec135[1] + 0.50032705f * fRec135[0]);
			fRec133[0] = fRec134[0];
			float fTemp109 = std::fabs(0.92736715f * fRec133[0]);
			fRec132[0] = std::max<float>(fTemp109, fConst83 * fRec132[1] + fConst84 * fTemp109);
			fRec131[0] = fConst85 * fRec132[0] + fConst3 * fRec131[1];
			float fTemp110 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec131[0]))));
			fVbargraph11 = FAUSTFLOAT(-fTemp110);
			fRec130[0] = fConst92 * (fSlow16 - -fTemp110) + fConst91 * fRec130[1];
			float fTemp111 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec130[0])));
			fVbargraph12 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp111)));
			float fTemp112 = fTemp108 * fTemp111;
			float fTemp113 = fRec183[1] + fConst60 * (fRec146 - fRec184[1]);
			fRec183[0] = fConst62 * fTemp113 - fRec183[1];
			float fTemp114 = fRec184[1] + fConst63 * fTemp113;
			fRec184[0] = 2.0f * fTemp114 - fRec184[1];
			fRec185[0] = fTemp114;
			fVec28[0] = fConst82 * fRec185[1] - fConst17 * fRec181[1];
			fRec182[0] = fConst20 * (fVec28[1] - fConst14 * fRec182[1] + fConst81 * fRec185[1] + fConst80 * fRec185[0]);
			fRec181[0] = fRec182[0];
			fVec29[0] = 0.50032705f * fRec181[1] - fConst25 * fRec179[1];
			fRec180[0] = fConst26 * (fVec29[1] - fConst23 * fRec180[1] - 1.0006541f * fRec181[1] + 0.50032705f * fRec181[0]);
			fRec179[0] = fRec180[0];
			float fTemp115 = std::fabs(0.92736715f * fRec179[0]);
			fRec178[0] = std::max<float>(fTemp115, fConst83 * fRec178[1] + fConst84 * fTemp115);
			fRec177[0] = fConst85 * fRec178[0] + fConst3 * fRec177[1];
			float fTemp116 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec177[0]))));
			fVbargraph13 = FAUSTFLOAT(-fTemp116);
			fRec176[0] = fConst94 * (fSlow17 - -fTemp116) + fConst93 * fRec176[1];
			float fTemp117 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec176[0])));
			fVbargraph14 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp117)));
			float fTemp118 = fRec185[0] * fTemp117;
			float fTemp119 = fRec207[1] + fConst50 * (fRec160 - fRec208[1]);
			fRec207[0] = fConst52 * fTemp119 - fRec207[1];
			float fTemp120 = fRec208[1] + fConst53 * fTemp119;
			fRec208[0] = 2.0f * fTemp120 - fRec208[1];
			float fRec209 = fTemp120;
			float fTemp121 = fRec203[1] + fConst60 * (fRec209 - fRec204[1]);
			fRec203[0] = fConst62 * fTemp121 - fRec203[1];
			float fTemp122 = fRec204[1] + fConst63 * fTemp121;
			fRec204[0] = 2.0f * fTemp122 - fRec204[1];
			float fRec205 = fRec209;
			float fRec206 = fConst64 * fTemp121;
			float fTemp123 = 2.828427f * fRec206;
			float fTemp124 = fRec198[1] + fConst55 * (fRec205 - (fTemp123 + fRec199[1]));
			fRec198[0] = fConst57 * fTemp124 - fRec198[1];
			float fTemp125 = fRec199[1] + fConst58 * fTemp124;
			fRec199[0] = 2.0f * fTemp125 - fRec199[1];
			float fRec200 = fRec205 - fTemp123;
			float fRec201 = fConst59 * fTemp124;
			float fRec202 = fTemp125;
			float fTemp126 = fRec202 + 1.4142135f * fRec201;
			float fTemp127 = fRec193[1] + fConst55 * (fRec200 - (fTemp126 + fRec194[1]));
			fRec193[0] = fConst57 * fTemp127 - fRec193[1];
			float fTemp128 = fRec194[1] + fConst58 * fTemp127;
			fRec194[0] = 2.0f * fTemp128 - fRec194[1];
			float fRec195 = fRec200 - fTemp126;
			float fRec196 = fConst59 * fTemp127;
			float fRec197 = fTemp128;
			float fTemp129 = fRec195 - (fRec197 + 1.4142135f * fRec196);
			fVec30[0] = fTemp129;
			fVec31[0] = fConst82 * fVec30[1] - fConst17 * fRec191[1];
			fRec192[0] = fConst20 * (fVec31[1] - fConst14 * fRec192[1] + fConst81 * fVec30[1] + fConst80 * fTemp129);
			fRec191[0] = fRec192[0];
			fVec32[0] = 0.50032705f * fRec191[1] - fConst25 * fRec189[1];
			fRec190[0] = fConst26 * (fVec32[1] - fConst23 * fRec190[1] - 1.0006541f * fRec191[1] + 0.50032705f * fRec191[0]);
			fRec189[0] = fRec190[0];
			float fTemp130 = std::fabs(0.92736715f * fRec189[0]);
			fRec188[0] = std::max<float>(fTemp130, fConst83 * fRec188[1] + fConst84 * fTemp130);
			fRec187[0] = fConst85 * fRec188[0] + fConst3 * fRec187[1];
			float fTemp131 = 2e+01f * (fTemp52 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec187[0]))));
			fVbargraph15 = FAUSTFLOAT(-fTemp131);
			fRec186[0] = fConst96 * (fSlow18 - -fTemp131) + fConst95 * fRec186[1];
			float fTemp132 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec186[0])));
			fVbargraph16 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp132)));
			float fTemp133 = fTemp129 * fTemp132;
			float fTemp134 = fRec217[1] + fConst55 * (fRec202 - fRec218[1]);
			fRec217[0] = fConst57 * fTemp134 - fRec217[1];
			float fTemp135 = fRec218[1] + fConst58 * fTemp134;
			fRec218[0] = 2.0f * fTemp135 - fRec218[1];
			fRec219[0] = fTemp135;
			fVec33[0] = fConst82 * fRec219[1] - fConst17 * fRec215[1];
			fRec216[0] = fConst20 * (fVec33[1] - fConst14 * fRec216[1] + fConst81 * fRec219[1] + fConst80 * fRec219[0]);
			fRec215[0] = fRec216[0];
			fVec34[0] = 0.50032705f * fRec215[1] - fConst25 * fRec213[1];
			fRec214[0] = fConst26 * (fVec34[1] - fConst23 * fRec214[1] - 1.0006541f * fRec215[1] + 0.50032705f * fRec215[0]);
			fRec213[0] = fRec214[0];
			float fTemp136 = std::fabs(0.92736715f * fRec213[0]);
			fRec212[0] = std::max<float>(fTemp136, fConst83 * fRec212[1] + fConst84 * fTemp136);
			fRec211[0] = fConst85 * fRec212[0] + fConst3 * fRec211[1];
			float fTemp137 = 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec211[0]))) - fTemp52);
			fVbargraph17 = FAUSTFLOAT(fTemp137);
			fRec210[0] = fConst98 * (fSlow19 - fTemp137) + fConst97 * fRec210[1];
			float fTemp138 = std::pow(1e+01f, fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, fRec210[0])));
			fVbargraph18 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp138)));
			float fTemp139 = fRec219[0] * fTemp138;
			fRec2[0] = fTemp139 + fTemp133 + fTemp118 + fTemp112 + fTemp82 + fTemp76 + fTemp61 + fTemp55;
			float fRec3 = fTemp139;
			float fRec4 = fTemp133;
			float fRec5 = fTemp118;
			float fRec6 = fTemp112;
			float fRec7 = fTemp82;
			float fRec8 = fTemp76;
			float fRec9 = fTemp61;
			float fRec10 = fTemp55;
			float fTemp140 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp141 = (fTemp140 > fSlow20) + (fTemp140 > fSlow1);
			float fTemp142 = std::max<float>(0.0f, ((iTemp141 == 0) ? 0.0f : ((iTemp141 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp140 + 13.5f - fSlow0) : fTemp140 + 13.0f - fSlow0)));
			float fTemp143 = ((-(0.75f * fTemp142) > fRec1[1]) ? fConst100 : fConst99);
			fRec1[0] = fRec1[1] * fTemp143 - 0.75f * fTemp142 * (1.0f - fTemp143);
			float fTemp144 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec1[0]))) + 1.5f)))));
			fVbargraph19 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp144)));
			float fTemp145 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp146 = (fTemp145 > fSlow1) + (fTemp145 > fSlow22);
			float fTemp147 = std::max<float>(0.0f, ((iTemp146 == 0) ? 0.0f : ((iTemp146 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp145 + 12.5f - fSlow0) : fTemp145 + 12.0f - fSlow0)));
			float fTemp148 = ((-(0.75f * fTemp147) > fRec220[1]) ? fConst100 : fConst101);
			fRec220[0] = fRec220[1] * fTemp148 - 0.75f * fTemp147 * (1.0f - fTemp148);
			float fTemp149 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec220[0]))) + 1.5f)))));
			fVbargraph20 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp149)));
			float fTemp150 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp151 = (fTemp150 > fSlow1) + (fTemp150 > fSlow22);
			float fTemp152 = std::max<float>(0.0f, ((iTemp151 == 0) ? 0.0f : ((iTemp151 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp150 + 12.5f - fSlow0) : fTemp150 + 12.0f - fSlow0)));
			float fTemp153 = ((-(0.75f * fTemp152) > fRec221[1]) ? fConst100 : fConst102);
			fRec221[0] = fRec221[1] * fTemp153 - 0.75f * fTemp152 * (1.0f - fTemp153);
			float fTemp154 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec221[0]))) + 1.5f)))));
			fVbargraph21 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp154)));
			float fTemp155 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp156 = (fTemp155 > fSlow22) + (fTemp155 > fSlow23);
			float fTemp157 = std::max<float>(0.0f, ((iTemp156 == 0) ? 0.0f : ((iTemp156 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp155 + 11.5f - fSlow0) : fTemp155 + 11.0f - fSlow0)));
			float fTemp158 = ((-(0.75f * fTemp157) > fRec222[1]) ? fConst103 : fConst3);
			fRec222[0] = fRec222[1] * fTemp158 - 0.75f * fTemp157 * (1.0f - fTemp158);
			float fTemp159 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec222[0]))) + 1.5f)))));
			fVbargraph22 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp159)));
			float fTemp160 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp161 = (fTemp160 > fSlow25) + (fTemp160 > fSlow24);
			float fTemp162 = std::max<float>(0.0f, ((iTemp161 == 0) ? 0.0f : ((iTemp161 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp160 + 8.5f - fSlow0) : fTemp160 + 8.0f - fSlow0)));
			float fTemp163 = ((-(0.75f * fTemp162) > fRec223[1]) ? fConst104 : fConst100);
			fRec223[0] = fRec223[1] * fTemp163 - 0.75f * fTemp162 * (1.0f - fTemp163);
			float fTemp164 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec223[0]))) + 1.5f)))));
			fVbargraph23 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp164)));
			float fTemp165 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec5)));
			int iTemp166 = (fTemp165 > fSlow24) + (fTemp165 > fSlow26);
			float fTemp167 = std::max<float>(0.0f, ((iTemp166 == 0) ? 0.0f : ((iTemp166 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp165 + 7.5f - fSlow0) : fTemp165 + 7.0f - fSlow0)));
			float fTemp168 = ((-(0.75f * fTemp167) > fRec224[1]) ? fConst105 : fConst103);
			fRec224[0] = fRec224[1] * fTemp168 - 0.75f * fTemp167 * (1.0f - fTemp168);
			float fTemp169 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f)))));
			fVbargraph24 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp169)));
			float fTemp170 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec4)));
			int iTemp171 = (fTemp170 > fSlow26) + (fTemp170 > fSlow27);
			float fTemp172 = std::max<float>(0.0f, ((iTemp171 == 0) ? 0.0f : ((iTemp171 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp170 + 6.5f - fSlow0) : fTemp170 + 6.0f - fSlow0)));
			float fTemp173 = ((-(0.75f * fTemp172) > fRec225[1]) ? fConst106 : fConst2);
			fRec225[0] = fRec225[1] * fTemp173 - 0.75f * fTemp172 * (1.0f - fTemp173);
			float fTemp174 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec225[0]))) + 1.5f)))));
			fVbargraph25 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp174)));
			float fTemp175 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec3)));
			int iTemp176 = (fTemp175 > fSlow26) + (fTemp175 > fSlow27);
			float fTemp177 = std::max<float>(0.0f, ((iTemp176 == 0) ? 0.0f : ((iTemp176 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp175 + 6.5f - fSlow0) : fTemp175 + 6.0f - fSlow0)));
			float fTemp178 = ((-(0.75f * fTemp177) > fRec226[1]) ? fConst83 : fConst107);
			fRec226[0] = fRec226[1] * fTemp178 - 0.75f * fTemp177 * (1.0f - fTemp178);
			float fTemp179 = std::pow(1e+01f, fSlow21 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec226[0]))) + 1.5f)))));
			fVbargraph26 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, fTemp179)));
			float fTemp180 = fRec3 * fTemp179 + fRec4 * fTemp174 + fRec5 * fTemp169 + fRec6 * fTemp164 + fRec7 * fTemp159 + fRec8 * fTemp154 + fRec9 * fTemp149 + fRec10 * fTemp144;
			fVec35[IOTA0 & 2047] = fTemp180;
			float fTemp181 = std::fabs(fTemp180);
			int iTemp182 = (fTemp181 >= fRec230[1]) | (float(iRec229[1]) >= fConst7);
			iRec229[0] = ((iTemp182) ? 0 : iRec229[1] + 1);
			fRec230[0] = ((iTemp182) ? fTemp181 : fRec230[1]);
			fRec228[0] = fConst110 * fRec230[0] + fConst109 * fRec228[1];
			float fTemp183 = std::fabs(fRec228[0]);
			fRec227[0] = std::max<float>(fTemp183, fConst111 * fRec227[1] + fConst112 * fTemp183);
			float fTemp184 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec227[0], 1.1920929e-07f));
			fVbargraph27 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp184))));
			fRec231[0] = fSlow28 + fConst44 * fRec231[1];
			float fTemp185 = 0.5f * fTemp18 * fRec231[0] + (1.0f - fRec231[0]) * fTemp184 * fVec35[(IOTA0 - iConst108) & 2047];
			fRec0[0] = std::max<float>(fRec0[1] - fConst1, std::min<float>(12.0f, 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(0.00031622776f, std::fabs(fTemp185))))));
			fVbargraph28 = FAUSTFLOAT(fRec0[0]);
			float fTemp186 = fTemp185;
			fVec36[0] = fTemp186;
			output0[i0] = FAUSTFLOAT(fTemp186);
			fVbargraph29 = FAUSTFLOAT(fRec0[0]);
			float fTemp187 = fTemp185;
			fVec37[0] = fTemp187;
			fVec38[0] = fConst17 * fRec234[1] - fConst15 * fVec37[1];
			fRec235[0] = fConst20 * (fConst19 * fVec37[1] - (fVec38[1] + fConst14 * fRec235[1]) + fConst13 * fTemp187);
			fRec234[0] = fRec235[0];
			fVec39[0] = 0.50032705f * fRec234[1] - fConst25 * fRec232[1];
			fRec233[0] = fConst26 * (fVec39[1] - fConst23 * fRec233[1] - 1.0006541f * fRec234[1] + 0.50032705f * fRec234[0]);
			fRec232[0] = fRec233[0];
			float fTemp188 = mydsp_faustpower2_f(fRec232[0]);
			fVec40[0] = fTemp188;
			float fTemp189 = fTemp188 + fVec40[1];
			fVec41[0] = fTemp189;
			float fTemp190 = fTemp189 + fVec41[2];
			fVec42[0] = fTemp190;
			float fTemp191 = fTemp190 + fVec42[4];
			fVec43[0] = fTemp191;
			float fTemp192 = fTemp191 + fVec43[8];
			fVec44[IOTA0 & 31] = fTemp192;
			float fTemp193 = fTemp192 + fVec44[(IOTA0 - 16) & 31];
			fVec45[IOTA0 & 63] = fTemp193;
			float fTemp194 = fTemp193 + fVec45[(IOTA0 - 32) & 63];
			fVec46[IOTA0 & 127] = fTemp194;
			float fTemp195 = fTemp194 + fVec46[(IOTA0 - 64) & 127];
			fVec47[IOTA0 & 255] = fTemp195;
			float fTemp196 = fTemp195 + fVec47[(IOTA0 - 128) & 255];
			fVec48[IOTA0 & 511] = fTemp196;
			float fTemp197 = fTemp196 + fVec48[(IOTA0 - 256) & 511];
			fVec49[IOTA0 & 1023] = fTemp197;
			float fTemp198 = fTemp197 + fVec49[(IOTA0 - 512) & 1023];
			fVec50[IOTA0 & 2047] = fTemp198;
			float fTemp199 = fTemp198 + fVec50[(IOTA0 - 1024) & 2047];
			fVec51[IOTA0 & 4095] = fTemp199;
			float fTemp200 = fTemp199 + fVec51[(IOTA0 - 2048) & 4095];
			fVec52[IOTA0 & 8191] = fTemp200;
			float fTemp201 = fTemp200 + fVec52[(IOTA0 - 4096) & 8191];
			fVec53[IOTA0 & 16383] = fTemp201;
			float fTemp202 = fTemp201 + fVec53[(IOTA0 - 8192) & 16383];
			fVec54[IOTA0 & 32767] = fTemp202;
			float fTemp203 = fTemp202 + fVec54[(IOTA0 - 16384) & 32767];
			fVec55[IOTA0 & 65535] = fTemp203;
			float fTemp204 = fTemp203 + fVec55[(IOTA0 - 32768) & 65535];
			fVec56[IOTA0 & 131071] = fTemp204;
			fVec57[IOTA0 & 262143] = fTemp204 + fVec56[(IOTA0 - 65536) & 131071];
			fVec58[0] = fConst17 * fRec238[1] - fConst15 * fVec36[1];
			fRec239[0] = fConst20 * (fConst19 * fVec36[1] - (fVec58[1] + fConst14 * fRec239[1]) + fConst13 * fTemp186);
			fRec238[0] = fRec239[0];
			fVec59[0] = 0.50032705f * fRec238[1] - fConst25 * fRec236[1];
			fRec237[0] = fConst26 * (fVec59[1] - fConst23 * fRec237[1] - 1.0006541f * fRec238[1] + 0.50032705f * fRec238[0]);
			fRec236[0] = fRec237[0];
			float fTemp205 = mydsp_faustpower2_f(fRec236[0]);
			fVec60[0] = fTemp205;
			float fTemp206 = fTemp205 + fVec60[1];
			fVec61[0] = fTemp206;
			float fTemp207 = fTemp206 + fVec61[2];
			fVec62[0] = fTemp207;
			float fTemp208 = fTemp207 + fVec62[4];
			fVec63[0] = fTemp208;
			float fTemp209 = fTemp208 + fVec63[8];
			fVec64[IOTA0 & 31] = fTemp209;
			float fTemp210 = fTemp209 + fVec64[(IOTA0 - 16) & 31];
			fVec65[IOTA0 & 63] = fTemp210;
			float fTemp211 = fTemp210 + fVec65[(IOTA0 - 32) & 63];
			fVec66[IOTA0 & 127] = fTemp211;
			float fTemp212 = fTemp211 + fVec66[(IOTA0 - 64) & 127];
			fVec67[IOTA0 & 255] = fTemp212;
			float fTemp213 = fTemp212 + fVec67[(IOTA0 - 128) & 255];
			fVec68[IOTA0 & 511] = fTemp213;
			float fTemp214 = fTemp213 + fVec68[(IOTA0 - 256) & 511];
			fVec69[IOTA0 & 1023] = fTemp214;
			float fTemp215 = fTemp214 + fVec69[(IOTA0 - 512) & 1023];
			fVec70[IOTA0 & 2047] = fTemp215;
			float fTemp216 = fTemp215 + fVec70[(IOTA0 - 1024) & 2047];
			fVec71[IOTA0 & 4095] = fTemp216;
			float fTemp217 = fTemp216 + fVec71[(IOTA0 - 2048) & 4095];
			fVec72[IOTA0 & 8191] = fTemp217;
			float fTemp218 = fTemp217 + fVec72[(IOTA0 - 4096) & 8191];
			fVec73[IOTA0 & 16383] = fTemp218;
			float fTemp219 = fTemp218 + fVec73[(IOTA0 - 8192) & 16383];
			fVec74[IOTA0 & 32767] = fTemp219;
			float fTemp220 = fTemp219 + fVec74[(IOTA0 - 16384) & 32767];
			fVec75[IOTA0 & 65535] = fTemp220;
			float fTemp221 = fTemp220 + fVec75[(IOTA0 - 32768) & 65535];
			fVec76[IOTA0 & 131071] = fTemp221;
			fVec77[IOTA0 & 262143] = fTemp221 + fVec76[(IOTA0 - 65536) & 131071];
			fVbargraph30 = FAUSTFLOAT(4.3429446f * std::log(std::max<float>(1e-12f, fConst148 * (((iConst146) ? 0.86000985f * fVec77[(IOTA0 - iConst147) & 262143] : 0.0f) + ((iConst144) ? 0.86000985f * fVec76[(IOTA0 - iConst145) & 131071] : 0.0f) + ((iConst142) ? 0.86000985f * fVec75[(IOTA0 - iConst143) & 65535] : 0.0f) + ((iConst140) ? 0.86000985f * fVec74[(IOTA0 - iConst141) & 32767] : 0.0f) + ((iConst138) ? 0.86000985f * fVec73[(IOTA0 - iConst139) & 16383] : 0.0f) + ((iConst136) ? 0.86000985f * fVec72[(IOTA0 - iConst137) & 8191] : 0.0f) + ((iConst134) ? 0.86000985f * fVec71[(IOTA0 - iConst135) & 4095] : 0.0f) + ((iConst132) ? 0.86000985f * fVec70[(IOTA0 - iConst133) & 2047] : 0.0f) + ((iConst130) ? 0.86000985f * fVec69[(IOTA0 - iConst131) & 1023] : 0.0f) + ((iConst128) ? 0.86000985f * fVec68[(IOTA0 - iConst129) & 511] : 0.0f) + ((iConst126) ? 0.86000985f * fVec67[(IOTA0 - iConst127) & 255] : 0.0f) + ((iConst124) ? 0.86000985f * fVec66[(IOTA0 - iConst125) & 127] : 0.0f) + ((iConst122) ? 0.86000985f * fVec65[(IOTA0 - iConst123) & 63] : 0.0f) + ((iConst120) ? 0.86000985f * fVec64[(IOTA0 - iConst121) & 31] : 0.0f) + ((iConst118) ? 0.86000985f * fVec63[iConst119] : 0.0f) + ((iConst116) ? 0.86000985f * fVec62[iConst117] : 0.0f) + ((iConst115) ? 0.86000985f * fTemp205 : 0.0f) + ((iConst114) ? 0.86000985f * fVec61[iConst115] : 0.0f) + ((iConst146) ? 0.86000985f * fVec57[(IOTA0 - iConst147) & 262143] : 0.0f) + ((iConst144) ? 0.86000985f * fVec56[(IOTA0 - iConst145) & 131071] : 0.0f) + ((iConst142) ? 0.86000985f * fVec55[(IOTA0 - iConst143) & 65535] : 0.0f) + ((iConst140) ? 0.86000985f * fVec54[(IOTA0 - iConst141) & 32767] : 0.0f) + ((iConst138) ? 0.86000985f * fVec53[(IOTA0 - iConst139) & 16383] : 0.0f) + ((iConst136) ? 0.86000985f * fVec52[(IOTA0 - iConst137) & 8191] : 0.0f) + ((iConst134) ? 0.86000985f * fVec51[(IOTA0 - iConst135) & 4095] : 0.0f) + ((iConst132) ? 0.86000985f * fVec50[(IOTA0 - iConst133) & 2047] : 0.0f) + ((iConst130) ? 0.86000985f * fVec49[(IOTA0 - iConst131) & 1023] : 0.0f) + ((iConst128) ? 0.86000985f * fVec48[(IOTA0 - iConst129) & 511] : 0.0f) + ((iConst126) ? 0.86000985f * fVec47[(IOTA0 - iConst127) & 255] : 0.0f) + ((iConst124) ? 0.86000985f * fVec46[(IOTA0 - iConst125) & 127] : 0.0f) + ((iConst122) ? 0.86000985f * fVec45[(IOTA0 - iConst123) & 63] : 0.0f) + ((iConst120) ? 0.86000985f * fVec44[(IOTA0 - iConst121) & 31] : 0.0f) + ((iConst118) ? 0.86000985f * fVec43[iConst119] : 0.0f) + ((iConst116) ? 0.86000985f * fVec42[iConst117] : 0.0f) + ((iConst115) ? 0.86000985f * fTemp188 : 0.0f) + ((iConst114) ? 0.86000985f * fVec41[iConst115] : 0.0f)))) + -0.691f);
			output1[i0] = FAUSTFLOAT(fTemp187);
			fVec0[1] = fVec0[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fVec1[1] = fVec1[0];
			fRec73[1] = fRec73[0];
			fRec72[1] = fRec72[0];
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
			fRec77[1] = fRec77[0];
			fRec79[1] = fRec79[0];
			fVec11[1] = fVec11[0];
			fRec76[1] = fRec76[0];
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
			fRec85[1] = fRec85[0];
			fRec84[1] = fRec84[0];
			fVec17[1] = fVec17[0];
			fRec83[1] = fRec83[0];
			fRec82[1] = fRec82[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fRec11[1] = fRec11[0];
			fRec93[1] = fRec93[0];
			fRec94[1] = fRec94[0];
			fRec95[1] = fRec95[0];
			fVec18[1] = fVec18[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fVec19[1] = fVec19[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fRec86[1] = fRec86[0];
			fRec117[1] = fRec117[0];
			fRec118[1] = fRec118[0];
			fRec113[1] = fRec113[0];
			fRec114[1] = fRec114[0];
			fRec108[1] = fRec108[0];
			fRec109[1] = fRec109[0];
			fRec103[1] = fRec103[0];
			fRec104[1] = fRec104[0];
			fVec20[1] = fVec20[0];
			fVec21[1] = fVec21[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fVec22[1] = fVec22[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec97[1] = fRec97[0];
			fRec96[1] = fRec96[0];
			fRec127[1] = fRec127[0];
			fRec128[1] = fRec128[0];
			fRec129[1] = fRec129[0];
			fVec23[1] = fVec23[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fVec24[1] = fVec24[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fRec122[1] = fRec122[0];
			fRec121[1] = fRec121[0];
			fRec120[1] = fRec120[0];
			fRec173[1] = fRec173[0];
			fRec174[1] = fRec174[0];
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
			fRec165[1] = fRec165[0];
			fRec166[1] = fRec166[0];
			fRec161[1] = fRec161[0];
			fRec162[1] = fRec162[0];
			fRec156[1] = fRec156[0];
			fRec157[1] = fRec157[0];
			fRec151[1] = fRec151[0];
			fRec152[1] = fRec152[0];
			fRec147[1] = fRec147[0];
			fRec148[1] = fRec148[0];
			fRec142[1] = fRec142[0];
			fRec143[1] = fRec143[0];
			fRec137[1] = fRec137[0];
			fRec138[1] = fRec138[0];
			fVec25[1] = fVec25[0];
			fVec26[1] = fVec26[0];
			fRec136[1] = fRec136[0];
			fRec135[1] = fRec135[0];
			fVec27[1] = fVec27[0];
			fRec134[1] = fRec134[0];
			fRec133[1] = fRec133[0];
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fRec183[1] = fRec183[0];
			fRec184[1] = fRec184[0];
			fRec185[1] = fRec185[0];
			fVec28[1] = fVec28[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			fVec29[1] = fVec29[0];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fRec178[1] = fRec178[0];
			fRec177[1] = fRec177[0];
			fRec176[1] = fRec176[0];
			fRec207[1] = fRec207[0];
			fRec208[1] = fRec208[0];
			fRec203[1] = fRec203[0];
			fRec204[1] = fRec204[0];
			fRec198[1] = fRec198[0];
			fRec199[1] = fRec199[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
			fVec30[1] = fVec30[0];
			fVec31[1] = fVec31[0];
			fRec192[1] = fRec192[0];
			fRec191[1] = fRec191[0];
			fVec32[1] = fVec32[0];
			fRec190[1] = fRec190[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec217[1] = fRec217[0];
			fRec218[1] = fRec218[0];
			fRec219[1] = fRec219[0];
			fVec33[1] = fVec33[0];
			fRec216[1] = fRec216[0];
			fRec215[1] = fRec215[0];
			fVec34[1] = fVec34[0];
			fRec214[1] = fRec214[0];
			fRec213[1] = fRec213[0];
			fRec212[1] = fRec212[0];
			fRec211[1] = fRec211[0];
			fRec210[1] = fRec210[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[1] = fRec1[0];
			fRec220[1] = fRec220[0];
			fRec221[1] = fRec221[0];
			fRec222[1] = fRec222[0];
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			iRec229[1] = iRec229[0];
			fRec230[1] = fRec230[0];
			fRec228[1] = fRec228[0];
			fRec227[1] = fRec227[0];
			fRec231[1] = fRec231[0];
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
        dsp->fVbargraph17 = 0;
        dsp->fVbargraph15 = 0;
        dsp->fVbargraph13 = 0;
        dsp->fVbargraph11 = 0;
        dsp->fVbargraph9 = 0;
        dsp->fVbargraph7 = 0;
        dsp->fVbargraph5 = 0;
        dsp->fVbargraph3 = 0;
        dsp->fVbargraph18 = 0;
        dsp->fVbargraph16 = 0;
        dsp->fVbargraph14 = 0;
        dsp->fVbargraph12 = 0;
        dsp->fVbargraph10 = 0;
        dsp->fVbargraph8 = 0;
        dsp->fVbargraph6 = 0;
        dsp->fVbargraph4 = 0;
        dsp->fVbargraph27 = 0;
        dsp->fVbargraph2 = 0;
        dsp->fVbargraph1 = 0;
        dsp->fVbargraph30 = 0;
        dsp->fVbargraph28 = 0;
        dsp->fVbargraph29 = 0;
        dsp->fVbargraph0 = 0;
        dsp->fVbargraph26 = 0;
        dsp->fVbargraph25 = 0;
        dsp->fVbargraph24 = 0;
        dsp->fVbargraph23 = 0;
        dsp->fVbargraph22 = 0;
        dsp->fVbargraph21 = 0;
        dsp->fVbargraph20 = 0;
        dsp->fVbargraph19 = 0;
        
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
        case kParameter_input_peak_channel_1:
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
        case kParameter_lufs_out_meter:
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
        case kParameter_output_peak_channel_0:
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
        case kParameter_output_peak_channel_1:
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
        case kParameter_leveler_gain:
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
        case kParameter_mb_comp_gain_0:
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
        case kParameter_mb_comp_gain_1:
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
        case kParameter_mb_comp_gain_2:
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
        case kParameter_mb_comp_gain_3:
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
        case kParameter_mb_comp_gain_4:
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
        case kParameter_mb_comp_gain_5:
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
        case kParameter_mb_comp_gain_6:
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
        case kParameter_mb_comp_gain_7:
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
        case kParameter_pre_gain:
            return dsp->fVslider4;
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
            return dsp->fVslider3;
        case kParameter_sb_meter__0:
            return dsp->fVbargraph17;
        case kParameter_sb_meter__1:
            return dsp->fVbargraph15;
        case kParameter_sb_meter__2:
            return dsp->fVbargraph13;
        case kParameter_sb_meter__3:
            return dsp->fVbargraph11;
        case kParameter_sb_meter__4:
            return dsp->fVbargraph9;
        case kParameter_sb_meter__5:
            return dsp->fVbargraph7;
        case kParameter_sb_meter__6:
            return dsp->fVbargraph5;
        case kParameter_sb_meter__7:
            return dsp->fVbargraph3;
        case kParameter_sb_gain__0:
            return dsp->fVbargraph18;
        case kParameter_sb_gain__1:
            return dsp->fVbargraph16;
        case kParameter_sb_gain__2:
            return dsp->fVbargraph14;
        case kParameter_sb_gain__3:
            return dsp->fVbargraph12;
        case kParameter_sb_gain__4:
            return dsp->fVbargraph10;
        case kParameter_sb_gain__5:
            return dsp->fVbargraph8;
        case kParameter_sb_gain__6:
            return dsp->fVbargraph6;
        case kParameter_sb_gain__7:
            return dsp->fVbargraph4;
        case kParameter_limiter_gain:
            return dsp->fVbargraph27;
        case kParameter_input_peak_channel_0:
            return dsp->fVbargraph2;
        case kParameter_input_peak_channel_1:
            return dsp->fVbargraph1;
        case kParameter_lufs_out_meter:
            return dsp->fVbargraph30;
        case kParameter_output_peak_channel_0:
            return dsp->fVbargraph28;
        case kParameter_output_peak_channel_1:
            return dsp->fVbargraph29;
        case kParameter_leveler_gain:
            return dsp->fVbargraph0;
        case kParameter_mb_comp_gain_0:
            return dsp->fVbargraph26;
        case kParameter_mb_comp_gain_1:
            return dsp->fVbargraph25;
        case kParameter_mb_comp_gain_2:
            return dsp->fVbargraph24;
        case kParameter_mb_comp_gain_3:
            return dsp->fVbargraph23;
        case kParameter_mb_comp_gain_4:
            return dsp->fVbargraph22;
        case kParameter_mb_comp_gain_5:
            return dsp->fVbargraph21;
        case kParameter_mb_comp_gain_6:
            return dsp->fVbargraph20;
        case kParameter_mb_comp_gain_7:
            return dsp->fVbargraph19;
        
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
        case kParameter_pre_gain:
            dsp->fVslider4 = value;
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
            dsp->fVslider3 = value;
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
            dsp->fVslider4,
            dsp->fVslider6,
            dsp->fVslider1,
            dsp->fVslider0,
            dsp->fVslider2,
            dsp->fVslider15,
            dsp->fVslider3,
            
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
        dsp->fVslider4 = params[10];
        dsp->fVslider6 = params[11];
        dsp->fVslider1 = params[12];
        dsp->fVslider0 = params[13];
        dsp->fVslider2 = params[14];
        dsp->fVslider15 = params[15];
        dsp->fVslider3 = params[16];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO