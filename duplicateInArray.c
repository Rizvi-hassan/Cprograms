#include <stdio.h>

int main()
{
    int arr[30], size, i, j, flag = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    for(i = 0; i<size; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<size-1; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
            
        }
    }
    if (flag)
    {
        printf("Array contains duplicate elements");

    }
    else{
        printf("Array does not contain duplicate elements");
    }
    
    return 0;
}