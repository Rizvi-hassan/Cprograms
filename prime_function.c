#include <stdio.h>
int pc(int x)
{
    int count = 0, i;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
            count++;
    }
    if (count == 2)
        return 1;

    else
        return 0;
}
void main()
{
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    if (pc(x))

        printf("%d is a prime number\n", x);

    else
        printf("%d is a composite number\n", x);
}