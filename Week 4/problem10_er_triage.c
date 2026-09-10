#include <stdio.h>

int main() {
    float heartRate, temperature;

    printf("Enter heart rate (bpm): ");
    scanf("%f", &heartRate);
    printf("Enter body temperature (C): ");
    scanf("%f", &temperature);

    if (heartRate > 120 || temperature > 39) {
        printf("Triage Level: Critical - Immediate Attention\n");
    } else if ((heartRate >= 100 && heartRate <= 120) &&
               (temperature >= 37.5 && temperature <= 39)) {
        printf("Triage Level: Urgent\n");
    } else {
        printf("Triage Level: Normal - Wait in Queue\n");
    }

    return 0;
}
