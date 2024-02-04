#include <stdio.h>

int sumArr(int [], int);

int main()
{
    int arr[40], size, i, sum;
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
    sum = sumArr(arr, size);
    printf("\nThe sum of the elements is: %d", sum);
    return 0;
}

int sumArr(int arr[], int size)
{
    int i, sum = 0;
    for(i = 0; i<size; i++)
    {
        sum += arr[i];
    }
    return sum;
}