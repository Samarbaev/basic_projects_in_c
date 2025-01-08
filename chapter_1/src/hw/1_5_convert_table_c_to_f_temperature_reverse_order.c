/*
 * Exercise 1_5
 *
 * Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degrees to 0.
 * 
 * */

#include <stdio.h>

#define LOWER -100;
#define UPPER 300;
#define STEP 20;

int main() {

    float c,f;

    int step, lower, upper;

    step = STEP;
    lower = LOWER;
    upper = UPPER;

    for (c = upper; c >= lower; c -= step) {
        f = (9.0 / 5.0) * c + 32;
        printf("%3.1f\t %6.1f\n", c, f);
    }
}
