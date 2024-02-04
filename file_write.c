#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("abc.txt", "w");
    printf("Enter text: \n");
    while (1)
    {
        scanf("%c", &ch);
        if(ch == '~')
            break;
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("abc.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        printf("%c", ch);
    }
    
    return 0;
}