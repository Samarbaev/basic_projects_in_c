#include <stdio.h>

int main() {

    float c,f;

    int step, lower, upper;

    step = 20;
    lower = -100;
    upper = 300;

    c = lower;
    while (c <= upper) {
        f = (9.0 / 5.0) * c + 32;
        printf("%3.1f %6.1f\n", c, f);
        c += step;
    }
}
