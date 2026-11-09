#include <stdio.h>
#include <string.h>

int main()
{
    char words[20][20];
    char sorted[20][20];
    int used[20] = {0};
    int n, i, j, k, len;
    int groups = 0;
    int unmatched = 0;
    int found;
    char temp;

    printf("How many words (max 20)? ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("N must be between 1 and 20.\n");
        return 1;
    }

    printf("Enter %d lowercase words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%19s", words[i]);
        strcpy(sorted[i], words[i]);

        len = strlen(sorted[i]);
        for (j = 0; j < len - 1; j++) {
            for (k = 0; k < len - 1 - j; k++) {
                if (sorted[i][k] > sorted[i][k + 1]) {
                    temp = sorted[i][k];
                    sorted[i][k] = sorted[i][k + 1];
                    sorted[i][k + 1] = temp;
                }
            }
        }
    }

    printf("\n");
    for (i = 0; i < n; i++) {
        if (used[i] == 1)
            continue;
        
        found = 0;
        for (j = i + 1; j < n; j++) {
            if (used[j] == 0 && strcmp(sorted[i], sorted[j]) == 0) {
                if (found == 0) {
                    groups++;
                    printf("Group %d: %s", groups, words[i]);
                    found = 1;
                }
                printf(", %s", words[j]);
                used[j] = 1;
            }
        }

        if (found == 1)
            printf("\n");
        else
            unmatched++;
    }

    printf("Unmatched: %d\n", unmatched);
    return 0;
}
