#include <stdio.h>

int main() {
    int num, k;
    printf("Enter the Number: ");
    scanf("%d", &num);

    for(k = 1; k <= 10; k++) {
        printf("%d x %d = %d\n", num, k, num * k);
    }
    return 0;
}