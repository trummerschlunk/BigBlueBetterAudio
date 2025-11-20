/*
 * Re:Nooice
 * Copyright (C) 2025 Filipe Coelho <falktx@falktx.com>
 * SPDX-License-Identifier: ISC
 */

#include "Quantum.hpp"

// faustpp generated plugin template
#ifdef SIMPLIFIED_MAPI_BUILD
#include "pregen/FaustPluginInfo.h"
#else
#include "pregen-gui/FaustPluginInfo.h"
#endif

#if 0
    struct Theme : QuantumTheme {
        Theme(NanoTopLevelWidget* const parent)
        {
            const double scaleFactor = parent->getScaleFactor() * 1.25;

            borderSize = 2;
            padding = 7;

            borderSize *= scaleFactor;
            padding *= scaleFactor;
            fontSize *= scaleFactor;
            textHeight *= scaleFactor;
            knobIndicatorSize *= scaleFactor;
            widgetLineSize *= scaleFactor;
            textPixelRatioWidthCompensation = padding + borderSize + 6 * scaleFactor;

            windowPadding = borderSize + padding;
        }
    };

    struct Widgets : VerticallyStackedHorizontalLayout {
        QuantumFrameWithLabel frame;

        Widgets(BBBAudioUI* const ui)
            : theme(ui),
              frame(ui, theme),
        {
        }

    } ui;
#endif

// --------------------------------------------------------------------------------------------------------------------
// make sure our expectations match

static_assert(kParameterRanges[kParameter_input_peak_channel_0].def ==
              kParameterRanges[kParameter_input_peak_channel_1].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].min ==
              kParameterRanges[kParameter_input_peak_channel_1].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].max ==
              kParameterRanges[kParameter_input_peak_channel_1].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_output_peak_channel_0].def ==
              kParameterRanges[kParameter_output_peak_channel_1].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].min ==
              kParameterRanges[kParameter_output_peak_channel_1].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].max ==
              kParameterRanges[kParameter_output_peak_channel_1].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_output_peak_channel_0].def ==
              kParameterRanges[kParameter_lufs_out_meter].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].min >=
              kParameterRanges[kParameter_lufs_out_meter].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_output_peak_channel_0].max ==
              kParameterRanges[kParameter_lufs_out_meter].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_input_peak_channel_0].def ==
              kParameterRanges[kParameter_output_peak_channel_0].def, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].min ==
              kParameterRanges[kParameter_output_peak_channel_0].min, "channel data mismatch");
static_assert(kParameterRanges[kParameter_input_peak_channel_0].max ==
              kParameterRanges[kParameter_output_peak_channel_0].max, "channel data mismatch");

static_assert(kParameterRanges[kParameter_leveler_gain].min == -50.f, "leveler gain -50 dB min");
static_assert(kParameterRanges[kParameter_leveler_gain].max == +50.f, "leveler gain +50 dB max");
static_assert(kParameterRanges[kParameter_leveler_gain].def == 0.f, "leveler gain 0 dB default");

START_NAMESPACE_DGL

// --------------------------------------------------------------------------------------------------------------------
// single expanding label

struct QuantumSingleLabel : HorizontalLayout
{
    QuantumLabel label;

    explicit QuantumSingleLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : label(parent, theme)
    {
        widgets.push_back({ &label, Expanding });
    }

