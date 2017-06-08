#ifndef ANSI_COLOR_CODE_H
#define ANSI_COLOR_CODE_H

const char* color_name[] = {

    "random",

    "black",
    "red",
    "green",
    "yellow",
    "blue",
    "purple",
    "cyan",
    "white",

    "b-black",
    "b-red",
    "b-green",
    "b-yellow",
    "b-blue",
    "b-purple",
    "b-cyan",
    "b-white",

    "u-black",
    "u-red",
    "u-green",
    "u-yellow",
    "u-blue",
    "u-purple",
    "u-cyan",
    "u-white",

    "on-black",
    "on-red",
    "on-green",
    "on-yellow",
    "on-blue",
    "on-purple",
    "on-cyan",
    "on-white",

    "i-black",
    "i-red",
    "i-green",
    "i-yellow",
    "i-blue",
    "i-purple",
    "i-cyan",
    "i-white",

    "bi-black",
    "bi-red",
    "bi-green",
    "bi-yellow",
    "bi-blue",
    "bi-purple",
    "bi-cyan",
    "bi-white",

    "oni-black",
    "oni-red",
    "oni-green",
    "oni-yellow",
    "oni-blue",
    "oni-purple",
    "oni-cyan",
    "oni-white"

};
const char* ANCI_color[] = {

    // dummy element because of random
    "",

    // Regular Colors
    "\033[0;30m",
    "\033[0;31m",
    "\033[0;32m",
    "\033[0;33m",
    "\033[0;34m",
    "\033[0;35m",
    "\033[0;36m",
    "\033[0;37m",

    // Bold
    "\033[1;30m",
    "\033[1;31m",
    "\033[1;32m",
    "\033[1;33m",
    "\033[1;34m",
    "\033[1;35m",
    "\033[1;36m",
    "\033[1;37m",

    // Underline
    "\033[4;30m",
    "\033[4;31m",
    "\033[4;32m",
    "\033[4;33m",
    "\033[4;34m",
    "\033[4;35m",
    "\033[4;36m",
    "\033[4;37m",

    // Background
    "\033[40m",
    "\033[41m",
    "\033[42m",
    "\033[43m",
    "\033[44m",
    "\033[45m",
    "\033[46m",
    "\033[47m",

    // High Intensity
    "\033[0;90m",
    "\033[0;91m",
    "\033[0;92m",
    "\033[0;93m",
    "\033[0;94m",
    "\033[0;95m",
    "\033[0;96m",
    "\033[0;97m",

    // Bold High Intensity
    "\033[1;90m",
    "\033[1;91m",
    "\033[1;92m",
    "\033[1;93m",
    "\033[1;94m",
    "\033[1;95m",
    "\033[1;96m",
    "\033[1;97m",

    // High Intensity backgrounds
    "\033[0;100m",
    "\033[0;101m",
    "\033[0;102m",
    "\033[0;103m",
    "\033[0;104m",
    "\033[0;105m",
    "\033[0;106m",
    "\033[0;107m"
};

#endif // ANSI_COLOR_CODE_H
