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

    c = lower;
    while (c <= upper) {
        f = (9.0 / 5.0) * c + 32;
        printf("%3.1f %6.1f\n", c, f);
        c += step;
    }
}
