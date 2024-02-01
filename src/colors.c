#include "colors.h"

void    term_color(char *color, char *to_print)
{
    printf("%s%s%s", color, to_print, END_COLOR);
}
