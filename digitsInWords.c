#include <stdio.h>
#include <math.h>

int main()
{
    int no, digit, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    temp = no;
    while (temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    
    while (rev != 0)
    {
        digit = rev % 10;
        switch (digit)
        {
        case 1:
            printf("ONE ");
            break;
        case 2:
            printf("TWO ");
            break;
        case 3:
            printf("THREE ");
            break;
        case 4:
            printf("FOUR ");
            break;
        case 5:
            printf("FIVE ");
            break;
        case 6:
            printf("SIX ");
            break;
        case 7:
            printf("SEVEN ");
            break;
        case 8:
            printf("EIGHT ");
            break;
        case 9:
            printf("NINE ");
            break;
        
        default:
            printf("ZERO ");

        }
        rev = rev / 10;
    }
    printf("\n");
    
    return 0;
}