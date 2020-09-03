/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"$FONT"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"$C_GRAY_1", "$C_BLACK_0"},
    [SchemeSel] = {"$C_BLACK_0", "$C_CYAN_0"},
    [SchemeSelHighlight] = {"$C_BLACK_0", "$C_CYAN_0"},
    [SchemeNormHighlight] = {"$COLOR_SECONDARY", "$C_BLACK_0"},
    [SchemeOut] = {"$C_BLACK_0", "#00ffff"},
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
static const unsigned int border_width = $WM_GAPS;
