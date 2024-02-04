#include <stdio.h>

void toUpper(char *);

int main()
{
    char str[30];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Original string is: %s", str);
    toUpper(str);
    printf("\nNew string is: %s", str);

    return 0;
}

void toUpper(char *str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
}