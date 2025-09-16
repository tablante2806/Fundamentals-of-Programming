#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    switch (grade / 10) {
        case 10: // for 100
        case 9: 
            printf("Grade Equivalent: A\n");
            break;
        case 8:
            printf("Grade Equivalent: B\n");
            break;
        case 7:
        case 6:
            printf("Grade Equivalent: C\n");
            break;
        default:
            printf("Grade Equivalent: Failed\n");
            break;
    }

    return 0;
}
