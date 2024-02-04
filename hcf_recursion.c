#include <stdio.h>

// void HCF(int *a, int *b)
// {
    
//     if(*a > *b)
//     {
//         *a = *a - *b;
//         HCF(a, b);
//     }
//     else if(*a < *b)
//     {
//         *b = *b - *a;
//         HCF(a, b );
//     }
// }

int HCF(int a, int b)
{
    if(a > b)
        return HCF(a-b, b);
    else if (a < b)
        return HCF(a, b-a);
    else
        return a;
}

int main()
{
    int a , b , hcf, lcm;
    scanf("%d%d",&a,&b);
    hcf = HCF(a, b);
    lcm = a * b/hcf;
    printf("hcf = %d lcm = %d", hcf, lcm);
    return 0;
}