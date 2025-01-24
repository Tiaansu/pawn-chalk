#include "sdk.hpp"
#include "natives.hpp"
#include <fmt/printf.h>
#include <fmt/color.h>
#include <iterator>

extern logprintf_t logprintf;

fmt::v11::text_style getColor(int index, bool isForeground)
{
    auto hi = isForeground ? fmt::fg : fmt::bg;
    auto colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::white);
    switch (index)
    {
        case 0:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::alice_blue);
            break;
        case 1:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::antique_white);
            break;
        case 2:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::aqua);
            break;
        case 3:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::aquamarine);
            break;
        case 4:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::azure);
            break;
        case 5:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::beige);
            break;
        case 6:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::bisque);
            break;
        case 7:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::black);
            break;
        case 8:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::blanched_almond);
            break;
        case 9:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::blue);
            break;
        case 10:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::blue_violet);
            break;
        case 11:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::brown);
            break;
        case 12:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::burly_wood);
            break;
        case 13:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::cadet_blue);
            break;
        case 14:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::chartreuse);
            break;
        case 15:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::chocolate);
            break;
        case 16:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::coral);
            break;
        case 17:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::cornflower_blue);
            break;
        case 18:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::cornsilk);
            break;
        case 19:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::crimson);
            break;
        case 20:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::cyan);
            break;
        case 21:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_blue);
            break;
        case 22:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_cyan);
            break;
        case 23:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_golden_rod);
            break;
        case 24:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_gray);
            break;
        case 25:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_green);
            break;
        case 26:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_khaki);
            break;
        case 27:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_magenta);
            break;
        case 28:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_olive_green);
            break;
        case 29:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_orange);
            break;
        case 30:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_orchid);
            break;
        case 31:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_red);
            break;
        case 32:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_salmon);
            break;
        case 33:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_sea_green);
            break;
        case 34:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_slate_blue);
            break;
        case 35:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_slate_gray);
            break;
        case 36:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_turquoise);
            break;
        case 37:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dark_violet);
            break;
        case 38:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::deep_pink);
            break;
        case 39:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::deep_sky_blue);
            break;
        case 40:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dim_gray);
            break;
        case 41:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::dodger_blue);
            break;
        case 42:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::fire_brick);
            break;
        case 43:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::floral_white);
            break;
        case 44:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::forest_green);
            break;
        case 45:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::fuchsia);
            break;
        case 46:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::gainsboro);
            break;
        case 47:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::ghost_white);
            break;
        case 48:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::gold);
            break;
        case 49:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::golden_rod);
            break;
        case 50:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::gray);
            break;
        case 51:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::green);
            break;
        case 52:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::green_yellow);
            break;
        case 53:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::honey_dew);
            break;
        case 54:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::hot_pink);
            break;
        case 55:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::indian_red);
            break;
        case 56:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::indigo);
            break;
        case 57:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::ivory);
            break;
        case 58:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::khaki);
            break;
        case 59:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::lavender);
            break;
        case 60:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::lavender_blush);
            break;
        case 61:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::lawn_green);
            break;
        case 62:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::lemon_chiffon);
            break;
        case 63:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_blue);
            break;
        case 64:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_coral);
            break;
        case 65:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_cyan);
            break;
        case 66:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_golden_rod_yellow);
            break;
        case 67:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_gray);
            break;
        case 68:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_green);
            break;
        case 69:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_pink);
            break;
        case 70:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_salmon);
            break;
        case 71:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_sea_green);
            break;
        case 72:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_sky_blue);
            break;
        case 73:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_slate_gray);
            break;
        case 74:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_steel_blue);
            break;
        case 75:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::light_yellow);
            break;
        case 76:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::lime);
            break;
        case 77:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::lime_green);
            break;
        case 78:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::linen);
            break;
        case 79:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::magenta);
            break;
        case 80:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::maroon);
            break;
        case 81:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_aquamarine);
            break;
        case 82:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_blue);
            break;
        case 83:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_orchid);
            break;
        case 84:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_purple);
            break;
        case 85:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_sea_green);
            break;
        case 86:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_slate_blue);
            break;
        case 87:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_spring_green);
            break;
        case 88:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_turquoise);
            break;
        case 89:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::medium_violet_red);
            break;
        case 90:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::midnight_blue);
            break;
        case 91:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::mint_cream);
            break;
        case 92:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::misty_rose);
            break;
        case 93:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::moccasin);
            break;
        case 94:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::navajo_white);
            break;
        case 95:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::navy);
            break;
        case 96:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::old_lace);
            break;
        case 97:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::olive);
            break;
        case 98:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::olive_drab);
            break;
        case 99:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::orange);
            break;
        case 100:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::orange_red);
            break;
        case 101:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::orchid);
            break;
        case 102:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::pale_golden_rod);
            break;
        case 103:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::pale_green);
            break;
        case 104:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::pale_turquoise);
            break;
        case 105:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::pale_violet_red);
            break;
        case 106:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::papaya_whip);
            break;
        case 107:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::peach_puff);
            break;
        case 108:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::peru);
            break;
        case 109:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::pink);
            break;
        case 110:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::plum);
            break;
        case 111:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::powder_blue);
            break;
        case 112:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::purple);
            break;
        case 113:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::rebecca_purple);
            break;
        case 114:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::red);
            break;
        case 115:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::rosy_brown);
            break;
        case 116:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::royal_blue);
            break;
        case 117:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::saddle_brown);
            break;
        case 118:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::salmon);
            break;
        case 119:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::sandy_brown);
            break;
        case 120:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::sea_green);
            break;
        case 121:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::sea_shell);
            break;
        case 122:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::sienna);
            break;
        case 123:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::silver);
            break;
        case 124:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::sky_blue);
            break;
        case 125:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::slate_blue);
            break;
        case 126:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::slate_gray);
            break;
        case 127:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::snow);
            break;
        case 128:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::spring_green);
            break;
        case 129:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::steel_blue);
            break;
        case 130:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::tan);
            break;
        case 131:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::teal);
            break;
        case 132:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::thistle);
            break;
        case 133:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::tomato);
            break;
        case 134:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::turquoise);
            break;
        case 135:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::violet);
            break;
        case 136:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::wheat);
            break;
        case 137:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::white);
            break;
        case 138:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::color::white_smoke);
            break;
        case 139:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::black);
            break;
        case 140:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::red);
            break;
        case 141:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::green);
            break;
        case 142:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::yellow);
            break;
        case 143:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::blue);
            break;
        case 144:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::magenta);
            break;
        case 145:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::cyan);
            break;
        case 146:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::white);
            break;
        case 147:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_black);
            break;
        case 148:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_red);
            break;
        case 149:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_green);
            break;
        case 150:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_yellow);
            break;
        case 151:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_blue);
            break;
        case 152:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_magenta);
            break;
        case 153:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_cyan);
            break;
        case 154:
            colorStyle = (isForeground ? fmt::fg : fmt::bg)(fmt::terminal_color::bright_white);
            break;
    }

    return colorStyle;
}

