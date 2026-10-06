#include <stdio.h>

int main()
{
    char repeat;
    do
    {
        int rows, coloumns;

        printf("Enter how many elements you want in array :");
        scanf("%d", &rows);

        printf("\nEnter number of columns in the array::");
        scanf("%d", &coloumns);

        if(rows <= 0 || coloumns <= 0){
            printf("An array with this type of values cannot be created\n");
            printf("Do you want to give an another TRY!!!(y/n) ");
            scanf(" %c", &repeat);
        }
        else{
            int marks[rows][coloumns];
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < coloumns; j++)
                {
                    printf("Enter the element for the index %d(%d) :", i, j);
                    scanf("%d", &marks[i][j]);
                }
            }
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < coloumns; j++)
                {
                    printf("The value at index %d(%d) is %d\n", i, j, marks[i][j]);
                }
            }
            printf("DO You want to create another MULTI DIMENSIONAL ARRAY(y/n) : ");
            scanf(" %c", &repeat);
        }
        while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N')
        {
            printf("Do you want to create another MULTI DIMENSIONAL ARRAY(y/n) : ");
            scanf(" %c", &repeat);
        }
            
    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}
