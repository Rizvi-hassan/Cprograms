#include <stdio.h>
main()
{
    int start, end, no, val, count;
    printf("Enter the starting and ending value: ");
    scanf("%d%d", &start, &end);
    for (val = start; val <= end; val++)
    {
        count = 0;
        for (no = 2; no < val; no++)
        {
            if (val % no == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            printf("%d ", val);
    }
    printf("\n");
}