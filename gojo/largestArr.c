#include <stdio.h>

int findMax(int [], int);

int main()
{
    int arr[40], size, i, max;
    printf("enter the size of the array: ");
    scanf("%d", &size);
    for(i = 0; i<size; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for(i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    max = findMax(arr, size);
    printf("\nThe largest element is: %d", max);
    return 0;
}

int findMax(int arr[], int size)
{
    int max = arr[0], i;
    for(i = 1; i<size; i++)
    {
        if(max < arr[i])
            max = arr[i];
        
        return max;
    }
}