#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}
float div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (float)a / b;
}

int main()
{

    printf("-------------------------------\n");
    printf("           Calculator\n");
    printf("-------------------------------\n");

    int a,b;
    char operation;


    printf("Enter 1st number = ");
    scanf("%d", &a);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter 2nd number = ");
    scanf("%d", &b);

    switch(operation) {
        case '+':
            printf("Sum of both numbers = %d\n", sum(a,b));
            break;

        case '-':
            printf("Difference of both numbers = %d\n", sub(a,b));
            break;

        case '*':
            printf("Product of both numbers = %d\n", mul(a,b));
            break;

        case '/':
            if (b != 0) {
                printf("Quotient of both numbers = %.2f\n", div(a,b));
            }
            break;

        default:
            printf("Error: Invalid operator chosen.\n");
            break;
    }

    return 0;
}
