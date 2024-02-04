#include <stdio.h>

int main()
{
    int arr[30][30],row, col, i, j, sum;
    printf("Enter the row and column of matrix: ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements of matrix:\n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("Enter element: ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix is :\n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    printf("Sum of rows: \n");
    for(i = 0; i<row; i++)
    {
        sum = 0;
        for ( j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of row %d is %d\n", i+1, sum);
    }
    printf("Sum of columns:\n");
    for(j = 0; j<col; j++)
    {
        sum = 0;
        for(i = 0; i<row; i++)
        {
            sum += arr[i][j];
        }
        printf("Sum of column %d is %d\n", j+1, sum);
    }
    return 0;
}