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
    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}
