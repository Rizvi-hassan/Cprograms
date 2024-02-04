#include <stdio.h>
#include <stdlib.h>

void clockwise(int[], int);
void anticlockwise(int[], int);

int main()
{
    int choice, arr[50], size, i, count;
    while (1)
    {
        printf("***WELCOME***\n1.To input values of array.\n2.To display array elements.\n3.To shift clockwise\n4.To shift anticlockwise\n0.To exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the size of the array: ");
            scanf("%d", &size);
            for (i = 0; i < size; i++)
            {
                printf("Enter the %d element: ", i);
                scanf("%d", &arr[i]);
            }
            break;
        case 2:
            printf("\nThe array elements are: \n");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n\n**********************\n");
            break;

        case 3:
            printf("How many times you want to shift: ");
            scanf("%d", &count);
            for (i = 0; i < count; i++)
            {
                clockwise(arr, size);
            }

            printf("\nArray shifted %d times in clockwise direction\n", count);
            break;

        case 4:
            printf("How many times you want to shift: ");
            scanf("%d", &count);
            for (i = 0; i < count; i++)
            {
                anticlockwise(arr, size);
            }

            printf("\nArray shifted %d times in anticlockwise direction\n", count);
            break;

        case 0:
            exit(0);

        default:
            printf("Wrong input!!");
        }
    }

    return 0;
}

void clockwise(int arr[], int size)
{
    int temp = arr[size - 1];
    int i;
    for (i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void anticlockwise(int arr[], int size)
{
    int temp = arr[0];
    int i;
    for (i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}