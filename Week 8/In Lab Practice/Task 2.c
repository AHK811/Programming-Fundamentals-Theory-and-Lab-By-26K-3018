#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p=&a;
    printf("value of a: %d\n", a);
    printf("address of a: %d\n", a);
    printf("value of p(address stored in pointer): %p\n",(void*)p);
    printf("value ppointed to by: %d\n",*p);

}
