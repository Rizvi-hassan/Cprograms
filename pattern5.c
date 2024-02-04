#include <stdio.h>

int main()
{
    int row, col, range, no = 1;
    printf("Enter the number of row: ");
    scanf("%d", &range);
    for ( row = 0; row < range; row++)
    {
        for ( col = 0; col <= row; col++)
        {
            printf("%d ", no);
            no++;
        }
        printf("\n");
    }
    
    return 0;
}