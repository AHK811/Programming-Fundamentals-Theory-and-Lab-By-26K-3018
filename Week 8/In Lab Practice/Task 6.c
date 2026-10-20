#include <stdio.h>
int main()
{
    int r1[] = {1, 2, 3};
    int r2[] = {4, 5};
    int r3[] = {6, 7, 8, 9};
    int *a[] = {r1, r2, r3};
    printf("Accessing elements from the array of pointers:\n");
      // Row 0 (r1)
    printf("a[0][0]: %d\n", a[0][0]);
    printf("a[0][1]: %d\n", a[0][1]);
    printf("a[0][2]: %d\n", a[0][2]);
    // Row 1 (r2)
    printf("a[1][0]: %d\n", a[1][0]);
    printf("a[1][1]: %d\n", a[1][1]);
    // Row 2 (r3)
    printf("a[2][0]: %d\n", a[2][0]);
    printf("a[2][1]: %d\n", a[2][1]);
    printf("a[2][2]: %d\n", a[2][2]);
    printf("a[2][3]: %d\n", a[2][3]);
    return 0;
}
