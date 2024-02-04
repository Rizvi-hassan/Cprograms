#include <stdio.h>
#include<stdlib.h>

int main()
{
    int l, i, l_new=0, *arr, digit;
    char *new;
    scanf("%d", &l);
    arr = (int *)calloc(l, sizeof(int));
    new = (char *)calloc(l, sizeof(char));
    for(i = 0; i<l; i++)
    {
        scanf("%d", arr+i);
    }
    

    i = l-1;
    while (i >= 0)
    {
        digit = *(arr+i);
        if (digit != 0){
            *(new+l_new) = digit + 96;
            l_new++;
            i--;
        }
        else{
            *(new+l_new) = (*(arr+i-2) * 10 + *(arr+i-1)) + 96;
            l_new++;
            i -= 3;
        }
    }
    printf("%s", new);
    return 0;
}