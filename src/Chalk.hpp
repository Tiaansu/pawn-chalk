/**
 * @file Chalk.hpp
 * @author Tian (marlonrivera12321@gmail.com)
 * @brief A C++ ANSI terminal text color and formatting interface
 * @version 0.0.1
 * @date 2022-12-30
 * 
 * @copyright Copyright (c) 2022
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE 
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 */

#ifndef ____lib_pawn_CHALK
#define ____lib_pawn_CHALK
#include <cassert>

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include <sstream>

namespace Chalk
{
    class OStreamStyler;
    struct Color
    {
        explicit constexpr Color(
            const char* esc, const char* value, const char* terminator
        ) : rep_(value), terminator_(terminator), esc_(esc) {}

        explicit constexpr Color() : rep_(""), terminator_(""), esc_("") {}

        std::string Wrap(std::string_view str) const
        {
            std::string result{};

            result.reserve(str.size());
            
            result += esc_;
            result += rep_;
            result += str;
            result += esc_;
            result += terminator_;

            return result;
        }

        friend class OStreamStyler;

        private:
            const char* rep_;
            const char* esc_;
            const char* terminator_;
    };

    struct BackgroundColor : Color
    {
        static constexpr auto esc_ = "\033[";
        static constexpr auto terminator_ = "49m";
        explicit constexpr BackgroundColor(const char* value) : Color(esc_, value, terminator_) {}

        explicit constexpr BackgroundColor() : Color("", "", "") {}
    };

    struct ForegroundColor : Color
    {
        static constexpr auto esc_ = "\033[";
        static constexpr auto terminator_ = "39m";
        explicit constexpr ForegroundColor(const char* value) : Color(esc_, value, terminator_) {}
        
        explicit constexpr ForegroundColor() : Color("", "", "") {}
    };

    struct RGB_Color
    {
        explicit constexpr RGB_Color(
            const char* esc, const char* esc2, int r, int g, int b, const char* terminator
        ) : esc_(esc), esc2_(esc2), r_(r), g_(g), b_(b), terminator_(terminator) {}

        explicit constexpr RGB_Color() : esc_(""), esc2_(""), r_(), g_(), b_(), terminator_("") {}

        std::string Wrap(std::string_view str) const
        {
            std::string result{};

            result.reserve(str.size());

            // \033[48;2;r_;g_;b_m;\033[49m
            result += esc_;
            result += esc2_;
            result += std::to_string(r_);
            result += ";";
            result += std::to_string(g_);
            result += ";";
            result += std::to_string(b_);
            result += "m";
            result += str;
            result += esc_;
            result += terminator_;

            return result;
        }

        friend class OStreamStyler;
        
        private:
            const char* esc_;
            const char* esc2_;
            const char* terminator_;
            int r_;
            int g_;
            int b_;
    };

    struct BackgroundRGBColor : RGB_Color
    {
        static constexpr auto esc_ = "\033[";
        static constexpr auto esc2_ = "48;2;";
        static constexpr auto terminator_ ="49m";

        explicit constexpr BackgroundRGBColor(int r, int g, int b) : RGB_Color(esc_, esc2_, r, g, b, terminator_) {}
    
        explicit constexpr BackgroundRGBColor() : RGB_Color("", "", -1, -1, -1, "") {}
    };

    struct ForegroundRGBColor : RGB_Color
    {
        static constexpr auto esc_ ="\033[";
        static constexpr auto esc2_ = "38;2;";
        static constexpr auto terminator_ = "39m";

        explicit constexpr ForegroundRGBColor(int r, int g, int b) : RGB_Color(esc_, esc2_, r, g, b, terminator_) {}

        explicit constexpr ForegroundRGBColor() : RGB_Color("", "", -1, -1, -1, "") {}
    };

    // namespace BG_RGB
    // {
    //     constexpr auto RGB(int r, int g, int b) {
    //         return BackgroundRGBColor(r, g, b);
    //     }
    // }

    // namespace FG_RGB
    // {
    //     constexpr auto RGB(int r, int g, int b) {
    //         return ForegroundRGBColor(r, g, b);
    //     }
    // }
    
    namespace BG
    {
        constexpr auto Black = BackgroundColor("40m");
        constexpr auto Red = BackgroundColor("41m");
        constexpr auto Green = BackgroundColor("42m");
        constexpr auto Yellow = BackgroundColor("43m");
        constexpr auto Blue = BackgroundColor("44m");
        constexpr auto Magenta = BackgroundColor("45m");
        constexpr auto Cyan = BackgroundColor("46m");
        constexpr auto White = BackgroundColor("47m");

