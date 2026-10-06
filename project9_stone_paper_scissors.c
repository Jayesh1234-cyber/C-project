#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *game[] = {"STONE", "PAPER", "SCISSORS"};
    int n = 3;
    char repeat;
    do
    {
        srand(time(NULL));

        int index = rand() % n;

        char choice[20];
        char *ch = game[index];
        printf("Enter what do you want: ");
        scanf("%s", choice);
        char *ptr = choice;
        for (int i = 0; choice[i] != 0; i++)
        {
            ptr[i] = toupper(ptr[i]);
        }
        printf(" %s", ptr);
        if(ptr != "PAPER" && ptr != "STONE" && ptr != "SCISSORS"){
            printf("ENTER CORRECTLY\n");
            printf("Try Again(y/n)");
            scanf(" %c", &repeat);
            while (repeat != 'y' &&
                   repeat != 'Y' &&
                   repeat != 'n' &&
                   repeat != 'N')
            {
                printf("Enter again: (y/n) ");
                scanf(" %c", &repeat);
            }
        }
        else{
        if (strcmp(choice, ch) != 0) // Kyoki ek computer string aur ek user enter toh error hota hai
        {
            if (strcmp(ptr, "PAPER") == 0 && strcmp(ch, "STONE") == 0)
            {
                printf("You win the game!!!\n");
            }
            else if (strcmp(ptr, "STONE") == 0 && strcmp(ch, "SCISSORS") == 0)
            {
                printf("You win the game!!!\n");
            }
            else if (strcmp(ptr, "SCISSORS") == 0 && strcmp(ch, "PAPER") == 0)
            {
                printf("You win the game!!!\n");
            }
            else
            {
                printf("You lose\n");
            }
            printf("Do you want to play again(y/n)");
            scanf(" %c", &repeat);
            while (repeat != 'y' &&
                   repeat != 'Y' &&
                   repeat != 'n' &&
                   repeat != 'N')
            {
                printf("Enter again: (y/n) ");
                scanf(" %c", &repeat);
            }
        }
        else
        {
            printf("You made the same sign\n");
            printf("DO you want to play again(y/n)");
            scanf(" %c", &repeat);
            while (repeat != 'y' &&
                   repeat != 'Y' &&
                   repeat != 'n' &&
                   repeat != 'N')
            {
                printf("Enter again: (y/n) ");
                scanf(" %c", &repeat);
            }
        }
    }
    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}