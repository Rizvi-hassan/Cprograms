#include <stdio.h>
#include <stdlib.h>1

int main()
{
    int arr[50][50], size, i, j, k, count, choice, temp[50][50];
    while (1)
    {
        printf("\n***WELCOME***\n1.To enter matrix\n2.To print matrix\n3.To rotate cloclwise\n4.To rotate anticlockwise\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the size of the matrix: ");
            scanf("%d", &size);
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    printf("Enter the [%d][%d] element: ", i, j);
                    scanf("%d", &arr[i][j]);
                }
            }
            break;

        case 2:
            printf("The matrix is: \n");
            for (i = 0; i < size; i++)
            {
                for (j = 0; j < size; j++)
                {
                    printf("%3d ", arr[i][j]);
                }
                printf("\n");
            }
            printf("********************\n\n");
            break;

        case 3:
            printf("How many times you want to rotate: ");
            scanf("%d", &count);
            for (k = 0; k < count; k++)
            {
                int temp[50][50];
                for (i = 0; i < size; i++)
                {
                    for (j = 0; j < size; j++)
                    {
                        temp[i][j] = arr[size - j - 1][i];
                    }
                }
                for (i = 0; i < size; i++)
                {
                    for (j = 0; j < size; j++)
                    {
                        arr[i][j] = temp[i][j];
                    }
                }
            }
            break;

        case 4:
            printf("How many times you want to rotate: ");
            scanf("%d", &count);
            for (k = 0; k < count; k++)
            {
                int i, j, temp[50][50];
                for (i = 0; i < size; i++)
                {
                    for (j = 0; j < size; j++)
                    {
                        temp[j][size - 1 - i] = arr[i][j];
                    }
                }
                for (i = 0; i < size; i++)
                {
                    for (j = 0; j < size; j++)
                    {
                        arr[i][j] = temp[i][j];
                    }
                }
            }
            break;
        case 0:
            exit(0);
        default:
            printf("Wrong Input!!");
        }
    }

    return 0;
}

