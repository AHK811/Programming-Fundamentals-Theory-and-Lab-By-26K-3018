#include <stdio.h>

int main(void)
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[3];
    p = a;
    int r =2;
    int c =3;

    for(int i= 0; i < r; i++){
        for(int j=0; j < c; j++){
            printf("%d", (*(p+i))[j]);
        }printf("\n");
    }
}
