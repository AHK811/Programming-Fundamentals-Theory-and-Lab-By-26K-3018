// 4. Input a meal category (1 = Breakfast, 2 = Lunch, 3 = Dinner) and an item choice. Use nested switch statements to select the item and display the selected item category, item number, and price.

#include <stdio.h>

int main(void)
{
    int Choice;
    char item, add;
    float Total = 0.0;

    do {
        printf("\n=============================\n");
        printf("Select a Meal Category\n");
        printf("1. Breakfast\n");
        printf("2. Lunch\n");
        printf("3. Dinner\n");
        printf("=============================\n");
        printf("Enter choice (1-3): ");
        scanf("%d", &Choice);

        switch (Choice) {
            case 1:
                printf("\n=============================\n");
                printf("Breakfast Menu\n");
                printf("A. Omelette & Toast — $5.50\n");
                printf("B. Pancake Stack   — $6.50\n");
                printf("C. French Toast     — $6.00\n");
                printf("=============================\n");
                printf("Select your item (A, B, or C): ");
                scanf(" %c", &item);

                switch (item) {
                    case 'A':
                    case 'a':
                        printf("Added: Omelette & Toast ($5.50)\n");
                        Total += 5.50;
                        break;
                    case 'B':
                    case 'b':
                        printf("Added: Pancake Stack ($6.50)\n");
                        Total += 6.50;
                        break;
                    case 'C':
                    case 'c':
                        printf("Added: French Toast ($6.00)\n");
                        Total += 6.00;
                        break;
                    default:
                        printf("Invalid item choice for Breakfast.\n");
                        break;
                        return 1;
                }
                break;

            case 2:
                printf("\n=============================\n");
                printf("Lunch Menu\n");
                printf("A. Burger & Fries   — $8.50\n");
                printf("B. Caesar Salad     — $7.00\n");
                printf("C. Club Sandwich    — $7.50\n");
                printf("=============================\n");
                printf("Select your item (A, B, or C): ");
                scanf(" %c", &item);

                switch (item) {
                    case 'A':
                    case 'a':
                        printf("Added: Burger & Fries ($8.50)\n");
                        Total += 8.50;
                        break;
                    case 'B':
                    case 'b':
                        printf("Added: Caesar Salad ($7.00)\n");
                        Total += 7.00;
                        break;
                    case 'C':
                    case 'c':
                        printf("Added: Club Sandwich ($7.50)\n");
                        Total += 7.50;
                        break;
                    default:
                        printf("Invalid item choice for Lunch.\n");
                        break;
                }
                break;

            case 3:
                printf("\n=============================\n");
                printf("Dinner Menu\n");
                printf("A. Grilled Steak    — $15.00\n");
                printf("B. Alfredo Pasta    — $12.50\n");
                printf("C. Salmon Fillet    — $14.00\n");
                printf("=============================\n");
                printf("Select your item (A, B, or C): ");
                scanf(" %c", &item);

                switch (item) {
                    case 'A':
                    case 'a':
                        printf("Added: Grilled Steak ($15.00)\n");
                        Total += 15.00;
                        break;
                    case 'B':
                    case 'b':
                        printf("Added: Alfredo Pasta ($12.50)\n");
                        Total += 12.50;
                        break;
                    case 'C':
                    case 'c':
                        printf("Added: Salmon Fillet ($14.00)\n");
                        Total += 14.00;
                        break;
                    default:
                        printf("Invalid item choice for Dinner.\n");
                        break;
                }
                break;

            default:
                printf("\nInvalid meal category selected.\n");
                break;
        }

        printf("\nWould you like to order another item? (y/n): ");
        scanf(" %c", &add);

    } while (add == 'y' || add == 'Y');

    printf("\n=============================\n");
    printf("Total Bill: $%.2f\n", Total);
    printf("Thank you for your order!\n");
    printf("=============================\n");

    return 0;
}
