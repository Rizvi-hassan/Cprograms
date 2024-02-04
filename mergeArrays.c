#include <stdio.h>

int main()
{
    int arr1[30], arr2[30], arr3[50], size1, size2, i;
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    for(i = 0; i<size1; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    for(i = 0; i<size2; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr2[i]);
    }
    printf("First array is: \n");
    for(i = 0; i<size1; i++)
        printf("%d ", arr1[i]);
    printf("\nSecond array is:\n");
    for(i = 0; i<size2; i++)
        printf("%d ", arr2[i]);

    for(i = 0; i<size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i = size1; i <size1+size2; i++)
    {
        arr3[i] = arr2[i-size1];
    }
    printf("\nThe merger of both arrays is: \n");
    for(i = 0; i<size1+size2; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}