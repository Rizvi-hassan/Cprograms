#include <stdio.h>

int main()
{
    char str[30] ;
    printf("Enter a string: ");
    gets(str);
    puts("Hello!");
    puts(str);
    return 0;
}