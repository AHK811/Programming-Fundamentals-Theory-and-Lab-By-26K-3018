#include <stdio.h>

int main() {
    int accountType;
    float balance, rate, interest;

    printf("Enter account type (1 = Savings, 2 = Current, 3 = Fixed Deposit): ");
    scanf("%d", &accountType);
    printf("Enter account balance: ");
    scanf("%f", &balance);

    switch (accountType) {
        case 1: // Savings
            if (balance > 100000) {
                rate = 0.04;
            } else {
                rate = 0.02;
            }
            break;
        case 2: // Current
            rate = 0.0;
            break;
        case 3: // Fixed Deposit
            rate = 0.08;
            break;
        default:
            printf("Invalid account type!\n");
            return 1;
    }

    interest = balance * rate;
    printf("Annual Interest Earned: Rs. %.2f\n", interest);

    return 0;
}
