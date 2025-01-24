#pragma once

#include "sdk.hpp"

#define AMX_DECLARE_NATIVE(native) \
	cell AMX_NATIVE_CALL native(AMX *amx, cell *params)

#define AMX_DEFINE_NATIVE(native) \
	{#native, Native::native},

namespace Native
{
    AMX_DECLARE_NATIVE(chalk_bg);
    AMX_DECLARE_NATIVE(chalk_bg_hex);
    AMX_DECLARE_NATIVE(chalk_fg);
    AMX_DECLARE_NATIVE(chalk_fg_hex);
    AMX_DECLARE_NATIVE(chalk_style);
}