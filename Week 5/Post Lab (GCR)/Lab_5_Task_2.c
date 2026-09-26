// 5. Input an integer permission code, where bit 0 = Read, bit 1 = Write, and bit 2 = Execute. Use bitwise operators to check enabled permissions and display whether Read, Write, and Execute permissions are available.

#include <stdio.h>

int main(void)
{
    int permissions;

    printf("Enter permission code: ");
    scanf("%d", &permissions);

    int read_mask = 1 << 0;
    int write_mask = 1 << 1;
    int execute_mask = 1 << 2;

    if (permissions & read_mask){
        printf("Read Permission: Enabled\n");
    }
    else{
        printf("Read Permission: Disabled\n");
    }

    if (permissions & write_mask){
        printf("Write Permission: Enabled\n");
    }
    else{
        printf("Write Permission: Disabled\n");
    }

    if (permissions & execute_mask){
        printf("Execute Permission: Enabled\n");
    }
    else{
        printf("Execute Permission: Disabled\n");
    }

    return 0;
}
