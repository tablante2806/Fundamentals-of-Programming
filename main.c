#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

 
    printf("Enter the first number: ");
    scanf("%f", &num1); 

    printf("Enter the second number: ");
    scanf("%f", &num2); 

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        quotient = 0; 
        printf("Error! Division by zero is not allowed.\n");
    }

    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}
