#include <stdio.h>

int main()
{
    int choice;
    float base, height, side, side1, side2;
    float length, breadth;
    float diagonal1, diagonal2;
    float radius, volume;
    char repeat;

    do
    {
        printf("\n========== SHAPES CALCULATOR ==========\n");

        printf("\n--- 2D SHAPES ---\n");
        printf("1. Triangle\n");
        printf("2. Rectangle\n");
        printf("3. Square\n");
        printf("4. Rhombus\n");
        printf("5. Parallelogram\n");

        printf("\n--- 3D SHAPES (VOLUME) ---\n");
        printf("6. Cube\n");
        printf("7. Cuboid\n");
        printf("8. Cylinder\n");
        printf("9. Sphere\n");
        printf("10. Cone\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // ---------- TRIANGLE ----------
            case 1:
                printf("\nEnter base: ");
                scanf("%f", &base);

                printf("Enter height: ");
                scanf("%f", &height);

                printf("Enter first side: ");
                scanf("%f", &side1);

                printf("Enter second side: ");
                scanf("%f", &side2);

                printf("\nArea = %.2f\n", 0.5 * base * height);
                printf("Perimeter = %.2f\n", base + side1 + side2);
                break;


            // ---------- RECTANGLE ----------
            case 2:
                printf("\nEnter length: ");
                scanf("%f", &length);

                printf("Enter breadth: ");
                scanf("%f", &breadth);

                printf("\nArea = %.2f\n", length * breadth);
                printf("Perimeter = %.2f\n", 2 * (length + breadth));
                break;


            // ---------- SQUARE ----------
            case 3:
                printf("\nEnter side: ");
                scanf("%f", &side);

                printf("\nArea = %.2f\n", side * side);
                printf("Perimeter = %.2f\n", 4 * side);
                break;


            // ---------- RHOMBUS ----------
            case 4:
                printf("\nEnter side: ");
                scanf("%f", &side);

                printf("Enter first diagonal: ");
                scanf("%f", &diagonal1);

                printf("Enter second diagonal: ");
                scanf("%f", &diagonal2);

                printf("\nArea = %.2f\n", 0.5 * diagonal1 * diagonal2);
                printf("Perimeter = %.2f\n", 4 * side);
                break;


            // ---------- PARALLELOGRAM ----------
            case 5:
                printf("\nEnter base: ");
                scanf("%f", &base);

                printf("Enter height: ");
                scanf("%f", &height);

                printf("Enter side: ");
                scanf("%f", &side);

                printf("\nArea = %.2f\n", base * height);
                printf("Perimeter = %.2f\n", 2 * (base + side));
                break;


            // ---------- CUBE ----------
            case 6:
                printf("\nEnter side of cube: ");
                scanf("%f", &side);

                volume = side * side * side;

                printf("\nVolume of Cube = %.2f\n", volume);
                break;


            // ---------- CUBOID ----------
            case 7:
                printf("\nEnter length: ");
                scanf("%f", &length);

                printf("Enter breadth: ");
                scanf("%f", &breadth);

                printf("Enter height: ");
                scanf("%f", &height);

                volume = length * breadth * height;

                printf("\nVolume of Cuboid = %.2f\n", volume);
                break;


            // ---------- CYLINDER ----------
            case 8:
                printf("\nEnter radius: ");
                scanf("%f", &radius);

                printf("Enter height: ");
                scanf("%f", &height);

                volume = 3.14159 * radius * radius * height;

                printf("\nVolume of Cylinder = %.2f\n", volume);
                break;


            // ---------- SPHERE ----------
            case 9:
                printf("\nEnter radius: ");
                scanf("%f", &radius);

                volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;

                printf("\nVolume of Sphere = %.2f\n", volume);
                break;


            // ---------- CONE ----------
            case 10:
                printf("\nEnter radius: ");
                scanf("%f", &radius);

                printf("Enter height: ");
                scanf("%f", &height);

                volume = (1.0 / 3.0) * 3.14159 * radius * radius * height;

                printf("\nVolume of Cone = %.2f\n", volume);
                break;


            default:
                printf("\nInvalid choice. Please enter 1 to 10.\n");
        }

        printf("\nDo you want to perform another calculation (y/n): ");
        scanf(" %c", &repeat);

        while(repeat != 'y' && repeat != 'Y' &&
              repeat != 'n' && repeat != 'N')
        {
            printf("Enter valid input (y/n): ");
            scanf(" %c", &repeat);
        }

    } while(repeat == 'y' || repeat == 'Y');

    printf("\nProgram closed.\n");

    return 0;
}