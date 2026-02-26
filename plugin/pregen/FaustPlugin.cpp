
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
// Version: 0.28
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
	FAUSTFLOAT fVslider0;
	float fConst6;
	float fConst7;
	float fConst8;
	float fConst9;
	FAUSTFLOAT fVslider1;
	float fRec19[2];
	float fVec0[2];
	FAUSTFLOAT fVslider2;
	float fConst10;
	float fRec18[2];
	float fConst11;
	float fConst12;
	float fConst13;
	float fRec14[2];
	float fConst14;
	float fRec15[2];
	float fConst15;
	float fRec10[2];
	float fRec11[2];
	float fConst16;
	float fConst17;
	float fConst18;
	float fRec27[2];
	float fConst19;
	float fRec28[2];
	float fConst20;
	float fConst21;
	float fConst22;
	float fConst23;
	float fRec24[2];
	float fConst24;
	float fRec25[2];
	float fConst25;
	float fConst26;
	float fConst27;
	float fConst28;
	float fRec30[2];
	float fConst29;
	float fRec31[2];
	float fConst30;
	float fConst31;
	float fConst32;
	float fConst33;
	float fRec20[2];
	float fConst34;
	float fRec21[2];
	float fConst35;
	float fRec33[2];
	float fRec34[2];
	float fConst36;
	float fConst37;
	float fConst38;
	float fRec41[2];
	float fConst39;
	float fRec42[2];
	float fConst40;
	float fConst41;
	float fConst42;
	float fConst43;
	float fRec37[2];
	float fConst44;
	float fRec38[2];
	float fConst45;
	float fRec44[2];
	float fRec45[2];
	float fVec1[2];
	float fConst46;
	float fConst47;
	float fConst48;
	float fConst49;
	float fConst50;
	float fConst51;
	float fConst52;
	float fConst53;
	float fConst54;
	float fConst55;
	float fConst56;
	float fConst57;
	float fVec2[2];
	float fConst58;
	float fRec9[2];
	float fRec8[2];
	float fConst59;
	float fConst60;
	float fConst61;
	float fConst62;
	float fConst63;
	float fVec3[2];
	float fConst64;
	float fRec7[2];
	float fRec6[2];
	float fConst65;
	float fConst66;
	float fRec5[2];
	float fConst67;
	float fRec4[2];
	float fVec4[2];
	float fConst68;
	float fRec53[2];
	float fRec52[2];
	float fVec5[2];
	float fRec51[2];
	float fRec50[2];
	float fRec49[2];
	float fRec48[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT fVslider4;
	float fConst69;
	float fRec3[2];
	float fConst70;
	float fConst71;
	float fRec2[2];
	FAUSTFLOAT fVslider5;
	float fConst72;
	float fRec62[2];
	float fRec63[2];
	float fRec64[2];
	float fVec6[2];
	float fRec61[2];
	float fRec60[2];
	float fVec7[2];
	float fRec59[2];
	float fRec58[2];
	float fRec57[2];
	float fRec56[2];
	float fConst73;
	float fRec55[2];
	float fConst74;
	float fRec54[2];
	float fConst75;
	float fRec76[2];
	float fRec77[2];
	float fRec73[2];
	float fRec74[2];
	float fRec79[2];
	float fRec80[2];
	float fRec83[2];
	float fRec84[2];
	float fVec8[2];
	float fVec9[2];
	float fRec72[2];
	float fRec71[2];
	float fVec10[2];
	float fRec70[2];
	float fRec69[2];
	float fRec68[2];
	float fRec67[2];
	float fConst76;
	float fRec66[2];
	float fConst77;
	float fRec65[2];
	float fRec95[2];
	float fRec96[2];
	float fRec97[2];
	float fVec11[2];
	float fRec94[2];
	float fRec93[2];
	float fVec12[2];
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	float fRec89[2];
	float fConst78;
	float fRec88[2];
	float fConst79;
	float fRec87[2];
	float fConst80;
	float fRec120[2];
	float fRec121[2];
	float fRec117[2];
	float fRec118[2];
	float fRec114[2];
	float fRec115[2];
	float fRec123[2];
	float fRec124[2];
	float fRec110[2];
	float fRec111[2];
	float fRec106[2];
	float fRec107[2];
	float fRec130[2];
	float fRec131[2];
	float fRec126[2];
	float fRec127[2];
	float fRec133[2];
	float fRec134[2];
	float fVec13[2];
	float fVec14[2];
	float fRec105[2];
	float fRec104[2];
	float fVec15[2];
	float fRec103[2];
	float fRec102[2];
	float fRec101[2];
	float fRec100[2];
	float fConst81;
	float fRec99[2];
	float fConst82;
	float fRec98[2];
	float fConst83;
	float fRec145[2];
	float fRec146[2];
	float fRec147[2];
	float fVec16[2];
	float fRec144[2];
	float fRec143[2];
	float fVec17[2];
	float fRec142[2];
	float fRec141[2];
	float fRec140[2];
	float fRec139[2];
	float fConst84;
	float fRec138[2];
	float fConst85;
	float fRec137[2];
	float fConst86;
	float fRec159[2];
	float fRec160[2];
	float fRec156[2];
	float fRec157[2];
	float fRec162[2];
	float fRec163[2];
	float fRec166[2];
	float fRec167[2];
	float fVec18[2];
	float fVec19[2];
	float fRec155[2];
	float fRec154[2];
	float fVec20[2];
	float fRec153[2];
	float fRec152[2];
	float fRec151[2];
	float fRec150[2];
	float fConst87;
	float fRec149[2];
	float fConst88;
	float fRec148[2];
	float fConst89;
	float fRec178[2];
	float fRec179[2];
	float fRec180[2];
	float fVec21[2];
	float fRec177[2];
	float fRec176[2];
	float fVec22[2];
	float fRec175[2];
	float fRec174[2];
	float fRec173[2];
	float fRec172[2];
	float fConst90;
	float fRec171[2];
	float fConst91;
	float fRec170[2];
	float fVec23[2];
	float fConst92;
	float fConst93;
	float fRec1[2];
	float fRec0[3];
	FAUSTFLOAT fVslider6;
	float fRec181[2];
	int IOTA0;
	float fVec24[2048];
	float fConst94;
	int iConst95;
	float fConst96;
	int iRec184[2];
	float fRec185[2];
	float fConst97;
	float fRec183[2];
	float fConst98;
	float fConst99;
	float fRec182[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fCheckbox0;
	float fRec186[2];
	
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
		m->declare("basics.lib/bypass1:author", "Julius Smith");
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/peakholder:author", "Dario Sanfilippo");
		m->declare("basics.lib/peakholder:copyright", "Copyright (C) 2022 Dario Sanfilippo <sanfilippo.dario@gmail.com>");
		m->declare("basics.lib/peakholder:license", "MIT-style STK-4.3 license");
		m->declare("basics.lib/version", "1.22.0");
		m->declare("compile_options", "-a /home/ks/.cache/faustpp/9384-md.cpp -lang cpp -fpga-mem-th 4 -ct 1 -es 1 -mcd 16 -mdd 1024 -mdy 33 -single -ftz 0");
		m->declare("compressors.lib/name", "Faust Compressor Effect Library");
		m->declare("compressors.lib/peak_compression_gain_mono:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono:license", "GPLv3");
		m->declare("compressors.lib/peak_compression_gain_mono_db:author", "Bart Brouns");
		m->declare("compressors.lib/peak_compression_gain_mono_db:license", "GPLv3");
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
		m->declare("filters.lib/version", "1.7.1");
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
		m->declare("routes.lib/version", "1.2.0");
		m->declare("signals.lib/name", "Faust Signal Routing Library");
		m->declare("signals.lib/onePoleSwitching:author", "Jonatan Liljedahl, revised by Dario Sanfilippo");
		m->declare("signals.lib/onePoleSwitching:licence", "STK-4.3");
		m->declare("signals.lib/version", "1.6.0");
		m->declare("version", "0.28");
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
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, static_cast<float>(fSampleRate)));
		fConst1 = std::tan(37699.113f / fConst0);
		fConst2 = 2.0f * (1.0f - 1.0f / mydsp_faustpower2_f(fConst1));
		fConst3 = 1.0f / fConst1;
		fConst4 = (fConst3 + -1.0f) / fConst1 + 1.0f;
		fConst5 = 1.0f / ((fConst3 + 1.0f) / fConst1 + 1.0f);
		fConst6 = std::exp(-(4e+01f / fConst0));
		fConst7 = std::exp(-(1e+02f / fConst0));
		fConst8 = 44.1f / fConst0;
		fConst9 = 1.0f - fConst8;
		fConst10 = 3.1415927f / fConst0;
		fConst11 = std::tan(2513.2742f / fConst0);
		fConst12 = fConst11 * (fConst11 + 1.4142135f) + 1.0f;
		fConst13 = 2.0f / fConst12;
		fConst14 = fConst11 / fConst12;
		fConst15 = 1.0f / fConst12;
		fConst16 = std::tan(628.31854f / fConst0);
		fConst17 = fConst16 * (fConst16 + 1.4142135f) + 1.0f;
		fConst18 = 2.0f / fConst17;
		fConst19 = fConst16 / fConst17;
		fConst20 = 1.0f / fConst17;
		fConst21 = std::tan(314.15927f / fConst0);
		fConst22 = fConst21 * (fConst21 + 1.4142135f) + 1.0f;
		fConst23 = 2.0f / fConst22;
		fConst24 = fConst21 / fConst22;
		fConst25 = 1.0f / fConst22;
		fConst26 = std::tan(1256.6371f / fConst0);
		fConst27 = fConst26 * (fConst26 + 1.4142135f) + 1.0f;
		fConst28 = 2.0f / fConst27;
		fConst29 = fConst26 / fConst27;
		fConst30 = 1.0f / fConst27;
		fConst31 = std::tan(10053.097f / fConst0);
		fConst32 = fConst31 * (fConst31 + 1.4142135f) + 1.0f;
		fConst33 = 2.0f / fConst32;
		fConst34 = fConst31 / fConst32;
		fConst35 = 1.0f / fConst32;
		fConst36 = std::tan(5026.5483f / fConst0);
		fConst37 = fConst36 * (fConst36 + 1.4142135f) + 1.0f;
		fConst38 = 2.0f / fConst37;
		fConst39 = fConst36 / fConst37;
		fConst40 = 1.0f / fConst37;
		fConst41 = std::tan(20106.193f / fConst0);
		fConst42 = fConst41 * (fConst41 + 1.4142135f) + 1.0f;
		fConst43 = 2.0f / fConst42;
		fConst44 = fConst41 / fConst42;
		fConst45 = 1.0f / fConst42;
		fConst46 = std::tan(5283.415f / fConst0);
		fConst47 = 1.7803667f * fConst46;
		fConst48 = mydsp_faustpower2_f(fConst46);
		fConst49 = fConst48 + fConst47 + 1.5848527f;
		fConst50 = 3.9810717f * fConst49;
		fConst51 = fConst48 + -1.5848527f;
		fConst52 = 7.9621434f * fConst51;
		fConst53 = 2.0f * (fConst48 + -1.0f);
		fConst54 = 1.4142135f * fConst46;
		fConst55 = fConst48 + (1.0f - fConst54);
		fConst56 = fConst48 + (1.5848527f - fConst47);
		fConst57 = 3.9810717f * fConst56;
		fConst58 = 1.0f / (fConst48 + fConst54 + 1.0f);
		fConst59 = std::tan(119.806114f / fConst0);
		fConst60 = mydsp_faustpower2_f(fConst59);
		fConst61 = 1.0006541f * (fConst60 + -1.0f);
		fConst62 = 0.50032705f * (fConst60 + 1.0f);
		fConst63 = fConst62 - fConst59;
		fConst64 = 1.0f / (fConst59 + fConst62);
		fConst65 = std::exp(-(1e+01f / fConst0));
		fConst66 = 1.0f - fConst65;
		fConst67 = 1.0f - fConst7;
		fConst68 = 2.0f * fConst51;
		fConst69 = 0.01f * (1.0f - fConst6);
		fConst70 = std::exp(-(5e+02f / fConst0));
		fConst71 = std::exp(-(66.666664f / fConst0));
		fConst72 = std::exp(-(2e+01f / fConst0));
		fConst73 = 0.01f * (1.0f - fConst72);
		fConst74 = std::exp(-(333.33334f / fConst0));
		fConst75 = std::exp(-(13.333333f / fConst0));
		fConst76 = 0.01f * (1.0f - fConst75);
		fConst77 = std::exp(-(2e+02f / fConst0));
		fConst78 = 0.01f * fConst66;
		fConst79 = std::exp(-(5e+01f / fConst0));
		fConst80 = std::exp(-(8.0f / fConst0));
		fConst81 = 0.01f * (1.0f - fConst80);
		fConst82 = std::exp(-(25.0f / fConst0));
		fConst83 = std::exp(-(6.6666665f / fConst0));
		fConst84 = 0.01f * (1.0f - fConst83);
		fConst85 = std::exp(-(16.666666f / fConst0));
		fConst86 = std::exp(-(5.714286f / fConst0));
		fConst87 = 0.01f * (1.0f - fConst86);
		fConst88 = std::exp(-(12.5f / fConst0));
		fConst89 = std::exp(-(5.0f / fConst0));
		fConst90 = 0.01f * (1.0f - fConst89);
		fConst91 = std::exp(-(33.333332f / fConst0));
		fConst92 = 1.0f - fConst3;
		fConst93 = 1.0f / (fConst3 + 1.0f);
		fConst94 = 0.01f * fConst0;
		iConst95 = static_cast<int>(fConst94);
		fConst96 = std::exp(-(628.31854f / fConst0));
		fConst97 = 1.0f - fConst96;
		fConst98 = std::exp(-(6.2831855f / fConst0));
		fConst99 = 1.0f - fConst98;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fVslider0 = static_cast<FAUSTFLOAT>(-18.0f);
		fVslider1 = static_cast<FAUSTFLOAT>(0.0f);
		fVslider2 = static_cast<FAUSTFLOAT>(42.0f);
		fVslider3 = static_cast<FAUSTFLOAT>(1.0f);
		fVslider4 = static_cast<FAUSTFLOAT>(5e+01f);
		fVslider5 = static_cast<FAUSTFLOAT>(5e+01f);
		fVslider6 = static_cast<FAUSTFLOAT>(0.0f);
		fCheckbox0 = static_cast<FAUSTFLOAT>(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fRec19[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fVec0[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec18[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec14[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec15[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec10[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec11[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec27[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec28[l8] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec24[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			fRec25[l10] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec30[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec31[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec20[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec21[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			fRec33[l15] = 0.0f;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec34[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec41[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec42[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec37[l19] = 0.0f;
		}
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec38[l20] = 0.0f;
		}
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec44[l21] = 0.0f;
		}
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			fRec45[l22] = 0.0f;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fVec1[l23] = 0.0f;
		}
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fVec2[l24] = 0.0f;
		}
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec9[l25] = 0.0f;
		}
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec8[l26] = 0.0f;
		}
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fVec3[l27] = 0.0f;
		}
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec7[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec6[l29] = 0.0f;
		}
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec5[l30] = 0.0f;
		}
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec4[l31] = 0.0f;
		}
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fVec4[l32] = 0.0f;
		}
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec53[l33] = 0.0f;
		}
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fRec52[l34] = 0.0f;
		}
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			fVec5[l35] = 0.0f;
		}
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec51[l36] = 0.0f;
		}
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec50[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec49[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec48[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec3[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec2[l41] = 0.0f;
		}
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec62[l42] = 0.0f;
		}
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec63[l43] = 0.0f;
		}
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec64[l44] = 0.0f;
		}
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fVec6[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec61[l46] = 0.0f;
		}
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec60[l47] = 0.0f;
		}
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fVec7[l48] = 0.0f;
		}
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fRec59[l49] = 0.0f;
		}
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec58[l50] = 0.0f;
		}
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fRec57[l51] = 0.0f;
		}
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			fRec56[l52] = 0.0f;
		}
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec55[l53] = 0.0f;
		}
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec54[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec76[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec77[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec73[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec74[l58] = 0.0f;
		}
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec79[l59] = 0.0f;
		}
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec80[l60] = 0.0f;
		}
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec83[l61] = 0.0f;
		}
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec84[l62] = 0.0f;
		}
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fVec8[l63] = 0.0f;
		}
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fVec9[l64] = 0.0f;
		}
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec72[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec71[l66] = 0.0f;
		}
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fVec10[l67] = 0.0f;
		}
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec70[l68] = 0.0f;
		}
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fRec69[l69] = 0.0f;
		}
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec68[l70] = 0.0f;
		}
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fRec67[l71] = 0.0f;
		}
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			fRec66[l72] = 0.0f;
		}
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec65[l73] = 0.0f;
		}
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec95[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec96[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec97[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fVec11[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec94[l78] = 0.0f;
		}
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec93[l79] = 0.0f;
		}
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fVec12[l80] = 0.0f;
		}
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec92[l81] = 0.0f;
		}
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec91[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec90[l83] = 0.0f;
		}
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec89[l84] = 0.0f;
		}
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec88[l85] = 0.0f;
		}
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fRec87[l86] = 0.0f;
		}
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec120[l87] = 0.0f;
		}
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fRec121[l88] = 0.0f;
		}
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			fRec117[l89] = 0.0f;
		}
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec118[l90] = 0.0f;
		}
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec114[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec115[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec123[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec124[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec110[l95] = 0.0f;
		}
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec111[l96] = 0.0f;
		}
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec106[l97] = 0.0f;
		}
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec107[l98] = 0.0f;
		}
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec130[l99] = 0.0f;
		}
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec131[l100] = 0.0f;
		}
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec126[l101] = 0.0f;
		}
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec127[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec133[l103] = 0.0f;
		}
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec134[l104] = 0.0f;
		}
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fVec13[l105] = 0.0f;
		}
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fVec14[l106] = 0.0f;
		}
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec105[l107] = 0.0f;
		}
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fRec104[l108] = 0.0f;
		}
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			fVec15[l109] = 0.0f;
		}
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec103[l110] = 0.0f;
		}
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec102[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec101[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec100[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec99[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec98[l115] = 0.0f;
		}
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec145[l116] = 0.0f;
		}
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec146[l117] = 0.0f;
		}
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec147[l118] = 0.0f;
		}
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fVec16[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec144[l120] = 0.0f;
		}
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec143[l121] = 0.0f;
		}
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fVec17[l122] = 0.0f;
		}
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fRec142[l123] = 0.0f;
		}
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec141[l124] = 0.0f;
		}
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fRec140[l125] = 0.0f;
		}
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			fRec139[l126] = 0.0f;
		}
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec138[l127] = 0.0f;
		}
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec137[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec159[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec160[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec156[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec157[l132] = 0.0f;
		}
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec162[l133] = 0.0f;
		}
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec163[l134] = 0.0f;
		}
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec166[l135] = 0.0f;
		}
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec167[l136] = 0.0f;
		}
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fVec18[l137] = 0.0f;
		}
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fVec19[l138] = 0.0f;
		}
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec155[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec154[l140] = 0.0f;
		}
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fVec20[l141] = 0.0f;
		}
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec153[l142] = 0.0f;
		}
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fRec152[l143] = 0.0f;
		}
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec151[l144] = 0.0f;
		}
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fRec150[l145] = 0.0f;
		}
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			fRec149[l146] = 0.0f;
		}
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec148[l147] = 0.0f;
		}
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec178[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec179[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec180[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fVec21[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec177[l152] = 0.0f;
		}
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec176[l153] = 0.0f;
		}
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fVec22[l154] = 0.0f;
		}
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec175[l155] = 0.0f;
		}
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec174[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec173[l157] = 0.0f;
		}
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec172[l158] = 0.0f;
		}
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec171[l159] = 0.0f;
		}
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fRec170[l160] = 0.0f;
		}
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fVec23[l161] = 0.0f;
		}
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fRec1[l162] = 0.0f;
		}
		for (int l163 = 0; l163 < 3; l163 = l163 + 1) {
			fRec0[l163] = 0.0f;
		}
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec181[l164] = 0.0f;
		}
		IOTA0 = 0;
		for (int l165 = 0; l165 < 2048; l165 = l165 + 1) {
			fVec24[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			iRec184[l166] = 0;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec185[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec183[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec182[l169] = 0.0f;
		}
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec186[l170] = 0.0f;
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
		ui_interface->declare(&fVslider4, "1", "");
		ui_interface->declare(&fVslider4, "symbol", "sb_strength");
		ui_interface->declare(&fVslider4, "unit", "%");
		ui_interface->addVerticalSlider("sb_strength", &fVslider4, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("main");
		ui_interface->declare(&fCheckbox0, "0", "");
		ui_interface->declare(&fCheckbox0, "symbol", "bypass");
		ui_interface->addCheckButton("bypass", &fCheckbox0);
		ui_interface->declare(&fVslider1, "1", "");
		ui_interface->declare(&fVslider1, "symbol", "pre_gain");
		ui_interface->declare(&fVslider1, "unit", "dB");
		ui_interface->addVerticalSlider("PreGain", &fVslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->declare(&fVslider3, "3", "");
		ui_interface->declare(&fVslider3, "symbol", "vad_ext");
		ui_interface->addVerticalSlider("vad_ext", &fVslider3, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.001f));
		ui_interface->declare(&fVbargraph0, "99", "");
		ui_interface->declare(&fVbargraph0, "symbol", "limiter_gain");
		ui_interface->addVerticalBargraph("LimiterGR", &fVbargraph0, FAUSTFLOAT(-12.0f), FAUSTFLOAT(0.0f));
		ui_interface->declare(&fVslider6, "9", "");
		ui_interface->declare(&fVslider6, "symbol", "post_gain");
		ui_interface->declare(&fVslider6, "unit", "dB");
		ui_interface->addVerticalSlider("PostGain", &fVslider6, FAUSTFLOAT(0.0f), FAUSTFLOAT(-2e+01f), FAUSTFLOAT(2e+01f), FAUSTFLOAT(0.1f));
		ui_interface->openHorizontalBox("leveler");
		ui_interface->declare(&fVslider0, "1", "");
		ui_interface->declare(&fVslider0, "symbol", "leveler_target");
		ui_interface->declare(&fVslider0, "unit", "dB");
		ui_interface->addVerticalSlider("target", &fVslider0, FAUSTFLOAT(-18.0f), FAUSTFLOAT(-6e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openHorizontalBox("mbExpComp");
		ui_interface->declare(&fVslider5, "symbol", "mb_strength");
		ui_interface->addVerticalSlider("mb_strength", &fVslider5, FAUSTFLOAT(5e+01f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->declare(&fVslider2, "scale", "log");
		ui_interface->declare(&fVslider2, "symbol", "pre_lowcut");
		ui_interface->addVerticalSlider("preLowcut_freq", &fVslider2, FAUSTFLOAT(42.0f), FAUSTFLOAT(1e+01f), FAUSTFLOAT(4e+02f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* output0 = outputs[0];
		float fSlow0 = static_cast<float>(fVslider0);
		float fSlow1 = fSlow0 + -12.5f;
		float fSlow2 = fConst8 * std::pow(1e+01f, 0.05f * static_cast<float>(fVslider1));
		float fSlow3 = 1.0f / std::tan(fConst10 * static_cast<float>(fVslider2));
		float fSlow4 = 1.0f - fSlow3;
		float fSlow5 = 1.0f / (fSlow3 + 1.0f);
		float fSlow6 = static_cast<float>(fVslider4) * static_cast<float>(fVslider3);
		float fSlow7 = fConst69 * fSlow6;
		float fSlow8 = fSlow0 + -13.5f;
		float fSlow9 = 0.01f * static_cast<float>(fVslider5);
		float fSlow10 = fSlow0 + -11.5f;
		float fSlow11 = fConst73 * fSlow6;
		float fSlow12 = fConst76 * fSlow6;
		float fSlow13 = fSlow0 + -10.5f;
		float fSlow14 = fConst78 * fSlow6;
		float fSlow15 = fSlow0 + -7.5f;
		float fSlow16 = fConst81 * fSlow6;
		float fSlow17 = fSlow0 + -8.5f;
		float fSlow18 = fSlow0 + -6.5f;
		float fSlow19 = fConst84 * fSlow6;
		float fSlow20 = fSlow0 + -5.5f;
		float fSlow21 = fConst87 * fSlow6;
		float fSlow22 = fConst90 * fSlow6;
		float fSlow23 = fConst8 * std::pow(1e+01f, 0.05f * static_cast<float>(fVslider6));
		float fSlow24 = fConst8 * static_cast<float>(fCheckbox0);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			fRec19[0] = fSlow2 + fConst9 * fRec19[1];
			float fTemp0 = static_cast<float>(input0[i0]);
			float fTemp1 = fTemp0 * fRec19[0];
			fVec0[0] = fTemp1;
			fRec18[0] = -(fSlow5 * (fSlow4 * fRec18[1] - fSlow3 * (fTemp1 - fVec0[1])));
			float fTemp2 = fRec14[1] + fConst11 * (fRec18[0] - fRec15[1]);
			fRec14[0] = fConst13 * fTemp2 - fRec14[1];
			float fTemp3 = fRec15[1] + fConst14 * fTemp2;
			fRec15[0] = 2.0f * fTemp3 - fRec15[1];
			float fRec16 = fConst15 * fTemp2;
			float fRec17 = fTemp3;
			float fTemp4 = fRec17 + 1.4142135f * fRec16;
			float fTemp5 = fRec10[1] + fConst11 * (fRec18[0] - (fTemp4 + fRec11[1]));
			fRec10[0] = fConst13 * fTemp5 - fRec10[1];
			float fTemp6 = fRec11[1] + fConst14 * fTemp5;
			fRec11[0] = 2.0f * fTemp6 - fRec11[1];
			float fRec12 = fConst15 * fTemp5;
			float fRec13 = fTemp6;
			float fTemp7 = fRec17 + fRec13;
			float fTemp8 = fRec16 + fRec12;
			float fTemp9 = 1.4142135f * fTemp8;
			float fTemp10 = fTemp9 + fTemp7;
			float fTemp11 = fRec27[1] + fConst16 * (fRec18[0] - (fTemp10 + fRec28[1]));
			fRec27[0] = fConst18 * fTemp11 - fRec27[1];
			float fTemp12 = fRec28[1] + fConst19 * fTemp11;
			fRec28[0] = 2.0f * fTemp12 - fRec28[1];
			float fRec29 = fConst20 * fTemp11;
			float fTemp13 = fTemp9 + fTemp7 + 2.828427f * fRec29;
			float fTemp14 = fRec24[1] + fConst21 * (fRec18[0] - (fTemp13 + fRec25[1]));
			fRec24[0] = fConst23 * fTemp14 - fRec24[1];
			float fTemp15 = fRec25[1] + fConst24 * fTemp14;
			fRec25[0] = 2.0f * fTemp15 - fRec25[1];
			float fRec26 = fConst25 * fTemp14;
			float fTemp16 = fRec29 + fRec26;
			float fTemp17 = fTemp10 + 2.828427f * fTemp16;
			float fTemp18 = fRec30[1] + fConst26 * (fRec18[0] - (fTemp17 + fRec31[1]));
			fRec30[0] = fConst28 * fTemp18 - fRec30[1];
			float fTemp19 = fRec31[1] + fConst29 * fTemp18;
			fRec31[0] = 2.0f * fTemp19 - fRec31[1];
			float fRec32 = fConst30 * fTemp18;
			float fTemp20 = fRec32 + fTemp16;
			float fTemp21 = 2.828427f * fTemp20;
			float fTemp22 = fTemp10 + fTemp21;
			float fTemp23 = fRec20[1] + fConst31 * (fRec18[0] - (fTemp22 + fRec21[1]));
			fRec20[0] = fConst33 * fTemp23 - fRec20[1];
			float fTemp24 = fRec21[1] + fConst34 * fTemp23;
			fRec21[0] = 2.0f * fTemp24 - fRec21[1];
			float fRec22 = fConst35 * fTemp23;
			float fRec23 = fTemp24;
			float fTemp25 = fRec23 + fTemp7;
			float fTemp26 = fRec22 + fTemp8;
			float fTemp27 = 1.4142135f * fTemp26 + fTemp21 + fTemp25;
			float fTemp28 = fRec33[1] + fConst31 * (fRec18[0] - (fTemp27 + fRec34[1]));
			fRec33[0] = fConst33 * fTemp28 - fRec33[1];
			float fTemp29 = fRec34[1] + fConst34 * fTemp28;
			fRec34[0] = 2.0f * fTemp29 - fRec34[1];
			float fRec35 = fConst35 * fTemp28;
			float fRec36 = fTemp29;
			float fTemp30 = fRec36 + fTemp25;
			float fTemp31 = fRec35 + fTemp26;
			float fTemp32 = 1.4142135f * fTemp31;
			float fTemp33 = fTemp32 + fTemp21 + fTemp30;
			float fTemp34 = fRec41[1] + fConst36 * (fRec18[0] - (fTemp33 + fRec42[1]));
			fRec41[0] = fConst38 * fTemp34 - fRec41[1];
			float fTemp35 = fRec42[1] + fConst39 * fTemp34;
			fRec42[0] = 2.0f * fTemp35 - fRec42[1];
			float fRec43 = fConst40 * fTemp34;
			float fTemp36 = 2.828427f * (fRec43 + fTemp20);
			float fTemp37 = fTemp32 + fTemp30 + fTemp36;
			float fTemp38 = fRec37[1] + fConst41 * (fRec18[0] - (fTemp37 + fRec38[1]));
			fRec37[0] = fConst43 * fTemp38 - fRec37[1];
			float fTemp39 = fRec38[1] + fConst44 * fTemp38;
			fRec38[0] = 2.0f * fTemp39 - fRec38[1];
			float fRec39 = fConst45 * fTemp38;
			float fRec40 = fTemp39;
			float fTemp40 = fRec40 + fTemp30;
			float fTemp41 = fRec39 + fTemp31;
			float fTemp42 = 1.4142135f * fTemp41 + fTemp36 + fTemp40;
			float fTemp43 = fRec44[1] + fConst41 * (fRec18[0] - (fTemp42 + fRec45[1]));
			fRec44[0] = fConst43 * fTemp43 - fRec44[1];
			float fTemp44 = fRec45[1] + fConst44 * fTemp43;
			fRec45[0] = 2.0f * fTemp44 - fRec45[1];
			float fRec46 = fConst45 * fTemp43;
			float fRec47 = fTemp44;
			float fTemp45 = fRec18[0] - (1.4142135f * (fRec46 + fTemp41) + fTemp36 + fRec47 + fTemp40);
			fVec1[0] = fTemp45;
			fVec2[0] = fConst57 * fVec1[1] - fConst55 * fRec8[1];
			fRec9[0] = fConst58 * (fVec2[1] - fConst53 * fRec9[1] + fConst52 * fVec1[1] + fConst50 * fTemp45);
			fRec8[0] = fRec9[0];
			fVec3[0] = 0.50032705f * fRec8[1] - fConst63 * fRec6[1];
			fRec7[0] = fConst64 * (fVec3[1] - fConst61 * fRec7[1] - 1.0006541f * fRec8[1] + 0.50032705f * fRec8[0]);
			fRec6[0] = fRec7[0];
			float fTemp46 = std::fabs(0.92736715f * fRec6[0]);
			fRec5[0] = std::max<float>(fTemp46, fConst65 * fRec5[1] + fConst66 * fTemp46);
			fRec4[0] = fConst67 * fRec5[0] + fConst7 * fRec4[1];
			fVec4[0] = fConst55 * fRec52[1] - fConst56 * fRec18[1];
			fRec53[0] = fConst58 * (fConst68 * fRec18[1] - (fVec4[1] + fConst53 * fRec53[1]) + fConst49 * fRec18[0]);
			fRec52[0] = fRec53[0];
			fVec5[0] = 0.50032705f * fRec52[1] - fConst63 * fRec50[1];
			fRec51[0] = fConst64 * (fVec5[1] - fConst61 * fRec51[1] - 1.0006541f * fRec52[1] + 0.50032705f * fRec52[0]);
			fRec50[0] = fRec51[0];
			float fTemp47 = std::fabs(0.92736715f * fRec50[0]);
			fRec49[0] = std::max<float>(fTemp47, fConst65 * fRec49[1] + fConst66 * fTemp47);
			fRec48[0] = fConst67 * fRec49[0] + fConst7 * fRec48[1];
			float fTemp48 = std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec48[0])));
			fRec3[0] = fSlow7 * std::min<float>(6.0f, std::max<float>(-12.0f, 2e+01f * (fTemp48 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec4[0])))) + -4.0f)) + fConst6 * fRec3[1];
			float fTemp49 = fTemp45 * std::pow(1e+01f, 0.05f * fRec3[0]);
			float fTemp50 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp49)));
			int iTemp51 = (fTemp50 > fSlow8) + (fTemp50 > fSlow1);
			float fTemp52 = std::max<float>(0.0f, ((iTemp51 == 0) ? 0.0f : ((iTemp51 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp50 + 13.5f - fSlow0) : fTemp50 + 13.0f - fSlow0)));
			float fTemp53 = ((-(0.75f * fTemp52) > fRec2[1]) ? fConst71 : fConst70);
			fRec2[0] = fRec2[1] * fTemp53 - 0.75f * fTemp52 * (1.0f - fTemp53);
			float fTemp54 = fRec62[1] + fConst41 * (fRec40 - fRec63[1]);
			fRec62[0] = fConst43 * fTemp54 - fRec62[1];
			float fTemp55 = fRec63[1] + fConst44 * fTemp54;
			fRec63[0] = 2.0f * fTemp55 - fRec63[1];
			fRec64[0] = fTemp55;
			fVec6[0] = fConst57 * fRec64[1] - fConst55 * fRec60[1];
			fRec61[0] = fConst58 * (fVec6[1] - fConst53 * fRec61[1] + fConst52 * fRec64[1] + fConst50 * fRec64[0]);
			fRec60[0] = fRec61[0];
			fVec7[0] = 0.50032705f * fRec60[1] - fConst63 * fRec58[1];
			fRec59[0] = fConst64 * (fVec7[1] - fConst61 * fRec59[1] - 1.0006541f * fRec60[1] + 0.50032705f * fRec60[0]);
			fRec58[0] = fRec59[0];
			float fTemp56 = std::fabs(0.92736715f * fRec58[0]);
			fRec57[0] = std::max<float>(fTemp56, fConst65 * fRec57[1] + fConst66 * fTemp56);
			fRec56[0] = fConst67 * fRec57[0] + fConst7 * fRec56[1];
			fRec55[0] = fSlow11 * std::min<float>(9.0f, std::max<float>(-12.0f, 2e+01f * (fTemp48 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec56[0])))) + -7.0f)) + fConst72 * fRec55[1];
			float fTemp57 = fRec64[0] * std::pow(1e+01f, 0.05f * fRec55[0]);
			float fTemp58 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp57)));
			int iTemp59 = (fTemp58 > fSlow1) + (fTemp58 > fSlow10);
			float fTemp60 = std::max<float>(0.0f, ((iTemp59 == 0) ? 0.0f : ((iTemp59 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp58 + 12.5f - fSlow0) : fTemp58 + 12.0f - fSlow0)));
			float fTemp61 = ((-(0.75f * fTemp60) > fRec54[1]) ? fConst71 : fConst74);
			fRec54[0] = fRec54[1] * fTemp61 - 0.75f * fTemp60 * (1.0f - fTemp61);
			float fTemp62 = fRec76[1] + fConst31 * (fRec23 - fRec77[1]);
			fRec76[0] = fConst33 * fTemp62 - fRec76[1];
			float fTemp63 = fRec77[1] + fConst34 * fTemp62;
			fRec77[0] = 2.0f * fTemp63 - fRec77[1];
			float fRec78 = fTemp63;
			float fTemp64 = fRec73[1] + fConst41 * (fRec78 - fRec74[1]);
			fRec73[0] = fConst43 * fTemp64 - fRec73[1];
			float fTemp65 = fRec74[1] + fConst44 * fTemp64;
			fRec74[0] = 2.0f * fTemp65 - fRec74[1];
			float fRec75 = fConst45 * fTemp64;
			float fTemp66 = 2.828427f * fRec75;
			float fTemp67 = fRec79[1] + fConst36 * (fRec78 - (fTemp66 + fRec80[1]));
			fRec79[0] = fConst38 * fTemp67 - fRec79[1];
			float fTemp68 = fRec80[1] + fConst39 * fTemp67;
			fRec80[0] = 2.0f * fTemp68 - fRec80[1];
			float fRec81 = fConst40 * fTemp67;
			float fRec82 = fTemp68;
			float fTemp69 = fRec82 + fTemp66 + 1.4142135f * fRec81;
			float fTemp70 = fRec83[1] + fConst36 * (fRec78 - (fTemp69 + fRec84[1]));
			fRec83[0] = fConst38 * fTemp70 - fRec83[1];
			float fTemp71 = fRec84[1] + fConst39 * fTemp70;
			fRec84[0] = 2.0f * fTemp71 - fRec84[1];
			float fRec85 = fConst40 * fTemp70;
			float fRec86 = fTemp71;
			float fTemp72 = fRec78 - (1.4142135f * (fRec81 + fRec85) + fRec86 + fRec82 + fTemp66);
			fVec8[0] = fTemp72;
			fVec9[0] = fConst57 * fVec8[1] - fConst55 * fRec71[1];
			fRec72[0] = fConst58 * (fVec9[1] - fConst53 * fRec72[1] + fConst52 * fVec8[1] + fConst50 * fTemp72);
			fRec71[0] = fRec72[0];
			fVec10[0] = 0.50032705f * fRec71[1] - fConst63 * fRec69[1];
			fRec70[0] = fConst64 * (fVec10[1] - fConst61 * fRec70[1] - 1.0006541f * fRec71[1] + 0.50032705f * fRec71[0]);
			fRec69[0] = fRec70[0];
			float fTemp73 = std::fabs(0.92736715f * fRec69[0]);
			fRec68[0] = std::max<float>(fTemp73, fConst65 * fRec68[1] + fConst66 * fTemp73);
			fRec67[0] = fConst67 * fRec68[0] + fConst7 * fRec67[1];
			fRec66[0] = fSlow12 * std::min<float>(12.0f, std::max<float>(-12.0f, 2e+01f * (fTemp48 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec67[0])))) + -1e+01f)) + fConst75 * fRec66[1];
			float fTemp74 = fTemp72 * std::pow(1e+01f, 0.05f * fRec66[0]);
			float fTemp75 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp74)));
			int iTemp76 = (fTemp75 > fSlow1) + (fTemp75 > fSlow10);
			float fTemp77 = std::max<float>(0.0f, ((iTemp76 == 0) ? 0.0f : ((iTemp76 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp75 + 12.5f - fSlow0) : fTemp75 + 12.0f - fSlow0)));
			float fTemp78 = ((-(0.75f * fTemp77) > fRec65[1]) ? fConst71 : fConst77);
			fRec65[0] = fRec65[1] * fTemp78 - 0.75f * fTemp77 * (1.0f - fTemp78);
			float fTemp79 = fRec95[1] + fConst36 * (fRec82 - fRec96[1]);
			fRec95[0] = fConst38 * fTemp79 - fRec95[1];
			float fTemp80 = fRec96[1] + fConst39 * fTemp79;
			fRec96[0] = 2.0f * fTemp80 - fRec96[1];
			fRec97[0] = fTemp80;
			fVec11[0] = fConst57 * fRec97[1] - fConst55 * fRec93[1];
			fRec94[0] = fConst58 * (fVec11[1] - fConst53 * fRec94[1] + fConst52 * fRec97[1] + fConst50 * fRec97[0]);
			fRec93[0] = fRec94[0];
			fVec12[0] = 0.50032705f * fRec93[1] - fConst63 * fRec91[1];
			fRec92[0] = fConst64 * (fVec12[1] - fConst61 * fRec92[1] - 1.0006541f * fRec93[1] + 0.50032705f * fRec93[0]);
			fRec91[0] = fRec92[0];
			float fTemp81 = std::fabs(0.92736715f * fRec91[0]);
			fRec90[0] = std::max<float>(fTemp81, fConst65 * fRec90[1] + fConst66 * fTemp81);
			fRec89[0] = fConst67 * fRec90[0] + fConst7 * fRec89[1];
			fRec88[0] = fSlow14 * std::min<float>(12.0f, std::max<float>(-12.0f, 2e+01f * (fTemp48 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec89[0])))) + -9.0f)) + fConst65 * fRec88[1];
			float fTemp82 = fRec97[0] * std::pow(1e+01f, 0.05f * fRec88[0]);
			float fTemp83 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp82)));
			int iTemp84 = (fTemp83 > fSlow10) + (fTemp83 > fSlow13);
			float fTemp85 = std::max<float>(0.0f, ((iTemp84 == 0) ? 0.0f : ((iTemp84 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp83 + 11.5f - fSlow0) : fTemp83 + 11.0f - fSlow0)));
			float fTemp86 = ((-(0.75f * fTemp85) > fRec87[1]) ? fConst79 : fConst7);
			fRec87[0] = fRec87[1] * fTemp86 - 0.75f * fTemp85 * (1.0f - fTemp86);
			float fTemp87 = fRec120[1] + fConst11 * (fRec17 - fRec121[1]);
			fRec120[0] = fConst13 * fTemp87 - fRec120[1];
			float fTemp88 = fRec121[1] + fConst14 * fTemp87;
			fRec121[0] = 2.0f * fTemp88 - fRec121[1];
			float fRec122 = fTemp88;
			float fTemp89 = fRec117[1] + fConst31 * (fRec122 - fRec118[1]);
			fRec117[0] = fConst33 * fTemp89 - fRec117[1];
			float fTemp90 = fRec118[1] + fConst34 * fTemp89;
			fRec118[0] = 2.0f * fTemp90 - fRec118[1];
			float fRec119 = fConst35 * fTemp89;
			float fTemp91 = 2.828427f * fRec119;
			float fTemp92 = fRec114[1] + fConst36 * (fRec122 - (fTemp91 + fRec115[1]));
			fRec114[0] = fConst38 * fTemp92 - fRec114[1];
			float fTemp93 = fRec115[1] + fConst39 * fTemp92;
			fRec115[0] = 2.0f * fTemp93 - fRec115[1];
			float fRec116 = fConst40 * fTemp92;
			float fTemp94 = fRec119 + fRec116;
			float fTemp95 = 2.828427f * fTemp94;
			float fTemp96 = fRec123[1] + fConst41 * (fRec122 - (fTemp95 + fRec124[1]));
			fRec123[0] = fConst43 * fTemp96 - fRec123[1];
			float fTemp97 = fRec124[1] + fConst44 * fTemp96;
			fRec124[0] = 2.0f * fTemp97 - fRec124[1];
			float fRec125 = fConst45 * fTemp96;
			float fTemp98 = fRec125 + fTemp94;
			float fTemp99 = 2.828427f * fTemp98;
			float fTemp100 = fRec110[1] + fConst16 * (fRec122 - (fTemp99 + fRec111[1]));
			fRec110[0] = fConst18 * fTemp100 - fRec110[1];
			float fTemp101 = fRec111[1] + fConst19 * fTemp100;
			fRec111[0] = 2.0f * fTemp101 - fRec111[1];
			float fRec112 = fConst20 * fTemp100;
			float fRec113 = fTemp101;
			float fTemp102 = fTemp99 + fRec113 + 1.4142135f * fRec112;
			float fTemp103 = fRec106[1] + fConst16 * (fRec122 - (fTemp102 + fRec107[1]));
			fRec106[0] = fConst18 * fTemp103 - fRec106[1];
			float fTemp104 = fRec107[1] + fConst19 * fTemp103;
			fRec107[0] = 2.0f * fTemp104 - fRec107[1];
			float fRec108 = fConst20 * fTemp103;
			float fRec109 = fTemp104;
			float fTemp105 = fRec113 + fRec109;
			float fTemp106 = fRec112 + fRec108;
			float fTemp107 = 1.4142135f * fTemp106;
			float fTemp108 = fTemp107 + fTemp99 + fTemp105;
			float fTemp109 = fRec130[1] + fConst21 * (fRec122 - (fTemp108 + fRec131[1]));
			fRec130[0] = fConst23 * fTemp109 - fRec130[1];
			float fTemp110 = fRec131[1] + fConst24 * fTemp109;
			fRec131[0] = 2.0f * fTemp110 - fRec131[1];
			float fRec132 = fConst25 * fTemp109;
			float fTemp111 = 2.828427f * (fRec132 + fTemp98);
			float fTemp112 = fTemp107 + fTemp105 + fTemp111;
			float fTemp113 = fRec126[1] + fConst26 * (fRec122 - (fTemp112 + fRec127[1]));
			fRec126[0] = fConst28 * fTemp113 - fRec126[1];
			float fTemp114 = fRec127[1] + fConst29 * fTemp113;
			fRec127[0] = 2.0f * fTemp114 - fRec127[1];
			float fRec128 = fConst30 * fTemp113;
			float fRec129 = fTemp114;
			float fTemp115 = fRec129 + fTemp105;
			float fTemp116 = fRec128 + fTemp106;
			float fTemp117 = 1.4142135f * fTemp116 + fTemp111 + fTemp115;
			float fTemp118 = fRec133[1] + fConst26 * (fRec122 - (fTemp117 + fRec134[1]));
			fRec133[0] = fConst28 * fTemp118 - fRec133[1];
			float fTemp119 = fRec134[1] + fConst29 * fTemp118;
			fRec134[0] = 2.0f * fTemp119 - fRec134[1];
			float fRec135 = fConst30 * fTemp118;
			float fRec136 = fTemp119;
			float fTemp120 = fRec122 - (1.4142135f * (fRec135 + fTemp116) + fTemp111 + fRec136 + fTemp115);
			fVec13[0] = fTemp120;
			fVec14[0] = fConst57 * fVec13[1] - fConst55 * fRec104[1];
			fRec105[0] = fConst58 * (fVec14[1] - fConst53 * fRec105[1] + fConst52 * fVec13[1] + fConst50 * fTemp120);
			fRec104[0] = fRec105[0];
			fVec15[0] = 0.50032705f * fRec104[1] - fConst63 * fRec102[1];
			fRec103[0] = fConst64 * (fVec15[1] - fConst61 * fRec103[1] - 1.0006541f * fRec104[1] + 0.50032705f * fRec104[0]);
			fRec102[0] = fRec103[0];
			float fTemp121 = std::fabs(0.92736715f * fRec102[0]);
			fRec101[0] = std::max<float>(fTemp121, fConst65 * fRec101[1] + fConst66 * fTemp121);
			fRec100[0] = fConst67 * fRec101[0] + fConst7 * fRec100[1];
			fRec99[0] = fSlow16 * std::min<float>(12.0f, std::max<float>(-12.0f, 2e+01f * (fTemp48 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec100[0])))) + -8.0f)) + fConst80 * fRec99[1];
			float fTemp122 = fTemp120 * std::pow(1e+01f, 0.05f * fRec99[0]);
			float fTemp123 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp122)));
			int iTemp124 = (fTemp123 > fSlow17) + (fTemp123 > fSlow15);
			float fTemp125 = std::max<float>(0.0f, ((iTemp124 == 0) ? 0.0f : ((iTemp124 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp123 + 8.5f - fSlow0) : fTemp123 + 8.0f - fSlow0)));
			float fTemp126 = ((-(0.75f * fTemp125) > fRec98[1]) ? fConst82 : fConst71);
			fRec98[0] = fRec98[1] * fTemp126 - 0.75f * fTemp125 * (1.0f - fTemp126);
			float fTemp127 = fRec145[1] + fConst26 * (fRec129 - fRec146[1]);
			fRec145[0] = fConst28 * fTemp127 - fRec145[1];
			float fTemp128 = fRec146[1] + fConst29 * fTemp127;
			fRec146[0] = 2.0f * fTemp128 - fRec146[1];
			fRec147[0] = fTemp128;
			fVec16[0] = fConst57 * fRec147[1] - fConst55 * fRec143[1];
			fRec144[0] = fConst58 * (fVec16[1] - fConst53 * fRec144[1] + fConst52 * fRec147[1] + fConst50 * fRec147[0]);
			fRec143[0] = fRec144[0];
			fVec17[0] = 0.50032705f * fRec143[1] - fConst63 * fRec141[1];
			fRec142[0] = fConst64 * (fVec17[1] - fConst61 * fRec142[1] - 1.0006541f * fRec143[1] + 0.50032705f * fRec143[0]);
			fRec141[0] = fRec142[0];
			float fTemp129 = std::fabs(0.92736715f * fRec141[0]);
			fRec140[0] = std::max<float>(fTemp129, fConst65 * fRec140[1] + fConst66 * fTemp129);
			fRec139[0] = fConst67 * fRec140[0] + fConst7 * fRec139[1];
			fRec138[0] = fSlow19 * std::min<float>(12.0f, std::max<float>(-12.0f, 2e+01f * (fTemp48 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec139[0])))) + -5.0f)) + fConst83 * fRec138[1];
			float fTemp130 = fRec147[0] * std::pow(1e+01f, 0.05f * fRec138[0]);
			float fTemp131 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp130)));
			int iTemp132 = (fTemp131 > fSlow15) + (fTemp131 > fSlow18);
			float fTemp133 = std::max<float>(0.0f, ((iTemp132 == 0) ? 0.0f : ((iTemp132 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp131 + 7.5f - fSlow0) : fTemp131 + 7.0f - fSlow0)));
			float fTemp134 = ((-(0.75f * fTemp133) > fRec137[1]) ? fConst85 : fConst79);
			fRec137[0] = fRec137[1] * fTemp134 - 0.75f * fTemp133 * (1.0f - fTemp134);
			float fTemp135 = fRec159[1] + fConst16 * (fRec113 - fRec160[1]);
			fRec159[0] = fConst18 * fTemp135 - fRec159[1];
			float fTemp136 = fRec160[1] + fConst19 * fTemp135;
			fRec160[0] = 2.0f * fTemp136 - fRec160[1];
			float fRec161 = fTemp136;
			float fTemp137 = fRec156[1] + fConst26 * (fRec161 - fRec157[1]);
			fRec156[0] = fConst28 * fTemp137 - fRec156[1];
			float fTemp138 = fRec157[1] + fConst29 * fTemp137;
			fRec157[0] = 2.0f * fTemp138 - fRec157[1];
			float fRec158 = fConst30 * fTemp137;
			float fTemp139 = 2.828427f * fRec158;
			float fTemp140 = fRec162[1] + fConst21 * (fRec161 - (fTemp139 + fRec163[1]));
			fRec162[0] = fConst23 * fTemp140 - fRec162[1];
			float fTemp141 = fRec163[1] + fConst24 * fTemp140;
			fRec163[0] = 2.0f * fTemp141 - fRec163[1];
			float fRec164 = fConst25 * fTemp140;
			float fRec165 = fTemp141;
			float fTemp142 = fRec165 + fTemp139 + 1.4142135f * fRec164;
			float fTemp143 = fRec166[1] + fConst21 * (fRec161 - (fTemp142 + fRec167[1]));
			fRec166[0] = fConst23 * fTemp143 - fRec166[1];
			float fTemp144 = fRec167[1] + fConst24 * fTemp143;
			fRec167[0] = 2.0f * fTemp144 - fRec167[1];
			float fRec168 = fConst25 * fTemp143;
			float fRec169 = fTemp144;
			float fTemp145 = fRec161 - (1.4142135f * (fRec164 + fRec168) + fRec169 + fRec165 + fTemp139);
			fVec18[0] = fTemp145;
			fVec19[0] = fConst57 * fVec18[1] - fConst55 * fRec154[1];
			fRec155[0] = fConst58 * (fVec19[1] - fConst53 * fRec155[1] + fConst52 * fVec18[1] + fConst50 * fTemp145);
			fRec154[0] = fRec155[0];
			fVec20[0] = 0.50032705f * fRec154[1] - fConst63 * fRec152[1];
			fRec153[0] = fConst64 * (fVec20[1] - fConst61 * fRec153[1] - 1.0006541f * fRec154[1] + 0.50032705f * fRec154[0]);
			fRec152[0] = fRec153[0];
			float fTemp146 = std::fabs(0.92736715f * fRec152[0]);
			fRec151[0] = std::max<float>(fTemp146, fConst65 * fRec151[1] + fConst66 * fTemp146);
			fRec150[0] = fConst67 * fRec151[0] + fConst7 * fRec150[1];
			fRec149[0] = fSlow21 * std::min<float>(9.0f, std::max<float>(-12.0f, 2e+01f * (fTemp48 - std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec150[0])))) + -5.0f)) + fConst86 * fRec149[1];
			float fTemp147 = fTemp145 * std::pow(1e+01f, 0.05f * fRec149[0]);
			float fTemp148 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp147)));
			int iTemp149 = (fTemp148 > fSlow18) + (fTemp148 > fSlow20);
			float fTemp150 = std::max<float>(0.0f, ((iTemp149 == 0) ? 0.0f : ((iTemp149 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp148 + 6.5f - fSlow0) : fTemp148 + 6.0f - fSlow0)));
			float fTemp151 = ((-(0.75f * fTemp150) > fRec148[1]) ? fConst88 : fConst6);
			fRec148[0] = fRec148[1] * fTemp151 - 0.75f * fTemp150 * (1.0f - fTemp151);
			float fTemp152 = fRec178[1] + fConst21 * (fRec165 - fRec179[1]);
			fRec178[0] = fConst23 * fTemp152 - fRec178[1];
			float fTemp153 = fRec179[1] + fConst24 * fTemp152;
			fRec179[0] = 2.0f * fTemp153 - fRec179[1];
			fRec180[0] = fTemp153;
			fVec21[0] = fConst57 * fRec180[1] - fConst55 * fRec176[1];
			fRec177[0] = fConst58 * (fVec21[1] - fConst53 * fRec177[1] + fConst52 * fRec180[1] + fConst50 * fRec180[0]);
			fRec176[0] = fRec177[0];
			fVec22[0] = 0.50032705f * fRec176[1] - fConst63 * fRec174[1];
			fRec175[0] = fConst64 * (fVec22[1] - fConst61 * fRec175[1] - 1.0006541f * fRec176[1] + 0.50032705f * fRec176[0]);
			fRec174[0] = fRec175[0];
			float fTemp154 = std::fabs(0.92736715f * fRec174[0]);
			fRec173[0] = std::max<float>(fTemp154, fConst65 * fRec173[1] + fConst66 * fTemp154);
			fRec172[0] = fConst67 * fRec173[0] + fConst7 * fRec172[1];
			fRec171[0] = fSlow22 * std::min<float>(6.0f, std::max<float>(-12.0f, -1e+01f - 2e+01f * (std::log10(std::max<float>(1.1754944e-38f, std::max<float>(3.1622778e-05f, fRec172[0]))) - fTemp48))) + fConst89 * fRec171[1];
			float fTemp155 = fRec180[0] * std::pow(1e+01f, 0.05f * fRec171[0]);
			float fTemp156 = 2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp155)));
			int iTemp157 = (fTemp156 > fSlow18) + (fTemp156 > fSlow20);
			float fTemp158 = std::max<float>(0.0f, ((iTemp157 == 0) ? 0.0f : ((iTemp157 == 1) ? 0.5f * mydsp_faustpower2_f(fTemp156 + 6.5f - fSlow0) : fTemp156 + 6.0f - fSlow0)));
			float fTemp159 = ((-(0.75f * fTemp158) > fRec170[1]) ? fConst65 : fConst91);
			fRec170[0] = fRec170[1] * fTemp159 - 0.75f * fTemp158 * (1.0f - fTemp159);
			float fTemp160 = fTemp155 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec170[0]))) + 1.5f))))) + fTemp147 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec148[0]))) + 1.5f))))) + fTemp130 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec137[0]))) + 1.5f))))) + fTemp122 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec98[0]))) + 1.5f))))) + fTemp82 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec87[0]))) + 1.5f))))) + fTemp74 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec65[0]))) + 1.5f))))) + fTemp57 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec54[0]))) + 1.5f))))) + fTemp49 * std::pow(1e+01f, fSlow9 * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * (2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::pow(1e+01f, 0.05f * fRec2[0]))) + 1.5f)))));
			fVec23[0] = fTemp160;
			fRec1[0] = -(fConst93 * (fConst92 * fRec1[1] - (fTemp160 + fVec23[1])));
			fRec0[0] = fRec1[0] - fConst5 * (fConst4 * fRec0[2] + fConst2 * fRec0[1]);
			fRec181[0] = fSlow23 + fConst9 * fRec181[1];
			float fTemp161 = fRec181[0] * (fRec0[2] + fRec0[0] + 2.0f * fRec0[1]);
			fVec24[IOTA0 & 2047] = fTemp161;
			float fTemp162 = std::fabs(fConst5 * fTemp161);
			int iTemp163 = (fTemp162 >= fRec185[1]) | (static_cast<float>(iRec184[1]) >= fConst94);
			iRec184[0] = ((iTemp163) ? 0 : iRec184[1] + 1);
			fRec185[0] = ((iTemp163) ? fTemp162 : fRec185[1]);
			fRec183[0] = fConst97 * fRec185[0] + fConst96 * fRec183[1];
			float fTemp164 = std::fabs(fRec183[0]);
			fRec182[0] = std::max<float>(fTemp164, fConst98 * fRec182[1] + fConst99 * fTemp164);
			float fTemp165 = std::min<float>(1.0f, 0.8912509f / std::max<float>(fRec182[0], 1.1920929e-07f));
			fVbargraph0 = static_cast<FAUSTFLOAT>(2e+01f * std::log10(std::max<float>(1.1754944e-38f, std::fabs(fTemp165))));
			fRec186[0] = fSlow24 + fConst9 * fRec186[1];
			output0[i0] = static_cast<FAUSTFLOAT>(fTemp0 * fRec186[0] + fConst5 * (1.0f - fRec186[0]) * fTemp165 * fVec24[(IOTA0 - iConst95) & 2047]);
			fRec19[1] = fRec19[0];
			fVec0[1] = fVec0[0];
			fRec18[1] = fRec18[0];
			fRec14[1] = fRec14[0];
			fRec15[1] = fRec15[0];
			fRec10[1] = fRec10[0];
			fRec11[1] = fRec11[0];
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			fRec20[1] = fRec20[0];
			fRec21[1] = fRec21[0];
			fRec33[1] = fRec33[0];
			fRec34[1] = fRec34[0];
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
			fRec37[1] = fRec37[0];
			fRec38[1] = fRec38[0];
			fRec44[1] = fRec44[0];
			fRec45[1] = fRec45[0];
			fVec1[1] = fVec1[0];
			fVec2[1] = fVec2[0];
			fRec9[1] = fRec9[0];
			fRec8[1] = fRec8[0];
			fVec3[1] = fVec3[0];
			fRec7[1] = fRec7[0];
			fRec6[1] = fRec6[0];
			fRec5[1] = fRec5[0];
			fRec4[1] = fRec4[0];
			fVec4[1] = fVec4[0];
			fRec53[1] = fRec53[0];
			fRec52[1] = fRec52[0];
			fVec5[1] = fVec5[0];
			fRec51[1] = fRec51[0];
			fRec50[1] = fRec50[0];
			fRec49[1] = fRec49[0];
			fRec48[1] = fRec48[0];
			fRec3[1] = fRec3[0];
			fRec2[1] = fRec2[0];
			fRec62[1] = fRec62[0];
			fRec63[1] = fRec63[0];
			fRec64[1] = fRec64[0];
			fVec6[1] = fVec6[0];
			fRec61[1] = fRec61[0];
			fRec60[1] = fRec60[0];
			fVec7[1] = fVec7[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			fRec76[1] = fRec76[0];
			fRec77[1] = fRec77[0];
			fRec73[1] = fRec73[0];
			fRec74[1] = fRec74[0];
			fRec79[1] = fRec79[0];
			fRec80[1] = fRec80[0];
			fRec83[1] = fRec83[0];
			fRec84[1] = fRec84[0];
			fVec8[1] = fVec8[0];
			fVec9[1] = fVec9[0];
			fRec72[1] = fRec72[0];
			fRec71[1] = fRec71[0];
			fVec10[1] = fVec10[0];
			fRec70[1] = fRec70[0];
			fRec69[1] = fRec69[0];
			fRec68[1] = fRec68[0];
			fRec67[1] = fRec67[0];
			fRec66[1] = fRec66[0];
			fRec65[1] = fRec65[0];
			fRec95[1] = fRec95[0];
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
			fVec11[1] = fVec11[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fVec12[1] = fVec12[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec88[1] = fRec88[0];
			fRec87[1] = fRec87[0];
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
			fRec117[1] = fRec117[0];
			fRec118[1] = fRec118[0];
			fRec114[1] = fRec114[0];
			fRec115[1] = fRec115[0];
			fRec123[1] = fRec123[0];
			fRec124[1] = fRec124[0];
			fRec110[1] = fRec110[0];
			fRec111[1] = fRec111[0];
			fRec106[1] = fRec106[0];
			fRec107[1] = fRec107[0];
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
			fRec126[1] = fRec126[0];
			fRec127[1] = fRec127[0];
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
			fVec13[1] = fVec13[0];
			fVec14[1] = fVec14[0];
			fRec105[1] = fRec105[0];
			fRec104[1] = fRec104[0];
			fVec15[1] = fVec15[0];
			fRec103[1] = fRec103[0];
			fRec102[1] = fRec102[0];
			fRec101[1] = fRec101[0];
			fRec100[1] = fRec100[0];
			fRec99[1] = fRec99[0];
			fRec98[1] = fRec98[0];
			fRec145[1] = fRec145[0];
			fRec146[1] = fRec146[0];
			fRec147[1] = fRec147[0];
			fVec16[1] = fVec16[0];
			fRec144[1] = fRec144[0];
			fRec143[1] = fRec143[0];
			fVec17[1] = fVec17[0];
			fRec142[1] = fRec142[0];
			fRec141[1] = fRec141[0];
			fRec140[1] = fRec140[0];
			fRec139[1] = fRec139[0];
			fRec138[1] = fRec138[0];
			fRec137[1] = fRec137[0];
			fRec159[1] = fRec159[0];
			fRec160[1] = fRec160[0];
			fRec156[1] = fRec156[0];
			fRec157[1] = fRec157[0];
			fRec162[1] = fRec162[0];
			fRec163[1] = fRec163[0];
			fRec166[1] = fRec166[0];
			fRec167[1] = fRec167[0];
			fVec18[1] = fVec18[0];
			fVec19[1] = fVec19[0];
			fRec155[1] = fRec155[0];
			fRec154[1] = fRec154[0];
			fVec20[1] = fVec20[0];
			fRec153[1] = fRec153[0];
			fRec152[1] = fRec152[0];
			fRec151[1] = fRec151[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			fRec148[1] = fRec148[0];
			fRec178[1] = fRec178[0];
			fRec179[1] = fRec179[0];
			fRec180[1] = fRec180[0];
			fVec21[1] = fVec21[0];
			fRec177[1] = fRec177[0];
			fRec176[1] = fRec176[0];
			fVec22[1] = fVec22[0];
			fRec175[1] = fRec175[0];
			fRec174[1] = fRec174[0];
			fRec173[1] = fRec173[0];
			fRec172[1] = fRec172[0];
			fRec171[1] = fRec171[0];
			fRec170[1] = fRec170[0];
			fVec23[1] = fVec23[0];
			fRec1[1] = fRec1[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec181[1] = fRec181[0];
			IOTA0 = IOTA0 + 1;
			iRec184[1] = iRec184[0];
			fRec185[1] = fRec185[0];
			fRec183[1] = fRec183[0];
			fRec182[1] = fRec182[0];
			fRec186[1] = fRec186[0];
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
        case kParameter_bypass:
            param.hints = kParameterIsAutomatable
            
            
                |kParameterIsBoolean
            
            
                |kParameterIsInteger
            
            
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
        case kParameter_vad_ext:
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
        case kParameter_post_gain:
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
        case kParameter_mb_strength:
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
        case kParameter_pre_lowcut:
            param.hints = kParameterIsAutomatable
            
            
            
            
                |kParameterIsLogarithmic
            
            ;
            param.name = kParameterNames[7];
            param.unit = kParameterUnits[7];
            param.symbol = kParameterSymbols[7];
            param.shortName = "";
            param.ranges.def = kParameterRanges[7].def;
            param.ranges.min = kParameterRanges[7].min;
            param.ranges.max = kParameterRanges[7].max;
            break;
        
        case kParameter_limiter_gain:
            param.hints = kParameterIsAutomatable|kParameterIsOutput
            
            
            
            ;
            param.name = kParameterNames[8];
            param.unit = kParameterUnits[8];
            param.symbol = kParameterSymbols[8];
            param.shortName = "";
            param.ranges.def = kParameterRanges[8].def;
            param.ranges.min = kParameterRanges[8].min;
            param.ranges.max = kParameterRanges[8].max;
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
            return dsp->fVslider4;
        case kParameter_bypass:
            return dsp->fCheckbox0;
        case kParameter_pre_gain:
            return dsp->fVslider1;
        case kParameter_vad_ext:
            return dsp->fVslider3;
        case kParameter_post_gain:
            return dsp->fVslider6;
        case kParameter_leveler_target:
            return dsp->fVslider0;
        case kParameter_mb_strength:
            return dsp->fVslider5;
        case kParameter_pre_lowcut:
            return dsp->fVslider2;
        case kParameter_limiter_gain:
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
            dsp->fVslider4 = value;
            break;
        case kParameter_bypass:
            dsp->fCheckbox0 = value;
            break;
        case kParameter_pre_gain:
            dsp->fVslider1 = value;
            break;
        case kParameter_vad_ext:
            dsp->fVslider3 = value;
            break;
        case kParameter_post_gain:
            dsp->fVslider6 = value;
            break;
        case kParameter_leveler_target:
            dsp->fVslider0 = value;
            break;
        case kParameter_mb_strength:
            dsp->fVslider5 = value;
            break;
        case kParameter_pre_lowcut:
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
        float params[8] = {
            dsp->fVslider4,
            dsp->fCheckbox0,
            dsp->fVslider1,
            dsp->fVslider3,
            dsp->fVslider6,
            dsp->fVslider0,
            dsp->fVslider5,
            dsp->fVslider2,
            
        };

        // tell dsp to change sample rate
        dsp->init(newSampleRate);

        // set parameters back, which have been reset in the dsp
        dsp->fVslider4 = params[0];
        dsp->fCheckbox0 = params[1];
        dsp->fVslider1 = params[2];
        dsp->fVslider3 = params[3];
        dsp->fVslider6 = params[4];
        dsp->fVslider0 = params[5];
        dsp->fVslider5 = params[6];
        dsp->fVslider2 = params[7];
        
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FaustGeneratedPlugin)
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
