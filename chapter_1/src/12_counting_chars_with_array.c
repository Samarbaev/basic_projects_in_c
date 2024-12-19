#include <stdio.h>

int main() {
    int input, index, nwhite, nother;

    int ndigit[10];

    nwhite = nother = 0;
    for (index = 0; index < 10; ++index) {
        ndigit[index] = 0; 
    }

    while ((input = getchar()) != EOF) {
        if (input >= '0' && input <= '9') {
            ++ndigit[input - '0'];
        } 
        else if(input == ' ' || input == '\n' || input == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }
    
    printf("digits = ");
    
    for (index = 0; index < 10; ++index) {
        printf(" %d", ndigit[index]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
