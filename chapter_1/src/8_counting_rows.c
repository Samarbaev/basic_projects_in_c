#include <stdio.h>

#define END_OF_ROW '\n'

int main() {
    
    int input;
    int count = 0;

    while ((input = getchar()) != EOF) {
        if(input == END_OF_ROW) {
            ++count;
        }
    }

    printf("rows = %d\n", count);
}
