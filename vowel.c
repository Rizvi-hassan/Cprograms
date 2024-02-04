#include <stdio.h>

int main()
{
    char ch, temp;
    printf("Enter a character: ");
    scanf("%c", &ch);
    temp = (ch >= 97 && ch <= 122) ? ch - 32: ch;
    ch;
    switch (temp)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a vowel", ch);
        break;
    default:
        printf("%c is not a vowel", ch);
    }
    return 0;
}