        constexpr auto BrightBlack = BackgroundColor("100m");
        constexpr auto BrightRed = BackgroundColor("101m");
        constexpr auto BrightGreen = BackgroundColor("102m");
        constexpr auto BrightYellow = BackgroundColor("103m");
        constexpr auto BrightBlue = BackgroundColor("104m");
        constexpr auto BrightMagenta = BackgroundColor("105m");
        constexpr auto BrightCyan = BackgroundColor("106m");
        constexpr auto BrightWhite = BackgroundColor("107m");

        constexpr auto RGB(int r, int g, int b)
        {
            return BackgroundRGBColor(r, g, b);
        }

        constexpr auto None = BackgroundColor();
    };

    namespace FG
    {
        constexpr auto Black = ForegroundColor("30m");
        constexpr auto Red = ForegroundColor("31m");
        constexpr auto Green = ForegroundColor("32m");
        constexpr auto Yellow = ForegroundColor("33m");
        constexpr auto Blue = ForegroundColor("34m");
        constexpr auto Magenta = ForegroundColor("35m");
        constexpr auto Cyan = ForegroundColor("36m");
        constexpr auto White = ForegroundColor("37m");

        constexpr auto BrightBlack = ForegroundColor("90m");
        constexpr auto BrightRed = ForegroundColor("91m");
        constexpr auto BrightGreen = ForegroundColor("92m");
        constexpr auto BrightYellow = ForegroundColor("93m");
        constexpr auto BrightBlue = ForegroundColor("94m");
        constexpr auto BrightMagenta = ForegroundColor("95m");
        constexpr auto BrightCyan = ForegroundColor("96m");
        constexpr auto BrightWhite = ForegroundColor("97m");

        constexpr auto RGB(int r, int g, int b)
        {
            return ForegroundRGBColor(r, g, b);
        }

        constexpr auto None = ForegroundColor();
    };

    struct FormatOp
    {
        constexpr FormatOp(const char* b, const char* e) : b_(b), e_(e) {}
        
        constexpr inline bool NotNull() const noexcept
        {
            return (b_ != nullptr) && (e_ != nullptr);
        }

        constexpr inline const char* initiator() const noexcept
        {
            return b_;
        }

        constexpr inline const char* terminator() const noexcept
        {
            return e_;
        }

        std::string Wrap(std::string_view str) const
        {
            std::string result;

            result.reserve(str.size());
            result += b_;
            result += str;
            result += e_;

            return result;
        }

        private:
            const char* b_;
            const char* e_;
    };

    typedef FormatOp Format;

    class OStreamStyler
    {
        private:
            std::ostream* stream_ = nullptr;

        public:
            ForegroundColor foreground_color = FG::None;
            BackgroundColor background_color = BG::None;
            std::vector<Format> formats;

            explicit OStreamStyler(std::ostream* stream) : stream_(stream)
            {
                assert(stream != nullptr);
            }

            inline OStreamStyler& operator<<(std::ostream& (*func)(std::ostream&))
            {
                *stream_ << func;
                return *this;
            }

            template <typename T>
            inline OStreamStyler& operator<<(const T& v)
            {
                *stream_ << foreground_color.esc_ << foreground_color.rep_;
                *stream_ << background_color.esc_ << background_color.rep_;

                for (const auto& format : formats)
                {
                    *stream_ << format.initiator();
                }

                *stream_ << v;

                for (auto it = formats.crbegin(); it != formats.crend(); it ++)
                {
                    *stream_ << it->terminator();
                }

                *stream_ << background_color.esc_ << background_color.terminator_;
                *stream_ << foreground_color.esc_ << foreground_color.terminator_;

                return *this;
            }
    };

    namespace FMT
    {
        constexpr auto Bold = Format{"\033[1m", "\033[22m"};
        constexpr auto Faint = Format{"\033[2m", "\033[22m"};
        constexpr auto Italic = Format{"\033[3m", "\033[23m"};
        constexpr auto Underline = Format{"\033[4m", "\033[24m"};
        constexpr auto SlowBlink = Format{"\033[5m", "\033[25m"};
        constexpr auto RapidBlink = Format{"\033[6m", "\033[25m"};
        constexpr auto Reverse = Format{"\033[7m", "\033[27m"};
        constexpr auto Conceal = Format{"\033[8m", "\033[28m"};
        constexpr auto CrossedOut = Format{"\033[9m", "\033[29m"};
    };

    static OStreamStyler ostyler{&std::cout};
};

#endif