#include <stdio.h>

int main()
{
    char str[100], substr[30];
    int size1, size2, i, j, count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter the substring to check: ");
    scanf(" %[^\n]s", substr);
    for(size1 = 0; str[size1] != '\0'; size1++);
    for(size2 = 0; substr[size2] != '\0'; size2++);
    for(i = 0; i < (size1 - size2 + 1) ; i++)
    {
        if(str[i] == substr[0])
        {
            for(j = 0; j< size2; j++)
            {
                if(str[j+i] != substr[j])
                {
                    break;
                }
            }
            if(j == size2)
                count++;
        }
    }
    if(count > 0)
    {
        printf("%s is present %d times in the string.", substr, count);
    }
    else{
        printf("%s is not present in the string.", substr);
    }
    return 0;
}