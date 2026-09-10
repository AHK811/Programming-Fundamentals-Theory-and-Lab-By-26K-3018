#include <stdio.h>

int main() {
    int membershipType, slot;
    float baseRate, finalFee;

    printf("Enter membership type (1 = Student, 2 = Regular, 3 = Senior Citizen): ");
    scanf("%d", &membershipType);
    printf("Enter time slot (1 = Morning, 2 = Evening): ");
    scanf("%d", &slot);

    switch (membershipType) {
        case 1:
            baseRate = 2000;
            break;
        case 2:
            baseRate = 3500;
            break;
        case 3:
            baseRate = 2500;
            break;
        default:
            printf("Invalid membership type!\n");
            return 1;
    }

    switch (slot) {
        case 1: // Morning - 15% discount
            finalFee = baseRate - (baseRate * 0.15);
            break;
        case 2: // Evening - no discount
            finalFee = baseRate;
            break;
        default:
            printf("Invalid time slot!\n");
            return 1;
    }

    printf("Final Monthly Fee: Rs. %.2f\n", finalFee);

    return 0;
}
