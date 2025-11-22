// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "DistrhoPluginInfo.h"
#include "QuantumLayouts.hpp"
#include "Theme.hpp"

// faustpp generated plugin template
#include "pregen-gui/FaustPluginInfo.h"

START_NAMESPACE_DGL

// --------------------------------------------------------------------------------------------------------------------
// custom layout for input levels

struct InputMeterGroup : QuantumFrame
{
    const BBBAudioTheme& theme;

    QuantumStereoLevelMeter meter;
    QuantumSmallKnob gainKnob;

    explicit InputMeterGroup(NanoTopLevelWidget* const parent,
                             KnobEventHandler::Callback* const cb,
                             const BBBAudioTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          meter(this, t),
          gainKnob(this, t)
    {
        setName("Inputs");

        meter.setName(" + Meter");
        meter.setTopLabel("Input");
        meter.setRange(kParameterRanges[kParameter_input_peak_channel_0].min,
                       kParameterRanges[kParameter_input_peak_channel_0].max);
        meter.setValues(kParameterRanges[kParameter_input_peak_channel_0].min,
                        kParameterRanges[kParameter_input_peak_channel_1].min);

        gainKnob.setCallback(cb);
        gainKnob.setId(kParameter_pre_gain);
        gainKnob.setLabel(kParameterNames[kParameter_pre_gain]);
        gainKnob.setName(kParameterNames[kParameter_pre_gain]);
        gainKnob.setOrientation(QuantumSmallKnob::CenterToSides);
        gainKnob.setRange(kParameterRanges[kParameter_pre_gain].min,
                          kParameterRanges[kParameter_pre_gain].max);
        gainKnob.setDefault(kParameterRanges[kParameter_pre_gain].def);
        gainKnob.setStep(1.f);
        gainKnob.setUnitLabel(kParameterUnits[kParameter_pre_gain]);
        gainKnob.setValue(kParameterRanges[kParameter_pre_gain].def, false);
        gainKnob.setRingColor(theme.levelMeterColor);
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
        const uint meterWidth = metrics.stereoLevelMeter.getWidth();
        const uint usableWidth = meterWidth + theme.fontSize + theme.padding * 2 + theme.borderSize * 2;
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;
        const uint knobWidth = metrics.stereoLevelMeter.getWidth() + theme.fontSize;

        meter.setSize(meterWidth, usableHeight - knobWidth - theme.fontSize - theme.padding);
        gainKnob.setSize(knobWidth, knobWidth + theme.fontSize);

        setSize(usableWidth + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        meter.setAbsolutePos(x + getWidth() / 2 - meter.getWidth() / 2, y + theme.borderSize + theme.padding);
        gainKnob.setAbsolutePos(x + getWidth() / 2 - gainKnob.getWidth() / 2,
                                meter.getAbsoluteY() + meter.getHeight() + theme.padding);
    }

    void displayBrackets(const float db1, const float db2)
    {
        const int strokeSize = theme.widgetLineSize * 2;
        const int sectionWidth = theme.fontSize / 2;

        const float verticalReservedHeight = theme.textHeight;
        const float usableMeterHeight = meter.getHeight() - verticalReservedHeight;
        const float db1norm = 1.f - normalizedLevelMeterValue(db1);
        const float db2norm = 1.f - normalizedLevelMeterValue(db2);

        const float yOffset = theme.borderSize + verticalReservedHeight + usableMeterHeight * db1norm /*- strokeSize*/;
        const float ySize = usableMeterHeight * db2norm - usableMeterHeight * db1norm;

        save();
        translate(getWidth() * 0.5f - meter.getWidth() * 0.5f - sectionWidth - theme.padding, yOffset);
        beginPath();
        moveTo(0, 0);
        lineTo(sectionWidth, 0);
        lineTo(sectionWidth, strokeSize);
        lineTo(strokeSize, strokeSize);
        lineTo(strokeSize, ySize - strokeSize);
        lineTo(sectionWidth, ySize - strokeSize);
        lineTo(sectionWidth, ySize);
        lineTo(0, ySize);
        lineTo(0, 0);
        restore();
        fill();

        save();
        translate(getWidth() * 0.5f + meter.getWidth() * 0.5f + theme.padding, yOffset);
        beginPath();
        moveTo(0, 0);
        lineTo(sectionWidth, 0);
        lineTo(sectionWidth, ySize);
        lineTo(0, ySize);
        lineTo(0, ySize - strokeSize);
        lineTo(sectionWidth - strokeSize, ySize - strokeSize);
        lineTo(sectionWidth - strokeSize, strokeSize);
        lineTo(0, strokeSize);
        lineTo(0, 0);
        restore();
        fill();

    }

    void onNanoDisplay() override
    {
        QuantumFrame::onNanoDisplay();

        fillColor(meter.isEnabled() ? theme.inputLevelBracket1 : theme.windowBackgroundColor);
        displayBrackets(-0.5, -5.9);

        fillColor(meter.isEnabled() ? theme.inputLevelBracket2 : theme.windowBackgroundColor);
        displayBrackets(-6.1, -16);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for input leveler

struct InputLevelerGroup : QuantumFrame
{
    const BBBAudioTheme& theme;

    QuantumGainReductionMeter leveler;
    QuantumRadioSwitch enableSwitch;
    QuantumSmallKnob targetKnob;

    explicit InputLevelerGroup(NanoTopLevelWidget* const parent,
                               ButtonEventHandler::Callback* const bcb,
                               KnobEventHandler::Callback* const kcb,
                               const BBBAudioTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          leveler(this, t),
          enableSwitch(this, t),
          targetKnob(this, t)
    {
        setName("Leveler");

        leveler.setLabel("Leveler");
        leveler.setName(" + Gain");
        leveler.setId(kParameter_leveler_gain);
        leveler.setName(kParameterNames[kParameter_leveler_gain]);
        // NOTE this special meter assumes -50 to 50 dB range
        // leveler.setRange(kParameterRanges[kParameter_leveler_gain].min,
        //                  kParameterRanges[kParameter_leveler_gain].max);
        // leveler.setUnitLabel(kParameterUnits[kParameter_leveler_gain]);
        leveler.setValue(kParameterRanges[kParameter_leveler_gain].def);

        enableSwitch.setCallback(bcb);
        enableSwitch.setCheckable(true);
        enableSwitch.setChecked(kParameterRanges[kParameter_leveler_scale].def, false);
        enableSwitch.setId(kParameter_leveler_scale);
        enableSwitch.setName("Enable Button");

        targetKnob.setCallback(kcb);
        targetKnob.setId(kParameter_leveler_target);
        targetKnob.setLabel("Target Loudness");
        targetKnob.setName("Target");

        targetKnob.setOrientation(QuantumSmallKnob::CenterToSides);
        targetKnob.setRange(kParameterRanges[kParameter_leveler_target].min,
                            kParameterRanges[kParameter_leveler_target].max);
        targetKnob.setDefault(kParameterRanges[kParameter_leveler_target].def);
        targetKnob.setStep(1.f);
        targetKnob.setUnitLabel(kParameterUnits[kParameter_leveler_target]);
        targetKnob.setValue(kParameterRanges[kParameter_leveler_target].def, false);

        enableSwitch.setBackgroundColor(theme.widgetAlternativeColor);
        targetKnob.setRingColor(theme.widgetAlternativeColor);
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
        const uint levelerWidth = metrics.gainReductionMeter.getWidth();
        const uint usableWidth = levelerWidth + theme.fontSize;
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;

        enableSwitch.adjustSize();
        targetKnob.setSize(usableWidth, usableWidth + theme.fontSize);
        leveler.setSize(levelerWidth,
                        usableHeight - usableWidth - theme.fontSize - enableSwitch.getHeight() - theme.padding * 2);
        setSize(usableWidth + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);

        const int xmid = x + getWidth() / 2;
        leveler.setAbsolutePos(xmid - leveler.getWidth() / 2, y + theme.borderSize + theme.padding);
        enableSwitch.setAbsolutePos(xmid - enableSwitch.getWidth() / 2,
                                    leveler.getAbsoluteY() + leveler.getHeight() + theme.padding);
        targetKnob.setAbsolutePos(xmid - targetKnob.getWidth() / 2,
                                  enableSwitch.getAbsoluteY() + enableSwitch.getHeight() + theme.padding);
    }
};

// --------------------------------------------------------------------------------------------------------------------

struct NoiseReductionGroup : QuantumFrame,
                             VerticallyStackedHorizontalLayout
{
    const BBBAudioTheme& theme;

    QuantumRadioSwitchWithLabel title;
    QuantumSingleSpacer spacer1;
    QuantumValueSliderWithLabel sliderThreshold;
    QuantumSingleLabel sliderThresholdLabel;
    QuantumSingleSpacer spacer2;
    QuantumValueSliderWithLabel sliderGracePeriod;
    QuantumSingleLabel sliderGracePeriodLabel;
    QuantumSingleSpacer spacer3;
    QuantumSingleSwitch switchEnableStats;
    QuantumValueMeterWithLabel statCurrent;
    QuantumValueMeterWithLabel statAverage;
    QuantumValueMeterWithLabel statMinimum;
    QuantumValueMeterWithLabel statMaximum;

    explicit NoiseReductionGroup(NanoTopLevelWidget* const parent,
                                 ButtonEventHandler::Callback* const bcb,
                                 KnobEventHandler::Callback* const kcb,
                                 const BBBAudioTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          title(this, theme),
          spacer1(this),
          sliderThreshold(this, theme),
          sliderThresholdLabel(this, theme),
          spacer2(this),
          sliderGracePeriod(this, theme),
          sliderGracePeriodLabel(this, theme),
          spacer3(this),
          switchEnableStats(this, theme),
          statCurrent(this, theme),
          statAverage(this, theme),
          statMinimum(this, theme),
          statMaximum(this, theme)
    {
        setName("Noise Reduction");

        const double scaleFactor = parent->getScaleFactor();
        const uint smallFontSize = d_roundToUnsignedInt(theme.fontSize - 1.5 * scaleFactor);

        title.switch_.setCallback(bcb);
        title.switch_.setChecked(true, false);
        title.switch_.setId(kParameterCount + kExtraParamDenoiseBypass);
        title.label.setCustomFontSize(theme.bigFontSize);
        title.label.setLabel("Noise Reduction");

        sliderThreshold.slider.setCallback(kcb);
        sliderThreshold.slider.setId(kParameterCount + kExtraParamThreshold);
        sliderThreshold.slider.setRange(0, 100);
        sliderThreshold.slider.setStep(1);
        sliderThreshold.slider.setUnitLabel("%");
        sliderThreshold.slider.setValue(0, false);
        sliderThreshold.label.setLabel("Threshold");

        sliderThresholdLabel.label.setCustomFontSize(smallFontSize);
        sliderThresholdLabel.label.setLabel("Auto-mute if voice detection is lower than this threshold");

        sliderGracePeriod.slider.setCallback(kcb);
        sliderGracePeriod.slider.setId(kParameterCount + kExtraParamGracePeriod);
        sliderGracePeriod.slider.setRange(0, 2000);
        sliderGracePeriod.slider.setStep(1);
        sliderGracePeriod.slider.setUnitLabel("ms");
        sliderGracePeriod.slider.setValue(1000, false);
        sliderGracePeriod.label.setLabel("Grace Period");

        sliderGracePeriodLabel.label.setCustomFontSize(smallFontSize);
        sliderGracePeriodLabel.label.setLabel("How long auto-mute waits after voice detection falls below threshold");

        switchEnableStats.switch_.setCallback(bcb);
        switchEnableStats.switch_.setChecked(false, false);
        switchEnableStats.switch_.setId(kParameterCount + kExtraParamEnableStats);
        switchEnableStats.switch_.setLabel("Enable VAD Stats");

        statCurrent.label.setLabel("Current");
        statCurrent.meter.setRange(0, 100);
        statCurrent.meter.setUnitLabel("%");
        statCurrent.meter.setValue(0);
        statCurrent.meter.setValueCentered(false);

        statAverage.label.setLabel("Average");
        statAverage.meter.setRange(0, 100);
        statAverage.meter.setUnitLabel("%");
        statAverage.meter.setValue(0);
        statAverage.meter.setValueCentered(false);

        statMinimum.label.setLabel("Minimum");
        statMinimum.meter.setRange(0, 100);
        statMinimum.meter.setUnitLabel("%");
        statMinimum.meter.setValue(100);
        statMinimum.meter.setValueCentered(false);

        statMaximum.label.setLabel("Maximum");
        statMaximum.meter.setRange(0, 100);
        statMaximum.meter.setUnitLabel("%");
        statMaximum.meter.setValue(0);
        statMaximum.meter.setValueCentered(false);

        items.push_back(&title);
        items.push_back(&spacer1);
        items.push_back(&sliderThreshold);
        items.push_back(&sliderThresholdLabel);
        items.push_back(&spacer2);
        items.push_back(&sliderGracePeriod);
        items.push_back(&sliderGracePeriodLabel);
        items.push_back(&spacer3);
        items.push_back(&switchEnableStats);
        items.push_back(&statCurrent);
        items.push_back(&statAverage);
        items.push_back(&statMinimum);
        items.push_back(&statMaximum);

        updateColors();
    }

    void adjustSize(const uint width, const uint height)
    {
        const QuantumMetrics metrics(theme);

        setSize(width, height);
        adjustMainWidgetSize();
        // mainWidget.setWidth(width);

        const uint usableWidth = width - theme.padding * 10;

        title.adjustSize(metrics);
        title.label.setWidth(usableWidth);
        spacer1.spacer.setHeight(metrics.label.getHeight());
        sliderThreshold.adjustSize(metrics);
        sliderThresholdLabel.adjustSize();
        sliderThresholdLabel.label.setWidth(usableWidth);
        spacer2.spacer.setHeight(metrics.label.getHeight());
        sliderGracePeriod.adjustSize(metrics);
        sliderGracePeriodLabel.adjustSize();
        sliderGracePeriodLabel.label.setWidth(usableWidth);
        spacer3.spacer.setHeight(metrics.label.getHeight());
        switchEnableStats.adjustSize();
        statCurrent.adjustSize(metrics);
        statAverage.adjustSize(metrics);
        statMinimum.adjustSize(metrics);
        statMaximum.adjustSize(metrics);
    }

    void setAbsolutePos(int x, int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        VerticallyStackedHorizontalLayout::setAbsolutePos(x + theme.padding * 4,
                                                          y + getOffset() + theme.padding * 4,
                                                          theme.padding * 4);
    }

    void updateColors()
    {
        const bool enabled = true; // switchEnable.switch_.isChecked();
        const bool enabledStats = enabled && switchEnableStats.switch_.isChecked();

        const Color& sliderTextColor = enabled ? theme.textLightColor : theme.textDarkColor;
        const Color& statsTextColor = enabledStats ? theme.textLightColor : theme.textDarkColor;
        const Color& statsMeterColor = enabledStats ? theme.levelMeterAlternativeColor : theme.textMidColor;

        sliderThreshold.slider.setTextColor(sliderTextColor);
        sliderThreshold.label.setLabelColor(sliderTextColor);
        sliderThresholdLabel.label.setLabelColor(sliderTextColor);
        sliderGracePeriod.slider.setTextColor(sliderTextColor);
        sliderGracePeriod.label.setLabelColor(sliderTextColor);
        sliderGracePeriodLabel.label.setLabelColor(sliderTextColor);

        statCurrent.meter.setBackgroundColor(statsMeterColor);
        statCurrent.meter.setTextColor(statsTextColor);
        statCurrent.label.setLabelColor(statsTextColor);
        statAverage.meter.setBackgroundColor(statsMeterColor);
        statAverage.meter.setTextColor(statsTextColor);
        statAverage.label.setLabelColor(statsTextColor);
        statMinimum.meter.setBackgroundColor(statsMeterColor);
        statMinimum.meter.setTextColor(statsTextColor);
        statMinimum.label.setLabelColor(statsTextColor);
        statMaximum.meter.setBackgroundColor(statsMeterColor);
        statMaximum.meter.setTextColor(statsTextColor);
        statMaximum.label.setLabelColor(statsTextColor);
    }
};

// --------------------------------------------------------------------------------------------------------------------

struct SoundShapingGroup : public QuantumFrame,
                                  VerticallyStackedHorizontalLayout
{
    const BBBAudioTheme& theme;

    QuantumRadioSwitchWithLabel title;
    QuantumSingleSpacer spacer1;
    QuantumSingleLabel ballancerTitle;
    BBBAudioValueMeters ballancerMeters;
    QuantumSingleSpacer spacer2;
    QuantumSingleLabel mbDynamicsTitle;
    BBBAudioValueMeters mbDynamicsMeters;

    explicit SoundShapingGroup(NanoTopLevelWidget* const parent,
                               ButtonEventHandler::Callback* const bcb,
                               KnobEventHandler::Callback* const kcb,
                               const BBBAudioTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          title(this, theme),
          spacer1(this),
          ballancerTitle(this, theme),
          ballancerMeters(this, theme, QuantumValueMeter::MiddleToEdges),
          spacer2(this),
          mbDynamicsTitle(this, theme),
          mbDynamicsMeters(this, theme, QuantumValueMeter::MiddleToEdges)
    {
        setName("Sound Shaping");

        title.switch_.setCallback(bcb);
        title.switch_.setChecked(!kParameterRanges[kParameter_bypass].def, false);
        title.switch_.setId(kParameter_bypass);
        title.label.setCustomFontSize(theme.bigFontSize);
        title.label.setLabel("Sound Shaping");

        ballancerTitle.label.setAlignment(ALIGN_CENTER|ALIGN_MIDDLE);
        ballancerTitle.label.setLabel("Spectral Ballancer");

        mbDynamicsTitle.label.setAlignment(ALIGN_CENTER|ALIGN_MIDDLE);
        mbDynamicsTitle.label.setLabel("Multiband Dynamics");

        setupMeters(ballancerMeters, kParameter_sb_strength, kParameter_sb_gain__0);
        setupMeters(mbDynamicsMeters, kParameter_mb_strength, kParameter_mb_comp_gain_0);

        ballancerMeters.knob.setCallback(kcb);
        mbDynamicsMeters.knob.setCallback(kcb);

        items.push_back(&title);
        items.push_back(&spacer1);
        items.push_back(&ballancerTitle);
        items.push_back(&ballancerMeters);
        items.push_back(&spacer2);
        items.push_back(&mbDynamicsTitle);
        items.push_back(&mbDynamicsMeters);

        updateColors();
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
        const uint knobSize = metrics.valueMeterVertical.getHeight() + metrics.label.getHeight() / 2;
        const uint width = knobSize + metrics.valueMeterVertical.getWidth() * 8 + theme.padding * 40;

        title.adjustSize(metrics);
        title.label.setWidth(width - title.switch_.getWidth() - theme.padding * 2);
        spacer1.spacer.setSize(0, metrics.label.getHeight());
        ballancerTitle.adjustSize();
        ballancerTitle.label.setWidth(width);
        ballancerMeters.adjustSize(metrics);
        ballancerMeters.knob.setSize(knobSize, knobSize);
        ballancerMeters.knob.setValueFontSize(theme.fontSize);
        spacer2.spacer.setSize(0, metrics.label.getHeight());
        mbDynamicsTitle.adjustSize();
        mbDynamicsTitle.label.setWidth(width);
        mbDynamicsMeters.adjustSize(metrics);
        mbDynamicsMeters.knob.setSize(knobSize, knobSize);
        mbDynamicsMeters.knob.setValueFontSize(theme.fontSize);

        setSize(width, height);

    }

    void setAbsolutePos(int x, int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        VerticallyStackedHorizontalLayout::setAbsolutePos(x + theme.padding * 4,
                                                          y + getOffset() + theme.padding * 4,
                                                          theme.padding * 2);
    }

    void updateColors()
    {
        const bool enabled = title.switch_.isChecked();

        const Color& meterColor = enabled ? theme.levelMeterColor : theme.textDarkColor;
        const Color& meterAltColor = enabled ? theme.levelMeterAlternativeColor : theme.textDarkColor;
        const Color& textColor = enabled ? theme.textLightColor : theme.textDarkColor;

        ballancerTitle.label.setLabelColor(textColor);
        ballancerMeters.knob.setEnabled(enabled, false);
        ballancerMeters.knob.setRingColor(enabled ? theme.knobRingColor : theme.textDarkColor);
        ballancerMeters.m1.setBackgroundColor(meterColor);
        ballancerMeters.m2.setBackgroundColor(meterColor);
        ballancerMeters.m3.setBackgroundColor(meterColor);
        ballancerMeters.m4.setBackgroundColor(meterColor);
        ballancerMeters.m5.setBackgroundColor(meterColor);
        ballancerMeters.m6.setBackgroundColor(meterColor);
        ballancerMeters.m7.setBackgroundColor(meterColor);
        ballancerMeters.m8.setBackgroundColor(meterColor);

        mbDynamicsTitle.label.setLabelColor(textColor);
        mbDynamicsMeters.knob.setEnabled(enabled, false);
        mbDynamicsMeters.knob.setRingColor(enabled ? theme.knobAlternativeRingColor : theme.textDarkColor);
        mbDynamicsMeters.m1.setBackgroundColor(meterAltColor);
        mbDynamicsMeters.m2.setBackgroundColor(meterAltColor);
        mbDynamicsMeters.m3.setBackgroundColor(meterAltColor);
        mbDynamicsMeters.m4.setBackgroundColor(meterAltColor);
        mbDynamicsMeters.m5.setBackgroundColor(meterAltColor);
        mbDynamicsMeters.m6.setBackgroundColor(meterAltColor);
        mbDynamicsMeters.m7.setBackgroundColor(meterAltColor);
        mbDynamicsMeters.m8.setBackgroundColor(meterAltColor);
    }

    inline void setupMeters(BBBAudioValueMeters& w, const int idKnob, const int idStart)
    {
        w.knob.setId(idKnob);
        w.m1.setId(idStart + 0);
        w.m2.setId(idStart + 1);
        w.m3.setId(idStart + 2);
        w.m4.setId(idStart + 3);
        w.m5.setId(idStart + 4);
        w.m6.setId(idStart + 5);
        w.m7.setId(idStart + 6);
        w.m8.setId(idStart + 7);

        w.knob.setLabel("Strength");
        w.knob.setStep(1.f);

        w.knob.setName(kParameterNames[idKnob]);
        w.m1.setName(kParameterNames[idStart + 0]);
        w.m2.setName(kParameterNames[idStart + 1]);
        w.m3.setName(kParameterNames[idStart + 2]);
        w.m4.setName(kParameterNames[idStart + 3]);
        w.m5.setName(kParameterNames[idStart + 4]);
        w.m6.setName(kParameterNames[idStart + 5]);
        w.m7.setName(kParameterNames[idStart + 6]);
        w.m8.setName(kParameterNames[idStart + 7]);

        w.knob.setRange(kParameterRanges[idKnob].min, kParameterRanges[idKnob].max);
        w.m1.setRange(kParameterRanges[idStart + 0].min, kParameterRanges[idStart + 0].max);
        w.m2.setRange(kParameterRanges[idStart + 1].min, kParameterRanges[idStart + 1].max);
        w.m3.setRange(kParameterRanges[idStart + 2].min, kParameterRanges[idStart + 2].max);
        w.m4.setRange(kParameterRanges[idStart + 3].min, kParameterRanges[idStart + 3].max);
        w.m5.setRange(kParameterRanges[idStart + 4].min, kParameterRanges[idStart + 4].max);
        w.m6.setRange(kParameterRanges[idStart + 5].min, kParameterRanges[idStart + 5].max);
        w.m7.setRange(kParameterRanges[idStart + 6].min, kParameterRanges[idStart + 6].max);
        w.m8.setRange(kParameterRanges[idStart + 7].min, kParameterRanges[idStart + 7].max);

        w.knob.setUnitLabel(kParameterUnits[idKnob]);
        w.m1.setUnitLabel(kParameterUnits[idStart + 0]);
        w.m2.setUnitLabel(kParameterUnits[idStart + 1]);
        w.m3.setUnitLabel(kParameterUnits[idStart + 2]);
        w.m4.setUnitLabel(kParameterUnits[idStart + 3]);
        w.m5.setUnitLabel(kParameterUnits[idStart + 4]);
        w.m6.setUnitLabel(kParameterUnits[idStart + 5]);
        w.m7.setUnitLabel(kParameterUnits[idStart + 6]);
        w.m8.setUnitLabel(kParameterUnits[idStart + 7]);

        w.knob.setValue(kParameterRanges[idKnob].def);
        w.m1.setValue(kParameterRanges[idStart + 0].def);
        w.m2.setValue(kParameterRanges[idStart + 1].def);
        w.m3.setValue(kParameterRanges[idStart + 2].def);
        w.m4.setValue(kParameterRanges[idStart + 3].def);
        w.m5.setValue(kParameterRanges[idStart + 4].def);
        w.m6.setValue(kParameterRanges[idStart + 5].def);
        w.m7.setValue(kParameterRanges[idStart + 6].def);
        w.m8.setValue(kParameterRanges[idStart + 7].def);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for output levels (single widget)

struct OutputMeterGroup : QuantumFrame
{
    const BBBAudioTheme& theme;

    QuantumStereoLevelMeterWithLUFS meter;

    explicit OutputMeterGroup(NanoTopLevelWidget* const parent, const BBBAudioTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          meter(this, t)
    {
        setName("Outputs");

        meter.setName(" + Meter");
        meter.setTopLabel("Output");
        meter.setRange(kParameterRanges[kParameter_output_peak_channel_0].min,
                       kParameterRanges[kParameter_output_peak_channel_0].max);
        meter.setValues(kParameterRanges[kParameter_output_peak_channel_0].min,
                        kParameterRanges[kParameter_output_peak_channel_1].min,
                        kParameterRanges[kParameter_limiter_gain].max,
                        kParameterRanges[kParameter_lufs_out_meter].min);
    }

    void adjustSize(const QuantumMetrics& metrics, const uint height)
    {
        const uint usableHeight = height - theme.borderSize * 2 - theme.padding * 2;
        meter.setSize(metrics.stereoLevelMeterWithLufs.getWidth(), usableHeight);
        setSize(meter.getWidth() + theme.borderSize * 2 + theme.padding * 2, height);
    }

    void setAbsolutePos(const int x, const int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        meter.setAbsolutePos(x + theme.borderSize + theme.padding, y + theme.borderSize + theme.padding);
    }
};

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DGL
