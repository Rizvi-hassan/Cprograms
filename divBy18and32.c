#include <stdio.h>

int main()
{
    int no = 999;
    while (no > 32)
    {
        if(no % 18 == 0 && no % 32 == 0)
            break;
        no--;
    }
    printf("The number is %d", no);
    return 0;
}