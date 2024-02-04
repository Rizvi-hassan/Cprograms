#include <stdio.h>

void inputMatrix(int [][50], int, int);

void printMatrix(int [][50], int, int);

void transpose(int [][50], int [][50], int, int);

int main()
{
    int mat1[50][50], mat2[50][50], row, col;
    printf("Enter the row and column of matrix: ");
    scanf("%d%d", &row, &col);
    printf("Enter elements of matrix: \n");
    inputMatrix(mat1, row, col);
    printf("\nThe original matrix is: \n");
    printMatrix(mat1, row, col);
    transpose(mat1, mat2, row, col);
    printf("\nThe transpose matrix is: \n");
    printMatrix(mat2, col, row);
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

void transpose(int mat1[][50], int mat2[][50], int row, int col)
{
    int i, j;
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            mat2[j][i] = mat1[i][j];
        }
    }
}
