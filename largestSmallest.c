#include <stdio.h>

int main()
{
    int arr[50], size, i, max, min;
    float mean;
    printf("Enter size");
    scanf("%d", &size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for ( i = 1; i < size; i++)
    {
            if (arr[i] > max)
                max = arr[i];
            else if (arr[i] < min)
                min = arr[i];
    }
    printf("Max = %d and min = %d", max, min);
    
    return 0;
}