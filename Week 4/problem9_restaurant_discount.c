#include <stdio.h>

int main() {
    float billAmount, totalDiscountPercent = 0, finalBill;
    int hour, isMember;

    printf("Enter bill amount: ");
    scanf("%f", &billAmount);
    printf("Enter hour of visit (24-hour format): ");
    scanf("%d", &hour);
    printf("Is customer a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    if (hour >= 15 && hour <= 17) {
        totalDiscountPercent += 20;
    }

    if (isMember == 1) {
        totalDiscountPercent += 10;
    }

    if (totalDiscountPercent > 25) {
        totalDiscountPercent = 25;
    }

    finalBill = billAmount - (billAmount * totalDiscountPercent / 100);

    printf("Total Discount Applied: %.2f%%\n", totalDiscountPercent);
    printf("Final Payable Bill: Rs. %.2f\n", finalBill);

    return 0;
}
