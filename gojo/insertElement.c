#include <stdio.h>

void insertElement(int [], int);

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
    insertElement(arr, size);
    printf("\nThe new array is: \n");
    size++;
    for(i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void insertElement(int arr[], int size)
{
    int i, item, pos;
    printf("\nEnter the element and index to insert in array: ");
    scanf("%d%d", &item, &pos);
    size++;
    for(i = size-1; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[i] = item;
    
}