#include <stdio.h>
#include <math.h>

int main()
{
    int no, nosq, rev = 0, revsq = 0, res, temp;
    printf("Entere a number: ");
    scanf("%d", &no);
    temp = no;
    while (temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    nosq = no * no;
    temp = nosq;
    while (temp != 0)
    {
        revsq = revsq * 10 + (temp % 10);
        temp /= 10;
    }
    res = sqrt(revsq);
    if (rev == res)
        printf("%d satisfies the condition\n", no);
    else
        printf("%d does not satisfy the condition\n", no);
    
    return 0;
}
