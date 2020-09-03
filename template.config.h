/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"$FONT"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"$C_GRAY_1", "$C_CYAN_0"},
    [SchemeSel] = {"$C_GRAY_1", "$C_MAGENTA_1"},
    [SchemeSelHighlight] = {"$C_GRAY_1", "$C_MAGENTA_1"},
    [SchemeNormHighlight] = {"$C_BLACK_0", "$C_CYAN_0"},
    [SchemeOut] = {"$C_BLACK_0", "$C_CYAN_0"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
static unsigned int lineheight =
    $WM_BAR_HEIGHT; /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;

static int dmx = $WM_GAPS; /* put dmenu at this x offset */
static int dmy = $WM_GAPS; /* put dmenu at this y offset (measured from the
                       bottom if topbar is 0) */
static unsigned int dmw = $WINDOW_WIDTH; /* make dmenu this wide */
