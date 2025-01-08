/**
 * Exirsirce 1_8
 *
 * Write a program to count blanks, tabs, and newlines.
 *
 */

#include <stdio.h>

#define TAB '\t'
#define END_OF_ROW '\n'
#define SPACE ' '

int main() {
    
    int countTab = 0;
    int countEndOfRow = 0;
    int countSpace = 0;

    int input;

    while ((input = getchar()) != EOF) {
        if (input == TAB) ++countTab;
        if (input == END_OF_ROW) ++countEndOfRow;
        if (input == SPACE) ++countSpace;
    }

    printf("count TAB \\t = %d\n", countTab);
    printf("count EOR \\n = %d\n", countEndOfRow);
    printf("count SPACE \\' ' = %d\n", countSpace);

}
