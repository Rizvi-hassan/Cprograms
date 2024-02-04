#include <stdio.h>

void swap(int *, int *);

int main()
{
    int no1, no2;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &no1, &no2);
    printf("Before swap: no1 = %d, no2 = %d\n", no1, no2);
    swap(&no1, &no2);
    printf("After swap: no1 = %d, no2 = %d\n", no1, no2);

    return 0;
}
void swap(int *no1, int *no2)
{
    *no1 = *no1 + *no2;
    *no2 = *no1 - *no2;
    *no1 = *no1 - *no2;
}