#include <stdio.h>
#include <string.h>
int main () {

    char s1[15];
    char s2[15];
    int ret;

    strcpy(s1, "lmnopq");
    strcpy(s2, "LMNOPQ");
    ret = strncmp(s1, s2, 4);

    if(ret < 0) {
        printf("s1 is less than s2");
    }
    else if(ret > 0) {
        printf("s2 is less than s1");
        }
        else {
            printf("s1 is equal to s2");
    }
    return 0;
}
