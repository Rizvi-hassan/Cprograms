#include <stdio.h>

void reverse(char [], char []);

int main()
{
    char str[30], rev[30];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("The original string is: %s\n", str);
    reverse(str, rev);
    printf("The reversed string is: %s\n", rev);
    return 0;
}

void reverse(char str[], char rev[])
{
    int i, size;
    for(size = 0; str[size] != '\0'; size++);
    for(i = 0; i <size; i++)
    {
        rev[i] = str[size-i-1];
    }
    rev[i] = '\0';
}