fmt::v11::text_style getStyle(int index)
{
    switch (index)
    {
        case 0:
            return fmt::text_style(fmt::emphasis::bold);
        case 1:
            return fmt::text_style(fmt::emphasis::faint);
        case 2:
            return fmt::text_style(fmt::emphasis::italic);
        case 3:
            return fmt::text_style(fmt::emphasis::underline);
        case 4:
            return fmt::text_style(fmt::emphasis::blink);
        case 5:
            return fmt::text_style(fmt::emphasis::reverse);
        case 6:
            return fmt::text_style(fmt::emphasis::conceal);
        case 7:
            return fmt::text_style(fmt::emphasis::strikethrough);
    }
    return fmt::text_style();
}

int StringFormatter(AMX* amx, cell* params, fmt::v11::text_style style, std::string& dest)
{
    const size_t dest_maxsize = params[3];
    const char* format_str = nullptr;
    amx_StrParam(amx, params[4], format_str);
    if (format_str == nullptr || params[3] <= 0)
    {
        logprintf("invalid format string or destination size");
        return 0;
    }
    
    std::string dest_writer;

    const unsigned int
        first_param_idx = 5,
        num_args = (params[0] / sizeof(cell)),
        num_dyn_args = num_args - (first_param_idx - 1);
    unsigned int param_counter = 0;

    for (; *format_str != '\0'; ++format_str)
    {
        bool break_loop = false;

        if (dest_writer.size() >= dest_maxsize)
        {
            logprintf("destination buffer overflow");
            break;
        }

        if (*format_str == '%')
        {
            ++ format_str;

            if (*format_str == '%')
            {
                dest_writer += '%';
                continue;
            }

            if (param_counter >= num_dyn_args)
            {
                logprintf("no valie for specifier passed");
                break;
            }

            const char* format_spec_ptr = format_str - 1;
            while (!isalpha(*format_str))
                ++ format_str;
            std::string format_spec(format_spec_ptr, format_str + 1);

            cell *amx_address = nullptr;
            amx_GetAddr(amx, params[first_param_idx + param_counter], &amx_address);
            
            switch (*format_str)
            {
                case 'd':
                case 'i':
                case 'o':
                case 'x':
                case 'X':
                case 'u':
                    dest_writer += fmt::sprintf(format_spec, static_cast<int>(*amx_address));
                    break;
                case 's':
                    dest_writer += amx_GetCppString(amx, params[first_param_idx + param_counter]);
                    break;
                case 'f':
                case 'F':
                case 'a':
                case 'A':
                case 'g':
                case 'G':
                    dest_writer += fmt::sprintf(format_spec, amx_ctof(*amx_address));
                    break;
                default:
                    break_loop = true;
                    break;
            }

            if (break_loop)
                break;
            else
                param_counter ++;
        }
        else
        {
            dest_writer += *format_str;
        }
    }

    cell ret_val = 0;
    if (*format_str == '\0')
    {
        ret_val = static_cast<cell>(dest_writer.size());
        dest = fmt::format("{}", fmt::styled(dest_writer, style));
    }

    return ret_val;
}

