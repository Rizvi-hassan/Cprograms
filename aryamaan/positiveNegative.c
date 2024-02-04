#include<stdio.h>
main()
{
    int no;
    printf("Enter the no: ");
    scanf("%d",&no);
    if (no>0)
    {
        printf("The number %d is positive",no);
    }
    else
    {
        printf("The number %d is negative",no);
    }
}