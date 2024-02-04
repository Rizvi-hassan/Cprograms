// #include <stdio.h>

// int main()
// {
//     int row, col, range, inc = 1, no = 0, digit;
//     printf("Enter the range: ");
//     scanf("%d", &range);
//     for ( row = 1; row <= range; row++)
//     {
//         if (row % 2 != 0)
//         {
//             inc = -1;
//             digit = no + row;
//         }
//         else
//         {
//             inc = 1;
//             digit = no+1;
//         }
//         for ( col = 1; col <= row; col++)
//         {
//             printf("%d ", digit);
//             digit = digit + inc;
//             no++;
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// V2
#include <stdio.h>

int main()
{
    int row, col, no=0, k, range;
    printf("Enter the range: ");
    scanf("%d", &range);
    for ( row = 1; row <= range; row++)
    {
        k = no+row;
        for ( col = 1; col <= row; col++)
        {
            no++;
            if (row % 2 != 0)
            {
                printf("%d ", no);
            }
            else
            {
                printf("%d ", k);
                k--;
            }
        }
        printf("\n");
        
    }
    
    return 0;
}