#include <stdio.h>

void inputMatrix(int [][50], int, int);

void printMatrix(int [][50], int, int);

void multiply(int [][50], int [][50], int [][50], int, int, int);

int main()
{
    int mat1[50][50], mat2[50][50], res[50][50], row1, col1, row2, col2;
    printf("Enter the row and column of first matrix: ");
    scanf("%d%d", &row1, &col1);
    printf("Enter the row and column of secon matrix: ");
    scanf("%d%d", &row2, &col2);
    if(row2 != col1)
    {
        printf("Matrix multiplication is not possible");
    }
    else
    {
        printf("Enter the elements of first matrix: \n");
        inputMatrix(mat1, row1, col1);
        printf("Enter the elements of second matrix: \n");
        inputMatrix(mat2, row2, col2);
        multiply(mat1, mat2, res, row1, col1, col2);
        printf("\nThe first matrix is: \n");
        printMatrix(mat1, row1, col1);
        printf("\nThe second matrix is: \n");
        printMatrix(mat2, row2, col2);
        printf("\nThe multiplicaton matrix is: \n");
        printMatrix(res, row1, col2);
    }
    return 0;
}

void inputMatrix(int mat[][50], int row, int col)
{
    int i, j;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("Enter element: ");
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[][50], int row, int col)
{
    int i, j;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

void multiply(int mat1[][50], int mat2[][50], int res[][50], int row1, int col1, int col2)
{
    int i, j, k;
    for(i = 0; i<row1; i++)
    {
        for(j = 0; j<col2; j++)
        {
            res[i][j] = 0;
            for(k = 0; k<col1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
