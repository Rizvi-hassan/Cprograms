#include <stdio.h>
#include <math.h>

int main()
{
    int range, x, val, temp;
    float fact, sum = 0.0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the range: ");
    scanf("%d", &range);
    for(val = 1; val <= range; val++)
    {
        fact = 1.0;
        temp = val*2-1;
        while (temp >1)
        {
            fact *= temp;
            temp--;
        }
        sum += pow(-1, val+1) * pow(x, val*2-1) / fact;
    }
    printf("Sum : %f", sum);
    
    
    return 0;

}