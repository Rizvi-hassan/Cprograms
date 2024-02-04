#include <stdio.h>

int main()
{
    FILE *fp;
    int count = 0, space = 0, lines = 0;
    char ch;
    fp = fopen("file1.txt", "r");
    if(fp == NULL)
        printf("File does not exist.");
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if(ch == EOF)
                break;
            else
            {
                count++;
                if(ch == ' ')
                    space++;
                else if(ch == '\n')
                    lines++;
            }
        }
        printf("Number of characters: %d\n", count);
        printf("Number of whitespaces: %d\n", space);
        printf("Number of lines: %d\n", lines+1);
    }
    fclose(fp);
    return 0;
}