#include <stdio.h>
int main()
{
    int temp, arr1[30], index, size, arr2[30], i, j, flag = 1;
    printf("Enter the size of array ");
    scanf("%d", &size);
    for (index = 0; index < size; index++)
    {
        printf("Enter the elements of array ");
        scanf("%d", &arr1[index]);
    }
    i = 0, j = size - 1;
    while (i < j)
    {
        if(arr1[i] != arr1[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    
    if (flag)
    {
        printf("The array is pallindrome\n");
    }
    else
    {
        printf("They array is not pallindrome\n");
    }
}
