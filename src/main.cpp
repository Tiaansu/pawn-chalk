#include "sdk.hpp"

#include "version.hpp"
#include "common.hpp"
#include "natives.hpp"
#include "Chalk.hpp"

logprintf_t logprintf;

AMX_NATIVE_INFO NATIVES[] =
{
    AMX_DEFINE_NATIVE(chalk_bg_none)
    AMX_DEFINE_NATIVE(chalk_bg_black)
    AMX_DEFINE_NATIVE(chalk_bg_red)
    AMX_DEFINE_NATIVE(chalk_bg_green)
    AMX_DEFINE_NATIVE(chalk_bg_yellow)
    AMX_DEFINE_NATIVE(chalk_bg_blue)
    AMX_DEFINE_NATIVE(chalk_bg_magenta)
    AMX_DEFINE_NATIVE(chalk_bg_cyan)
    AMX_DEFINE_NATIVE(chalk_bg_white)

    AMX_DEFINE_NATIVE(chalk_bg_bright_black)
    AMX_DEFINE_NATIVE(chalk_bg_bright_red)
    AMX_DEFINE_NATIVE(chalk_bg_bright_green)
    AMX_DEFINE_NATIVE(chalk_bg_bright_yellow)
    AMX_DEFINE_NATIVE(chalk_bg_bright_blue)
    AMX_DEFINE_NATIVE(chalk_bg_bright_magenta)
    AMX_DEFINE_NATIVE(chalk_bg_bright_cyan)
    AMX_DEFINE_NATIVE(chalk_bg_bright_white)

    AMX_DEFINE_NATIVE(chalk_fg_none)
    AMX_DEFINE_NATIVE(chalk_fg_black)
    AMX_DEFINE_NATIVE(chalk_fg_red)
    AMX_DEFINE_NATIVE(chalk_fg_green)
    AMX_DEFINE_NATIVE(chalk_fg_yellow)
    AMX_DEFINE_NATIVE(chalk_fg_blue)
    AMX_DEFINE_NATIVE(chalk_fg_magenta)
    AMX_DEFINE_NATIVE(chalk_fg_cyan)
    AMX_DEFINE_NATIVE(chalk_fg_white)

    AMX_DEFINE_NATIVE(chalk_fg_bright_black)
    AMX_DEFINE_NATIVE(chalk_fg_bright_red)
    AMX_DEFINE_NATIVE(chalk_fg_bright_green)
    AMX_DEFINE_NATIVE(chalk_fg_bright_yellow)
    AMX_DEFINE_NATIVE(chalk_fg_bright_blue)
    AMX_DEFINE_NATIVE(chalk_fg_bright_magenta)
    AMX_DEFINE_NATIVE(chalk_fg_bright_cyan)
    AMX_DEFINE_NATIVE(chalk_fg_bright_white)

    AMX_DEFINE_NATIVE(chalk_fmt_bold)
    AMX_DEFINE_NATIVE(chalk_fmt_faint)
    AMX_DEFINE_NATIVE(chalk_fmt_italic)
    AMX_DEFINE_NATIVE(chalk_fmt_underline)
    AMX_DEFINE_NATIVE(chalk_fmt_slow_blink)
    AMX_DEFINE_NATIVE(chalk_fmt_rapid_blink)
    AMX_DEFINE_NATIVE(chalk_fmt_reverse)
    AMX_DEFINE_NATIVE(chalk_fmt_conceal)
    AMX_DEFINE_NATIVE(chalk_fmt_crossed_out)

    { NULL, NULL }
};

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
    return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void** ppData)
{
    pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
    logprintf = reinterpret_cast<logprintf_t>(ppData[PLUGIN_DATA_LOGPRINTF]);
    logprintf(Chalk::BG::Green.Wrap(Chalk::FMT::Bold.Wrap(" >> plugin.pawn-chalk: " PLUGIN_VERSION " successfully loaded. << ")).c_str());
    return true;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
    logprintf(Chalk::BG::Red.Wrap(Chalk::FMT::Bold.Wrap(" >> plugin.pawn-chalk: Plugin unloaded. << ")).c_str());
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad(AMX* amx)
{
    return amx_Register(amx, NATIVES, -1);
}

PLUGIN_EXPORT int PLUGIN_CALL AmxUnload(AMX* amx)
{
    return AMX_ERR_NONE;
}