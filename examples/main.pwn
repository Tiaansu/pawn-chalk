#include <pawnchalk>

main()
{
    new output[256];

    chalk_bg(RebeccaPurple, output, sizeof output, "Hello World");
    print(output);

    chalk_bg_hex(0x00FF00, output, sizeof output, "Hello World");
    print(output);

    chalk_fg(RebeccaPurple, output, sizeof output, "Hello World");
    print(output);

    chalk_fg_hex(0x00FF00, output, sizeof output, "Hello World");
    print(output);

    chalk_style(italic, output, sizeof output, "Hello World");
    print(output);

    print(return_chalk_bg(RebeccaPurple, "Hello World"));
    print(return_chalk_bg_hex(0x00FF00, "Hello World"));

    print(return_chalk_fg(RebeccaPurple, "Hello World"));
    print(return_chalk_fg_hex(0x00FF00, "Hello World"));

    print(return_chalk_style(Italic, "Hello World"));
}