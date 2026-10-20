#include <stdio.h>

int main(void){
    int a = 10;
    float b =4.5;
    char c = 'z';
    void*ptr;
    ptr=&a;
    printf("Value of a using void pointer; %d\n",*(int *)ptr);
    ptr=&b;
    printf("Value of b using void pointer; %.2f\n",*(float *)ptr);
    ptr=&c;
    printf("Value of c using void pointer; %c\n",*(char *)ptr);
}
