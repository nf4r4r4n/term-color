#ifndef _COLORS_H_
#   define _COLORS_H_
#   include <string.h>
#   include <stdio.h>
#   include <stdlib.h>

#   define  BLACK               "\e[0;30m"
#   define  RED                 "\e[0;31m"
#   define  GREEN               "\e[0;32m"
#   define  YELLOW              "\e[0;33m"
#   define  BLUE                "\e[0;34m"
#   define  PURPLE              "\e[0;35m"
#   define  CYAN                "\e[0;36m"
#   define  WHITE               "\e[0;37m"
#   define  BOLD_BLACK          "\e[1;30m"
#   define  BOLD_RED            "\e[1;31m"
#   define  BOLD_GREEN          "\e[1;32m"
#   define  BOLD_YELLOW         "\e[1;33m"
#   define  BOLD_BLUE           "\e[1;34m"
#   define  BOLD_PURPLE         "\e[1;35m"
#   define  BOLD_CYAN           "\e[1;36m"
#   define  BOLD_WHITE          "\e[1;37m"
#   define  LIGHT_BLACK         "\e[0;90m"
#   define  LIGHT_RED           "\e[0;91m"
#   define  LIGHT_GREEN         "\e[0;92m"
#   define  LIGHT_YELLOW        "\e[0;93m"
#   define  LIGHT_BLUE          "\e[0;94m"
#   define  LIGHT_PURPLE        "\e[0;95m"
#   define  LIGHT_CYAN          "\e[0;96m"
#   define  LIGHT_WHITE         "\e[0;97m"
#   define  LIGHT_BOLD_BLACK         "\e[1;91m"
#   define  LIGHT_BOLD_RED           "\e[1;91m"
#   define  LIGHT_BOLD_GREEN         "\e[1;92m"
#   define  LIGHT_BOLD_YELLOW        "\e[1;93m"
#   define  LIGHT_BOLD_BLUE          "\e[1;94m"
#   define  LIGHT_BOLD_PURPLE        "\e[1;95m"
#   define  LIGHT_BOLD_CYAN          "\e[1;96m"
#   define  LIGHT_BOLD_WHITE         "\e[1;97m"
#   define  END_COLOR           "\e[0m"

void    term_color(char *color, char *to_print);

#endif
