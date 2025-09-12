#include <stdio.h>

int main() {
    char name[100], address[200], email[100];
    int age, phone;

    printf("Enter your name: ");
    printf("Enter your age: ");    
    printf("Enter your address: ");
    printf("Enter your phone number: ");
    printf("Enter your email: ");

    printf("\n--- User Information ---\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Address: %s", address);
    printf("Phone: %d\n", phone);
    printf("Email: %s", email);
    
    return 0;
}

