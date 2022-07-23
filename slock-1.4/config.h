/* user and group to drop privileges to */
static const char *user  = "kert";
static const char *group = "kert";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#A3BE8C",   /* during input */
	[FAILED] = "#BF616A",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "kert@arch";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-misc-fixed-medium-r-semicondensed--13-100-100-100-c-60-iso8859-1";
