#include <stdio.h>

int main()
{
    int arr[50], size, i, sum = 0;
    float mean;
    printf("Enter size");
    scanf("%d", &size);
    for ( i = 0; i < size; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    mean = sum / size;
    printf("Mean of %d numbers is %f", size, mean);
    
    return 0;
}