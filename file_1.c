#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("file2.txt", "r");
    if (ptr == NULL)
    {
        printf("File not found");
        exit(1);
    }
    else
    {
        while (1)
        {
            ch = fgetc(ptr);
            if(ch == EOF)
            {
                break;
            }
            printf("%c", ch);
        }
    }
    fclose(ptr);
    return 0;
}