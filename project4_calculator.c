
#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    int a, b;
    float x, y, result;
    char repeat;

    do
    {
        printf("\n========== CALCULATOR ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Percentage\n");
        printf("9. Absolute Value\n");
        printf("================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n--- Addition ---\n");

                printf("Enter first number: ");
                scanf("%f", &x);

                printf("Enter second number: ");
                scanf("%f", &y);

                result = x + y;

                printf("Addition = %.2f\n", result);
                break;


            case 2:
                printf("\n--- Subtraction ---\n");

                printf("Enter first number: ");
                scanf("%f", &x);

                printf("Enter second number: ");
                scanf("%f", &y);

                result = x - y;

                printf("Subtraction = %.2f\n", result);
                break;


            case 3:
                printf("\n--- Multiplication ---\n");

                printf("Enter first number: ");
                scanf("%f", &x);

                printf("Enter second number: ");
                scanf("%f", &y);

                result = x * y;

                printf("Multiplication = %.2f\n", result);
                break;


            case 4:
                printf("\n--- Division ---\n");

                printf("Enter dividend: ");
                scanf("%f", &x);

                printf("Enter divisor: ");
                scanf("%f", &y);

                if(y == 0)
                {
                    printf("Division by zero is not possible.\n");
                }
                else
                {
                    result = x / y;
                    printf("Division = %.2f\n", result);
                }

                break;


            case 5:
                printf("\n--- Modulus ---\n");

                printf("Enter first integer: ");
                scanf("%d", &a);

                printf("Enter second integer: ");
                scanf("%d", &b);

                if(b == 0)
                {
                    printf("Modulus by zero is not possible.\n");
                }
                else
                {
                    printf("Modulus = %d\n", a % b);
                }

                break;


            case 6:
                printf("\n--- Power ---\n");

                printf("Enter base: ");
                scanf("%f", &x);

                printf("Enter power: ");
                scanf("%f", &y);

                result = pow(x, y);

                printf("Result = %.2f\n", result);
                break;


            case 7:
                printf("\n--- Square Root ---\n");

                printf("Enter number: ");
                scanf("%f", &x);

                if(x < 0)
                {
                    printf("Square root of a negative number is not possible.\n");
                }
                else
                {
                    result = sqrt(x);
                    printf("Square root = %.2f\n", result);
                }

                break;


            case 8:
                printf("\n--- Percentage ---\n");

                printf("Enter obtained value: ");
                scanf("%f", &x);

                printf("Enter total value: ");
                scanf("%f", &y);

                if(y == 0)
                {
                    printf("Total value cannot be zero.\n");
                }
                else
                {
                    result = (x / y) * 100;
                    printf("Percentage = %.2f%%\n", result);
                }

                break;


            case 9:
                printf("\n--- Absolute Value ---\n");

                printf("Enter number: ");
                scanf("%f", &x);

                result = fabs(x);

                printf("Absolute value = %.2f\n", result);
                break;


            default:
                printf("Invalid choice. Please enter a number from 1 to 9.\n");
        }

        printf("\nDo you want to perform another operation (y/n): ");
        scanf(" %c", &repeat);

        while(repeat != 'y' && repeat != 'Y' &&
              repeat != 'n' && repeat != 'N')
        {
            printf("Enter valid input (y/n): ");
            scanf(" %c", &repeat);
        }

    } while(repeat == 'y' || repeat == 'Y');

    printf("\nCalculator closed.\n");

    return 0;
}
