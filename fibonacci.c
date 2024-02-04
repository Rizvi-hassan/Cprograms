#include <stdio.h>

int main()
{
    int no, a = 0, b = 1;
    printf("Enter a number: ");
    scanf("%d", &no);
    for(int i = 1; i<= no; i++)
    {
        printf("%d ", a);
        b = a + b;
        a = b - a;
    }
    return 0;
}