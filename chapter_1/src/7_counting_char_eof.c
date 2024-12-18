#include <stdio.h>
// press double cmd + d
int main() {
    
    int count = 0;

    while (getchar() != EOF) {
        ++count;
    }
    
    printf("\ncount = %d\n", count);

}
