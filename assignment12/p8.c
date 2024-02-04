#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int size1, size2, i;
    printf("Enter first string: ");
    scanf("%[^\n]s", str1);
    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);
    for(size1 = 0; str1[size1] != '\0'; size1++);
    for(size2 = 0; str1[size2] != '\0'; size2++);
    if(size1 == size2)
    {
        for( i = 0; i<size1; i++)
        {
            if(str1[i] != str2[i])
                break;
        }
        if(i == size1)
            printf("The two strings are same.");
        else
            printf("The two strings are not same.");
    }
    else
        printf("The two stings are not same.");
    return 0;
}