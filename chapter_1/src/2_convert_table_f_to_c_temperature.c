#include <stdio.h>

void printTitle();

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

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
