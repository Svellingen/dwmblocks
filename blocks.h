//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                                             /*Update Interval*/	/*Update Signal*/
	{"",  	        "mpc current",	                                                     5,         		0},
	{"",  	        "awk -F\"[][]\" '/Left:/ { print $2 }' <(amixer sget Master)",	     5,         		0},
	{"",  	        "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	     30,         		0},
	{"",            "date '+%a %d %b %R'",					             5,		                0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
