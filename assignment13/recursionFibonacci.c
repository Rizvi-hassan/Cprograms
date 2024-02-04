#include <stdio.h>

void fibonacci(int, int, int);

int main()
{
    int no;
    printf("How many digits of fibonacci you want to print: ");
    scanf("%d", &no);
    fibonacci(no, 0, 1);
    return 0;
}

void fibonacci(int no, int a, int b)
{
    if(no != 0)
    {
        printf("%d ", a);
        fibonacci(no-1, b, a+b);
    }
}