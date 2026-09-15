#include <stdio.h>

int main() 
{
    int years, rating;
    double base_salary, bonus_percent = 0.0, bonus_amount, final_salary;

   
    printf("Enter employee's base salary: \n");
    scanf("%lf", &base_salary);

    printf("Enter years of service: \n");
    scanf("%d", &years);

    printf("Enter performance rating (1-5): ");
    scanf("%d", &rating);

  
    if (years > 5) 
    {
        
        if (rating == 5) {
            bonus_percent = 0.20; 
        } else if (rating == 4) {
            bonus_percent = 0.15;
        } else if (rating == 3) {
            bonus_percent = 0.10; 
        } else {
            bonus_percent = 0.05; 
        }
    } 
    else 
    {
        
        if (rating == 5) {
            bonus_percent = 0.10; 
        } else if (rating == 4) {
            bonus_percent = 0.08; 
        } else if (rating == 3) {
            bonus_percent = 0.05;
        } else {
            bonus_percent = 0.00; 
        }
    }

    bonus_amount = base_salary * bonus_percent;
    final_salary = base_salary + bonus_amount;

    printf("\n--- Calculation Results ---\n");
    printf("Bonus Percentage: %.0lf%%\n", bonus_percent * 100);
    printf("Bonus Amount: %.2lf\n", bonus_amount);
    printf("Final Salary: %.2lf\n", final_salary);

    return 0;
}