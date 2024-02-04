#include <stdio.h>

int Sum(int no);

int main()
{
    int no, res;
    printf("Enter a numeber: ");
    scanf("%d", &no);
    res = Sum(no);
    printf("The sum of the digits of %d is %d", no, res);
    return 0;
}

int Sum(int no)
{
    if(no == 0)
        return 0;
    else
    {
        return (no%10) + Sum( no/10);
    }
}