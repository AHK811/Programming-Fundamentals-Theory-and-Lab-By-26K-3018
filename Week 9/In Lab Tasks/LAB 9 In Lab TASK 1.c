#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "Hello";
    char dest[20];
    strcpy(dest, s);
    printf("Copied String: %s\n", dest);
    return 0;
}
