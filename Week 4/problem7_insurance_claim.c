#include <stdio.h>

int main() {
    int policyActive, vehicleAge;
    float claimAmount, approvedAmount;

    printf("Is policy active? (1 = Yes, 0 = No): ");
    scanf("%d", &policyActive);
    printf("Enter vehicle age (years): ");
    scanf("%d", &vehicleAge);
    printf("Enter claim amount: ");
    scanf("%f", &claimAmount);

    if (!policyActive) {
        printf("Claim Rejected: Policy is not active\n");
    } else if (vehicleAge > 15) {
        printf("Claim Rejected: Vehicle exceeds maximum insurable age\n");
    } else if (vehicleAge < 10) {
        if (claimAmount <= 500000) {
            printf("Claim Approved: Rs. %.2f\n", claimAmount);
        } else {
            printf("Claim Rejected: Amount exceeds Rs. 500,000 limit\n");
        }
    } else { // vehicleAge between 10 and 15
        approvedAmount = claimAmount * 0.5;
        printf("Claim Partially Approved (50%%): Rs. %.2f\n", approvedAmount);
    }

    return 0;
}
