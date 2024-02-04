#include <stdio.h>

int main()
{
    int no, res = 0, digit, i = 1;
    printf("Enter a number: ");
    scanf("%d", &no);
    printf("its binary equivalent: ");
    while (no != 0) 
    {
        digit = no % 2; 
        res += digit*i; 
        no /= 2;
        i *= 10;
    }
    printf("%d", res);
    
    return 0;
}