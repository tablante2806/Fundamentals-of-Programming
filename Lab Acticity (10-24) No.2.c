#include <stdio.h>

int main() {
    int k;
    
    for(k = 0; k <= 10; k++) {
        if(k % 2 == 0) {
            printf("%d\n", k);
        }
    }
    return 0;
}
