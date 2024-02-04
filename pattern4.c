#include <stdio.h>

int main()
{
    int row, col, no, range;
    printf("How many lines do you want: ");
    scanf("%d", &range);
    for ( row = 1; row <= range; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            no = !(col % 2);
            printf("%d ", no);
            no = (no == 1)? 0:1;
        }
        printf("\n");
    }
    
    return 0;
}