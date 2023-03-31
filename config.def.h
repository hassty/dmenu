/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 250;
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char fontMain[]        = "RobotoMono Nerd Font Mono:size=10";
static char fontEmoji[]       = "JoyPixels:pixelsize=10:antialias=true:autohint=true";
static const char *fonts[] = { fontMain, fontEmoji };

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char outfgcolor[]  = "#000000";
static char outbgcolor[]  = "#00ffff";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { outfgcolor,  outbgcolor},
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
    { "fontMain",    STRING,  &fontMain },
    { "fontEmoji",   STRING,  &fontEmoji },
	{ "normfgcolor", STRING,  &normfgcolor },
	{ "normbgcolor", STRING,  &normbgcolor },
	{ "selfgcolor",  STRING,  &selfgcolor },
	{ "selbgcolor",  STRING,  &selbgcolor },
	{ "outfgcolor",  STRING,  &outfgcolor },
	{ "outbgcolor",  STRING,  &outbgcolor },
    { "borderpx",    INTEGER, &border_width },
};
