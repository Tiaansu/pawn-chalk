#pragma once

#include "sdk.hpp"

#define AMX_DECLARE_NATIVE(native) \
	cell AMX_NATIVE_CALL native(AMX *amx, cell *params)

#define AMX_DEFINE_NATIVE(native) \
	{#native, Native::native},

namespace Native
{
    AMX_DECLARE_NATIVE(chalk_bg_none);
    AMX_DECLARE_NATIVE(chalk_bg_black);
    AMX_DECLARE_NATIVE(chalk_bg_red);
    AMX_DECLARE_NATIVE(chalk_bg_green);
    AMX_DECLARE_NATIVE(chalk_bg_yellow);
    AMX_DECLARE_NATIVE(chalk_bg_blue);
    AMX_DECLARE_NATIVE(chalk_bg_magenta);
    AMX_DECLARE_NATIVE(chalk_bg_cyan);
    AMX_DECLARE_NATIVE(chalk_bg_white);

    AMX_DECLARE_NATIVE(chalk_bg_bright_black);
    AMX_DECLARE_NATIVE(chalk_bg_bright_red);
    AMX_DECLARE_NATIVE(chalk_bg_bright_green);
    AMX_DECLARE_NATIVE(chalk_bg_bright_yellow);
    AMX_DECLARE_NATIVE(chalk_bg_bright_blue);
    AMX_DECLARE_NATIVE(chalk_bg_bright_magenta);
    AMX_DECLARE_NATIVE(chalk_bg_bright_cyan);
    AMX_DECLARE_NATIVE(chalk_bg_bright_white);

    AMX_DECLARE_NATIVE(chalk_fg_none);
    AMX_DECLARE_NATIVE(chalk_fg_black);
    AMX_DECLARE_NATIVE(chalk_fg_red);
    AMX_DECLARE_NATIVE(chalk_fg_green);
    AMX_DECLARE_NATIVE(chalk_fg_yellow);
    AMX_DECLARE_NATIVE(chalk_fg_blue);
    AMX_DECLARE_NATIVE(chalk_fg_magenta);
    AMX_DECLARE_NATIVE(chalk_fg_cyan);
    AMX_DECLARE_NATIVE(chalk_fg_white);

    AMX_DECLARE_NATIVE(chalk_fg_bright_black);
    AMX_DECLARE_NATIVE(chalk_fg_bright_red);
    AMX_DECLARE_NATIVE(chalk_fg_bright_green);
    AMX_DECLARE_NATIVE(chalk_fg_bright_yellow);
    AMX_DECLARE_NATIVE(chalk_fg_bright_blue);
    AMX_DECLARE_NATIVE(chalk_fg_bright_magenta);
    AMX_DECLARE_NATIVE(chalk_fg_bright_cyan);
    AMX_DECLARE_NATIVE(chalk_fg_bright_white);

    AMX_DECLARE_NATIVE(chalk_fmt_bold);
    AMX_DECLARE_NATIVE(chalk_fmt_faint);
    AMX_DECLARE_NATIVE(chalk_fmt_italic);
    AMX_DECLARE_NATIVE(chalk_fmt_underline);
    AMX_DECLARE_NATIVE(chalk_fmt_slow_blink);
    AMX_DECLARE_NATIVE(chalk_fmt_rapid_blink);
    AMX_DECLARE_NATIVE(chalk_fmt_reverse);
    AMX_DECLARE_NATIVE(chalk_fmt_conceal);
    AMX_DECLARE_NATIVE(chalk_fmt_crossed_out);
}