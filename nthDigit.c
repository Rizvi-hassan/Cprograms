#include <stdio.h>
#include <math.h>

int main()
{
    int no, digit, val;
    printf("Enter a number: ");
    scanf("%d", &no);
    printf("Enter the value of n: ");
    scanf("%d", &val);
    digit = no / pow(10, val-1);
    digit = digit % 10;
    printf("The %d number of %d is %d", val, no, digit);
    return 0;
}