#include <stdio.h>

int main() {
    int zoneType;
    float speed, speedLimit, fine = 0;

    printf("Enter zone type (1 = School Zone, 2 = Highway, 3 = Residential Area): ");
    scanf("%d", &zoneType);
    printf("Enter driver's speed (km/h): ");
    scanf("%f", &speed);

    switch (zoneType) {
        case 1:
            speedLimit = 30;
            break;
        case 2:
            speedLimit = 100;
            break;
        case 3:
            speedLimit = 50;
            break;
        default:
            printf("Invalid zone type!\n");
            return 1;
    }

    if (speed > speedLimit) {
        fine = 1000;
        if (speed - speedLimit > 20) {
            fine *= 2;
        }
        printf("Fine Amount: Rs. %.2f\n", fine);
    } else {
        printf("No violation. No fine.\n");
    }

    return 0;
}
