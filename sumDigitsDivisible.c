#include <stdio.h>

int main()
{
    int no=1, sum=0, no1, temp;
    while(no<=100)
    {
        temp = no; // storing the value of no in temp to run while loop
        sum = 0; // we have to inilialise sum everytime so that the sum of digits every numbers do not get mixed
        while(temp != 0)
        {
            no1 = temp % 10; // getting the last digit of the numeber
            sum += no1; // adding it to sum
            temp = temp / 10; // removing the last digit of temp
        }
        if (no % sum == 0) // checking if no is divisible by the digits of its sum
        {
            printf("%d ", no);
        }
        no++;
    }
    return 0;
}