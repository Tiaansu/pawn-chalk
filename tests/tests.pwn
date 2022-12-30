#include <a_samp>
#include "chalk.inc"

main()
{
    new 
        bg_green[256], 
        fg_green[256], 
        fmt_bold[256]
    ;

    chalk_bg_green("hello world", bg_green);
    print(bg_green);

    chalk_fg_green("hello world", fg_green);
    print(fg_green);

    chalk_fmt_bold("bold text", fmt_bold);
    print(fmt_bold);

    chalk_background(BG_Green, "custom function");
    chalk_background(BG_Green, "custom function %s", "formatted");

    chalk_foreground(FG_Green, "custom function");
    chalk_foreground(FG_Green, "custom function %s", "formatted");

    chalk_format_styles(FMT_Bold, "custom function");
    chalk_format_styles(FMT_Bold, "custom function %s", "formatted");
}