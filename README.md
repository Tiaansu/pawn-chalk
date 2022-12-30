<h1 align="center">
	<br>
	<br>
	<img width="320" src="media/logo.svg" alt="Chalk">
	<br>
	<br>
	<br>
</h1>

> Terminal string styling done right

## Installation

1. Download from [the `releases` page](https://github.com/Tiaansu/pawn-chalk/releases) the desired version of the plugin for your platform.
2. Unpack the archive to the root directory of the server.
3. Add to the server configuration file the line:
    * samp server:
        * "*plugins pawnchalk*" - for Windows platform
        * "*plugins pawnchalk.so*" - for Linux platform
    * open.mp server:
        * for Windows platform:
            ```json
                "pawn": {
                    "legacy_plugins": [
                        "pawnchalk"
                    ]
                }
            ```
        * for Linux platform:
            ```json
                "pawn": {
                    "legacy_plugins": [
                        "pawnchalk.so"
                    ]
                }
            ```

## Usage 
* `chalk_bg_*`
    - Add a background color to a string.
    - See [here](https://github.com/Tiaansu/pawn-chalk/blob/main/tests/chalk.inc#L71-L87) to see the list of background colors available.
    - Example:
        ```pawn
            new output[256];

            chalk_bg_green("hello world", output);
            print(output);
        ```
        This will return: <img width="150" src="media/bg_example.png" alt="BG">

<hr>

* `chalk_fg_*`
    - Change the color of a string.
    - See [here](https://github.com/Tiaansu/pawn-chalk/blob/main/tests/chalk.inc#L90-L106) to see the list of colors available.
    - Example:
        ```pawn 
            new output[256];

            chalk_fg_green("hello world", output);
            print(output);
        ```
        This will return: <img width="150" src="media/fg_example.png" alt="FG"> 

<hr>

* `chalk_fmt_*`
    - Add / Change the style of a string.
    - See [here](https://github.com/Tiaansu/pawn-chalk/blob/main/tests/chalk.inc#L109-L117) to see the list of styles available.
    - Example:
        ```pawn
            new output[256];
            
            chalk_fmt_bold("this is bold text", output);
            print(output);

            chalk_fmt_italic("this is italic text", output);
            print(output);
        ```
        This will return: <img width="150" src="media/fmt_example.png" alt="FMT"> 

<hr>

## There is also a custom function:
* `chalk_background`
    - Params:
        - color
            - The color of background.
            - See [here](https://github.com/Tiaansu/pawn-chalk/blob/main/tests/chalk.inc#L14-L31) to see the list of background colors available.
        - text
            - The string of text you want to apply the background color to.
        - {Float,_}:... (optional)
            - If your string need to be formatted, you'll use it.
    - Example:
        ```pawn
            printf("Hello %s", chalk_background(BG_Green, "World"));
            printf("Hello %s", chalk_background(BG_Red, "World %s", "Formatted"));
        ```
        This will return: <img width="150" src="media/custom_bg_example.png" alt="Custom BG"> 

<hr>

* `chalk_foreground`
    - Params:
        - color
            - The color of text you want to apply.
            - See [here](https://github.com/Tiaansu/pawn-chalk/blob/main/tests/chalk.inc#L36-L53) to see the list of colors available.
        - text
            - The string of text you want to apply the color to.
        - {Float,_}:... (optional)
            - If your string need to be formatted, you'll use it.
    - Example:
        ```pawn
            printf("Hello %s", chalk_foreground(FG_Green, "World"));
            printf("Hello %s", chalk_foreground(FG_Red, "World %s", "Formatted"));
        ```
        This will return: <img width="150" src="media/custom_fg_example.png" alt="Custom FG">

* `chalk_format_styles`
    - Params:
        - style
            - The style you want to apply.
            - See [here](https://github.com/Tiaansu/pawn-chalk/blob/main/tests/chalk.inc#L58-L66) to see the list of style available.
        - text
            - The string of text you want to apply the color to.
        - {Float,_}:... (optional)
            - If your string need to be formatted, you'll use it.
    - Example:
        ```pawn
            printf("This is %s text", chalk_format_styles(FMT_Bold, "bold"));
            printf("This is %s text", chalk_format_styles(FMT_Bold, "bold %s", "formatted"));
        ```
        This will return: <img width="150" src="media/custom_fmt_example.png" alt="Custom FMT">