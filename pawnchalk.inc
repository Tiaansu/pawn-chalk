#if defined pawnchalk_included
    #endinput
#endif
#define pawnchalk_included

enum Color
{
    AliceBlue,
    AntiqueWhite,
    Aqua,
    Aquamarine,
    Azure,
    Beige,
    Bisque,
    Black,
    BlanchedAlmond,
    Blue,
    BlueViolet,
    Brown,
    BurlyWood,
    CadetBlue,
    Chartreuse,
    Chocolate,
    Coral,
    CornflowerBlue,
    Cornsilk,
    Crimson,
    Cyan,
    DarkBlue,
    DarkCyan,
    DarkGoldenrod,
    DarkGray,
    DarkGreen,
    DarkKhaki,
    DarkMagenta,
    DarkOliveGreen,
    DarkOrange,
    DarkOrchid,
    DarkRed,
    DarkSalmon,
    DarkSeaGreen,
    DarkSlateBlue,
    DarkSlateGray,
    DarkTurquoise,
    DarkViolet,
    DeepPink,
    DeepSkyBlue,
    DimGray,
    DodgerBlue,
    FireBrick,
    FloralWhite,
    ForestGreen,
    Fuchsia,
    Gainsboro,
    GhostWhite,
    Gold,
    Goldenrod,
    Gray,
    Green,
    GreenYellow,
    Honeydew,
    HotPink,
    IndianRed,
    Indigo,
    Ivory,
    Khaki,
    Lavender,
    LavenderBlush,
    LawnGreen,
    LemonChiffon,
    LightBlue,
    LightCoral,
    LightCyan,
    LightGoldenrodYellow,
    LightGray,
    LightGreen,
    LightPink,
    LightSalmon,
    LightSeaGreen,
    LightSkyBlue,
    LightSlateGray,
    LightSteelBlue,
    LightYellow,
    Lime,
    LimeGreen,
    Linen,
    Magenta,
    Maroon,
    MediumAquamarine,
    MediumBlue,
    MediumOrchid,
    MediumPurple,
    MediumSeaGreen,
    MediumSlateBlue,
    MediumSpringGreen,
    MediumTurquoise,
    MediumVioletRed,
    MidnightBlue,
    MintCream,
    MistyRose,
    Moccasin,
    NavajoWhite,
    Navy,
    OldLace,
    Olive,
    OliveDrab,
    Orange,
    OrangeRed,
    Orchid,
    PaleGoldenrod,
    PaleGreen,
    PaleTurquoise,
    PaleVioletRed,
    PapayaWhip,
    PeachPuff,
    Peru,
    Pink,
    Plum,
    PowderBlue,
    Purple,
    RebeccaPurple,
    Red,
    RosyBrown,
    RoyalBlue,
    SaddleBrown,
    Salmon,
    SandyBrown,
    SeaGreen,
    SeaShell,
    Sienna,
    Silver,
    SkyBlue,
    SlateBlue,
    SlateGray,
    Snow,
    SpringGreen,
    SteelBlue,
    Tan,
    Teal,
    Thistle,
    Tomato,
    Turquoise,
    Violet,
    Wheat,
    White,
    WhiteSmoke,
    Yellow,
    YellowGreen,
    TerminalBlack,
    TerminalRed,
    TerminalGreen,
    TerminalYellow,
    TerminalBlue,
    TerminalMagenta,
    TerminalCyan,
    TerminalWhite,
    TerminalBrightBlack,
    TerminalBrightRed,
    TerminalBrightGreen,
    TerminalBrightYellow,
    TerminalBrightBlue,
    TerminalBrightMagenta,
    TerminalBrightCyan,
    TerminalBrightWhite,
}

enum Style
{
    Bold,
    Faint,
    Italic,
    Underline,
    Blink,
    Reverse,
    Conceal,
    Strikethrough,
}

native chalk_bg(Color:color, output[], len = sizeof(output), const format[], {Float,_}:...);
native chalk_bg_hex(color, output[], len = sizeof(output), const format[], {Float,_}:...);
native chalk_fg(Color:color, output[], len = sizeof(output), const format[], {Float,_}:...);
native chalk_fg_hex(color, output[], len = sizeof(output), const format[], {Float,_}:...);
native chalk_style(Style:style, output[], len = sizeof(output), const format[], {Float,_}:...);

#if defined _INC_y_va
    stock return_chalk_bg(Color:color, const format[], va_args<>)
    {
        new output[256];
        chalk_bg(color, output, sizeof output, format, va_start<2>);
        return output;
    }

    stock return_chalk_bg_hex(color, const format[], va_args<>)
    {
        new output[256];
        chalk_bg_hex(color, output, sizeof output, format, va_start<2>);
        return output;
    }

    stock return_chalk_fg(Color:color, const format[], va_args<>)
    {
        new output[256];
        chalk_fg(color, output, sizeof output, format, va_start<2>);
        return output;
    }

    stock return_chalk_fg_hex(color, const format[], va_args<>)
    {
        new output[256];
        chalk_fg_hex(color, output, sizeof output, format, va_start<2>);
        return output;
    }

    stock return_chalk_style(Style:style, const format[], va_args<>)
    {
        new output[256];
        chalk_style(style, output, sizeof output, format, va_start<2>);
        return output;
    }
