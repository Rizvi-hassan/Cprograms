#include <stdio.h>

void sortStr(char *);

int main()
{
    char str[30];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Original string is: %s", str);
    sortStr(str);
    printf("\nSorted string is: %s", str);
    return 0;
}

void sortStr(char *str)
{
    int size, i, j;
    char temp;
    for(size = 0; str[size] != '\0'; size++);
    for(i = 0; i < size-1; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            if(str[j] > str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}