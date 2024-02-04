#include <stdio.h>

int main()
{
    int row , col, range;
    char ch;
    printf("How many lines do you want: ");
    scanf("%d", &range);
    for (row = 1; row <= range;row++)
    {
        ch = 'A';
        for ( col = 0; col < row; col++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
        
    }
    
    return 0;
}