    void adjustSize()
    {
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// single separator line

struct QuantumSingleSeparatorLine : HorizontalLayout
{
    QuantumHorizontalSeparatorLine separator;

    explicit QuantumSingleSeparatorLine(NanoSubWidget* const parent, const QuantumTheme& theme)
        : separator(parent, theme)
    {
        widgets.push_back({ &separator, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        separator.setSize(metrics.separatorHorizontal);
    }
};

// --------------------------------------------------------------------------------------------------------------------
// single expanding switch

struct QuantumSingleSwitch : HorizontalLayout
{
    QuantumSwitch switch_;

    explicit QuantumSingleSwitch(NanoSubWidget* const parent, const QuantumTheme& theme)
        : switch_(parent, theme)
    {
        widgets.push_back({ &switch_, Expanding });
    }

    void adjustSize()
    {
        switch_.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// fixed meter, expanding label

struct QuantumValueMeterWithLabel : HorizontalLayout
{
    QuantumValueMeter meter;
    QuantumLabel label;

    explicit QuantumValueMeterWithLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : meter(parent, theme),
          label(parent, theme)
    {
        widgets.push_back({ &meter, Fixed });
        widgets.push_back({ &label, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        meter.setSize(metrics.valueMeterHorizontal);
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// fixed slider, expanding label

struct QuantumValueSliderWithLabel : HorizontalLayout
{
    QuantumValueSlider slider;
    QuantumLabel label;

    explicit QuantumValueSliderWithLabel(NanoSubWidget* const parent, const QuantumTheme& theme)
        : slider(parent, theme),
          label(parent, theme)
    {
        widgets.push_back({ &slider, Fixed });
        widgets.push_back({ &label, Expanding });
    }

    void adjustSize(const QuantumMetrics& metrics)
    {
        slider.setSize(metrics.valueSlider);
        label.adjustSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for input levels

struct InputMeterGroup : QuantumFrame
{
    const QuantumTheme& theme;

    QuantumStereoLevelMeter meter;
    QuantumSmallKnob gainKnob;

    explicit InputMeterGroup(NanoTopLevelWidget* const parent,
                             KnobEventHandler::Callback* const cb,
                             const QuantumTheme& t)
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
       #ifdef PODCAST_MASTER
        meter.setValues(kParameterRanges[kParameter_input_peak_channel_0].min,
                        kParameterRanges[kParameter_input_peak_channel_1].min,
                        0.f,
                        kParameterRanges[kParameter_lufs_in_meter].min);
       #else
        meter.setValues(kParameterRanges[kParameter_input_peak_channel_0].min,
                        kParameterRanges[kParameter_input_peak_channel_1].min);
       #endif

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
       #ifdef PODCAST_MASTER
        const uint meterWidth = metrics.stereoLevelMeterWithLufs.getWidth();
        const uint usableWidth = meterWidth;
       #else
        const uint meterWidth = metrics.stereoLevelMeter.getWidth();
        const uint usableWidth = meterWidth + theme.fontSize + theme.padding * 2 + theme.borderSize * 2;
       #endif
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

#ifndef PODCAST_MASTER
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

        fillColor(/*meter.isEnabled() ? theme.inputLevelBracket1 :*/ theme.windowBackgroundColor);
        displayBrackets(-0.5, -5.9);

        fillColor(/*meter.isEnabled() ? theme.inputLevelBracket2 :*/ theme.windowBackgroundColor);
        displayBrackets(-6.1, -16);
    }
#endif
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for input leveler

struct InputLevelerGroup : QuantumFrame
{
    const QuantumTheme& theme;

    QuantumGainReductionMeter leveler;
    QuantumRadioSwitch enableSwitch;
    QuantumSmallKnob targetKnob;

    explicit InputLevelerGroup(NanoTopLevelWidget* const parent,
                               ButtonEventHandler::Callback* const bcb,
                               KnobEventHandler::Callback* const kcb,
                               const QuantumTheme& t)
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
        enableSwitch.setChecked(!kParameterRanges[kParameter_leveler_scale].def, false);
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
    const QuantumTheme& theme;

    QuantumSingleSwitch switchEnable;
    QuantumSingleSeparatorLine separator1;
    QuantumValueSliderWithLabel sliderThreshold;
    QuantumSingleLabel sliderThresholdLabel;
    QuantumValueSliderWithLabel sliderGracePeriod;
    QuantumSingleLabel sliderGracePeriodLabel;
    QuantumSingleSeparatorLine separator2;
    QuantumSingleSwitch switchEnableStats;
    QuantumSingleLabel statsLabel;
    QuantumValueMeterWithLabel statCurrent;
    QuantumValueMeterWithLabel statAverage;
    QuantumValueMeterWithLabel statMinimum;
    QuantumValueMeterWithLabel statMaximum;

    explicit NoiseReductionGroup(NanoTopLevelWidget* const parent,
                                 ButtonEventHandler::Callback* const bcb,
                                 KnobEventHandler::Callback* const kcb,
                                 const QuantumTheme& t)
        : QuantumFrame(parent, t),
          theme(t),
          switchEnable(this, theme),
          separator1(this, theme),
          sliderThreshold(this, theme),
          sliderThresholdLabel(this, theme),
          sliderGracePeriod(this, theme),
          sliderGracePeriodLabel(this, theme),
          separator2(this, theme),
          switchEnableStats(this, theme),
          statsLabel(this, theme),
          statCurrent(this, theme),
          statAverage(this, theme),
          statMinimum(this, theme),
          statMaximum(this, theme)
    {
        setName("Noise Reduction");

        const double scaleFactor = parent->getScaleFactor() * 1.25;
        const uint smallFontSize = d_roundToUnsignedInt(theme.fontSize - 1.5 * scaleFactor);

        // mainWidget.setAlignment(ALIGN_CENTER|ALIGN_BOTTOM);
        // mainWidget.setLabel("Noise Reduction");

        switchEnable.switch_.setCallback(bcb);
        switchEnable.switch_.setChecked(true, false);
        switchEnable.switch_.setId(kParameterCount + kExtraParamBypass);
        switchEnable.switch_.setLabel("Enabled");

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

        statsLabel.label.setCustomFontSize(smallFontSize);
        statsLabel.label.setLabel("Voice activity detection statistics, running over a period of 2s in round-robin fashion");

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

        items.push_back(&switchEnable);
        items.push_back(&separator1);
        items.push_back(&sliderThreshold);
        items.push_back(&sliderThresholdLabel);
        items.push_back(&sliderGracePeriod);
        items.push_back(&sliderGracePeriodLabel);
        items.push_back(&separator2);
        items.push_back(&switchEnableStats);
        items.push_back(&statsLabel);
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

        switchEnable.adjustSize();
        separator1.adjustSize(metrics);
        sliderThreshold.adjustSize(metrics);
        sliderThresholdLabel.adjustSize();
        sliderGracePeriod.adjustSize(metrics);
        sliderGracePeriodLabel.adjustSize();
        separator2.adjustSize(metrics);
        switchEnableStats.adjustSize();
        statsLabel.adjustSize();
        statCurrent.adjustSize(metrics);
        statAverage.adjustSize(metrics);
        statMinimum.adjustSize(metrics);
        statMaximum.adjustSize(metrics);

        Size<uint> size = VerticallyStackedHorizontalLayout::adjustSize(theme.padding);
        d_stdout("Default size: %ux%u",
                 size.getWidth() + theme.padding * 2 + theme.borderSize * 2,
                 getOffset() + size.getHeight() + theme.padding * 4 + theme.borderSize * 2);

        VerticallyStackedHorizontalLayout::setAbsolutePos(theme.padding,
                                                          getOffset() + theme.padding,
                                                          theme.padding);
    }

    void setAbsolutePos(int x, int y)
    {
        QuantumFrame::setAbsolutePos(x, y);
        VerticallyStackedHorizontalLayout::setAbsolutePos(x + theme.padding,
                                                          y + getOffset() + theme.padding,
                                                          theme.padding);
    }

    void updateColors()
    {
        const bool enabled = switchEnable.switch_.isChecked();
        const bool enabledStats = enabled && switchEnableStats.switch_.isChecked();

        const Color& sliderTextColor = enabled ? theme.textLightColor : theme.textDarkColor;
        const Color& statsTextColor = enabledStats ? theme.textLightColor : theme.textDarkColor;

        sliderThreshold.slider.setTextColor(sliderTextColor);
        sliderThreshold.label.setLabelColor(sliderTextColor);
        sliderThresholdLabel.label.setLabelColor(sliderTextColor);
        sliderGracePeriod.slider.setTextColor(sliderTextColor);
        sliderGracePeriod.label.setLabelColor(sliderTextColor);
        sliderGracePeriodLabel.label.setLabelColor(sliderTextColor);

        statsLabel.label.setLabelColor(statsTextColor);
        statCurrent.meter.setTextColor(statsTextColor);
        statCurrent.label.setLabelColor(statsTextColor);
        statAverage.meter.setTextColor(statsTextColor);
        statAverage.label.setLabelColor(statsTextColor);
        statMinimum.meter.setTextColor(statsTextColor);
        statMinimum.label.setLabelColor(statsTextColor);
        statMaximum.meter.setTextColor(statsTextColor);
        statMaximum.label.setLabelColor(statsTextColor);
    }
};

// --------------------------------------------------------------------------------------------------------------------

struct SoundShapingGroup : public QuantumFrame
{
    const QuantumTheme& theme;

    explicit SoundShapingGroup(NanoTopLevelWidget* const parent, const QuantumTheme& t)
        : QuantumFrame(parent, t),
          theme(t)
    {
        setName("Sound Shaping");
    }

    void adjustSize(const uint width, const uint height)
    {
        const QuantumMetrics metrics(theme);

        setSize(width, height);
        adjustMainWidgetSize();
    }
};

// --------------------------------------------------------------------------------------------------------------------
// custom layout for output levels (single widget)

struct OutputMeterGroup : QuantumFrame
{
    const QuantumTheme& theme;

    QuantumStereoLevelMeterWithLUFS meter;

    explicit OutputMeterGroup(NanoTopLevelWidget* const parent, const QuantumTheme& t)
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
