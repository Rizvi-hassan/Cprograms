#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[20] = "Rizvi hassan";
    char ch2[20] = "ansari";
    char *i = strstr(ch1, ch2);
    printf("%c", *i);


}
