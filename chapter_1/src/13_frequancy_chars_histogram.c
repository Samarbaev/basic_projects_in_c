#include <stdio.h>

#define SIZE_ALPHABET 26

int main() {

    int input;

    int alphabetDigits[SIZE_ALPHABET];

    for (int index = 0; index < SIZE_ALPHABET; ++index) {
        alphabetDigits[index] = 0;
    }

    while ((input = getchar()) != EOF) {
        if (input >= 'a' && input <= 'z') {
            ++alphabetDigits[input - 'a'];
        }
    }

    for (int i = 0; i < SIZE_ALPHABET; ++i) {
        printf("%d ",alphabetDigits[i]);
        for (int j = 0; j < alphabetDigits[i]; ++j) {
            printf("="); 
        }
        printf("\n"); 
    }
}
