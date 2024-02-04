#include<stdio.h>
main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);
    if(no>10)
    {
        printf("The no %d is greater then 10",no);
    }
    else
    {
        printf("The no %d is less then 10",no);
    }
}