#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_number;

    srand(time(0));

    random_number = rand() % 100 + 1;

    printf("Random number is selected\n");
    int enter_number, guess;
    printf("Enter how many guess do you want : ");
    scanf("%d", &guess);
    printf("Enter a number (0,100): ");
    scanf("%d", &enter_number);
    for (int i = 2; i <= guess; i++)
    {
        while (enter_number < random_number && i <= guess)
        {
            printf("Your Guess is lower TRY AGAIN  \n");
            printf("Enter a number : ");
            scanf("%d", &enter_number);
            i++;
        }
        while (enter_number > random_number && i <= guess)
        {
            printf("Your Guess is Higher TRY AGAIN \n");
            printf("Enter a number : ");
            scanf("%d", &enter_number);
            i++;
        }
    }
    if (enter_number == random_number)
    {
        printf("CONGRATULATION your guess %d is correct", enter_number);
    }
    else {
        printf("The random number was %d",random_number);
    }
    return 0;
}