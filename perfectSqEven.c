#include <stdio.h>

int main()
{
    int no, sq;
    for(no = 1; no <= 100; no++)
    {
        sq = no * no;
        if (sq % 2 == 0)
        {
            printf("%d ", sq);
        }
    }
    return 0;
}