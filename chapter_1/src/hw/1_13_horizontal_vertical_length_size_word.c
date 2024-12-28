/* Exercise 1-13
 *
 * Write a program to print a histogram of the lengths of words in it's
 * input. It is easy to draw a histogram with the bars horizontal.
 *
 * */

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /*ouside a word */
#define MAXWORDLEN 15

#define TAB '\t'
#define WHITE_SPACE ' '
#define END_OF_LIFE '\n'

void printHorizontalHistogram(int counterWords[], int maxSizeWord);
void printVerticalHistoram(int counterWords[], int maxSizeWord);

int main() {
    int input;
    int state = OUT;
    int i = 0;
    int j = 0;
    int currentWordLength = 0;
    int counterWordsOfCertainLength[MAXWORDLEN + 1];
    
    // init array
    for (i = 0; i <= MAXWORDLEN; ++i)
        counterWordsOfCertainLength[i] = 0;

    while ((input = getchar()) != EOF) {
        if (input == WHITE_SPACE || input == END_OF_LIFE || input == TAB) {
            if (state == IN) {
                if (currentWordLength <= MAXWORDLEN) 
                    counterWordsOfCertainLength[currentWordLength-1] += 1; 
                else 
                    counterWordsOfCertainLength[MAXWORDLEN] += 1;
                state = OUT;
                }
        } else {
           if (state == OUT) {
               state = IN;
               currentWordLength = 0;
           }
           currentWordLength += 1;
        }
    }
        
    /* Horizontal histogram */
    
    printf("\n");
    printHorizontalHistogram(counterWordsOfCertainLength, MAXWORDLEN);
    printf("\n");

    /* Vertical histogram */
    printVerticalHistoram(counterWordsOfCertainLength, MAXWORDLEN);
    return 0;
}

void printHorizontalHistogram(int counterWordsOfCertainLength[], int maxSizeWord) {
    printf("========================\n");
    printf("= Horizontal histogram =\n");
    printf("========================\n\n");
    
    for(int i = 0; i <= maxSizeWord; ++i) {
        if (i != maxSizeWord)
            printf(" %2d: ", i+1);
        else
            printf(">%d: ", maxSizeWord);

        for(int j = 0; j < counterWordsOfCertainLength[i]; ++j) {
            putchar('#');
        }
        putchar(END_OF_LIFE);
    }
}

void printVerticalHistoram(int counterWordsOfCertainLength[], int maxSizeWord) {
    printf("======================\n");
    printf("= Vertical histogram =\n");
    printf("======================\n\n");
 
    int maxval = 0;
    for (int i = 0; i <= maxSizeWord; ++i)
        if (counterWordsOfCertainLength[i] > maxval)
            maxval = counterWordsOfCertainLength[i];

    /* print a line per count result */
    for (int i = 0; i < maxval; ++i) {
        printf(" %2d |", maxval - i);
        for (int j = 0; j <= maxSizeWord; ++j) {
            if (counterWordsOfCertainLength[j] >= maxval - i)
                printf("  #");
            else
                printf("   ");
        }
        printf("\n");
    }

    /* print bottom line */
    printf("     ");
    for (int i = 0; i <= maxSizeWord; ++i)
        printf("---");
    printf("-\n");

    /* print the word lengths */
    printf("     ");
    for (int i = 0; i <= maxSizeWord; ++i)
        if (i != maxSizeWord)
            printf(" %2d", i+1);
        else
            printf(" %2d>", i);
    printf("\n");
}
