#include <stdio.h>

int main() {
    float testScore, fscPercentage, combined;

    printf("Enter entry test score (out of 100): ");
    scanf("%f", &testScore);
    printf("Enter FSc percentage: ");
    scanf("%f", &fscPercentage);

    combined = 0.5 * testScore + 0.5 * fscPercentage;

    printf("Combined Score: %.2f\n", combined);

    if (combined >= 80) {
        printf("Admission Result: Computer Science\n");
    } else if (combined >= 65) {
        printf("Admission Result: Software Engineering\n");
    } else if (combined >= 50) {
        printf("Admission Result: Information Technology\n");
    } else {
        printf("Admission Result: Rejected\n");
    }

    return 0;
}
