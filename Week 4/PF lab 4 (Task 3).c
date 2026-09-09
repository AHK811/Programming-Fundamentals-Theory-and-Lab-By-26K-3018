#include <stdio.h>

int main()
{
    int day;
    printf("Enter a number: \n");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturady\n");
            break;
        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid Input! please insert a number between 1-7.\n");
    }
    return 0;
}
