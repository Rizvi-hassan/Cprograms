#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int)*3);
    int *ptr1, index;
    *ptr = 10;
    *(ptr+1) = 20;
    *(ptr+2) = 30;
    ptr1 = realloc(ptr);
    
    for(index = 0; index < 5; index++)
    {
        printf("%d ", ptr1[index]);
    }
    // printf("%d", sizeof(ptr));
    return 0;
}