#include <stdio.h>

int main() {
    float income, repayment;
    int age;

    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter existing monthly loan repayment: ");
    scanf("%f", &repayment);

    if (income <= 30000) {
        printf("Rejected due to Income\n");
    } else if (age < 21 || age > 60) {
        printf("Rejected due to Age\n");
    } else if (repayment > 0.4 * income) {
        printf("Rejected due to High Debt Ratio\n");
    } else {
        printf("Approved\n");
    }

    return 0;
}
