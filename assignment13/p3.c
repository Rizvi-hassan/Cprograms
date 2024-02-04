#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp, *even, *odd;
    int no;
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");
    fp = fopen("file2.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        while (1)
        {
            no = getw(fp);
            if (no == EOF)
                break;
            else if(no % 2 == 0)
            {
                putw(no, even);
            }
            else
            {
                putw(no, odd);
            }
        }
        fclose(even);
        fclose(odd);
        printf("The contents of even.txt are: \n");
        even = fopen("even.txt", "r");
        while(1)
        {
            no = getw(even);
            if(no == EOF)
                break;
            else
                printf("%d\t", no);
        }
        printf("\nThe contents of odd.txt are: \n");
        odd = fopen("odd.txt", "r");
        while(1)
        {
            no = getw(odd);
            if(no == EOF)
                break;
            else
                printf("%d\t", no);
        }
    }
    fclose(fp);
    fclose(even);
    fclose(odd);
    return 0;
}