#include <stdio.h>

int main()
{
    int n;
    char repeat;
    do
    {
        printf("Enter number you want factorial of : ");
        scanf("%d", &n);
        int multiply = 1;
        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                multiply *= i;
            }
            printf("The factorial of number %d is %d\n", n, multiply);
        }
        else
        {
            printf("There is no factorial available for negative numbers \n");
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