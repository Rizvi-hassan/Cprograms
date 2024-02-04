#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char c1;
    char c2[100], c3[100];
    scanf("%c", &c1); 
    scanf("%s", &c2);
    scanf("\n");
    scanf("%[^\n]%*c", &c3); 
    printf("%c\n%s\n%s", c1, c2, c3);
    return 0;
}