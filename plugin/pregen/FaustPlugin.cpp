
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
// Version: 0.25
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
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fVslider1;
	float fRec55[2];
	float fVec0[2];
	float fRec54[2];
	FAUSTFLOAT fVslider2;
	float fConst27;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst28;
	float fRec64[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVbargraph0;
	float fConst29;
	FAUSTFLOAT fVslider6;
	float fConst30;
	float fConst31;
	float fConst32;
	int iConst33;
	float fConst34;
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
	float fVec1[2];
	float fConst47;
	float fConst48;
	float fRec68[2];
	float fRec67[2];
	float fConst49;
	float fVec2[2];
	float fConst50;
	float fRec66[2];
	float fRec65[2];
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
	int iConst51;
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
	float fRec59[2];
	float fRec60[2];
	float fRec57[2];
	float fRec56[2];
	float fVec12[2];
	float fRec49[2];
	float fConst66;
	float fRec50[2];
	float fConst67;
	float fRec46[2];
	float fRec47[2];
	float fRec42[2];
	float fConst68;
	float fRec43[2];
	float fConst69;
	float fRec38[2];
	float fConst70;
	float fRec39[2];
	float fConst71;
	float fRec34[2];
	float fConst72;
	float fRec35[2];
	float fConst73;
	float fRec29[2];
	float fConst74;
	float fRec30[2];
	float fConst75;
	float fRec26[2];
	float fRec27[2];
	float fRec22[2];
	float fConst76;
	float fRec23[2];
	float fConst77;
	float fRec17[2];
	float fConst78;
	float fRec18[2];
	float fConst79;
	float fRec14[2];
	float fRec15[2];
	float fRec16[2];
	float fConst80;
	float fConst81;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fVslider8;
	FAUSTFLOAT fVslider9;
	float fConst82;
	float fConst83;
	float fConst84;
	float fVec13[2];
	float fConst85;
	float fConst86;
	float fRec75[2];
	float fRec74[2];
	float fVec14[2];
	float fRec73[2];
	float fRec72[2];
	float fConst87;
	float fConst88;
	float fRec71[2];
	float fRec70[2];
	float fVec15[2];
	float fRec81[2];
	float fRec80[2];
	float fVec16[2];
	float fRec79[2];
	float fRec78[2];
	float fRec77[2];
	float fRec76[2];
	float fRec69[2];
	float fRec82[2];
	float fRec83[2];
	float fVec17[2];
	float fConst89;
	float fConst90;
	FAUSTFLOAT fVslider10;
	float fVec18[2];
	float fRec93[2];
	float fRec92[2];
	float fVec19[2];
	float fRec91[2];
	float fRec90[2];
	float fRec89[2];
	float fRec88[2];
	float fRec87[2];
	float fRec106[2];
	float fRec107[2];
	float fRec102[2];
	float fRec103[2];
	float fRec97[2];
	float fRec98[2];
	float fRec94[2];
	float fRec95[2];
	float fRec96[2];
	float fConst91;
	float fConst92;
	FAUSTFLOAT fVslider11;
	float fVec20[2];
	float fRec117[2];
	float fRec116[2];
	float fVec21[2];
	float fRec115[2];
	float fRec114[2];
	float fRec113[2];
	float fRec112[2];
	float fRec111[2];
	float fRec118[2];
	float fRec119[2];
	float fVec22[2];
	float fConst93;
	float fConst94;
	FAUSTFLOAT fVslider12;
	float fVec23[2];
	float fRec129[2];
	float fRec128[2];
	float fVec24[2];
	float fRec127[2];
	float fRec126[2];
	float fRec125[2];
	float fRec124[2];
	float fRec123[2];
	float fRec162[2];
	float fRec163[2];
	float fRec158[2];
	float fRec159[2];
	float fRec154[2];
	float fRec155[2];
	float fRec150[2];
	float fRec151[2];
	float fRec145[2];
	float fRec146[2];
	float fRec142[2];
	float fRec143[2];
	float fRec138[2];
	float fRec139[2];
	float fRec133[2];
	float fRec134[2];
	float fRec130[2];
	float fRec131[2];
	float fRec132[2];
	float fConst95;
	FAUSTFLOAT fVslider13;
	float fVec25[2];
	float fRec173[2];
	float fRec172[2];
	float fVec26[2];
	float fRec171[2];
	float fRec170[2];
	float fRec169[2];
	float fRec168[2];
	float fRec167[2];
	float fRec174[2];
	float fRec175[2];
	float fVec27[2];
	float fConst96;
	float fConst97;
	FAUSTFLOAT fVslider14;
	float fVec28[2];
	float fRec185[2];
	float fRec184[2];
	float fVec29[2];
	float fRec183[2];
	float fRec182[2];
	float fRec181[2];
	float fRec180[2];
	float fRec179[2];
	float fRec198[2];
	float fRec199[2];
	float fRec194[2];
	float fRec195[2];
	float fRec189[2];
	float fRec190[2];
	float fRec186[2];
	float fRec187[2];
	float fRec188[2];
	float fConst98;
	float fConst99;
	FAUSTFLOAT fVslider15;
	float fVec30[2];
	float fRec209[2];
	float fRec208[2];
	float fVec31[2];
	float fRec207[2];
	float fRec206[2];
	float fRec205[2];
	float fRec204[2];
	float fRec203[2];
	float fRec210[2];
	float fRec211[2];
	float fVec32[2];
	float fConst100;
	float fConst101;
	FAUSTFLOAT fVslider16;
	float fVec33[2];
	float fRec221[2];
	float fRec220[2];
	float fVec34[2];
	float fRec219[2];
	float fRec218[2];
	float fRec217[2];
	float fRec216[2];
	float fRec215[2];
	float fRec5[3];
	FAUSTFLOAT fVslider17;
	float fConst102;
	float fRec222[2];
	int iConst103;
	float fVec35[2];
	int iConst104;
	float fVec36[3];
	int iConst105;
	float fVec37[5];
	int iConst106;
	int iConst107;
	float fVec38[12];
	int iConst108;
	int iConst109;
	float fVec39[32];
	int iConst110;
	int iConst111;
	float fVec40[64];
	int iConst112;
	int iConst113;
	float fVec41[128];
	int iConst114;
	int iConst115;
	float fVec42[256];
	int iConst116;
	int iConst117;
	float fVec43[512];
	int iConst118;
	int iConst119;
	float fVec44[512];
	int iConst120;
	FAUSTFLOAT fVslider18;
	float fRec223[2];
	float fConst121;
	float fRec224[2];
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
	float fRec225[2];
	float fConst122;
	float fConst123;
	float fRec226[2];
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
	float fRec227[2];
	float fConst124;
	float fConst125;
	float fRec228[2];
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
	float fRec229[2];
	float fRec230[2];
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
	float fRec231[2];
	float fConst126;
	float fRec232[2];
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
	float fRec233[2];
	float fConst127;
	float fRec234[2];
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
	float fRec235[2];
	float fConst128;
	float fRec236[2];
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
	float fRec237[2];
	float fVec115[2048];
	int iRec3[2];
	float fRec4[2];
	float fRec2[2];
	float fConst129;
	float fConst130;
	float fRec1[2];
	FAUSTFLOAT fVbargraph1;
	int iConst131;
	
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
		m->declare("compile_options", "-a /Users/klausscheuermann/Library/Caches/TemporaryItems/faustpp/13254-md.cpp -lang cpp -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
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
		m->declare("version", "0.25");
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
		fConst3 = std::exp(-(628.31854f / fConst0));
		fConst4 = 1.0f - fConst3;
		fConst5 = std::tan(314.15927f / fConst0);
		fConst6 = fConst5 * (fConst5 + 1.4142135f) + 1.0f;
		fConst7 = 2.0f / fConst6;
		fConst8 = std::tan(1256.6371f / fConst0);
		fConst9 = fConst8 * (fConst8 + 1.4142135f) + 1.0f;
		fConst10 = 2.0f / fConst9;
		fConst11 = std::tan(628.31854f / fConst0);
		fConst12 = fConst11 * (fConst11 + 1.4142135f) + 1.0f;
		fConst13 = 2.0f / fConst12;
		fConst14 = std::tan(20106.193f / fConst0);
		fConst15 = fConst14 * (fConst14 + 1.4142135f) + 1.0f;
		fConst16 = 2.0f / fConst15;
		fConst17 = std::tan(5026.5483f / fConst0);
		fConst18 = fConst17 * (fConst17 + 1.4142135f) + 1.0f;
		fConst19 = 2.0f / fConst18;
		fConst20 = std::tan(10053.097f / fConst0);
		fConst21 = fConst20 * (fConst20 + 1.4142135f) + 1.0f;
		fConst22 = 2.0f / fConst21;
		fConst23 = std::tan(2513.2742f / fConst0);
		fConst24 = fConst23 * (fConst23 + 1.4142135f) + 1.0f;
		fConst25 = 2.0f / fConst24;
		fConst26 = 3.1415927f / fConst0;
		fConst27 = 0.125f * fConst0;
		fConst28 = 1.0f / fConst0;
		fConst29 = 1.1312305e-06f * fConst0;
		fConst30 = 0.01f * fConst0;
		fConst31 = std::rint(fConst30);
		fConst32 = 1.0f / std::max<float>(fConst31, 1.1920929e-07f);
		iConst33 = int(std::floor(0.00390625f * fConst31)) % 2;
		fConst34 = std::tan(119.806114f / fConst0);
		fConst35 = mydsp_faustpower2_f(fConst34);
		fConst36 = 0.50032705f * (fConst35 + 1.0f);
		fConst37 = 1.0f / (fConst34 + fConst36);
		fConst38 = std::tan(5283.415f / fConst0);
		fConst39 = mydsp_faustpower2_f(fConst38);
		fConst40 = 1.4142135f * fConst38;
		fConst41 = 1.0f / (fConst39 + fConst40 + 1.0f);
		fConst42 = fConst39 + -1.5848527f;
		fConst43 = 2.0f * fConst42;
		fConst44 = fConst39 + (1.0f - fConst40);
		fConst45 = 1.7803667f * fConst38;
		fConst46 = fConst39 + (1.5848527f - fConst45);
		fConst47 = 2.0f * (fConst39 + -1.0f);
		fConst48 = fConst39 + fConst45 + 1.5848527f;
		fConst49 = fConst36 - fConst34;
		fConst50 = 1.0006541f * (fConst35 + -1.0f);
		iConst51 = int(std::floor(fConst31)) % 2;
		iConst52 = int(std::floor(0.5f * fConst31)) % 2;
		iConst53 = iConst51 + 2 * iConst52;
		iConst54 = int(std::floor(0.25f * fConst31)) % 2;
		iConst55 = iConst53 + 4 * iConst54;
		iConst56 = int(std::floor(0.125f * fConst31)) % 2;
		iConst57 = iConst55 + 8 * iConst56;
		iConst58 = int(std::floor(0.0625f * fConst31)) % 2;
		iConst59 = iConst57 + 16 * iConst58;
		iConst60 = int(std::floor(0.03125f * fConst31)) % 2;
		iConst61 = iConst59 + 32 * iConst60;
		iConst62 = int(std::floor(0.015625f * fConst31)) % 2;
		iConst63 = iConst61 + 64 * iConst62;
		iConst64 = int(std::floor(0.0078125f * fConst31)) % 2;
		iConst65 = iConst63 + 128 * iConst64;
		fConst66 = fConst23 / fConst24;
		fConst67 = 1.0f / fConst24;
		fConst68 = fConst20 / fConst21;
		fConst69 = 1.0f / fConst21;
		fConst70 = fConst17 / fConst18;
		fConst71 = 1.0f / fConst18;
		fConst72 = fConst14 / fConst15;
		fConst73 = 1.0f / fConst15;
		fConst74 = fConst11 / fConst12;
		fConst75 = 1.0f / fConst12;
		fConst76 = fConst8 / fConst9;
		fConst77 = 1.0f / fConst9;
		fConst78 = fConst5 / fConst6;
		fConst79 = 1.0f / fConst6;
		fConst80 = std::exp(-(5.0f / fConst0));
		fConst81 = 0.0001f * (1.0f - fConst80);
		fConst82 = std::exp(-(1e+02f / fConst0));
		fConst83 = 1.0f - fConst82;
		fConst84 = 3.9810717f * fConst46;
		fConst85 = 7.9621434f * fConst42;
		fConst86 = 3.9810717f * fConst48;
		fConst87 = std::exp(-(1e+01f / fConst0));
		fConst88 = 1.0f - fConst87;
		fConst89 = std::exp(-(5.714286f / fConst0));
		fConst90 = 0.0001f * (1.0f - fConst89);
		fConst91 = std::exp(-(6.6666665f / fConst0));
		fConst92 = 0.0001f * (1.0f - fConst91);
		fConst93 = std::exp(-(8.0f / fConst0));
		fConst94 = 0.0001f * (1.0f - fConst93);
		fConst95 = 0.0001f * fConst88;
		fConst96 = std::exp(-(13.333333f / fConst0));
		fConst97 = 0.0001f * (1.0f - fConst96);
		fConst98 = std::exp(-(2e+01f / fConst0));
		fConst99 = 0.0001f * (1.0f - fConst98);
		fConst100 = std::exp(-(4e+01f / fConst0));
		fConst101 = 0.0001f * (1.0f - fConst100);
		fConst102 = std::exp(-(33.333332f / fConst0));
		iConst103 = int(std::floor(0.001f * fConst0)) % 2;
		iConst104 = int(std::floor(0.0005f * fConst0)) % 2;
		iConst105 = int(std::floor(0.00025f * fConst0)) % 2;
		iConst106 = iConst103 + 2 * iConst104;
		iConst107 = int(std::floor(0.000125f * fConst0)) % 2;
		iConst108 = iConst106 + 4 * iConst105;
		iConst109 = int(std::floor(6.25e-05f * fConst0)) % 2;
		iConst110 = iConst108 + 8 * iConst107;
		iConst111 = int(std::floor(3.125e-05f * fConst0)) % 2;
		iConst112 = iConst110 + 16 * iConst109;
		iConst113 = int(std::floor(1.5625e-05f * fConst0)) % 2;
		iConst114 = iConst112 + 32 * iConst111;
		iConst115 = int(std::floor(7.8125e-06f * fConst0)) % 2;
		iConst116 = iConst114 + 64 * iConst113;
		iConst117 = int(std::floor(3.90625e-06f * fConst0)) % 2;
		iConst118 = iConst116 + 128 * iConst115;
		iConst119 = int(std::floor(1.953125e-06f * fConst0)) % 2;
		iConst120 = iConst118 + 256 * iConst117;
		fConst121 = std::exp(-(12.5f / fConst0));
		fConst122 = std::exp(-(5e+01f / fConst0));
		fConst123 = std::exp(-(16.666666f / fConst0));
		fConst124 = std::exp(-(66.666664f / fConst0));
		fConst125 = std::exp(-(25.0f / fConst0));
		fConst126 = std::exp(-(2e+02f / fConst0));
		fConst127 = std::exp(-(333.33334f / fConst0));
		fConst128 = std::exp(-(5e+02f / fConst0));
		fConst129 = std::exp(-(6.2831855f / fConst0));
		fConst130 = 1.0f - fConst129;
		iConst131 = int(fConst30);
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
			fRec55[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fVec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec54[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec64[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fVec1[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec68[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec67[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fVec2[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec66[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec65[l10] = 0.0f;
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
			fRec59[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec60[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec57[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec56[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fVec12[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec49[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec50[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec46[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec47[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec42[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec43[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec38[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fRec39[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec34[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec35[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fRec29[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec30[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec26[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec27[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec22[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec23[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec17[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec18[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec14[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec15[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec16[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fVec13[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec75[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec74[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fVec14[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec73[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec72[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec71[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec70[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fVec15[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec81[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec80[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fVec16[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec79[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec78[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec77[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec76[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec69[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec82[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec83[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fVec17[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fVec18[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec93[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec92[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fVec19[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec91[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec90[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec89[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec88[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec87[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec106[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec107[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec102[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec103[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec97[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec98[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec94[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec95[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec96[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fVec20[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec117[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec116[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fVec21[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec115[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec114[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec113[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec112[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec111[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec118[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec119[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fVec22[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fVec23[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec129[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec128[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fVec24[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec127[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec126[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec125[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec124[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec123[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec162[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fRec163[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec158[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec159[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fRec154[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec155[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec150[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec151[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec145[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec146[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec142[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec143[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec138[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec139[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec133[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec134[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec130[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec131[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec132[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fVec25[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec173[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec172[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fVec26[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec171[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec170[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec169[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec168[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec167[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec174[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec175[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fVec27[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fVec28[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec185[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec184[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fVec29[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec183[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec182[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec181[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec180[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec179[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec198[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec199[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec194[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec195[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec189[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec190[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec186[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec187[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec188[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec30[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec209[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec208[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fVec31[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec207[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec206[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec205[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec204[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec203[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			fRec210[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec211[l164] = 0.0f;
		}
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fVec32[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fVec33[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec221[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec220[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fVec34[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec219[l170] = 0.0f;
		}
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec218[l171] = 0.0f;
		}
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec217[l172] = 0.0f;
		}
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec216[l173] = 0.0f;
		}
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec215[l174] = 0.0f;
		}
		for (int l175 = 0; l175 < 3; l175 = l175 + 1) {
			fRec5[l175] = 0.0f;
		}
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec222[l176] = 0.0f;
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
			fRec223[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec224[l188] = 0.0f;
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
			fRec225[l199] = 0.0f;
		}
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			fRec226[l200] = 0.0f;
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
			fRec227[l211] = 0.0f;
		}
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec228[l212] = 0.0f;
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
			fRec229[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec230[l224] = 0.0f;
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
			fRec231[l235] = 0.0f;
		}
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fRec232[l236] = 0.0f;
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
			fRec233[l247] = 0.0f;
		}
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec234[l248] = 0.0f;
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
			fRec235[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec236[l260] = 0.0f;
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
			fRec237[l271] = 0.0f;
		}
		for (int l272 = 0; l272 < 2048; l272 = l272 + 1) {
			fVec115[l272] = 0.0f;
		}
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			iRec3[l273] = 0;
		}
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			fRec4[l274] = 0.0f;
		}
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec2[l275] = 0.0f;
		}
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec1[l276] = 0.0f;
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
		float fSlow1 = 1.0f / std::tan(fConst26 * float(fVslider0));
		float fSlow2 = 1.0f / (fSlow1 + 1.0f);
		float fSlow3 = 1.0f - fSlow1;
		float fSlow4 = fConst1 * std::pow(1e+01f, 0.05f * float(fVslider1));
		float fSlow5 = float(fVslider2);
		float fSlow6 = float(fVslider3);
		float fSlow7 = 0.001f * float(fVslider4);
		int iSlow8 = std::fabs(fSlow7) < 1.1920929e-07f;
		float fSlow9 = ((iSlow8) ? 0.0f : std::exp(-(fConst28 / ((iSlow8) ? 1.0f : fSlow7))));
		float fSlow10 = fSlow6 * (1.0f - fSlow9);
		float fSlow11 = float(fVslider5);
		float fSlow12 = float(fVslider6);
		float fSlow13 = float(fVslider7);
		float fSlow14 = fSlow13 * fSlow6 * float(fVslider8);
		float fSlow15 = fConst81 * fSlow14;
		float fSlow16 = float(fVslider9);
		float fSlow17 = fConst90 * fSlow14;
		float fSlow18 = float(fVslider10);
		float fSlow19 = fConst92 * fSlow14;
		float fSlow20 = float(fVslider11);
		float fSlow21 = fConst94 * fSlow14;
		float fSlow22 = float(fVslider12);
		float fSlow23 = fConst95 * fSlow14;
		float fSlow24 = float(fVslider13);
		float fSlow25 = fConst97 * fSlow14;
		float fSlow26 = float(fVslider14);
		float fSlow27 = fConst99 * fSlow14;
		float fSlow28 = float(fVslider15);
		float fSlow29 = fConst101 * fSlow14;
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
			fRec55[0] = fSlow4 + fConst2 * fRec55[1];
			float fTemp1 = fTemp0 * fRec55[0];
			fVec0[0] = fTemp1;
			fRec54[0] = -(fSlow2 * (fSlow3 * fRec54[1] - fSlow1 * (fTemp1 - fVec0[1])));
			fRec64[0] = fSlow10 + fSlow9 * fRec64[1];
			float fTemp2 = fRec64[0] * float(fRec64[0] > fSlow11);
			fVbargraph0 = FAUSTFLOAT(fTemp2);
			float fTemp3 = fTemp2;
			float fTemp4 = std::tan(fConst26 * std::min<float>(fConst27, fTemp3 * (fConst29 * std::fabs(fRec57[1]) + 0.1316f)));
			fVec1[0] = fConst44 * fRec67[1] - fConst46 * fRec5[2];
			fRec68[0] = fConst41 * (fConst43 * fRec5[2] - (fVec1[1] + fConst47 * fRec68[1]) + fConst48 * fRec5[1]);
			fRec67[0] = fRec68[0];
			fVec2[0] = 0.50032705f * fRec67[1] - fConst49 * fRec65[1];
			fRec66[0] = fConst37 * (fVec2[1] - fConst50 * fRec66[1] - 1.0006541f * fRec67[1] + 0.50032705f * fRec67[0]);
			fRec65[0] = fRec66[0];
			float fTemp5 = mydsp_faustpower2_f(fRec65[0]);
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
			float fTemp14 = std::max<float>(-3e+01f, std::min<float>(3e+01f, fSlow12 + fRec56[1] + (0.691f - 4.3429446f * std::log(std::max<float>(1e-12f, fConst32 * (((iConst33) ? 0.86000985f * fVec11[(IOTA0 - iConst65) & 511] : 0.0f) + ((iConst64) ? 0.86000985f * fVec10[(IOTA0 - iConst63) & 255] : 0.0f) + ((iConst62) ? 0.86000985f * fVec9[(IOTA0 - iConst61) & 127] : 0.0f) + ((iConst60) ? 0.86000985f * fVec8[(IOTA0 - iConst59) & 63] : 0.0f) + ((iConst58) ? 0.86000985f * fVec7[(IOTA0 - iConst57) & 31] : 0.0f) + ((iConst56) ? 0.86000985f * fVec6[iConst55] : 0.0f) + ((iConst54) ? 0.86000985f * fVec5[iConst53] : 0.0f) + ((iConst51) ? 0.86000985f * fTemp5 : 0.0f) + ((iConst52) ? 0.86000985f * fVec4[iConst51] : 0.0f))))))) - (fRec59[1] * fTemp13 + fRec60[1]);
			float fTemp15 = fTemp4 * fTemp13 + 1.0f;
			float fTemp16 = fTemp4 * fTemp14 / fTemp15;
			fRec59[0] = fRec59[1] + 2.0f * fTemp16;
			float fTemp17 = fRec59[1] + fTemp16;
			float fTemp18 = fTemp4 * fTemp17;
			fRec60[0] = fRec60[1] + 2.0f * fTemp18;
			float fRec61 = fTemp17;
			float fRec62 = fTemp14 / fTemp15;
			float fRec63 = fRec60[1] + fTemp18;
			fRec57[0] = fRec61;
			float fRec58 = fRec63;
			fRec56[0] = fSlow5 * fRec58;
			float fTemp19 = fRec54[0] * std::pow(1e+01f, 0.05f * fRec56[0]);
			fVec12[0] = fTemp19;
			float fTemp20 = fRec49[1] + fConst23 * (fTemp19 - fRec50[1]);
			fRec49[0] = fConst25 * fTemp20 - fRec49[1];
			float fTemp21 = fRec50[1] + fConst66 * fTemp20;
			fRec50[0] = 2.0f * fTemp21 - fRec50[1];
			float fRec51 = fTemp19;
			float fRec52 = fConst67 * fTemp20;
			float fRec53 = fTemp21;
			float fTemp22 = fRec46[1] + fConst23 * (fRec53 - fRec47[1]);
			fRec46[0] = fConst25 * fTemp22 - fRec46[1];
			float fTemp23 = fRec47[1] + fConst66 * fTemp22;
			fRec47[0] = 2.0f * fTemp23 - fRec47[1];
			float fRec48 = fTemp23;
			float fTemp24 = fRec42[1] + fConst20 * (fRec48 - fRec43[1]);
			fRec42[0] = fConst22 * fTemp24 - fRec42[1];
			float fTemp25 = fRec43[1] + fConst68 * fTemp24;
			fRec43[0] = 2.0f * fTemp25 - fRec43[1];
			float fRec44 = fRec48;
			float fRec45 = fConst69 * fTemp24;
			float fTemp26 = 2.828427f * fRec45;
			float fTemp27 = fRec38[1] + fConst17 * (fRec44 - (fTemp26 + fRec39[1]));
			fRec38[0] = fConst19 * fTemp27 - fRec38[1];
			float fTemp28 = fRec39[1] + fConst70 * fTemp27;
			fRec39[0] = 2.0f * fTemp28 - fRec39[1];
			float fRec40 = fRec44 - fTemp26;
			float fRec41 = fConst71 * fTemp27;
			float fTemp29 = 2.828427f * fRec41;
			float fTemp30 = fRec34[1] + fConst14 * (fRec40 - (fTemp29 + fRec35[1]));
			fRec34[0] = fConst16 * fTemp30 - fRec34[1];
			float fTemp31 = fRec35[1] + fConst72 * fTemp30;
			fRec35[0] = 2.0f * fTemp31 - fRec35[1];
			float fRec36 = fRec40 - fTemp29;
			float fRec37 = fConst73 * fTemp30;
			float fTemp32 = 2.828427f * fRec37;
			float fTemp33 = fRec29[1] + fConst11 * (fRec36 - (fTemp32 + fRec30[1]));
			fRec29[0] = fConst13 * fTemp33 - fRec29[1];
			float fTemp34 = fRec30[1] + fConst74 * fTemp33;
			fRec30[0] = 2.0f * fTemp34 - fRec30[1];
			float fRec31 = fRec36 - fTemp32;
			float fRec32 = fConst75 * fTemp33;
			float fRec33 = fTemp34;
			float fTemp35 = fRec26[1] + fConst11 * (fRec33 - fRec27[1]);
			fRec26[0] = fConst13 * fTemp35 - fRec26[1];
			float fTemp36 = fRec27[1] + fConst74 * fTemp35;
			fRec27[0] = 2.0f * fTemp36 - fRec27[1];
			float fRec28 = fTemp36;
			float fTemp37 = fRec22[1] + fConst8 * (fRec28 - fRec23[1]);
			fRec22[0] = fConst10 * fTemp37 - fRec22[1];
			float fTemp38 = fRec23[1] + fConst76 * fTemp37;
			fRec23[0] = 2.0f * fTemp38 - fRec23[1];
			float fRec24 = fRec28;
			float fRec25 = fConst77 * fTemp37;
			float fTemp39 = 2.828427f * fRec25;
			float fTemp40 = fRec17[1] + fConst5 * (fRec24 - (fTemp39 + fRec18[1]));
			fRec17[0] = fConst7 * fTemp40 - fRec17[1];
			float fTemp41 = fRec18[1] + fConst78 * fTemp40;
			fRec18[0] = 2.0f * fTemp41 - fRec18[1];
			float fRec19 = fRec24 - fTemp39;
			float fRec20 = fConst79 * fTemp40;
			float fRec21 = fTemp41;
			float fTemp42 = fRec14[1] + fConst5 * (fRec21 - fRec15[1]);
			fRec14[0] = fConst7 * fTemp42 - fRec14[1];
			float fTemp43 = fRec15[1] + fConst78 * fTemp42;
			fRec15[0] = 2.0f * fTemp43 - fRec15[1];
			fRec16[0] = fTemp43;
			fVec13[0] = fConst84 * fRec16[1] - fConst44 * fRec74[1];
			fRec75[0] = fConst41 * (fVec13[1] - fConst47 * fRec75[1] + fConst85 * fRec16[1] + fConst86 * fRec16[0]);
			fRec74[0] = fRec75[0];
			fVec14[0] = 0.50032705f * fRec74[1] - fConst49 * fRec72[1];
			fRec73[0] = fConst37 * (fVec14[1] - fConst50 * fRec73[1] - 1.0006541f * fRec74[1] + 0.50032705f * fRec74[0]);
			fRec72[0] = fRec73[0];
			float fTemp44 = std::fabs(0.92736715f * fRec72[0]);
			fRec71[0] = std::max<float>(fTemp44, fConst87 * fRec71[1] + fConst88 * fTemp44);
			fRec70[0] = fConst83 * fRec71[0] + fConst82 * fRec70[1];
			fVec15[0] = fConst44 * fRec80[1] - fConst46 * fVec12[1];
			fRec81[0] = fConst41 * (fConst43 * fVec12[1] - (fVec15[1] + fConst47 * fRec81[1]) + fConst48 * fTemp19);
			fRec80[0] = fRec81[0];
			fVec16[0] = 0.50032705f * fRec80[1] - fConst49 * fRec78[1];
			fRec79[0] = fConst37 * (fVec16[1] - fConst50 * fRec79[1] - 1.0006541f * fRec80[1] + 0.50032705f * fRec80[0]);
			fRec78[0] = fRec79[0];
			float fTemp45 = std::fabs(0.92736715f * fRec78[0]);
			fRec77[0] = std::max<float>(fTemp45, fConst87 * fRec77[1] + fConst88 * fTemp45);
			fRec76[0] = fConst83 * fRec77[0] + fConst82 * fRec76[1];
			float fTemp46 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec76[0])));
			fRec69[0] = fSlow15 * std::min<float>(6.0f, std::max<float>(-12.0f, fSlow16 - 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec70[0]))) - fTemp46))) + fConst80 * fRec69[1];
			float fTemp47 = fRec16[0] * std::pow(1e+01f, 0.05f * fRec69[0]);
			float fTemp48 = fRec21 + 1.4142135f * fRec20;
			float fTemp49 = fRec82[1] + fConst5 * (fRec19 - (fTemp48 + fRec83[1]));
			fRec82[0] = fConst7 * fTemp49 - fRec82[1];
			float fTemp50 = fRec83[1] + fConst78 * fTemp49;
			fRec83[0] = 2.0f * fTemp50 - fRec83[1];
			float fRec84 = fRec19 - fTemp48;
			float fRec85 = fConst79 * fTemp49;
			float fRec86 = fTemp50;
			float fTemp51 = fRec84 - (fRec86 + 1.4142135f * fRec85);
			fVec17[0] = fTemp51;
			fVec18[0] = fConst84 * fVec17[1] - fConst44 * fRec92[1];
			fRec93[0] = fConst41 * (fVec18[1] - fConst47 * fRec93[1] + fConst85 * fVec17[1] + fConst86 * fTemp51);
			fRec92[0] = fRec93[0];
			fVec19[0] = 0.50032705f * fRec92[1] - fConst49 * fRec90[1];
			fRec91[0] = fConst37 * (fVec19[1] - fConst50 * fRec91[1] - 1.0006541f * fRec92[1] + 0.50032705f * fRec92[0]);
			fRec90[0] = fRec91[0];
			float fTemp52 = std::fabs(0.92736715f * fRec90[0]);
			fRec89[0] = std::max<float>(fTemp52, fConst87 * fRec89[1] + fConst88 * fTemp52);
			fRec88[0] = fConst83 * fRec89[0] + fConst82 * fRec88[1];
			fRec87[0] = fSlow17 * std::min<float>(9.0f, std::max<float>(-12.0f, fSlow18 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec88[0])))))) + fConst89 * fRec87[1];
			float fTemp53 = fTemp51 * std::pow(1e+01f, 0.05f * fRec87[0]);
			float fTemp54 = fRec33 + 1.4142135f * fRec32;
			float fTemp55 = fRec106[1] + fConst11 * (fRec31 - (fTemp54 + fRec107[1]));
			fRec106[0] = fConst13 * fTemp55 - fRec106[1];
			float fTemp56 = fRec107[1] + fConst74 * fTemp55;
			fRec107[0] = 2.0f * fTemp56 - fRec107[1];
			float fRec108 = fRec31 - fTemp54;
			float fRec109 = fConst75 * fTemp55;
			float fRec110 = fTemp56;
			float fTemp57 = fRec110 + 1.4142135f * fRec109;
			float fTemp58 = fRec102[1] + fConst5 * (fRec108 - (fTemp57 + fRec103[1]));
			fRec102[0] = fConst7 * fTemp58 - fRec102[1];
			float fTemp59 = fRec103[1] + fConst78 * fTemp58;
			fRec103[0] = 2.0f * fTemp59 - fRec103[1];
			float fRec104 = fRec108 - fTemp57;
			float fRec105 = fConst79 * fTemp58;
			float fTemp60 = 2.828427f * fRec105;
			float fTemp61 = fRec97[1] + fConst8 * (fRec104 - (fTemp60 + fRec98[1]));
			fRec97[0] = fConst10 * fTemp61 - fRec97[1];
			float fTemp62 = fRec98[1] + fConst76 * fTemp61;
			fRec98[0] = 2.0f * fTemp62 - fRec98[1];
			float fRec99 = fRec104 - fTemp60;
			float fRec100 = fConst77 * fTemp61;
			float fRec101 = fTemp62;
			float fTemp63 = fRec94[1] + fConst8 * (fRec101 - fRec95[1]);
			fRec94[0] = fConst10 * fTemp63 - fRec94[1];
			float fTemp64 = fRec95[1] + fConst76 * fTemp63;
			fRec95[0] = 2.0f * fTemp64 - fRec95[1];
			fRec96[0] = fTemp64;
			fVec20[0] = fConst84 * fRec96[1] - fConst44 * fRec116[1];
			fRec117[0] = fConst41 * (fVec20[1] - fConst47 * fRec117[1] + fConst85 * fRec96[1] + fConst86 * fRec96[0]);
			fRec116[0] = fRec117[0];
			fVec21[0] = 0.50032705f * fRec116[1] - fConst49 * fRec114[1];
			fRec115[0] = fConst37 * (fVec21[1] - fConst50 * fRec115[1] - 1.0006541f * fRec116[1] + 0.50032705f * fRec116[0]);
			fRec114[0] = fRec115[0];
			float fTemp65 = std::fabs(0.92736715f * fRec114[0]);
			fRec113[0] = std::max<float>(fTemp65, fConst87 * fRec113[1] + fConst88 * fTemp65);
			fRec112[0] = fConst83 * fRec113[0] + fConst82 * fRec112[1];
			fRec111[0] = fSlow19 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow20 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec112[0])))))) + fConst91 * fRec111[1];
			float fTemp66 = fRec96[0] * std::pow(1e+01f, 0.05f * fRec111[0]);
			float fTemp67 = fRec101 + 1.4142135f * fRec100;
			float fTemp68 = fRec118[1] + fConst8 * (fRec99 - (fTemp67 + fRec119[1]));
			fRec118[0] = fConst10 * fTemp68 - fRec118[1];
			float fTemp69 = fRec119[1] + fConst76 * fTemp68;
			fRec119[0] = 2.0f * fTemp69 - fRec119[1];
			float fRec120 = fRec99 - fTemp67;
			float fRec121 = fConst77 * fTemp68;
			float fRec122 = fTemp69;
			float fTemp70 = fRec120 - (fRec122 + 1.4142135f * fRec121);
			fVec22[0] = fTemp70;
			fVec23[0] = fConst84 * fVec22[1] - fConst44 * fRec128[1];
			fRec129[0] = fConst41 * (fVec23[1] - fConst47 * fRec129[1] + fConst85 * fVec22[1] + fConst86 * fTemp70);
			fRec128[0] = fRec129[0];
			fVec24[0] = 0.50032705f * fRec128[1] - fConst49 * fRec126[1];
			fRec127[0] = fConst37 * (fVec24[1] - fConst50 * fRec127[1] - 1.0006541f * fRec128[1] + 0.50032705f * fRec128[0]);
			fRec126[0] = fRec127[0];
			float fTemp71 = std::fabs(0.92736715f * fRec126[0]);
			fRec125[0] = std::max<float>(fTemp71, fConst87 * fRec125[1] + fConst88 * fTemp71);
			fRec124[0] = fConst83 * fRec125[0] + fConst82 * fRec124[1];
			fRec123[0] = fSlow21 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow22 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec124[0])))))) + fConst93 * fRec123[1];
			float fTemp72 = fTemp70 * std::pow(1e+01f, 0.05f * fRec123[0]);
			float fTemp73 = fRec53 + 1.4142135f * fRec52;
			float fTemp74 = fRec162[1] + fConst23 * (fRec51 - (fTemp73 + fRec163[1]));
			fRec162[0] = fConst25 * fTemp74 - fRec162[1];
			float fTemp75 = fRec163[1] + fConst66 * fTemp74;
			fRec163[0] = 2.0f * fTemp75 - fRec163[1];
			float fRec164 = fRec51 - fTemp73;
			float fRec165 = fConst67 * fTemp74;
			float fRec166 = fTemp75;
			float fTemp76 = fRec166 + 1.4142135f * fRec165;
			float fTemp77 = fRec158[1] + fConst11 * (fRec164 - (fTemp76 + fRec159[1]));
			fRec158[0] = fConst13 * fTemp77 - fRec158[1];
			float fTemp78 = fRec159[1] + fConst74 * fTemp77;
			fRec159[0] = 2.0f * fTemp78 - fRec159[1];
			float fRec160 = fRec164 - fTemp76;
			float fRec161 = fConst75 * fTemp77;
			float fTemp79 = 2.828427f * fRec161;
			float fTemp80 = fRec154[1] + fConst5 * (fRec160 - (fTemp79 + fRec155[1]));
			fRec154[0] = fConst7 * fTemp80 - fRec154[1];
			float fTemp81 = fRec155[1] + fConst78 * fTemp80;
			fRec155[0] = 2.0f * fTemp81 - fRec155[1];
			float fRec156 = fRec160 - fTemp79;
			float fRec157 = fConst79 * fTemp80;
			float fTemp82 = 2.828427f * fRec157;
			float fTemp83 = fRec150[1] + fConst8 * (fRec156 - (fTemp82 + fRec151[1]));
			fRec150[0] = fConst10 * fTemp83 - fRec150[1];
			float fTemp84 = fRec151[1] + fConst76 * fTemp83;
			fRec151[0] = 2.0f * fTemp84 - fRec151[1];
			float fRec152 = fRec156 - fTemp82;
			float fRec153 = fConst77 * fTemp83;
			float fTemp85 = 2.828427f * fRec153;
			float fTemp86 = fRec145[1] + fConst20 * (fRec152 - (fTemp85 + fRec146[1]));
			fRec145[0] = fConst22 * fTemp86 - fRec145[1];
			float fTemp87 = fRec146[1] + fConst68 * fTemp86;
			fRec146[0] = 2.0f * fTemp87 - fRec146[1];
			float fRec147 = fRec152 - fTemp85;
			float fRec148 = fConst69 * fTemp86;
			float fRec149 = fTemp87;
			float fTemp88 = fRec142[1] + fConst20 * (fRec149 - fRec143[1]);
			fRec142[0] = fConst22 * fTemp88 - fRec142[1];
			float fTemp89 = fRec143[1] + fConst68 * fTemp88;
			fRec143[0] = 2.0f * fTemp89 - fRec143[1];
			float fRec144 = fTemp89;
			float fTemp90 = fRec138[1] + fConst14 * (fRec144 - fRec139[1]);
			fRec138[0] = fConst16 * fTemp90 - fRec138[1];
			float fTemp91 = fRec139[1] + fConst72 * fTemp90;
			fRec139[0] = 2.0f * fTemp91 - fRec139[1];
			float fRec140 = fRec144;
			float fRec141 = fConst73 * fTemp90;
			float fTemp92 = 2.828427f * fRec141;
			float fTemp93 = fRec133[1] + fConst17 * (fRec140 - (fTemp92 + fRec134[1]));
			fRec133[0] = fConst19 * fTemp93 - fRec133[1];
			float fTemp94 = fRec134[1] + fConst70 * fTemp93;
			fRec134[0] = 2.0f * fTemp94 - fRec134[1];
			float fRec135 = fRec140 - fTemp92;
			float fRec136 = fConst71 * fTemp93;
			float fRec137 = fTemp94;
			float fTemp95 = fRec130[1] + fConst17 * (fRec137 - fRec131[1]);
			fRec130[0] = fConst19 * fTemp95 - fRec130[1];
			float fTemp96 = fRec131[1] + fConst70 * fTemp95;
			fRec131[0] = 2.0f * fTemp96 - fRec131[1];
			fRec132[0] = fTemp96;
			fVec25[0] = fConst84 * fRec132[1] - fConst44 * fRec172[1];
			fRec173[0] = fConst41 * (fVec25[1] - fConst47 * fRec173[1] + fConst85 * fRec132[1] + fConst86 * fRec132[0]);
			fRec172[0] = fRec173[0];
			fVec26[0] = 0.50032705f * fRec172[1] - fConst49 * fRec170[1];
			fRec171[0] = fConst37 * (fVec26[1] - fConst50 * fRec171[1] - 1.0006541f * fRec172[1] + 0.50032705f * fRec172[0]);
			fRec170[0] = fRec171[0];
			float fTemp97 = std::fabs(0.92736715f * fRec170[0]);
			fRec169[0] = std::max<float>(fTemp97, fConst87 * fRec169[1] + fConst88 * fTemp97);
			fRec168[0] = fConst83 * fRec169[0] + fConst82 * fRec168[1];
			fRec167[0] = fSlow23 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow24 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec168[0])))))) + fConst87 * fRec167[1];
			float fTemp98 = fRec132[0] * std::pow(1e+01f, 0.05f * fRec167[0]);
			float fTemp99 = fRec137 + 1.4142135f * fRec136;
			float fTemp100 = fRec174[1] + fConst17 * (fRec135 - (fTemp99 + fRec175[1]));
			fRec174[0] = fConst19 * fTemp100 - fRec174[1];
			float fTemp101 = fRec175[1] + fConst70 * fTemp100;
			fRec175[0] = 2.0f * fTemp101 - fRec175[1];
			float fRec176 = fRec135 - fTemp99;
			float fRec177 = fConst71 * fTemp100;
			float fRec178 = fTemp101;
			float fTemp102 = fRec176 - (fRec178 + 1.4142135f * fRec177);
			fVec27[0] = fTemp102;
			fVec28[0] = fConst84 * fVec27[1] - fConst44 * fRec184[1];
			fRec185[0] = fConst41 * (fVec28[1] - fConst47 * fRec185[1] + fConst85 * fVec27[1] + fConst86 * fTemp102);
			fRec184[0] = fRec185[0];
			fVec29[0] = 0.50032705f * fRec184[1] - fConst49 * fRec182[1];
			fRec183[0] = fConst37 * (fVec29[1] - fConst50 * fRec183[1] - 1.0006541f * fRec184[1] + 0.50032705f * fRec184[0]);
			fRec182[0] = fRec183[0];
			float fTemp103 = std::fabs(0.92736715f * fRec182[0]);
			fRec181[0] = std::max<float>(fTemp103, fConst87 * fRec181[1] + fConst88 * fTemp103);
			fRec180[0] = fConst83 * fRec181[0] + fConst82 * fRec180[1];
			fRec179[0] = fSlow25 * std::min<float>(12.0f, std::max<float>(-12.0f, fSlow26 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec180[0])))))) + fConst96 * fRec179[1];
			float fTemp104 = fTemp102 * std::pow(1e+01f, 0.05f * fRec179[0]);
			float fTemp105 = fRec149 + 1.4142135f * fRec148;
			float fTemp106 = fRec198[1] + fConst20 * (fRec147 - (fTemp105 + fRec199[1]));
			fRec198[0] = fConst22 * fTemp106 - fRec198[1];
			float fTemp107 = fRec199[1] + fConst68 * fTemp106;
			fRec199[0] = 2.0f * fTemp107 - fRec199[1];
			float fRec200 = fRec147 - fTemp105;
			float fRec201 = fConst69 * fTemp106;
			float fRec202 = fTemp107;
			float fTemp108 = fRec202 + 1.4142135f * fRec201;
			float fTemp109 = fRec194[1] + fConst17 * (fRec200 - (fTemp108 + fRec195[1]));
			fRec194[0] = fConst19 * fTemp109 - fRec194[1];
			float fTemp110 = fRec195[1] + fConst70 * fTemp109;
			fRec195[0] = 2.0f * fTemp110 - fRec195[1];
			float fRec196 = fRec200 - fTemp108;
			float fRec197 = fConst71 * fTemp109;
			float fTemp111 = 2.828427f * fRec197;
			float fTemp112 = fRec189[1] + fConst14 * (fRec196 - (fTemp111 + fRec190[1]));
			fRec189[0] = fConst16 * fTemp112 - fRec189[1];
			float fTemp113 = fRec190[1] + fConst72 * fTemp112;
			fRec190[0] = 2.0f * fTemp113 - fRec190[1];
			float fRec191 = fRec196 - fTemp111;
			float fRec192 = fConst73 * fTemp112;
			float fRec193 = fTemp113;
			float fTemp114 = fRec186[1] + fConst14 * (fRec193 - fRec187[1]);
			fRec186[0] = fConst16 * fTemp114 - fRec186[1];
			float fTemp115 = fRec187[1] + fConst72 * fTemp114;
			fRec187[0] = 2.0f * fTemp115 - fRec187[1];
			fRec188[0] = fTemp115;
			fVec30[0] = fConst84 * fRec188[1] - fConst44 * fRec208[1];
			fRec209[0] = fConst41 * (fVec30[1] - fConst47 * fRec209[1] + fConst85 * fRec188[1] + fConst86 * fRec188[0]);
			fRec208[0] = fRec209[0];
			fVec31[0] = 0.50032705f * fRec208[1] - fConst49 * fRec206[1];
			fRec207[0] = fConst37 * (fVec31[1] - fConst50 * fRec207[1] - 1.0006541f * fRec208[1] + 0.50032705f * fRec208[0]);
			fRec206[0] = fRec207[0];
			float fTemp116 = std::fabs(0.92736715f * fRec206[0]);
			fRec205[0] = std::max<float>(fTemp116, fConst87 * fRec205[1] + fConst88 * fTemp116);
			fRec204[0] = fConst83 * fRec205[0] + fConst82 * fRec204[1];
			fRec203[0] = fSlow27 * std::min<float>(9.0f, std::max<float>(-12.0f, fSlow28 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec204[0])))))) + fConst98 * fRec203[1];
			float fTemp117 = fRec188[0] * std::pow(1e+01f, 0.05f * fRec203[0]);
			float fTemp118 = fRec193 + 1.4142135f * fRec192;
			float fTemp119 = fRec210[1] + fConst14 * (fRec191 - (fTemp118 + fRec211[1]));
			fRec210[0] = fConst16 * fTemp119 - fRec210[1];
			float fTemp120 = fRec211[1] + fConst72 * fTemp119;
			fRec211[0] = 2.0f * fTemp120 - fRec211[1];
			float fRec212 = fRec191 - fTemp118;
			float fRec213 = fConst73 * fTemp119;
			float fRec214 = fTemp120;
			float fTemp121 = fRec212 - (fRec214 + 1.4142135f * fRec213);
			fVec32[0] = fTemp121;
			fVec33[0] = fConst84 * fVec32[1] - fConst44 * fRec220[1];
			fRec221[0] = fConst41 * (fVec33[1] - fConst47 * fRec221[1] + fConst85 * fVec32[1] + fConst86 * fTemp121);
			fRec220[0] = fRec221[0];
			fVec34[0] = 0.50032705f * fRec220[1] - fConst49 * fRec218[1];
			fRec219[0] = fConst37 * (fVec34[1] - fConst50 * fRec219[1] - 1.0006541f * fRec220[1] + 0.50032705f * fRec220[0]);
			fRec218[0] = fRec219[0];
			float fTemp122 = std::fabs(0.92736715f * fRec218[0]);
			fRec217[0] = std::max<float>(fTemp122, fConst87 * fRec217[1] + fConst88 * fTemp122);
			fRec216[0] = fConst83 * fRec217[0] + fConst82 * fRec216[1];
			fRec215[0] = fSlow29 * std::min<float>(6.0f, std::max<float>(-12.0f, fSlow30 + 2e+01f * (fTemp46 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec216[0])))))) + fConst100 * fRec215[1];
			float fTemp123 = fTemp121 * std::pow(1e+01f, 0.05f * fRec215[0]);
			fRec5[0] = fTemp47 + fTemp53 + fTemp66 + fTemp72 + fTemp98 + fTemp104 + fTemp117 + fTemp123;
			float fRec6 = fTemp47;
			float fRec7 = fTemp53;
			float fRec8 = fTemp66;
			float fRec9 = fTemp72;
			float fRec10 = fTemp98;
			float fRec11 = fTemp104;
			float fRec12 = fTemp117;
			float fRec13 = fTemp123;
			float fTemp124 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec6)));
			int iTemp125 = (fTemp124 > fSlow32) + (fTemp124 > fSlow33);
			float fTemp126 = std::max<float>(0.0f, ((iTemp125 == 0) ? 0.0f : ((iTemp125 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp124 + 6.5f - fSlow12) : fTemp124 + 6.0f - fSlow12)));
			float fTemp127 = ((-(0.75f * fTemp126) > fRec222[1]) ? fConst87 : fConst102);
			fRec222[0] = fRec222[1] * fTemp127 - 0.75f * fTemp126 * (1.0f - fTemp127);
			float fTemp128 = fRec6 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec222[0]))) + 1.5f)))));
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
			float fTemp138 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp129 : -3.4028235e+38f), ((iConst104) ? fVec36[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec37[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec38[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec39[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec40[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec41[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec42[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec43[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec44[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
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
			float fTemp149 = ((fTemp144 > fRec223[1]) ? ((iTemp148) ? 0.0f : std::exp(-(fConst28 / ((iTemp148) ? 1.0f : fTemp147)))) : ((iTemp146) ? 0.0f : std::exp(-(fConst28 / ((iTemp146) ? 1.0f : fTemp145)))));
			fRec223[0] = fTemp144 * (1.0f - fTemp149) + fRec223[1] * fTemp149;
			float fTemp150 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec7)));
			int iTemp151 = (fTemp150 > fSlow32) + (fTemp150 > fSlow33);
			float fTemp152 = std::max<float>(0.0f, ((iTemp151 == 0) ? 0.0f : ((iTemp151 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp150 + 6.5f - fSlow12) : fTemp150 + 6.0f - fSlow12)));
			float fTemp153 = ((-(0.75f * fTemp152) > fRec224[1]) ? fConst121 : fConst100);
			fRec224[0] = fRec224[1] * fTemp153 - 0.75f * fTemp152 * (1.0f - fTemp153);
			float fTemp154 = fRec7 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec224[0]))) + 1.5f)))));
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
			float fTemp164 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp155 : -3.4028235e+38f), ((iConst104) ? fVec46[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec47[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec48[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec49[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec50[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec51[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec52[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec53[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec54[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
			int iTemp165 = (fTemp164 > fSlow34) + (fTemp164 > fSlow35);
			float fTemp166 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp165 == 0) ? fTemp164 + 6.0f - fSlow12 : ((iTemp165 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp164 + 3.0f - fSlow12)) : 0.0f)));
			float fTemp167 = ((iTemp142) ? 0.2f : 0.007f);
			int iTemp168 = std::fabs(fTemp167) < 1.1920929e-07f;
			float fTemp169 = ((iTemp142) ? 0.007f : 0.2f);
			int iTemp170 = std::fabs(fTemp169) < 1.1920929e-07f;
			float fTemp171 = ((fTemp166 > fRec225[1]) ? ((iTemp170) ? 0.0f : std::exp(-(fConst28 / ((iTemp170) ? 1.0f : fTemp169)))) : ((iTemp168) ? 0.0f : std::exp(-(fConst28 / ((iTemp168) ? 1.0f : fTemp167)))));
			fRec225[0] = fTemp166 * (1.0f - fTemp171) + fRec225[1] * fTemp171;
			float fTemp172 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec8)));
			int iTemp173 = (fTemp172 > fSlow37) + (fTemp172 > fSlow32);
			float fTemp174 = std::max<float>(0.0f, ((iTemp173 == 0) ? 0.0f : ((iTemp173 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp172 + 7.5f - fSlow12) : fTemp172 + 7.0f - fSlow12)));
			float fTemp175 = ((-(0.75f * fTemp174) > fRec226[1]) ? fConst123 : fConst122);
			fRec226[0] = fRec226[1] * fTemp175 - 0.75f * fTemp174 * (1.0f - fTemp175);
			float fTemp176 = fRec8 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec226[0]))) + 1.5f)))));
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
			float fTemp186 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp177 : -3.4028235e+38f), ((iConst104) ? fVec56[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec57[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec58[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec59[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec60[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec61[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec62[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec63[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec64[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
			int iTemp187 = (fTemp186 > fSlow34) + (fTemp186 > fSlow35);
			float fTemp188 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp187 == 0) ? fTemp186 + 6.0f - fSlow12 : ((iTemp187 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp186 + 3.0f - fSlow12)) : 0.0f)));
			float fTemp189 = ((iTemp142) ? 0.2f : 0.006f);
			int iTemp190 = std::fabs(fTemp189) < 1.1920929e-07f;
			float fTemp191 = ((iTemp142) ? 0.006f : 0.2f);
			int iTemp192 = std::fabs(fTemp191) < 1.1920929e-07f;
			float fTemp193 = ((fTemp188 > fRec227[1]) ? ((iTemp192) ? 0.0f : std::exp(-(fConst28 / ((iTemp192) ? 1.0f : fTemp191)))) : ((iTemp190) ? 0.0f : std::exp(-(fConst28 / ((iTemp190) ? 1.0f : fTemp189)))));
			fRec227[0] = fTemp188 * (1.0f - fTemp193) + fRec227[1] * fTemp193;
			float fTemp194 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec9)));
			int iTemp195 = (fTemp194 > fSlow38) + (fTemp194 > fSlow37);
			float fTemp196 = std::max<float>(0.0f, ((iTemp195 == 0) ? 0.0f : ((iTemp195 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp194 + 8.5f - fSlow12) : fTemp194 + 8.0f - fSlow12)));
			float fTemp197 = ((-(0.75f * fTemp196) > fRec228[1]) ? fConst125 : fConst124);
			fRec228[0] = fRec228[1] * fTemp197 - 0.75f * fTemp196 * (1.0f - fTemp197);
			float fTemp198 = fRec9 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec228[0]))) + 1.5f)))));
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
			float fTemp208 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp199 : -3.4028235e+38f), ((iConst104) ? fVec66[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec67[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec68[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec69[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec70[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec71[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec72[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec73[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec74[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
			int iTemp209 = (fTemp208 > fSlow34) + (fTemp208 > fSlow35);
			float fTemp210 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp209 == 0) ? fTemp208 + 6.0f - fSlow12 : ((iTemp209 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp208 + 3.0f - fSlow12)) : 0.0f)));
			float fTemp211 = ((iTemp142) ? 0.2f : 0.005f);
			int iTemp212 = std::fabs(fTemp211) < 1.1920929e-07f;
			float fTemp213 = ((iTemp142) ? 0.005f : 0.2f);
			int iTemp214 = std::fabs(fTemp213) < 1.1920929e-07f;
			float fTemp215 = ((fTemp210 > fRec229[1]) ? ((iTemp214) ? 0.0f : std::exp(-(fConst28 / ((iTemp214) ? 1.0f : fTemp213)))) : ((iTemp212) ? 0.0f : std::exp(-(fConst28 / ((iTemp212) ? 1.0f : fTemp211)))));
			fRec229[0] = fTemp210 * (1.0f - fTemp215) + fRec229[1] * fTemp215;
			float fTemp216 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec10)));
			int iTemp217 = (fTemp216 > fSlow39) + (fTemp216 > fSlow40);
			float fTemp218 = std::max<float>(0.0f, ((iTemp217 == 0) ? 0.0f : ((iTemp217 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp216 + 11.5f - fSlow12) : fTemp216 + 11.0f - fSlow12)));
			float fTemp219 = ((-(0.75f * fTemp218) > fRec230[1]) ? fConst122 : fConst82);
			fRec230[0] = fRec230[1] * fTemp219 - 0.75f * fTemp218 * (1.0f - fTemp219);
			float fTemp220 = fRec10 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec230[0]))) + 1.5f)))));
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
			float fTemp230 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp221 : -3.4028235e+38f), ((iConst104) ? fVec76[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec77[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec78[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec79[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec80[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec81[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec82[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec83[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec84[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
			int iTemp231 = (fTemp230 > fSlow41) + (fTemp230 > fSlow42);
			float fTemp232 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp231 == 0) ? fTemp230 + 7.0f - fSlow12 : ((iTemp231 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp230 + 4.0f - fSlow12)) : 0.0f)));
			float fTemp233 = ((iTemp142) ? 0.16f : 0.004f);
			int iTemp234 = std::fabs(fTemp233) < 1.1920929e-07f;
			float fTemp235 = ((iTemp142) ? 0.004f : 0.16f);
			int iTemp236 = std::fabs(fTemp235) < 1.1920929e-07f;
			float fTemp237 = ((fTemp232 > fRec231[1]) ? ((iTemp236) ? 0.0f : std::exp(-(fConst28 / ((iTemp236) ? 1.0f : fTemp235)))) : ((iTemp234) ? 0.0f : std::exp(-(fConst28 / ((iTemp234) ? 1.0f : fTemp233)))));
			fRec231[0] = fTemp232 * (1.0f - fTemp237) + fRec231[1] * fTemp237;
			float fTemp238 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec11)));
			int iTemp239 = (fTemp238 > fSlow43) + (fTemp238 > fSlow39);
			float fTemp240 = std::max<float>(0.0f, ((iTemp239 == 0) ? 0.0f : ((iTemp239 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp238 + 12.5f - fSlow12) : fTemp238 + 12.0f - fSlow12)));
			float fTemp241 = ((-(0.75f * fTemp240) > fRec232[1]) ? fConst124 : fConst126);
			fRec232[0] = fRec232[1] * fTemp241 - 0.75f * fTemp240 * (1.0f - fTemp241);
			float fTemp242 = fRec11 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec232[0]))) + 1.5f)))));
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
			float fTemp252 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp243 : -3.4028235e+38f), ((iConst104) ? fVec86[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec87[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec88[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec89[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec90[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec91[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec92[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec93[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec94[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
			int iTemp253 = (fTemp252 > fSlow41) + (fTemp252 > fSlow42);
			float fTemp254 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp253 == 0) ? fTemp252 + 7.0f - fSlow12 : ((iTemp253 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp252 + 4.0f - fSlow12)) : 0.0f)));
			float fTemp255 = ((iTemp142) ? 0.12f : 0.003f);
			int iTemp256 = std::fabs(fTemp255) < 1.1920929e-07f;
			float fTemp257 = ((iTemp142) ? 0.003f : 0.12f);
			int iTemp258 = std::fabs(fTemp257) < 1.1920929e-07f;
			float fTemp259 = ((fTemp254 > fRec233[1]) ? ((iTemp258) ? 0.0f : std::exp(-(fConst28 / ((iTemp258) ? 1.0f : fTemp257)))) : ((iTemp256) ? 0.0f : std::exp(-(fConst28 / ((iTemp256) ? 1.0f : fTemp255)))));
			fRec233[0] = fTemp254 * (1.0f - fTemp259) + fRec233[1] * fTemp259;
			float fTemp260 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec12)));
			int iTemp261 = (fTemp260 > fSlow43) + (fTemp260 > fSlow39);
			float fTemp262 = std::max<float>(0.0f, ((iTemp261 == 0) ? 0.0f : ((iTemp261 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp260 + 12.5f - fSlow12) : fTemp260 + 12.0f - fSlow12)));
			float fTemp263 = ((-(0.75f * fTemp262) > fRec234[1]) ? fConst124 : fConst127);
			fRec234[0] = fRec234[1] * fTemp263 - 0.75f * fTemp262 * (1.0f - fTemp263);
			float fTemp264 = fRec12 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec234[0]))) + 1.5f)))));
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
			float fTemp274 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp265 : -3.4028235e+38f), ((iConst104) ? fVec96[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec97[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec98[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec99[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec100[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec101[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec102[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec103[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec104[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
			int iTemp275 = (fTemp274 > fSlow44) + (fTemp274 > fSlow45);
			float fTemp276 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp275 == 0) ? fTemp274 + 8.0f - fSlow12 : ((iTemp275 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp274 + 5.0f - fSlow12)) : 0.0f)));
			float fTemp277 = ((iTemp142) ? 0.08f : 0.002f);
			int iTemp278 = std::fabs(fTemp277) < 1.1920929e-07f;
			float fTemp279 = ((iTemp142) ? 0.002f : 0.08f);
			int iTemp280 = std::fabs(fTemp279) < 1.1920929e-07f;
			float fTemp281 = ((fTemp276 > fRec235[1]) ? ((iTemp280) ? 0.0f : std::exp(-(fConst28 / ((iTemp280) ? 1.0f : fTemp279)))) : ((iTemp278) ? 0.0f : std::exp(-(fConst28 / ((iTemp278) ? 1.0f : fTemp277)))));
			fRec235[0] = fTemp276 * (1.0f - fTemp281) + fRec235[1] * fTemp281;
			float fTemp282 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fRec13)));
			int iTemp283 = (fTemp282 > fSlow46) + (fTemp282 > fSlow43);
			float fTemp284 = std::max<float>(0.0f, ((iTemp283 == 0) ? 0.0f : ((iTemp283 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp282 + 13.5f - fSlow12) : fTemp282 + 13.0f - fSlow12)));
			float fTemp285 = ((-(0.75f * fTemp284) > fRec236[1]) ? fConst124 : fConst128);
			fRec236[0] = fRec236[1] * fTemp285 - 0.75f * fTemp284 * (1.0f - fTemp285);
			float fTemp286 = fRec13 * std::pow(1e+01f, fSlow31 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec236[0]))) + 1.5f)))));
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
			float fTemp296 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(std::max<float>(((iConst103) ? fTemp287 : -3.4028235e+38f), ((iConst104) ? fVec106[iConst103] : -3.4028235e+38f)), ((iConst105) ? fVec107[iConst106] : -3.4028235e+38f)), ((iConst107) ? fVec108[iConst108] : -3.4028235e+38f)), ((iConst109) ? fVec109[(IOTA0 - iConst110) & 31] : -3.4028235e+38f)), ((iConst111) ? fVec110[(IOTA0 - iConst112) & 63] : -3.4028235e+38f)), ((iConst113) ? fVec111[(IOTA0 - iConst114) & 127] : -3.4028235e+38f)), ((iConst115) ? fVec112[(IOTA0 - iConst116) & 255] : -3.4028235e+38f)), ((iConst117) ? fVec113[(IOTA0 - iConst118) & 511] : -3.4028235e+38f)), ((iConst119) ? fVec114[(IOTA0 - iConst120) & 511] : -3.4028235e+38f))));
			int iTemp297 = (fTemp296 > fSlow47) + (fTemp296 > fSlow48);
			float fTemp298 = fTemp143 * std::max<float>(-12.0f, fTemp141 * ((iTemp297 == 0) ? fTemp296 + 9.0f - fSlow12 : ((iTemp297 == 1) ? -(0.083333336f * mydsp_faustpower2_f(fTemp296 + 6.0f - fSlow12)) : 0.0f)));
			float fTemp299 = ((iTemp142) ? 0.05f : 0.001f);
			int iTemp300 = std::fabs(fTemp299) < 1.1920929e-07f;
			float fTemp301 = ((iTemp142) ? 0.001f : 0.05f);
			int iTemp302 = std::fabs(fTemp301) < 1.1920929e-07f;
			float fTemp303 = ((fTemp298 > fRec237[1]) ? ((iTemp302) ? 0.0f : std::exp(-(fConst28 / ((iTemp302) ? 1.0f : fTemp301)))) : ((iTemp300) ? 0.0f : std::exp(-(fConst28 / ((iTemp300) ? 1.0f : fTemp299)))));
			fRec237[0] = fTemp298 * (1.0f - fTemp303) + fRec237[1] * fTemp303;
			float fTemp304 = fTemp128 * std::pow(1e+01f, 0.05f * fRec223[0]) + fTemp154 * std::pow(1e+01f, 0.05f * fRec225[0]) + fTemp176 * std::pow(1e+01f, 0.05f * fRec227[0]) + fTemp198 * std::pow(1e+01f, 0.05f * fRec229[0]) + fTemp220 * std::pow(1e+01f, 0.05f * fRec231[0]) + fTemp242 * std::pow(1e+01f, 0.05f * fRec233[0]) + fTemp264 * std::pow(1e+01f, 0.05f * fRec235[0]) + fTemp286 * std::pow(1e+01f, 0.05f * fRec237[0]);
			fVec115[IOTA0 & 2047] = fTemp304;
			float fTemp305 = std::fabs(fTemp304);
			int iTemp306 = (fTemp305 >= fRec4[1]) | (float(iRec3[1]) >= fConst30);
			iRec3[0] = ((iTemp306) ? 0 : iRec3[1] + 1);
			fRec4[0] = ((iTemp306) ? fTemp305 : fRec4[1]);
			fRec2[0] = fConst4 * fRec4[0] + fConst3 * fRec2[1];
			float fTemp307 = std::fabs(fRec2[0]);
			fRec1[0] = std::max<float>(fTemp307, fConst129 * fRec1[1] + fConst130 * fTemp307);
			float fTemp308 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec1[0], 1.1920929e-07f));
			fVbargraph1 = FAUSTFLOAT(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp308))));
			output0[i0] = FAUSTFLOAT(fTemp0 * fRec0[0] + fTemp308 * (1.0f - fRec0[0]) * fVec115[(IOTA0 - iConst131) & 2047]);
			fRec0[1] = fRec0[0];
			fRec55[1] = fRec55[0];
			fVec0[1] = fVec0[0];
			fRec54[1] = fRec54[0];
			fRec64[1] = fRec64[0];
			fVec1[1] = fVec1[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			fVec2[1] = fVec2[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
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
			fRec59[1] = fRec59[0];
			fRec60[1] = fRec60[0];
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
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
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fVec14[1] = fVec14[0];
			fRec73[1] = fRec73[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fRec70[1] = fRec70[0];
			fVec15[1] = fVec15[0];
			fRec81[1] = fRec81[0];
			fRec80[1] = fRec80[0];
			fVec16[1] = fVec16[0];
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fRec69[1] = fRec69[0];
			fRec82[1] = fRec82[0];
			fRec83[1] = fRec83[0];
			fVec17[1] = fVec17[0];
			fVec18[1] = fVec18[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fVec19[1] = fVec19[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fRec106[1] = fRec106[0];
			fRec107[1] = fRec107[0];
			fRec102[1] = fRec102[0];
			fRec103[1] = fRec103[0];
			fRec97[1] = fRec97[0];
			fRec98[1] = fRec98[0];
			fRec94[1] = fRec94[0];
			fRec95[1] = fRec95[0];
			fRec96[1] = fRec96[0];
			fVec20[1] = fVec20[0];
			fRec117[1] = fRec117[0];
			fRec116[1] = fRec116[0];
			fVec21[1] = fVec21[0];
			fRec115[1] = fRec115[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			fRec118[1] = fRec118[0];
			fRec119[1] = fRec119[0];
			fVec22[1] = fVec22[0];
			fVec23[1] = fVec23[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fVec24[1] = fVec24[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fRec124[1] = fRec124[0];
			fRec123[1] = fRec123[0];
			fRec162[1] = fRec162[0];
			fRec163[1] = fRec163[0];
			fRec158[1] = fRec158[0];
			fRec159[1] = fRec159[0];
			fRec154[1] = fRec154[0];
			fRec155[1] = fRec155[0];
			fRec150[1] = fRec150[0];
			fRec151[1] = fRec151[0];
			fRec145[1] = fRec145[0];
			fRec146[1] = fRec146[0];
			fRec142[1] = fRec142[0];
			fRec143[1] = fRec143[0];
			fRec138[1] = fRec138[0];
			fRec139[1] = fRec139[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fRec132[1] = fRec132[0];
			fVec25[1] = fVec25[0];
			fRec173[1] = fRec173[0];
			fRec172[1] = fRec172[0];
			fVec26[1] = fVec26[0];
			fRec171[1] = fRec171[0];
			fRec170[1] = fRec170[0];
			fRec169[1] = fRec169[0];
			fRec168[1] = fRec168[0];
			fRec167[1] = fRec167[0];
			fRec174[1] = fRec174[0];
			fRec175[1] = fRec175[0];
			fVec27[1] = fVec27[0];
			fVec28[1] = fVec28[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fVec29[1] = fVec29[0];
			fRec183[1] = fRec183[0];
			fRec182[1] = fRec182[0];
			fRec181[1] = fRec181[0];
			fRec180[1] = fRec180[0];
			fRec179[1] = fRec179[0];
			fRec198[1] = fRec198[0];
			fRec199[1] = fRec199[0];
			fRec194[1] = fRec194[0];
			fRec195[1] = fRec195[0];
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
			fRec186[1] = fRec186[0];
			fRec187[1] = fRec187[0];
			fRec188[1] = fRec188[0];
			fVec30[1] = fVec30[0];
			fRec209[1] = fRec209[0];
			fRec208[1] = fRec208[0];
			fVec31[1] = fVec31[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			fRec203[1] = fRec203[0];
			fRec210[1] = fRec210[0];
			fRec211[1] = fRec211[0];
			fVec32[1] = fVec32[0];
			fVec33[1] = fVec33[0];
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			fVec34[1] = fVec34[0];
			fRec219[1] = fRec219[0];
			fRec218[1] = fRec218[0];
			fRec217[1] = fRec217[0];
			fRec216[1] = fRec216[0];
			fRec215[1] = fRec215[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec222[1] = fRec222[0];
			fVec35[1] = fVec35[0];
			fVec36[2] = fVec36[1];
			fVec36[1] = fVec36[0];
			for (int j2 = 4; j2 > 0; j2 = j2 - 1) {
				fVec37[j2] = fVec37[j2 - 1];
			}
			for (int j3 = 11; j3 > 0; j3 = j3 - 1) {
				fVec38[j3] = fVec38[j3 - 1];
			}
			fRec223[1] = fRec223[0];
			fRec224[1] = fRec224[0];
			fVec45[1] = fVec45[0];
			fVec46[2] = fVec46[1];
			fVec46[1] = fVec46[0];
			for (int j4 = 4; j4 > 0; j4 = j4 - 1) {
				fVec47[j4] = fVec47[j4 - 1];
			}
			for (int j5 = 11; j5 > 0; j5 = j5 - 1) {
				fVec48[j5] = fVec48[j5 - 1];
			}
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
			fVec55[1] = fVec55[0];
			fVec56[2] = fVec56[1];
			fVec56[1] = fVec56[0];
			for (int j6 = 4; j6 > 0; j6 = j6 - 1) {
				fVec57[j6] = fVec57[j6 - 1];
			}
			for (int j7 = 11; j7 > 0; j7 = j7 - 1) {
				fVec58[j7] = fVec58[j7 - 1];
			}
			fRec227[1] = fRec227[0];
			fRec228[1] = fRec228[0];
			fVec65[1] = fVec65[0];
			fVec66[2] = fVec66[1];
			fVec66[1] = fVec66[0];
			for (int j8 = 4; j8 > 0; j8 = j8 - 1) {
				fVec67[j8] = fVec67[j8 - 1];
			}
			for (int j9 = 11; j9 > 0; j9 = j9 - 1) {
				fVec68[j9] = fVec68[j9 - 1];
			}
			fRec229[1] = fRec229[0];
			fRec230[1] = fRec230[0];
			fVec75[1] = fVec75[0];
			fVec76[2] = fVec76[1];
			fVec76[1] = fVec76[0];
			for (int j10 = 4; j10 > 0; j10 = j10 - 1) {
				fVec77[j10] = fVec77[j10 - 1];
			}
			for (int j11 = 11; j11 > 0; j11 = j11 - 1) {
				fVec78[j11] = fVec78[j11 - 1];
			}
			fRec231[1] = fRec231[0];
			fRec232[1] = fRec232[0];
			fVec85[1] = fVec85[0];
			fVec86[2] = fVec86[1];
			fVec86[1] = fVec86[0];
			for (int j12 = 4; j12 > 0; j12 = j12 - 1) {
				fVec87[j12] = fVec87[j12 - 1];
			}
			for (int j13 = 11; j13 > 0; j13 = j13 - 1) {
				fVec88[j13] = fVec88[j13 - 1];
			}
			fRec233[1] = fRec233[0];
			fRec234[1] = fRec234[0];
			fVec95[1] = fVec95[0];
			fVec96[2] = fVec96[1];
			fVec96[1] = fVec96[0];
			for (int j14 = 4; j14 > 0; j14 = j14 - 1) {
				fVec97[j14] = fVec97[j14 - 1];
			}
			for (int j15 = 11; j15 > 0; j15 = j15 - 1) {
				fVec98[j15] = fVec98[j15 - 1];
			}
			fRec235[1] = fRec235[0];
			fRec236[1] = fRec236[0];
			fVec105[1] = fVec105[0];
			fVec106[2] = fVec106[1];
			fVec106[1] = fVec106[0];
			for (int j16 = 4; j16 > 0; j16 = j16 - 1) {
				fVec107[j16] = fVec107[j16 - 1];
			}
			for (int j17 = 11; j17 > 0; j17 = j17 - 1) {
				fVec108[j17] = fVec108[j17 - 1];
			}
			fRec237[1] = fRec237[0];
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
