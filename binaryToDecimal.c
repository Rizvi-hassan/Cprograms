#include <stdio.h>
#include <math.h>

int main()
{
    int no, digit, res = 0, i = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    while (no != 0)
    {
        digit = no % 10;
        res = res + digit * pow(2, i);
        i++;
        no /= 10;
    }
    printf("Its decimal equivalent: %d", res);
    
    return 0;
}