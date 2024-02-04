#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "RizviA";
    char str2[] = "Rizvia";
    int n = strcmp(str2, str1);
    printf("%d", n);
    return 0;
}