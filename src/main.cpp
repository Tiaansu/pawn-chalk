#include "sdk.hpp"

#include "common.hpp"

#include <fmt/core.h>
#include <fmt/color.h>
#include "natives.hpp"

logprintf_t logprintf;

AMX_NATIVE_INFO NATIVES[] = 
{
    AMX_DEFINE_NATIVE(chalk_bg)
    AMX_DEFINE_NATIVE(chalk_bg_hex)
    AMX_DEFINE_NATIVE(chalk_fg)
    AMX_DEFINE_NATIVE(chalk_fg_hex)
    AMX_DEFINE_NATIVE(chalk_style)
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
    logprintf(fmt::format("{}", fmt::styled("pawn-chalk loaded", fmt::fg(fmt::color::rebecca_purple))).c_str());
    return true;
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
    logprintf("pawn-chalk unloaded");
}

PLUGIN_EXPORT int PLUGIN_CALL AmxLoad(AMX* amx)
{
    return amx_Register(amx, NATIVES, -1);
}

PLUGIN_EXPORT int PLUGIN_CALL AmxUnload(AMX* amx)
{
    return AMX_ERR_NONE;
}