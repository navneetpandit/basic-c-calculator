#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op);   

    if (op == '+') {
        result = a + b;
        printf("Your answer is: %.2f\n", result);
    } 
    else if (op == '-') {
        result = a - b;
        printf("Your answer is: %.2f\n", result);
    } 
    else if (op == '*') {
        result = a * b;
        printf("Your answer is: %.2f\n", result);
    } 
    else if (op == '/') {
        if (b != 0) {
            result = a / b;
            printf("Your answer is: %.2f\n", result);
        } else {
            printf("Error! Division by zero.\n");
        }
    } 
    else {
        printf("Invalid operator!\n");
    }
    return 0;
}
