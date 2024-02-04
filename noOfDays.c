#include <stdio.h>

void find_day(int *, int *, int);
void leap(int *, int *);

int main()
{
    int month, year, day, isLeap;
    printf("Enter month and year: ");
    scanf("%d%d", &month, &year);
    leap(&year, &isLeap);
    if (isLeap)
    {
        find_day(&month, &day, 29);
    }
    else
    {
        find_day(&month, &day, 28);
    }
    printf("Number of days: %d", day);
    return 0;
}

void find_day(int *month, int *day, int feb)
{
    if (*month <= 7)
        *day = (*month == 2) ? feb : ((*month) % 2 == 0) ? 30 : 31;
    else
        *day = ((*month) % 2 == 0) ? 31 : 30;
}

void leap(int *year, int *isLeap)
{
    if( ((*year)%4 == 0 && (*year) % 100 != 0) || ((*year) % 400 == 0))
        *isLeap =  1;
    else
        *isLeap = 0;
}