/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <Latchezar Tzvetkoff> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return. Latchezar Tzvetkoff
 * ----------------------------------------------------------------------------
 */

/* asciifier.h */

#ifndef __im2a__asciifier__
#define __im2a__asciifier__

#include <Magick++.h>

#include "options.h"
#include "term_info.h"

namespace im2a
{

    class Asciifier
    {

    private:
        Options *_options;
        TermInfo *_term_info;
        Magick::Image *_image;

        void print_header();
        void print_footer();
        void print_char(char c, int color_index, int prev_color = -1);
        void print_pixel(int color_index1, int color_index2, int prev_color1 = -1, int prev_color2 = -1);
        void begin_line();
        void feed_line();

    public:
        Asciifier(Options *, TermInfo *, Magick::Image *);
        void asciify();

    };

}

#endif /* defined(__im2a__asciifier__) */