#else
    stock return_chalk_bg(Color:color, const text[], {Float,_}:...)
    {
        static
            args,
            output[256];

        if ((args = numargs()) <= 2)
        {
            chalk_bg(color, output, sizeof output, text);
            return output;
        }

        while (--args >= 2)
        {
            #emit LCTRL         5
            #emit LOAD.alt      args
            #emit SHL.C.alt     2
            #emit ADD.C         12
            #emit ADD
            #emit LOAD.I
            #emit PUSH.pri
        }
        #emit PUSH.S            text
        #emit PUSH.C            256
        #emit PUSH.C            output
        #emit PUSH.S            color
        #emit LOAD.S.pri        8
        #emit CONST.alt         4
        #emit SUB
        #emit PUSH.pri          
        #emit SYSREQ.C          chalk_bg
        #emit LCTRL             5
        #emit SCTRL             4

        return output;
    }

    stock return_chalk_bg_hex(color, const text[], {Float,_}:...)
    {
        static
            args,
            output[256];

        if ((args = numargs()) <= 2)
        {
            chalk_bg_hex(color, output, sizeof output, text);
            return output;
        }

        while (--args >= 2)
        {
            #emit LCTRL         5
            #emit LOAD.alt      args
            #emit SHL.C.alt     2
            #emit ADD.C         12
            #emit ADD
            #emit LOAD.I
            #emit PUSH.pri
        }
        #emit PUSH.S            text
        #emit PUSH.C            256
        #emit PUSH.C            output
        #emit PUSH.C            color
        #emit LOAD.S.pri        8
        #emit CONST.alt         4
        #emit SUB
        #emit PUSH.pri          
        #emit SYSREQ.C          chalk_bg_hex
        #emit LCTRL             5
        #emit SCTRL             4

        return output;
    }

    stock return_chalk_fg(Color:color, const text[], {Float,_}:...)
    {
        static
            args,
            output[256];

        if ((args = numargs()) <= 2)
        {
            chalk_fg(color, output, sizeof output, text);
            return output;
        }

        while (--args >= 2)
        {
            #emit LCTRL         5
            #emit LOAD.alt      args
            #emit SHL.C.alt     2
            #emit ADD.C         12
            #emit ADD
            #emit LOAD.I
            #emit PUSH.pri
        }
        #emit PUSH.S            text
        #emit PUSH.C            256
        #emit PUSH.C            output
        #emit PUSH.S            color
        #emit LOAD.S.pri        8
        #emit CONST.alt         4
        #emit SUB
        #emit PUSH.pri          
        #emit SYSREQ.C          chalk_fg
        #emit LCTRL             5
        #emit SCTRL             4

        return output;
    }

    stock return_chalk_fg_hex(color, const text[], {Float,_}:...)
    {
        static
            args,
            output[256];

        if ((args = numargs()) <= 2)
        {
            chalk_fg_hex(color, output, sizeof output, text);
            return output;
        }

        while (--args >= 2)
        {
            #emit LCTRL         5
            #emit LOAD.alt      args
            #emit SHL.C.alt     2
            #emit ADD.C         12
            #emit ADD
            #emit LOAD.I
            #emit PUSH.pri
        }
        #emit PUSH.S            text
        #emit PUSH.C            256
        #emit PUSH.C            output
        #emit PUSH.S            color
        #emit LOAD.S.pri        8
        #emit CONST.alt         4
        #emit SUB
        #emit PUSH.pri          
        #emit SYSREQ.C          chalk_fg_hex
        #emit LCTRL             5
        #emit SCTRL             4

        return output;
    }

    stock return_chalk_style(Style:style, const text[], {Float,_}:...)
    {
        static
            args,
            output[256];

        if ((args = numargs()) <= 2)
        {
            chalk_style(style, output, sizeof output, text);
            return output;
        }

        while (--args >= 2)
        {
            #emit LCTRL         5
            #emit LOAD.alt      args
            #emit SHL.C.alt     2
            #emit ADD.C         12
            #emit ADD
            #emit LOAD.I
            #emit PUSH.pri
        }
        #emit PUSH.S            text
        #emit PUSH.C            256
        #emit PUSH.C            output
        #emit PUSH.S            style
        #emit LOAD.S.pri        8
        #emit CONST.alt         4
        #emit SUB
        #emit PUSH.pri          
        #emit SYSREQ.C          chalk_style
        #emit LCTRL             5
        #emit SCTRL             4

        return output;
    }
#endif