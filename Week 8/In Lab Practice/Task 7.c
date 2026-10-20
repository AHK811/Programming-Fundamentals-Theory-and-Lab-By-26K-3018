#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*pf)(int, int);
    pf = &add;
    int res = pf(3, 4);
    printf("%d", res);
    return 0;
}
