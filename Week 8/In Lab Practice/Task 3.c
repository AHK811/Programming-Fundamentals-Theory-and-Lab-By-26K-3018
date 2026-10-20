#include <stdio.h>

int main(void){
    char array[] = {'A','B','D','U','L','H','A','N','N','A','N','K','A','S','H','I','F'};
    char *p = array;
    int n=sizeof(array)/sizeof(array[0]);

    for(int i=0; i<=n;i++){
        printf(" %c\n", *(p+i));
    }
}
