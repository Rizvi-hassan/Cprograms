#include <stdio.h>

int main()
{
    int no = 2;
    switch (no+1)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;

    
    default:
        printf("Default");
        break;
    }
    return 0;
}