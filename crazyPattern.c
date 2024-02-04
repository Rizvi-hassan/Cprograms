#include <stdio.h>

int main()
{
    int i, j, k = 0, n, l;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            k = 0;
            for(l = 1; l <= j; l++)
                k += (n - l + 1);
            // printf("k = %d", k);
            if(j % 2 == 0)
                printf("%d ", k-i+j);
            else
                printf("%d ", k-n+i);
        }
        printf("\n");
    }
    return 0;
}