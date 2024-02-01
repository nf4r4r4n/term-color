#include "helper.h"

void    print_help()
{
    printf("Usage:\t\tterm-color [COLOR or NUMBER] to_print...\n\n");
    printf("Run \"term-color help\" to print this text\n");
    printf("Colors:\n");
    printf("\t1- black%s normal black\n", TABS);
    printf("\t2- %sred%s%s normal green\n", RED, TABS, END_COLOR);
    printf("\t3- %sgreen%s%s normal green\n", GREEN, TABS, END_COLOR);
    printf("\t4- %syellow%s%s normal yellow\n", YELLOW, TABS, END_COLOR);
    printf("\t5- %sblue%s%s normal blue\n", BLUE, TABS, END_COLOR);
    printf("\t6- %spurple%s%s normal purple\n", PURPLE, TABS, END_COLOR);
    printf("\t7- %scyan%s%s normal cyan\n", CYAN, TABS, END_COLOR);
    printf("\t8- %swhite%s%s normal white\n", WHITE, TABS, END_COLOR);
    printf("\t9- bold-black%s bold black\n", TABS);
    printf("\t10- %sbold-red%s%s bold green\n", BOLD_RED, TABS, END_COLOR);
    printf("\t11- %sbold-green%s%s bold green\n", BOLD_GREEN, TABS, END_COLOR);
    printf("\t12- %sbold-yellow%s%s bold yellow\n", BOLD_YELLOW, TABS, END_COLOR);
    printf("\t13- %sbold-blue%s%s bold blue\n", BOLD_BLUE, TABS, END_COLOR);
    printf("\t14- %sbold-purple%s%s bold purple\n", BOLD_PURPLE, TABS, END_COLOR);
    printf("\t15- %sbold-cyan%s%s bold cyan\n", BOLD_CYAN, TABS, END_COLOR);
    printf("\t16- %sbold-white%s%s bold white\n", BOLD_WHITE, TABS, END_COLOR);
    printf("\t17- light-black%s normal light black\n", TABS);
    printf("\t18- %slight-red%s%s normal light green\n", LIGHT_RED, TABS, END_COLOR);
    printf("\t19- %slight-green%s%s normal light green\n", LIGHT_GREEN, TABS, END_COLOR);
    printf("\t20- %slight-yellow%s%s normal light yellow\n", LIGHT_YELLOW, TABS, END_COLOR);
    printf("\t21- %slight-blue%s%s normal light blue\n", LIGHT_BLUE, TABS, END_COLOR);
    printf("\t22- %slight-purple%s%s normal light purple\n", LIGHT_PURPLE, TABS, END_COLOR);
    printf("\t23- %slight-cyan%s%s normal light cyan\n", LIGHT_CYAN, TABS, END_COLOR);
    printf("\t24- %slight-white%s%s normal light white\n", LIGHT_WHITE, TABS, END_COLOR);
    printf("\t25- light-bold-black%s bold light black\n", TABS);
    printf("\t26- %slight-bold-red%s%s bold light green\n", LIGHT_BOLD_RED, TABS, END_COLOR);
    printf("\t27- %slight-bold-green%s%s bold light green\n", LIGHT_BOLD_GREEN, TABS, END_COLOR);
    printf("\t28- %slight-bold-yellow%s%s bold light yellow\n", LIGHT_BOLD_YELLOW, TABS, END_COLOR);
    printf("\t29- %slight-bold-blue%s%s bold light blue\n", LIGHT_BOLD_BLUE, TABS, END_COLOR);
    printf("\t30- %slight-bold-purple%s%s bold light purple\n", LIGHT_BOLD_PURPLE, TABS, END_COLOR);
    printf("\t31- %slight-bold-cyan%s%s bold light cyan\n", LIGHT_BOLD_CYAN, TABS, END_COLOR);
    printf("\t32- %slight-bold-white%s%s bold light white\n", LIGHT_BOLD_WHITE, TABS, END_COLOR);
}
