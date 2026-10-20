#include <stdio.h>

int add(int a, int b)
 {
    return a + b;
}
int sub(int a, int b)
 {
    return a - b;
}
int calc(int a, int b, int (*op)(int, int)) {
    return op(a, b);
}
int main()
{
    printf("%d\n", calc(5, 3, add));
    printf("%d", calc(5, 3, sub));

}
