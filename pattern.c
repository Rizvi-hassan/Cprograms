#include <stdio.h>

int main()
{
    int n, i, j;
    char ch = 64;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%c ", ++ch);
    for (i = n - 1; i >= 1; i--)
        printf("%c ", --ch);
    printf("\n");
    for (i = n - 1; i >= 1; i-- )
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        for (j = 1; j < (n - i) * 2; j++)
        {
            printf("  ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%c ", --ch);
        }
        printf("\n");
    }
    return 0;
}