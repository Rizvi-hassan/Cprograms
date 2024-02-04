#include <stdio.h>

void deleteElement(int [], int);

int main()
{
    int arr[50], size, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for(i = 0; i<size; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);

    }
    
    printf("Original array is: \n");
    for(i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    deleteElement(arr, size);
    printf("\nThe new array is: \n");
    size--;
    for(i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void deleteElement(int arr[], int size)
{
    int i, pos;
    printf("\nEnter teh index whose element is to be deleted: ");
    scanf("%d", &pos);
    size--;
    for(i = pos; i<size; i++)
    {
        arr[i] = arr[i+1];
    }
    
}