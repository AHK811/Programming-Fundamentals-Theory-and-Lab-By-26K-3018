#include <stdio.h>

int main()
{
    int a, b, c;
    printf("3 numbers: \n");
    scanf("%d, %d, %d", &a, &b, &c);
    if(a>b){
        if(a>c){
            printf(" %d a is the greatest number\n", a);
        }
    }
    else if(b>c){
            printf("%d b is greatest number\n", b);
    }else{
        printf("%d c s the greatest number\n", c);
    }
    return 0;
}

