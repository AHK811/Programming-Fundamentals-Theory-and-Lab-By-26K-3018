#include <stdio.h>

#define TABLES 3
#define ORDERS 3
#define NAME 50

int main(void)
{
    char dish[TABLES][ORDERS][NAME];
    int qty[TABLES][ORDERS];
    float price[TABLES][ORDERS];
    float bill[TABLES] = {0};
    int best = 0;

    for (int t = 0; t < TABLES; t++)
    {
        for (int o = 0; o < ORDERS; o++)
        {
            printf("Table %d, order %d dish name: ", t + 1, o + 1);
            if (scanf(" %49[^\n]", dish[t][o]) != 1)
            {
                printf("Input error\n");
                return 1;
            }
            do
            {
                printf("Quantity: ");
                if (scanf("%d", &qty[t][o]) != 1)
                {
                    printf("Input error\n");
                    return 1;
                }
                if (qty[t][o] <= 0)
                    printf("Quantity must be positive\n");
            } while (qty[t][o] <= 0);
            do
            {
                printf("Price per item: ");
                if (scanf("%f", &price[t][o]) != 1)
                {
                    printf("Input error\n");
                    return 1;
                }
                if (price[t][o] < 0)
                    printf("Price cannot be negative\n");
            } while (price[t][o] < 0);
            bill[t] += qty[t][o] * price[t][o];
        }
    }

    for (int t = 0; t < TABLES; t++)
    {
        printf("\nTable %d\n", t + 1);
        printf("%-25s %-8s %-10s %s\n", "Dish", "Qty", "Price", "Subtotal");
        for (int o = 0; o < ORDERS; o++)
            printf("%-25s %-8d %-10.2f %.2f\n", dish[t][o], qty[t][o], price[t][o],
                   qty[t][o] * price[t][o]);
        printf("Total bill: %.2f\n", bill[t]);
        if (bill[t] > bill[best])
            best = t;
    }

    printf("\nTable %d has the highest bill: %.2f\n", best + 1, bill[best]);
    return 0;
}
