/*
 * Exersirce 1_12
 *
 * Write a program that prints its input one word per line.
 * */

#include <stdio.h>

#define WHITESPACE ' '
#define END_OF_LINE '\n'
#define TAB '\t'

#define IN_WORD 1
#define OUT_WORD 0

int main()
{
    int c, prevblank;

    prevblank = OUT_WORD;
    while ((c = getchar()) != EOF) {
        if (c == WHITESPACE || c == TAB || c == END_OF_LINE) {
            if (prevblank == OUT_WORD)
                putchar(END_OF_LINE);
            prevblank = IN_WORD;
        } else {
            prevblank = OUT_WORD;
            putchar(c);
        }
    }
    return 0;
}
