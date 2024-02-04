#include <stdio.h>

void sortArr(int *, int *);

int main()
{
    int arr[30], size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    
    printf("Array before sorting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    sortArr(&size, arr);
    printf("\nArray after sorting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void sortArr(int *size, int *arr)
{
    int i, j, temp;
    for(i = 0; i<(*size)-1; i++)
    {
        for(j = 0; j<(*size)-i-1; j++)
        {
            if(*(arr+j) > *(arr+j+1))
            {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}