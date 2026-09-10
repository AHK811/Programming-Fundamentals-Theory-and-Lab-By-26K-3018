#include <stdio.h>

int main() {
    int plan;
    float minutesUsed = 0, bill = 0, extraMinutes;

    printf("Enter plan choice (1-4): ");
    scanf("%d", &plan);

    if (plan == 1 || plan == 2 || plan == 4) {
        printf("Enter minutes used: ");
        scanf("%f", &minutesUsed);
    }

    switch (plan) {
        case 1: // Rs. 500 for 1000 minutes
            bill = 500;
            if (minutesUsed > 1000) {
                extraMinutes = minutesUsed - 1000;
                bill += extraMinutes * 2;
            }
            break;
        case 2: // Rs. 800 for 2000 minutes
            bill = 800;
            if (minutesUsed > 2000) {
                extraMinutes = minutesUsed - 2000;
                bill += extraMinutes * 2;
            }
            break;
        case 3: // Rs. 1200 unlimited minutes
            bill = 1200;
            break;
        case 4: // Custom plan billed at Rs. 1/minute
            bill = minutesUsed * 1;
            break;
        default:
            printf("Invalid plan choice!\n");
            return 1;
    }

    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}
