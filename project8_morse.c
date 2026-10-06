
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
int main()
{
    char repeat;

    do
    {
        printf("----------MORSE CODER----------\n");
        printf("1.Find Morse code\n");
        printf("2.Text to Morse\n");
        printf("3.Morse to Text\n");
        printf("4.Number to Morse\n");
        printf("5.Morse to number\n");
        printf("6.Punctuation to morse\n");
        printf("7.Morse to punctuation\n");
        printf("8.Morse Chart\n");
        printf("9.Exit\n");

        int choice;

        printf("Enter your choice :");
        scanf("%d", &choice);

        char characters[] = {
            'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
            'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
            'U', 'V', 'W', 'X', 'Y', 'Z',
            '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'
        };

        char *characters_morse[] = {
            ".-", "-...", "-.-.", "-..", ".", "..-.",
            "--.", "....", "..", ".---", "-.-", ".-..",
            "--", "-.", "---", ".--.", "--.-", ".-.",
            "...", "-", "..-", "...-", ".--", "-..-",
            "-.--", "--..", "-----", ".----", "..---", "...--",
            "....-", ".....", "-....", "--...", "---..", "----."
        };

        char numbers[] = {
            '0', '1', '2', '3', '4',
            '5', '6', '7', '8', '9'
        };

        char *number_morse[] = {
            "-----", ".----", "..---", "...--", "....-",
            ".....", "-....", "--...", "---..", "----."
        };

        char punctuation[] = {
            '.', ',', '?', '\'', '!', '/', '(', ')',
            '&', ':', ';', '=', '+', '-', '_', '"', '$', '@'
        };

        char *punctuation_morse[] = {
            ".-.-.-", "--..--", "..--..", ".----.", "-.-.--",
            "-..-.", "-.--.", "-.--.-", ".-...", "---...",
            "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-",
            ".-..-.", "...-..-", ".--.-."
        };

        switch (choice)
        {
        case 1:

            printf("The morse code for the Letters and numbers are as follows\n");
            printf("Press Enter to go next\n");

            for (int i = 0; i < 36; i++)
            {
                getchar();

                printf(" %c  ", characters[i]);
                printf(" %s\n", characters_morse[i]);
            }

            break;


        case 2:
        {
            int ch;
            char text[1000];
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("Enter the text for its conversion into morse: ");
            fgets(text,sizeof(text),stdin);
           
            printf("The Conversion into morse is: ");

            for (int i = 0; text[i] != '\0'; i++)
            {
                text[i] = toupper(text[i]);

                for (int j = 0; j < 36; j++)
                {
                    if (text[i] == characters[j])
                    {
                        printf("%s   ", characters_morse[j]);
                    }
                }
            }

            printf("\n");
            break;
        }


        case 3:
        {
            char text[100][10];
            int n;
            char repeat1;

            do
            {
                printf("Enter the amount of Morse codes you want to enter: ");
                scanf("%d", &n);

                if (n > 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        printf("Enter Morse code %d: ", i + 1);
                        scanf("%s", text[i]);
                    }

                    printf("The Conversion into letters is: ");

                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < 36; j++)
                        {
                            if (strcmp(text[i], characters_morse[j]) == 0)
                            {
                                printf("%c ", characters[j]);
                                break;
                            }
                        }
                    }
                }
                else
                {
                    printf("TRY AGAIN!! Enter Valid number(y/n): ");
                    scanf(" %c", &repeat1);
                }

            } while (repeat1 == 'y' || repeat1 == 'Y');

            printf("\n");
            break;
        }


        case 4:
        {
            char nums[1000];

            printf("Enter the number you want to convert it into the morse: ");
            scanf("%s", nums);

            for (int i = 0; nums[i] != '\0'; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (nums[i] == numbers[j])
                    {
                        printf("%s ", number_morse[j]);
                        break;
                    }
                }
            }

            printf("\n");
            break;
        }


        case 5:
        {
            int n;
            char repeat2;
            char numm[100][10];

            do
            {
                printf("Enter how many Morse code you want to enter: ");
                scanf("%d", &n);

                if (n > 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        printf("Enter morse code %d: ", i + 1);
                        scanf("%s", numm[i]);
                    }

                    printf("The conversion of Morse into numbers is: ");

                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < 10; j++)
                        {
                            if (strcmp(numm[i], number_morse[j]) == 0)
                            {
                                printf("%c ", numbers[j]);
                                break;
                            }
                        }
                    }
                }
                else
                {
                    printf("TRY AGAIN!!! Enter valid(y/n): ");
                    scanf(" %c", &repeat2);
                }

                printf("\n");

            } while (repeat2 == 'y' || repeat2 == 'Y');

            break;
        }


        case 6:
        {
            char punchu[100];

            printf("Enter The punctuation mark: ");
            scanf("%s", punchu);

            for (int i = 0; punchu[i] != '\0'; i++)
            {
                for (int j = 0; j < 18; j++)
                {
                    if (punchu[i] == punctuation[j])
                    {
                        printf("%s ", punctuation_morse[j]);
                        break;
                    }
                }
            }

            printf("\n");
            break;
        }


        case 7:
        {
            char repeat3;
            char punchuu[100][10];
            int n;

            do
            {
                printf("How many Morse codes you want to enter: ");
                scanf("%d", &n);

                if (n > 0)
                {
                    for (int i = 0; i < n; i++)
                    {
                        printf("Enter Morse code %d: ", i + 1);
                        scanf("%s", punchuu[i]);
                    }

                    printf("The conversion into punctuation is: ");

                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < 18; j++)
                        {
                            if (strcmp(punchuu[i], punctuation_morse[j]) == 0)
                            {
                                printf("%c ", punctuation[j]);
                                break;
                            }
                        }
                    }
                }
                else
                {
                    printf("TRY AGAIN!!! Enter Valid(y/n): ");
                    scanf(" %c", &repeat3);
                }

                printf("\n");

            } while (repeat3 == 'y' || repeat3 == 'Y');

            break;
        }


        case 8:

            for (int i = 0; i < 36; i++)
            {
                
                printf("%c ", characters[i]);
                printf("%s\n", characters_morse[i]);
                Sleep(300);
            }

            break;

        case 9:{
            printf("----------EXITING THE MORSE CODER----------\n");
            break;
        }

        default:

            printf("Enter Valid choice\n");
            break;
        }

        
        if(choice != 9){
        printf("Do you want to Try The morse coder again(y/n): ");
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
