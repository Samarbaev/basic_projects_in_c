#include <complex.h>
#include <stdio.h>

#define IN 1
#define OUT 0
#define TAB '\t'
#define NEW_LINE '\n'
#define SPACE ' '

int main() {
    
    int input, newLine, newWord, newChar, state;

    state = OUT;
    newChar = newLine = newWord = 0;
    while ((input = getchar()) != EOF) {
        ++newChar;
        if(input == NEW_LINE) {
            ++newLine;
        }
        if (input == SPACE || input == NEW_LINE || input == TAB) {
            state = OUT;
        } else if(state == OUT) {
            state = IN;
            ++newWord;
        }
    }
    printf("\n");
    printf("count lines = %d\n; count words = %d\n; count chars = %d\n", newLine, newWord, newChar);

}
