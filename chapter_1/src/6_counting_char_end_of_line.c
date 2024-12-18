#include <stdio.h>

#define EOS '\n'
int main() {
    
    long count = 0;

    while(getchar() != EOS){
        ++count;
    }
    printf("count = %ld\n", count);
}