// native chalk_bg(Color:color, output[], len, const input[], {Float,_}:...)
AMX_DECLARE_NATIVE(Native::chalk_bg)
{
    auto colorStyle = getColor(params[1], false /* isForeground */);

    std::string formatted;
    StringFormatter(amx, params, colorStyle, formatted);
    amx_SetCString(amx, params[2], formatted.c_str(), params[3]);
    return formatted.size();
}

// native chalk_fg(Color:color, output[], len, const input[], {Float,_}:...)
AMX_DECLARE_NATIVE(Native::chalk_fg)
{
    auto colorStyle = getColor(params[1], true /* isForeground */);

    std::string formatted;
    StringFormatter(amx, params, colorStyle, formatted);
    amx_SetCString(amx, params[2], formatted.c_str(), params[3]);
    return formatted.size();
}

// native chalk_bg_hex(hex, output[], len, const input[], {Float,_}:...)
AMX_DECLARE_NATIVE(Native::chalk_bg_hex)
{
    if (params[1] < 0)
    {
        logprintf("invalid hex color");
        return 0;
    }

    std::string formatted;
    StringFormatter(amx, params, fmt::bg(fmt::rgb(params[1])), formatted);
    amx_SetCString(amx, params[2], formatted.c_str(), params[3]);
    return formatted.size();
}

// native chalk_fg_hex(hex, output[], len, const input[], {Float,_}:...)
AMX_DECLARE_NATIVE(Native::chalk_fg_hex)
{
    if (params[1] < 0)
    {
        logprintf("invalid hex color");
        return 0;
    }

    std::string formatted;
    StringFormatter(amx, params, fmt::fg(fmt::rgb(params[1])), formatted);
    amx_SetCString(amx, params[2], formatted.c_str(), params[3]);
    return formatted.size();
}

// native chalk_style(Style:style, output[], len, const input[], {Float,_}:...)
AMX_DECLARE_NATIVE(Native::chalk_style)
{
    auto style = getStyle(params[1]);
    std::string formatted;
    StringFormatter(amx, params, style, formatted);
    amx_SetCString(amx, params[2], formatted.c_str(), params[3]);
    return formatted.size();
}