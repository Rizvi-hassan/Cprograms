#include <stdio.h>

int main()
{
    FILE *fp, *vowel, *consonant;
    char ch;
    fp = fopen("file1.txt", "r");
    vowel = fopen("vowel.txt", "w");
    consonant = fopen("consonant.txt", "w");
    if (fp == NULL)
    {
        printf("File does not exist.");
    }
    else
    {
        while (1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
                break;
            if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
            {
                if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                    fputc(ch, vowel);
                }
                else
                {
                    fputc(ch, consonant);
                }
            }
        }
        fclose(vowel);
        fclose(consonant);
        printf("Contents of vowel.txt are: \n");
        vowel = fopen("vowel.txt", "r");
        while (1)
        {
            ch = fgetc(vowel);
            if (ch == EOF)
            {
                break;
            }
            printf("%c", ch);
        }
        printf("\nContets of consonant.txt are: \n");
        consonant = fopen("consonant.txt", "r");
        while (1)
        {
            ch = fgetc(consonant);
            if (ch == EOF)
                break;
            printf("%c", ch);
        }
    }
    fclose(vowel);
    fclose(consonant);
    fclose(fp);

    return 0;
}