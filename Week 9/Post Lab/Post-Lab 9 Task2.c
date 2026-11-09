#include <stdio.h>
#include <string.h>


void sortNames(char names[][50], int n)
{
    char temp[50];
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main()
{
    char arrival[30][50];
    char sorted[30][50];
    int n, i, len;

    printf("How many patients (max 30)? ");
    scanf("%d", &n);
    getchar();

    if (n < 1 || n > 30) {
        printf("N must be between 1 and 30.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Patient %d: ", i + 1);
        fgets(arrival[i], 50, stdin);
        len = strlen(arrival[i]);
        if (arrival[i][len - 1] == '\n')
            arrival[i][len - 1] = '\0';
        strcpy(sorted[i], arrival[i]);
    }

    sortNames(sorted, n);

    printf("\n%-25s %-25s\n", "Arrival order", "Alphabetical order");
    for (i = 0; i < n; i++)
        printf("%-25s %-25s\n", arrival[i], sorted[i]);

    return 0;
}
