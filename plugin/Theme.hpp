// Copyright 2025 Filipe Coelho <falktx@falktx.com>
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include "Quantum.hpp"

// --------------------------------------------------------------------------------------------------------------------
// our custom theme, using line size 1 and adds bar colors

struct BBBAudioTheme : QuantumTheme
{
    uint sidelabelsFontSize = 13;
    Color inputLevelBracket1 = Color::fromHTML("#7f4500");
    Color inputLevelBracket2 = Color::fromHTML("#336c33");

    BBBAudioTheme(const double scaleFactor) noexcept
    {
        widgetLineSize = 1;
        knobIndicatorSize = 3;
        knobAlternativeRingColor = Color::fromHTML("#b055bf");
        knobRingColor = Color::fromHTML("#3cb4aa");
        levelMeterAlternativeColor = Color::fromHTML("#b055bf");
        levelMeterColor = Color::fromHTML("#3cb4aa");
        textMidColor = Color::fromHTML("#a1a1a1");
        widgetActiveColor = Color::fromHTML("#3cb4aa");
        widgetAlternativeColor = Color::fromHTML("#6159ff");

        if (d_isNotEqual(scaleFactor, 1.0))
        {
            borderSize *= scaleFactor;
            padding *= scaleFactor;
            fontSize *= scaleFactor;
            sidelabelsFontSize *= scaleFactor;
            knobIndicatorSize *= scaleFactor;
            textHeight *= scaleFactor;
            widgetLineSize *= scaleFactor;
        }

        windowPadding = borderSize + padding * 3;
        textPixelRatioWidthCompensation = static_cast<uint>(scaleFactor - 1.0 + 0.25);
    }
};

// --------------------------------------------------------------------------------------------------------------------
