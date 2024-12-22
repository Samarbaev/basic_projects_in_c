/* Exercise 1-9.
 *
 * Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 *
 * */

#include <stdio.h>

int main(void)
{
    int c, prevchar = 0;
    while ((c = getchar()) != EOF) {
        if (c != prevchar || prevchar != ' ')
            putchar(c);
        prevchar = c;
    }
    return 0;
} 
