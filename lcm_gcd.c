#include <stdio.h>
void LCM(int *, int *, int *);

int main()
{
    int no1, no2, lcm;
    printf("Enter the two numbers: ");
    scanf("%d%d", &no1, &no2);

    LCM(&no2, &no1, &lcm);
    printf("LCM = %d", lcm);
    return 0;
}

void LCM(int *n1, int *n2, int *lcm)
{
    int no1 = *n1, no2 = *n2;
    *lcm = no1 * no2;
    while (no1 != no2)
    {
        if (no1 > no2)
            no1 = no1 - no2;
        else
            no2 = no2 - no1;
    }
    (*lcm) /= no1;
}