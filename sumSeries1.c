// series: 1/1! + 1/2! + ...... + 1/n!
#include <stdio.h>

int main()
{
    int n, digit = 1, temp;
    float sum = 0.0, fact;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(digit <= n)
    {
        fact = 1.0;
        temp = digit;
        while (temp > 1)
        {
            fact *= temp;
            temp--;
        }
        // printf("1/%d! + ", digit);
        sum += 1/fact;
        digit++;
    }
    printf("\nSum is %f", sum);
    return 0;
}