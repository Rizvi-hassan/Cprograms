#include <stdio.h>

int main()
{
    int arr1[30][30], arr2[30][30], res[30][30];
    int row1, col1, row2, col2, i, j;
    printf("Enter the row and column of first matrix: ");
    scanf("%d%d", &row1, &col1 );
    
    printf("Enter the row and column of second matrix: ");
    scanf("%d%d", &row2, &col2 );
    if(row1 != row2 || col1 != col2)
    {
        printf("Matrix addition is not possible.");
    }
    else{
        printf("Enter the values of first matrix: \n");
        for ( i = 0; i < row1; i++)
        {
            for(j = 0; j<col1; j++)
            {
                printf("Enter value: ");
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("Enter the values of second matrix: \n");
        for ( i = 0; i < row1; i++)
        {
            for(j = 0; j<col1; j++)
            {
                printf("Enter value: ");
                scanf("%d", &arr2[i][j]);
            }
        }
        
        for ( i = 0; i < row1; i++)
        {
            for(j = 0; j<col1; j++)
            {
                res[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        printf("First matrix:\n");
        for ( i = 0; i < row1; i++)
        {
            for(j = 0; j<col1; j++)
            {
                printf("%5d", arr1[i][j]);
            }
            printf("\n");
        }
        printf("Second matrix:\n");
        for ( i = 0; i < row1; i++)
        {
            for(j = 0; j<col1; j++)
            {
                printf("%5d", arr2[i][j]);
            }
            printf("\n");
        }
        printf("Sum of 2 matrix:\n");
        for ( i = 0; i < row1; i++)
        {
            for(j = 0; j<col1; j++)
            {
                printf("%5d", res[i][j]);
            }
            printf("\n");
        }
        
    }

    return 0;
}