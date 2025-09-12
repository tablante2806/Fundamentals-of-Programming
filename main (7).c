#include <stdio.h>

int main() {
    int score;
    printf("98");

    if (score >= 75 && score <= 100){
        printf("Passed");
    } else if (score >= 50 && score < 75) {
        printf("Failed");
    } else {
        printf("Invalid score");
    }

    return 0;
}
