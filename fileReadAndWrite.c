#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");
    if(fp1 == NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp1);
            if(ch == EOF)
            {
                break;
            }
            else
            {
                fputc(ch, fp2);
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    printf("The contents of copied file are: \n");
    fp2 = fopen(argv[2], "r");
    while (1)
    {
        ch = fgetc(fp2);
        if(ch == EOF)
        {
            break;
        }
        else
        {
            printf("%c", ch);
        }
    }
    fclose(fp2);
    return 0;
}
