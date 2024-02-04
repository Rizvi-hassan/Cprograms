#include <stdio.h>

int search(int, int, int *);

int main()
{
    int arr[30], size, item, count, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for(i = 0; i<size; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d", &item);
    count = search(size, item, arr);
    if(count == 0)
    {
        printf("%d is not present in the array.", item);
    }
    else{
        printf("%d is present %d times in the array.", item, count);
    }
    return 0;
}

int search(int size, int item, int *arr)
{
    int count = 0, i;
    for(i = 0; i<size; i++)
    {
        if(item == *(arr+i))
            count++;
        
    }
    return count;
}