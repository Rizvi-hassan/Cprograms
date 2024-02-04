#include <stdio.h>

int main()
{
    int year, month, days;
    scanf("%d", &days);
    year = days / 365;
    // printf("%d\n", days);
    days = days % 365;
    month = days / 30;
    days = days % 30;
    printf("year: %d Month: %d Days: %d", year, month, days);
    return 0;
}