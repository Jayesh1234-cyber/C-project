
#include <stdio.h>

int main()
{
    int choice;
    float value, result;
    char repeat;
    float dollar_rate = 96.00;

    do
    {
        printf("\n========== CONVERTER ==========\n");
        printf("1. Dollar to Rupees\n");
        printf("2. Rupees to Dollar\n");
        printf("3. Gram to Kilogram\n");
        printf("4. Kilogram to Gram\n");
        printf("5. Pound to Kilogram\n");
        printf("6. Kilogram to Pound\n");
        printf("7. Meter to Kilometer\n");
        printf("8. Kilometer to Meter\n");
        printf("9. Celsius to Fahrenheit\n");
        printf("10. Fahrenheit to Celsius\n");
        printf("11. Liter to Milliliter\n");
        printf("12. Milliliter to Liter\n");
        printf("================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter amount in Dollar: ");
                scanf("%f", &value);

                result = value * dollar_rate;

                printf("Dollar = %.2f\n", value);
                printf("Rupees = %.2f\n", result);
                break;


            case 2:
                printf("\nEnter amount in Rupees: ");
                scanf("%f", &value);

                result = value / dollar_rate;

                printf("Rupees = %.2f\n", value);
                printf("Dollar = %.2f\n", result);
                break;


            case 3:
                printf("\nEnter weight in Gram: ");
                scanf("%f", &value);

                result = value / 1000;

                printf("Gram = %.2f\n", value);
                printf("Kilogram = %.2f\n", result);
                break;


            case 4:
                printf("\nEnter weight in Kilogram: ");
                scanf("%f", &value);

                result = value * 1000;

                printf("Kilogram = %.2f\n", value);
                printf("Gram = %.2f\n", result);
                break;


            case 5:
                printf("\nEnter weight in Pound: ");
                scanf("%f", &value);

                result = value * 0.453592;

                printf("Pound = %.2f\n", value);
                printf("Kilogram = %.2f\n", result);
                break;


            case 6:
                printf("\nEnter weight in Kilogram: ");
                scanf("%f", &value);

                result = value * 2.20462;

                printf("Kilogram = %.2f\n", value);
                printf("Pound = %.2f\n", result);
                break;


            case 7:
                printf("\nEnter distance in Meter: ");
                scanf("%f", &value);

                result = value / 1000;

                printf("Meter = %.2f\n", value);
                printf("Kilometer = %.2f\n", result);
                break;


            case 8:
                printf("\nEnter distance in Kilometer: ");
                scanf("%f", &value);

                result = value * 1000;

                printf("Kilometer = %.2f\n", value);
                printf("Meter = %.2f\n", result);
                break;


            case 9:
                printf("\nEnter temperature in Celsius: ");
                scanf("%f", &value);

                result = (value * 9 / 5) + 32;

                printf("Celsius = %.2f\n", value);
                printf("Fahrenheit = %.2f\n", result);
                break;


            case 10:
                printf("\nEnter temperature in Fahrenheit: ");
                scanf("%f", &value);

                result = (value - 32) * 5 / 9;

                printf("Fahrenheit = %.2f\n", value);
                printf("Celsius = %.2f\n", result);
                break;


            case 11:
                printf("\nEnter volume in Liter: ");
                scanf("%f", &value);

                result = value * 1000;

                printf("Liter = %.2f\n", value);
                printf("Milliliter = %.2f\n", result);
                break;


            case 12:
                printf("\nEnter volume in Milliliter: ");
                scanf("%f", &value);

                result = value / 1000;

                printf("Milliliter = %.2f\n", value);
                printf("Liter = %.2f\n", result);
                break;


                case 13:
                    printf("\nEnter time in Hours: ");
                    scanf("%f", &value);

                    result = value * 60;

                    printf("Hours = %.2f\n", value);
                    printf("Minutes = %.2f\n", result);
                    break;


                case 14:
                    printf("\nEnter time in Minutes: ");
                    scanf("%f", &value);

                    result = value / 60;

                    printf("Minutes = %.2f\n", value);
                    printf("Hours = %.2f\n", result);
                    break;


            default:
                printf("\nInvalid choice. Please enter a number from 1 to 12.\n");
        }

        printf("\nDo you want to perform another conversion (y/n): ");
        scanf(" %c", &repeat);

        while(repeat != 'y' && repeat != 'Y' &&
              repeat != 'n' && repeat != 'N')
        {
            printf("Enter valid input (y/n): ");
            scanf(" %c", &repeat);
        }

    } while(repeat == 'y' || repeat == 'Y');

    printf("\nConverter closed.\n");

    return 0;
}

