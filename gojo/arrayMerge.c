#include <stdio.h>

void mergeArr(int [], int [], int [], int, int);

int main()
{
    int arr1[30], arr2[30], result[40], size1, size2, i;
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    for(i = 0; i<size1; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr1[i]);
    }
    
    printf("\nEnter the size of second array: ");
    scanf("%d", &size2);
    for(i = 0; i<size2; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr2[i]);
    }
    printf("\nThe first array is: ");
    for(i = 0; i<size1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nThe Second array is: ");
    for(i = 0; i<size2; i++)
    {
        printf("%d ", arr2[i]);
    }
    mergeArr(arr1, arr2, result, size1, size2);
    printf("\nThe Resultant array is: ");
    for(i = 0; i<size1+size2; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}

void mergeArr(int arr1[], int arr2[], int arr3[], int s1, int s2)
{
    int i;
    for(i = 0; i<s1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i = s1; i<s1+s2; i++)
    {
        arr3[i] = arr2[i-s1];
    }

}
