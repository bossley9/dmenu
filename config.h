/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Source Code Pro Medium:pixelsize=15:antialias=true:autohint=true"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#eceff4", "#519aba"},
    [SchemeSel] = {"#eceff4", "#a074c4"},
    [SchemeSelHighlight] = {"#eceff4", "#a074c4"},
    [SchemeNormHighlight] = {"#171520", "#519aba"},
    [SchemeOut] = {"#171520", "#519aba"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
static unsigned int lineheight =
    28; /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;

static int dmx = 10; /* put dmenu at this x offset */
static int dmy = 10; /* put dmenu at this y offset (measured from the
                       bottom if topbar is 0) */
static unsigned int dmw = 1900; /* make dmenu this wide */
