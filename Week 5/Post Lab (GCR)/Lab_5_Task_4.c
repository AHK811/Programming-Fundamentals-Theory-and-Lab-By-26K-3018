// 7. Input the temperature and rain status (1 = Raining, 0 = Not Raining). If temperature is below 15°C recommend Jacket, 15–25°C recommend Light Clothing, and above 25°C recommend Summer Clothing; if raining, additionally display Carry an Umbrella.

#include <stdio.h>

int main(void)
{
    float temp;
    int rain;

    printf("Enter temperature in °C: ");
    scanf("%f", &temp);

    printf("Enter rain status (1 = Raining, 0 = Not Raining): ");
    scanf("%d", &rain);

    if (temp < 15.0)
    {
        printf("Recommendation: Wear a Jacket.\n");
    }
    else if (temp >= 15.0 && temp <= 25.0)
    {
        printf("Recommendation: Wear Light Clothing.\n");
    }
    else
    {
        printf("Recommendation: Wear Summer Clothing.\n");
    }

    // Check rain status
    if (rain == 1)
    {
        printf("Carry an Umbrella.\n");
    }

    return 0;
}
