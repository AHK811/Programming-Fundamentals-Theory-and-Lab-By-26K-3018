#include <stdio.h>
int main()
{
    char start,e;
    printf("Please say starting letter of country:  \n");
    scanf("%c",&start);
    switch(start)
    {
        case 'A':
        case 'a':
            printf("Please say ending letter\n");
            scanf("\n%c",&e);
            switch(e)
            {
                case 'A':
                case 'a':
                    printf("\n Alaska \n Albania \n Algeria");
                    break;
                default:
                    printf("\n No such country");
            }
            break;
        case 'B':
        case 'b':
        	printf("Please enter tha last letter\n");
        	scanf("\n%c", &e);
        	switch(e)
        	{
        		case 'H':
        		case 'h':
        			printf("\n Bangladesh \n");
        			break;
        		default:
        			printf("\n No such country");
			}
			break;
		case 'C':
        case 'c':
            printf("Please say ending letter: \n");
            scanf(" %c", &e);
            switch(e)
            {
                case 'A':
                case 'a':
                    printf("\n Canada \n China \n Cuba \n Colombia\n");
                    break;
                default:
                    printf("\n No such country\n");
            }
            break;
		case 'D':
        case 'd':
            printf("Please say ending letter: \n");
            scanf(" %c", &e);
            switch(e)
            {
                case 'A':
                case 'a':
                    printf("\n Dominica \n");
                    break;
                case 'K':
                case 'k':
                    printf("\n Denmark \n");
                    break;
                default:
                    printf("\n No such country\n");
            }
            break;
        case 'E':
        case 'e':
            printf("Please say ending letter: \n");
            scanf(" %c", &e);
            switch(e)
            {
                case 'A':
                case 'a':
                    printf("\n Ethiopia \n Eritrea \n Estonia\n");
                    break;
                case 'T':
                case 't':
                    printf("\n Egypt \n");
                    break;
                default:
                    printf("\n No such country\n");
            }
            break;
        case 'P':
        case 'p':
            printf("Please say ending letter: \n");
            scanf(" %c", &e);
            switch(e)
            {
                case 'N':
                case 'n':
                    printf("\n Pakistan\n");
                    break;
                case 'E':
                case 'e':
                    printf("\n Plastine \n");
                    break;
                default:
                    printf("\n No such country\n");
            }
        default:
            printf("\n Starting letter not supported yet.\n");
    }

    return 0;
}
       