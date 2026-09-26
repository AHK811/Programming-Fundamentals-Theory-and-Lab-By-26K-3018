#include <stdio.h>

int main() 
{
    float cgpa, income;

    // 1. Get the inputs
    printf("Enter the student's CGPA: \n");
    scanf("%f", &cgpa);
    
    printf("Enter the monthly family income: \n");
    scanf("%f", &income);

    // 2. Determine scholarship using nested if-else and logical operators
    
    // Outer if: First check if the student meets the baseline academic requirement
    if (cgpa >= 3.0) 
    {
        // Inner if-else: Check specific combinations of higher CGPA and lower income
        if (cgpa >= 3.5 && income <= 50000) 
        {
            printf("\nResult: Congratulations! You qualify for a Full Scholarship.\n");
        } 
        else if (cgpa >= 3.0 && income <= 100000) 
        {
            printf("\nResult: You qualify for a Partial Scholarship.\n");
        } 
        else 
        {
            printf("\nResult: No Scholarship. (Income exceeds the threshold for financial aid).\n");
        }
    } 
    else 
    {
        // If the outer condition fails, they immediately get no scholarship
        printf("\nResult: No Scholarship. (CGPA is below the minimum 3.0 requirement).\n");
    }

    return 0;
}