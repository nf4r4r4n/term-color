#include "colors.h"
#include "helper.h"

void    print_all_argv(char *color, int argc, char **argv)
{
    for (int i = 2; i < argc; i++)
        term_color(color, argv[i]);
}

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        print_help();
        exit(EXIT_SUCCESS);
    }
    char    *color;
    
    color = argv[1];
    if (strcmp("help", color) == 0)
        print_help();
    else if (strcmp("black", color) == 0 || strcmp("1", color) == 0)
        print_all_argv(BLACK, argc, argv);
    else if (strcmp("red", color) == 0 || strcmp("2", color) == 0)
        print_all_argv(RED, argc, argv);
    else if (strcmp("green", color) == 0 || strcmp("3", color) == 0)
        print_all_argv(GREEN, argc, argv);
    else if (strcmp("yellow", color) == 0 || strcmp("4", color) == 0)
        print_all_argv(YELLOW, argc, argv);
    else if (strcmp("blue", color) == 0 || strcmp("5", color) == 0)
        print_all_argv(BLUE, argc, argv);
    else if (strcmp("purple", color) == 0 || strcmp("6", color) == 0)
        print_all_argv(PURPLE, argc, argv);
    else if (strcmp("cyan", color) == 0 || strcmp("7", color) == 0)
        print_all_argv(CYAN, argc, argv);
    else if (strcmp("white", color) == 0 || strcmp("8", color) == 0)
        print_all_argv(WHITE, argc, argv);
    else if (strcmp("bold-black", color) == 0 || strcmp("9", color) == 0)
        print_all_argv(BOLD_BLACK, argc, argv);
    else if (strcmp("bold-red", color) == 0 || strcmp("10", color) == 0)
        print_all_argv(BOLD_RED, argc, argv);
    else if (strcmp("bold-green", color) == 0 || strcmp("11", color) == 0)
        print_all_argv(BOLD_GREEN, argc, argv);
    else if (strcmp("bold-yellow", color) == 0 || strcmp("12", color) == 0)
        print_all_argv(BOLD_YELLOW, argc, argv);
    else if (strcmp("bold-blue", color) == 0 || strcmp("13", color) == 0)
        print_all_argv(BOLD_BLUE, argc, argv);
    else if (strcmp("bold-purple", color) == 0 || strcmp("14", color) == 0)
        print_all_argv(BOLD_PURPLE, argc, argv);
    else if (strcmp("bold-cyan", color) == 0 || strcmp("15", color) == 0)
        print_all_argv(BOLD_CYAN, argc, argv);
    else if (strcmp("bold-white", color) == 0 || strcmp("16", color) == 0)
        print_all_argv(BOLD_WHITE, argc, argv);
    else if (strcmp("light-black", color) == 0 || strcmp("17", color) == 0)
        print_all_argv(LIGHT_BLACK, argc, argv);
    else if (strcmp("light-red", color) == 0 || strcmp("18", color) == 0)
        print_all_argv(LIGHT_RED, argc, argv);
    else if (strcmp("light-green", color) == 0 || strcmp("19", color) == 0)
        print_all_argv(LIGHT_GREEN, argc, argv);
    else if (strcmp("light-yellow", color) == 0 || strcmp("20", color) == 0)
        print_all_argv(LIGHT_YELLOW, argc, argv);
    else if (strcmp("light-blue", color) == 0 || strcmp("21", color) == 0)
        print_all_argv(LIGHT_BLUE, argc, argv);
    else if (strcmp("light-purple", color) == 0 || strcmp("22", color) == 0)
        print_all_argv(LIGHT_PURPLE, argc, argv);
    else if (strcmp("light-cyan", color) == 0 || strcmp("23", color) == 0)
        print_all_argv(LIGHT_CYAN, argc, argv);
    else if (strcmp("light-white", color) == 0 || strcmp("24", color) == 0)
        print_all_argv(LIGHT_WHITE, argc, argv);
    else if (strcmp("light-bold-black", color) == 0 || strcmp("25", color) == 0)
        print_all_argv(LIGHT_BOLD_BLACK, argc, argv);
    else if (strcmp("light-bold-red", color) == 0 || strcmp("26", color) == 0)
        print_all_argv(LIGHT_BOLD_RED, argc, argv);
    else if (strcmp("light-bold-green", color) == 0 || strcmp("27", color) == 0)
        print_all_argv(LIGHT_BOLD_GREEN, argc, argv);
    else if (strcmp("light-bold-yellow", color) == 0 || strcmp("28", color) == 0)
        print_all_argv(LIGHT_BOLD_YELLOW, argc, argv);
    else if (strcmp("light-bold-blue", color) == 0 || strcmp("29", color) == 0)
        print_all_argv(LIGHT_BOLD_BLUE, argc, argv);
    else if (strcmp("light-bold-purple", color) == 0 || strcmp("30", color) == 0)
        print_all_argv(LIGHT_BOLD_PURPLE, argc, argv);
    else if (strcmp("light-bold-cyan", color) == 0 || strcmp("31", color) == 0)
        print_all_argv(LIGHT_BOLD_CYAN, argc, argv);
    else if (strcmp("light-bold-white", color) == 0 || strcmp("32", color) == 0)
        print_all_argv(LIGHT_BOLD_WHITE, argc, argv);
    else
    {
        term_color(LIGHT_BOLD_RED, "[ERROR]\t");
        term_color(LIGHT_BOLD_YELLOW, color);
        printf(" color is not valid\n");
        exit(EXIT_FAILURE);
    }
    return (0);
}
