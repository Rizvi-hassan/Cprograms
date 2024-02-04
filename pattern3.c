#include <stdio.h>

int main()
{
    int row , col, range;
    char ch = 'a';
    printf("How many lines do you want: ");
    scanf("%d", &range);
    for (row = 1; row <= range;row++)
    {
        for ( col = 0; col < row; col++)
        {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
        
    }
    
    return 0;
}