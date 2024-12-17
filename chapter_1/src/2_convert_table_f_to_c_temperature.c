#include <stdio.h>

#define LOWER 0;
#define UPPER 300;
#define STEP 20;

void printTitle();

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = LOWER;
    upper = UPPER;
    step = STEP;

    fahr = lower;
    printTitle();
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void printTitle() {
    int widthTitle = 12;

    for (int i = 0; i < widthTitle; i++) {
        printf("=");
    }
    printf("\n");
    printf(" TABLE TEMP ");
    printf("\n");
    for (int i = 0; i < widthTitle; i++) {
       printf("=");
    }
    printf("\n");
}
