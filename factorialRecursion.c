#include <stdio.h>

void factorial(int *, int *);

int main()
{
    int no, res = 1;
    printf("Enter a number: ");
    scanf("%d", &no);
    factorial(&no, &res);
    printf("Factorial of %d is %d", no, res);
    return 0;
}

void factorial(int *no, int *fact)
{
    if (*no != 1)
    {
        *fact = (*no) * (*fact);
        *no -= 1;
        factorial(no, fact);
    }
    
}