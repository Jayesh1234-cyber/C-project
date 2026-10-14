#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char repeat;

    do
    {
        printf("-----Palindromic Checker-----\n");
        printf("1.Number Palindrome\n");
        printf("2.Word Palindrome\n");
        printf("3.Sentence Palindrome\n");
        printf("4.Exit\n");

        int choice;
        printf("Enter your choice :");
        scanf("%d", &choice);

        int size = 0;
        int num;

        switch (choice)
        {
        case 1:
            printf("Enter your number :");
            scanf("%d", &num);

            int temp = num;
            int temp1 = num;

            while (num > 0)
            {
                num /= 10;
                size++;
            }

            int arr[1000];
            int ispalindrome = 1;

            for (int i = 0; arr[i] != 0; i++)
            {
                arr[i] = temp1 % 10;
                temp1 /= 10; // To reverse a number
                             // int reverse = 0;
                             // rem = number %10;
                             // reverse = reverse*10 + rem;
                             // number/=10;
            }

            for (int k = 0; k < size; k++)
            {
                if (arr[k] != arr[size - k - 1])
                {
                    ispalindrome = 0;
                    break;
                }
            }

            if (ispalindrome == 1)
            {
                printf("The number %d is palindrome \n", temp);
            }
            else
            {
                printf("The number %d is not palindrome \n", temp);
            }
            break;

        case 2:
            printf("Enter your word :");

            char str[100];
            scanf("%s", str);

            char str1[100];

            strcpy(str1, str);
            strrev(str);

            if (strcmp(str, str1) == 0)
            {
                printf("The word %s is a palindrome", str1);
            }
            else
            {
                printf("The word %s is not a palindrome", str1);
            }

            break;

        case 3:
        {
            int ch;
            char text[1000];
            char cleaned[1000];
            int length = 0;

            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }

            printf("Enter the sentence to check: ");
            if (fgets(text, sizeof(text), stdin) == NULL)
            {
                printf("Could not read the sentence.\n");
                break;
            }

            for (int i = 0; text[i] != '\0'; i++)
            {
                if (isalnum((unsigned char)text[i]))
                {
                    cleaned[length] = (char)tolower((unsigned char)text[i]);
                    length++;
                }
            }
            cleaned[length] = '\0';

            int palindrome = 1;
            for (int i = 0; i < length / 2; i++)
            {
                if (cleaned[i] != cleaned[length - i - 1])
                {
                    palindrome = 0;
                    break;
                }
            }

            if (palindrome)
            {
                printf("The sentence is a palindrome\n");
            }
            else
            {
                printf("The sentence is not a palindrome\n");
            }
            break;
        }

        case 4:
            printf("---Exiting the palindromic checker---\n");
            repeat = 'n';
            break;

        default:
        {
            printf("Invalid Choice");
        }
        }

        if (choice != 4)
        {
            printf("Do you want to check one more time(y/n)");
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
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
