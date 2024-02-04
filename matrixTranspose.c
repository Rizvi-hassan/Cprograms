#include <stdio.h>

int main()
{
    int arr[30][30], res[30][30];
    int row, col, i, j;
    printf("Enter the row and column of matrix: ");
    scanf("%d%d",&row, &col);
    printf("Enter values of matrix: \n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("Enter value: ");
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            res[j][i] = arr[i][j];
        }
    }
    printf("Original matrix is: \n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix is: \n");
    for(i = 0; i<col; i++)
    {
        for(j = 0; j<row; j++)
        {
            printf("%5d",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}