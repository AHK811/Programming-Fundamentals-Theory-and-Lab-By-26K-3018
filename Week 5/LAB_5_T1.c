#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double result; 
    
    // 1. Get the numbers
    printf("Please enter 2 numbers for calculation: \n");
    scanf("%d %d", &a, &b);
    
    // 2. Get the operation choice (added Option 5)
    printf("Operations:\n");
    printf("1 = Power (a^b)\n");
    printf("2 = Square Root (of a)\n");
    printf("3 = Absolute Value (of a)\n");
    printf("4 = Round (a)\n");
    printf("5 = All Operations\n");
    printf("Enter your choice (1-5): \n");
    scanf("%d", &c);
    
    // 3. Use switch to perform the calculation
    switch (c) 
    {
        case 1:
            result = pow(a, b);
            printf("Result: %d ^ %d = %.2lf\n", a, b, result);
            break;
            
        case 2:
            if (a >= 0) {
                result = sqrt(a);
                printf("Result: Square root of %d = %.2lf\n", a, result);
            } else {
                printf("Error: Cannot calculate the square root of a negative number.\n");
            }
            break;
            
        case 3:
            result = fabs(a);
            printf("Result: Absolute value of %d = %.2lf\n", a, result);
            break;
            
        case 4:
            result = round(a);
            printf("Result: Round of %d = %.2lf\n", a, result);
            break;
            
        case 5:
            printf("\n--- All Operations Results ---\n");
            
            // Power
            result = pow(a, b);
            printf("Power: %d ^ %d = %.2lf\n", a, b, result);
            
            // Square Root
            if (a >= 0) {
                result = sqrt(a);
                printf("Square Root: of %d = %.2lf\n", a, result);
            } else {
                printf("Square Root: Cannot calculate for a negative number.\n");
            }
            
            // Absolute Value
            result = fabs(a);
            printf("Absolute Value: of %d = %.2lf\n", a, result);
            
            // Round
            result = round(a);
            printf("Round: of %d = %.2lf\n", a, result);
            break;
            
        default:
            printf("Invalid choice! Please select between 1 and 5.\n");
            break;
    }

    return 0;
}