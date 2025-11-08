/*
 * Re:Nooice
 * Copyright (C) 2025 Filipe Coelho <falktx@falktx.com>
 * SPDX-License-Identifier: ISC
 */

#include "DistrhoUI.hpp"

#include "QuantumLayouts.hpp"

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------

class ReNooiceUI : public UI,
                   public ButtonEventHandler::Callback,
                   public KnobEventHandler::Callback
{
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
        Theme theme;
        QuantumFrameWithLabel frame;
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

        Widgets(ReNooiceUI* const ui)
            : theme(ui),
              frame(ui, theme),
              switchEnable(&frame, theme),
              separator1(&frame, theme),
              sliderThreshold(&frame, theme),
              sliderThresholdLabel(&frame, theme),
              sliderGracePeriod(&frame, theme),
              sliderGracePeriodLabel(&frame, theme),
              separator2(&frame, theme),
              switchEnableStats(&frame, theme),
              statsLabel(&frame, theme),
              statCurrent(&frame, theme),
              statAverage(&frame, theme),
              statMinimum(&frame, theme),
              statMaximum(&frame, theme)
        {
            const double scaleFactor = ui->getScaleFactor() * 1.25;
            const uint smallFontSize = d_roundToUnsignedInt(theme.fontSize - 1.5 * scaleFactor);

            frame.mainWidget.setAlignment(ALIGN_CENTER|ALIGN_BOTTOM);
            frame.mainWidget.setLabel("Re:Nooice");

            switchEnable.switch_.setCallback(ui);
            switchEnable.switch_.setChecked(true, false);
            switchEnable.switch_.setId(kExtraParamBypass);
            switchEnable.switch_.setLabel("Enabled");

            sliderThreshold.slider.setCallback(ui);
            sliderThreshold.slider.setId(kExtraParamThreshold);
            sliderThreshold.slider.setRange(0, 100);
            sliderThreshold.slider.setStep(1);
            sliderThreshold.slider.setUnitLabel("%");
            sliderThreshold.slider.setValue(60, false);
            sliderThreshold.label.setLabel("Threshold");

            sliderThresholdLabel.label.setCustomFontSize(smallFontSize);
            sliderThresholdLabel.label.setLabel("Auto-mute if voice detection is lower than this threshold");

            sliderGracePeriod.slider.setCallback(ui);
            sliderGracePeriod.slider.setId(kExtraParamGracePeriod);
            sliderGracePeriod.slider.setRange(0, 1000);
            sliderGracePeriod.slider.setStep(1);
            sliderGracePeriod.slider.setUnitLabel("ms");
            sliderGracePeriod.slider.setValue(0, false);
            sliderGracePeriod.label.setLabel("Grace Period");

            sliderGracePeriodLabel.label.setCustomFontSize(smallFontSize);
            sliderGracePeriodLabel.label.setLabel("How long auto-mute waits after voice detection falls below threshold");

            switchEnableStats.switch_.setCallback(ui);
            switchEnableStats.switch_.setChecked(false, false);
            switchEnableStats.switch_.setId(kExtraParamEnableStats);
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

            adjustSize(DISTRHO_UI_DEFAULT_WIDTH, DISTRHO_UI_DEFAULT_HEIGHT);
            updateColors();
        }

        void adjustSize(const uint width, const uint height)
        {
            const QuantumMetrics metrics(theme);

            frame.setSize(width, height);
            frame.adjustMainWidgetSize();
            frame.mainWidget.setWidth(width);

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
                     frame.getOffset() + size.getHeight() + theme.padding * 4 + theme.borderSize * 2);

            VerticallyStackedHorizontalLayout::setAbsolutePos(theme.padding,
                                                              frame.getOffset() + theme.padding,
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
    } ui;

public:
   /**
      UI class constructor.
      The UI should be initialized to a default state that matches the plugin side.
    */
    ReNooiceUI()
        : UI(),
          ui(this)
    {
        const double scaleFactor = getScaleFactor();
        setGeometryConstraints(DISTRHO_UI_DEFAULT_WIDTH * scaleFactor, DISTRHO_UI_DEFAULT_HEIGHT * scaleFactor);
    }

protected:
    // ----------------------------------------------------------------------------------------------------------------
    // DSP/Plugin Callbacks

   /**
      A parameter has changed on the plugin side.@n
      This is called by the host to inform the UI about parameter changes.
    */
    void parameterChanged(uint32_t index, float value) override
    {
        switch (index)
        {
        case kExtraParamBypass:
            ui.switchEnable.switch_.setChecked(value < 0.5f, false);
            ui.switchEnableStats.switch_.setEnabled(value < 0.5f, false);
            ui.updateColors();
            break;
        case kExtraParamThreshold:
            ui.sliderThreshold.slider.setValue(value, false);
            break;
        case kExtraParamGracePeriod:
            ui.sliderGracePeriod.slider.setValue(value, false);
            break;
        case kExtraParamEnableStats:
            ui.switchEnableStats.switch_.setChecked(value >= 0.5f, false);
            ui.updateColors();
            break;
        case kExtraParamCurrentVAD:
            ui.statCurrent.meter.setValue(value);
            break;
        case kExtraParamAverageVAD:
            ui.statAverage.meter.setValue(value);
            break;
        case kExtraParamMinimumVAD:
            ui.statMinimum.meter.setValue(value);
            break;
        case kExtraParamMaximumVAD:
            ui.statMaximum.meter.setValue(value);
            break;
        }
    }

    // ----------------------------------------------------------------------------------------------------------------
    // Widget Callbacks

    void onNanoDisplay() override
    {
    }

    void buttonClicked(SubWidget* const widget, int) override
    {
        const uint id = widget->getId();

        QuantumSwitch* const qswitch = reinterpret_cast<QuantumSwitch*>(widget);
        DISTRHO_SAFE_ASSERT_RETURN(qswitch != nullptr,);

        const bool enabled = qswitch->isChecked();
        float value;

        if (id == kExtraParamBypass)
        {
            // bypass switch, inverted operation
            value = enabled ? 0.f : 1.f;

            // enable other parts too
            ui.switchEnableStats.switch_.setEnabled(enabled, false);
        }
        else
        {
            // regular switches, normal operation
            value = enabled ? 1.f : 0.f;
        }

        // report change to host
        editParameter(id, true);
        setParameterValue(id, value);
        editParameter(id, false);

        // update UI colors
        ui.updateColors();
    }

    void knobDragStarted(SubWidget* const widget) override
    {
        editParameter(widget->getId(), true);
    }

    void knobDragFinished(SubWidget* const widget) override
    {
        editParameter(widget->getId(), false);
    }

    void knobValueChanged(SubWidget* const widget, const float value) override
    {
        setParameterValue(widget->getId(), value);
    }

    // ----------------------------------------------------------------------------------------------------------------
    // UI Callbacks

    void onResize(const ResizeEvent& ev) override
    {
        UI::onResize(ev);

        ui.adjustSize(ev.size.getWidth(), ev.size.getHeight());
    }

    // ----------------------------------------------------------------------------------------------------------------

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ReNooiceUI)
};

// --------------------------------------------------------------------------------------------------------------------

UI* createUI()
{
    return new ReNooiceUI();
}

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO
