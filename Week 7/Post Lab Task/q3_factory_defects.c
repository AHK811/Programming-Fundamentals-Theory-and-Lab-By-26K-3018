#include <stdio.h>

#define BATCHES 5
#define PRODUCTS 6

int main(void)
{
    int mark[BATCHES][PRODUCTS];
    int defects[BATCHES] = {0};
    int total = 0;

    for (int i = 0; i < BATCHES; i++)
    {
        for (int j = 0; j < PRODUCTS; j++)
        {
            int v;
            do
            {
                printf("Batch %d, product %d (1 = defective, 0 = acceptable): ", i + 1, j + 1);
                if (scanf("%d", &v) != 1)
                {
                    printf("Input error\n");
                    return 1;
                }
                if (v != 0 && v != 1)
                    printf("Enter only 0 or 1\n");
            } while (v != 0 && v != 1);
            mark[i][j] = v;
            defects[i] += v;
        }
        total += defects[i];
    }

    double percentage = (double)total / (BATCHES * PRODUCTS) * 100.0;
    double average = (double)total / BATCHES;

    printf("\n%-8s %-8s %s\n", "Batch", "Defects", "Status");
    for (int i = 0; i < BATCHES; i++)
    {
        const char *status;
        if (defects[i] > average)
            status = "ABOVE average";
        else if (defects[i] == average)
            status = "EQUAL to average";
        else
            status = "Below average";
        printf("%-8d %-8d %s\n", i + 1, defects[i], status);
    }

    printf("\nTotal defects: %d of %d\n", total, BATCHES * PRODUCTS);
    printf("Average defects per batch: %.2f\n", average);
    printf("Overall defect percentage: %.2f%%\n", percentage);
    return 0;
}
