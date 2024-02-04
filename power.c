#include <stdio.h>

void power(int *, int *, float *);

int main()
{
    int base, p;
    float res = 1.0;
    printf("Enter the base and power value : ");
    scanf("%d%d", &base, &p);
    power(&base, &p, &res);
    printf("%d to the power %d is %f", base, p, res);
    return 0;
}

void power(int *base, int *pow, float *res)
{
    int p = *pow;
    if(p >= 0)
    {
        while (p != 0)
        {
            (*res) *= (*base);
            p--;
        }
    }
    else
    {
        while (p != 0)
        {
            (*res) /= (*base);
            p++;
        }
    }

}