#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][15] = {"elephant", "giraffe", "penguin", "dolphin", "kangaroo"};
    char word[15];
    int guessed[26] = {0};
    int pick, i, len;
    int wrong = 0;
    int won = 0;
    int allFound;
    int inWord;
    char guess;

    printf("Host, pick a word (1-5): ");
    scanf("%d", &pick);
    if (pick < 1 || pick > 5) {
        printf("Pick a number from 1 to 5.\n");
        return 1;
    }
    strcpy(word, words[pick - 1]);
    len = strlen(word);

    while (wrong < 6 && won == 0) {
        printf("\nWord: ");
        for (i = 0; i < len; i++) {
            if (guessed[word[i] - 'a'] == 1)
                printf("%c ", word[i]);
            else
                printf("_ ");
        }

        printf("\nGuessed: ");
        for (i = 0; i < 26; i++) {
            if (guessed[i] == 1)
                printf("%c ", 'a' + i);
        }
        printf("\nWrong guesses: %d of 6\n", wrong);

        printf("Guess a letter: ");
        scanf(" %c", &guess); 

        if (guess >= 'A' && guess <= 'Z')
            guess = guess + 32;
        if (guess < 'a' || guess > 'z') {
            printf("Please type a letter.\n");
            continue;
        }

        if (guessed[guess - 'a'] == 1) {
            printf("You already guessed that. No life lost.\n");
            continue;
        }
        guessed[guess - 'a'] = 1;

        inWord = 0;
        for (i = 0; i < len; i++) {
            if (word[i] == guess)
                inWord = 1;
        }
        if (inWord == 0)
            wrong++;

        allFound = 1;
        for (i = 0; i < len; i++) {
            if (guessed[word[i] - 'a'] == 0)
                allFound = 0;
        }
        if (allFound == 1)
            won = 1;
    }

    if (won == 1)
        printf("\nYou win! The word was %s.\n", word);
    else
        printf("\nYou lose! The word was %s.\n", word);

    return 0;
}
