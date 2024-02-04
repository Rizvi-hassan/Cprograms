#include<stdio.h>
main()
{
    int no,res,val;
    printf("enter two no");
    scanf("%d",&no);
    for(val=1;val<=10;val++)
    {
        res=no*val;
        printf("%d*%d=%d\n",no,val,res);
    }
}