#include <stdio.h>

#define MSGS 5
#define LEN 41

int main(void)
{
    char msg[MSGS][LEN];
    int excl[MSGS] = {0};
    int ques[MSGS] = {0};
    int best = 0;

    for (int i = 0; i < MSGS; i++)
    {
        printf("Enter message %d: ", i + 1);
        if (scanf(" %40[^\n]", msg[i]) != 1)
        {
            msg[i][0] = '\0';
        }
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
    }

    for (int i = 0; i < MSGS; i++)
    {
        for (int j = 0; msg[i][j] != '\0'; j++)
        {
            if (msg[i][j] == '!')
                excl[i]++;
            else if (msg[i][j] == '?')
                ques[i]++;
        }
        if (excl[i] + ques[i] > excl[best] + ques[best])
            best = i;
    }

    printf("\n");
    for (int i = 0; i < MSGS; i++)
    {
        printf("Message %d: \"%s\"\n", i + 1, msg[i]);
        printf("  '!' count: %d, '?' count: %d, combined: %d\n", excl[i], ques[i], excl[i] + ques[i]);
    }

    printf("\nMessage %d has the most symbols combined (%d): \"%s\"\n",
           best + 1, excl[best] + ques[best], msg[best]);
    return 0;
}
