#include <stdio.h>

int main()
{
    int mat1[30][30], mat2[30][30], res[30][30];
    int row1, col1, row2, col2, i, j, k;
    printf("Enter the row and column of first matrix: ");
    scanf("%d%d", &row1, &col1);
    printf("Enter values of first matrix: \n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col1; j++)
        {
            printf("Enter value: ");
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter the row and column of second matrix: ");
    scanf("%d%d", &row2, &col2);
    printf("Enter values of second matrix: \n");
    for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        {
            printf("Enter value: ");
            scanf("%d", &mat2[i][j]);
        }
    }
    if(col1 != row2)
    {
        printf("Matrix multiplication not possible");

    }
    else{
        for(i = 0; i<row1; i++)
        {
            for(j = 0; j < col2; j++)
            {
                res[i][j] = 0;
                for( k = 0; k < col1; k++)
                {
                    res[i][j] += mat1[i][k] * mat2[k][j];
                }
                
            }
        }
        printf("First matrix is:\n");
        for(i = 0; i<row1; i++)
        {
            for(j = 0; j<col1; j++)
            {
                printf("%5d", mat1[i][j]);
            }
            printf("\n");
        }
        printf("Second matrix is:\n");
        for(i = 0; i<row2; i++)
        {
            for(j = 0; j<col2; j++)
            {
                printf("%5d", mat2[i][j]);
            }
            printf("\n");
        }
        printf("Multiplication matrix is:\n");
        for(i = 0; i<row1; i++)
        {
            for(j = 0; j<col2; j++)
            {
                printf("%5d", res[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}