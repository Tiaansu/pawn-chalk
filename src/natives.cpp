#include "sdk.hpp"
#include "natives.hpp"
#include "Chalk.hpp"

// native chalk_bg_none(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_none)
{
    amx_SetCppString(amx, params[2], Chalk::BG::None.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_black(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_black)
{
    amx_SetCppString(amx, params[2], Chalk::BG::Black.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_red(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_red)
{
    amx_SetCppString(amx, params[2], Chalk::BG::Red.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_green(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_green)
{
    amx_SetCppString(amx, params[2], Chalk::BG::Green.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_yellow(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_yellow)
{
    amx_SetCppString(amx, params[2], Chalk::BG::Yellow.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_blue(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_blue)
{
    amx_SetCppString(amx, params[2], Chalk::BG::Blue.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_magenta(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_magenta)
{
    amx_SetCppString(amx, params[2], Chalk::BG::Magenta.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_cyan(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_cyan)
{
    amx_SetCppString(amx, params[2], Chalk::BG::Cyan.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_white(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_white)
{
    amx_SetCppString(amx, params[2], Chalk::BG::White.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_black(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_black)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightBlack.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_red(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_red)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightRed.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_green(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_green)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightGreen.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_yellow(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_yellow)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightYellow.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_blue(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_blue)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightBlue.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_magenta(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_magenta)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightMagenta.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_cyan(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_cyan)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightCyan.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_bg_bright_white(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_bg_bright_white)
{
    amx_SetCppString(amx, params[2], Chalk::BG::BrightWhite.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_none(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_none)
{
    amx_SetCppString(amx, params[2], Chalk::FG::None.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_black(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_black)
{
    amx_SetCppString(amx, params[2], Chalk::FG::Black.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_red(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_red)
{
    amx_SetCppString(amx, params[2], Chalk::FG::Red.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_green(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_green)
{
    amx_SetCppString(amx, params[2], Chalk::FG::Green.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_yellow(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_yellow)
{
    amx_SetCppString(amx, params[2], Chalk::FG::Yellow.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_blue(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_blue)
{
    amx_SetCppString(amx, params[2], Chalk::FG::Blue.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_magenta(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_magenta)
{
    amx_SetCppString(amx, params[2], Chalk::FG::Magenta.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_cyan(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_cyan)
{
    amx_SetCppString(amx, params[2], Chalk::FG::Cyan.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_white(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_white)
{
    amx_SetCppString(amx, params[2], Chalk::FG::White.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_black(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_black)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightBlack.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_red(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_red)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightRed.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_green(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_green)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightGreen.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_yellow(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_yellow)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightYellow.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_blue(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_blue)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightBlue.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_magenta(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_magenta)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightMagenta.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_cyan(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_cyan)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightCyan.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fg_bright_white(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fg_bright_white)
{
    amx_SetCppString(amx, params[2], Chalk::FG::BrightWhite.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_bold(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_bold)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::Bold.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_faint(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_faint)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::Faint.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_italic(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_italic)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::Italic.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_underline(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_underline)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::Underline.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_slow_blink(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_slow_blink)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::SlowBlink.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_rapid_blink(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_rapid_blink)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::RapidBlink.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_reverse(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_reverse)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::Reverse.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_conceal(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_conceal)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::Conceal.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}

// native chalk_fmt_crossed_out(const input[], output[], len = strlen(output));
AMX_DECLARE_NATIVE(Native::chalk_fmt_crossed_out)
{
    amx_SetCppString(amx, params[2], Chalk::FMT::CrossedOut.Wrap(amx_GetCppString(amx, params[1])), params[3]);
    return 0;
}