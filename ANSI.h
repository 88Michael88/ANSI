#include <stdio.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"

#define ANSI_COLOR_RESET_BACKGROUND   "\x1b[0m"
#define ANSI_COLOR_BLACK_BACKGROUND   "\x1b[40m"
#define ANSI_COLOR_RED_BACKGROUND     "\x1b[41m"
#define ANSI_COLOR_GREEN_BACKGROUND   "\x1b[42m"
#define ANSI_COLOR_YELLOW_BACKGROUND  "\x1b[43m"
#define ANSI_COLOR_BLUE_BACKGROUND    "\x1b[44m"
#define ANSI_COLOR_MAGENTA_BACKGROUND "\x1b[45m"
#define ANSI_COLOR_CYAN_BACKGROUND    "\x1b[46m"
#define ANSI_COLOR_WHITE_BACKGROUND   "\x1b[47m"

#define ANSI_TEXT_BLINK "\x1b[5m"
#define ANSI_TEXT_BOLD "\x1b[1m"
#define ANSI_TEXT_DIM "\x1b[2m"

void fun() {
    printf("\n");
    printf(ANSI_COLOR_RED "This is red text" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_GREEN "This is green text" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_YELLOW "This is yellow text" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_BLUE "This is blue text" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_MAGENTA "This is magenta text" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_CYAN "This is cyan text" ANSI_COLOR_RESET "\n");
    printf(ANSI_COLOR_WHITE "This is white text" ANSI_COLOR_RESET "\n");

    printf(ANSI_COLOR_BLACK_BACKGROUND " Black Background " ANSI_COLOR_RESET_BACKGROUND "\n");
    printf(ANSI_COLOR_RED_BACKGROUND " Red Background " ANSI_COLOR_RESET_BACKGROUND "\n");
    printf(ANSI_COLOR_GREEN_BACKGROUND " Green Background " ANSI_COLOR_RESET_BACKGROUND "\n");
    printf(ANSI_COLOR_YELLOW_BACKGROUND " Yellow Background " ANSI_COLOR_RESET_BACKGROUND "\n");
    printf(ANSI_COLOR_BLUE_BACKGROUND " Blue Background " ANSI_COLOR_RESET_BACKGROUND "\n");
    printf(ANSI_COLOR_MAGENTA_BACKGROUND " Magenta Background " ANSI_COLOR_RESET_BACKGROUND "\n");
    printf(ANSI_COLOR_CYAN_BACKGROUND " Cyan Background " ANSI_COLOR_RESET_BACKGROUND "\n");
    printf(ANSI_COLOR_WHITE_BACKGROUND " White Background " ANSI_COLOR_RESET_BACKGROUND "\n");

    printf(ANSI_TEXT_BLINK " This text blinks " ANSI_COLOR_RESET "\n");
    printf(ANSI_TEXT_BOLD " This text is bold " ANSI_COLOR_RESET "\n");
    printf(ANSI_TEXT_DIM " This text is dim " ANSI_COLOR_RESET "\n");
}
