#include <stdio.h>

int main() {
    int k, result = 1;
    for(k = 0; result <= 512; k++) {
        printf("2^%d = %d\n", k, result);
        result *= 2;
    }
    return 0;
}