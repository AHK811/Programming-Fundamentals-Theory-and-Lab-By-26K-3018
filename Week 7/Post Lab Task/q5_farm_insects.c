#include <stdio.h>

#define FIELDS 3
#define PLOTS 4
#define PERIODS 2

int main(void)
{
    int insects[FIELDS][PLOTS][PERIODS];
    const char *period[PERIODS] = {"morning", "evening"};
    int fieldTotal[FIELDS] = {0};
    int best = 0;

    for (int f = 0; f < FIELDS; f++)
    {
        for (int p = 0; p < PLOTS; p++)
        {
            for (int t = 0; t < PERIODS; t++)
            {
                int v;
                do
                {
                    printf("Field %d, plot %d, %s count: ", f + 1, p + 1, period[t]);
                    if (scanf("%d", &v) != 1)
                    {
                        printf("Input error\n");
                        return 1;
                    }
                    if (v < 0)
                        printf("Count cannot be negative\n");
                } while (v < 0);
                insects[f][p][t] = v;
                fieldTotal[f] += v;
            }
        }
    }

    printf("\nPlots with an increase from morning to evening:\n");
    int found = 0;
    for (int f = 0; f < FIELDS; f++)
    {
        for (int p = 0; p < PLOTS; p++)
        {
            if (insects[f][p][1] > insects[f][p][0])
            {
                printf("Field %d, plot %d: %d -> %d\n", f + 1, p + 1,
                       insects[f][p][0], insects[f][p][1]);
                found = 1;
            }
        }
    }
    if (!found)
        printf("None\n");

    printf("\n");
    for (int f = 0; f < FIELDS; f++)
    {
        printf("Field %d total: %d\n", f + 1, fieldTotal[f]);
        if (fieldTotal[f] > fieldTotal[best])
            best = f;
    }

    printf("\nField %d has the highest combined count: %d\n", best + 1, fieldTotal[best]);
    return 0;
}
