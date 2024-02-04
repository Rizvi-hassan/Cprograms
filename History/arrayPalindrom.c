#include <stdio.h>

int main()
{
    int arr[50], i, size, flag = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for(i = 0; i<size; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<size/2; i++)
    {
        if(arr[i] != arr[size-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("The array is not palindrome");
    }
    else
    {
        printf("The array is palindrome");
    }
    return 0;
}