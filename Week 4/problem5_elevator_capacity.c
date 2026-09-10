#include <stdio.h>

int main() {
    int people;
    float weight;

    printf("Enter number of people: ");
    scanf("%d", &people);
    printf("Enter total combined weight (kg): ");
    scanf("%f", &weight);

    if (people > 10 && weight > 1000) {
        printf("Denied: Exceeds both people limit and weight capacity\n");
    } else if (weight > 1000) {
        printf("Denied: Overweight\n");
    } else if (people > 10) {
        printf("Denied: Exceeds people limit\n");
    } else {
        printf("Elevator can operate normally\n");
    }

    return 0;
}
