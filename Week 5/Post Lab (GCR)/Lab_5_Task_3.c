// 6.Input the player's score and completed missions. A player qualifies for Level 2 with at least 500 points and 5 missions, while Level 3 requires 1000 points and 10 missions; otherwise remain at Level 1 and display the player's level.


#include <stdio.h>

int score, mission;
char choice;

int main(void)
{
    printf("\n======================\n");
    printf("   Congratulations 🎉\n");
    printf("You Passed the Level 1\n");
    printf("======================\n\n");

    printf("Your Current Score in Last Level.... \n");
    scanf("%d", &score);

    printf("Your Completed missions in Last Level.... \n");
    scanf("%d", &mission);

    if (score >= 500 && mission >= 5) {
        printf("\n=======================\n");
        printf("   Level 2 Unlocked 🔓\n");
        printf("    Best of Luck 😊\n");
        printf("=======================\n\n");

        ask_again:

        printf("Have you played Level 2? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y') {
            printf("Your Current Score in Last Level.... \n");
            scanf("%d", &score);

            printf("Your Completed missions in Last Level.... \n");
            scanf("%d", &mission);

            if (score >= 1000 && mission >= 10) {
                printf("\n=======================\n");
                printf("   Congratulations 🎉\n");
                printf("You Passed the Level 2\n");
                printf("=======================\n");
                printf("   Level 3 Unlocked 🔓\n");
                printf("    Best of Luck 😊\n");
                printf("   😊 Enjoy Playing ...\n");
                printf("=======================\n\n");
                printf("Play the game, Have some fun!\n");
                return 0;

            } else {
                printf("Play Level 2 again to reach Level 3 requirements!\n");
                printf("\n======================\n");
                printf("   Level 3 Locked 🔐\n");
                printf("   Try again Level 2\n");
                printf("======================\n\n");

            }
        } else {
            goto ask_again;
        }
    } else {
        printf("\n======================\n");
        printf("   Level 2 Locked 🔐\n");
        printf("   Try again Level 1\n");
        printf("======================\n\n");

    }

    return 0;
}
