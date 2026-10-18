#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter N: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid N\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
