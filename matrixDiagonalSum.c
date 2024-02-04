#include <stdio.h>

int main()
{
    int arr[30][30], sum = 0;
    int row, col, min, i, j;
    printf("Enter the row and column of matrix:");
    scanf("%d%d", &row, &col);
    min = (row < col)? row : col;
    printf("Enter the values of matrix: \n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("Enter value: ");
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i<min; i++)
    {
        sum += arr[i][i];
    }
    printf("The matrix is: \n");
    for(i = 0; i< row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    printf("The sum of diagonal elements is: %d", sum);

    return 0;
}