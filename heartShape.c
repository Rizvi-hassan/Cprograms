#include <stdio.h>

int main()
{
    int n, row, col, i, j;
    scanf("%d", row);
    n = row / 2;  // 3
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j <=n-i; j++)
            printf(" ");
        
    }
    return 0;
}