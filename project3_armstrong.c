#include <stdio.h>
#include <math.h>

int main()
{
    int n, remainder, raise_to, temp, temp1, temp2;
    char repeat;
    do
    {
        printf("Enter the number for which you want to check whether if it is a armstrong number or not :");
        scanf("%d", &n);
        temp = n;
        temp1 = n;
        temp2 = n;
        char temp2;
        int digit = 0, add = 0;
        if (n < 0 || n == 0)
        {
            printf("Enter a positive number :\n");
        }

        else
        {
            while (n > 0)
            {
                n /= 10;
                digit++;
            }
            printf("The digit in the number is %d\n", digit);
            while (temp > 0)
            {
                remainder = temp % 10;
                raise_to = (float)pow(remainder, digit);
                add += raise_to;
                temp /= 10;
            }
            if (add == temp1)
            {
                printf("The number you enter is a armstrong number\n");
            }
            else if (temp1 < 0)
            {
                printf("Please enter a positive number\n");
            }
            else
            {
                printf("The number is not armstrong number\n");
            }
        }
        printf("DO You want to test again(y/n) : ");
        scanf(" %c", &repeat);
        while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N')
        {
            printf("Enter valid :\n");
            printf("DO You want to test again(y/n) : ");
            scanf(" %c", &repeat);
        }

    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}