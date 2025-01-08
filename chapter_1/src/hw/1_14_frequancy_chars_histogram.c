/* Exercise 1-14
 *
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
 * 
 * */
#include <complex.h>
#include <stdio.h>

#define SIZE_ALPHABET 128

int main() {

    int input;

    int alphabetDigits[SIZE_ALPHABET];

    for (int index = 0; index < SIZE_ALPHABET; ++index) {
        alphabetDigits[index] = 0;
    }

    while ((input = getchar()) != EOF) {
        alphabetDigits[input] += 1;
    }
    for (input = 0; input < SIZE_ALPHABET; ++input) {
        if (alphabetDigits[input] > 0) {
            if (input == '\b')          /* backspace */
                printf("\\b");
            else if (input == '\n')     /* new line*/
                printf("\\n");
            else if (input == '\t')     /* (horizontal) tab */
                printf("\\t)");
            else                    /* all other chars */
                printf("%2c", input);
            /* ASCII code & frequency */
            printf(" (%3d): %3d\n", input, alphabetDigits[input]);
        }
    }
}
