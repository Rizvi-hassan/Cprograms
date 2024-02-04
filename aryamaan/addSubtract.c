#include <stdio.h>
main()
{
    int no, n1, n2, res;
    printf("Enter the no");
    scanf("%d", &no);
    if (no > 0)
    {
        printf("Enter two no");
        scanf("%d%d", &n1, &n2);
        res = n1 + n2;
        printf("The sum of the no is %d", res);
    }
    else
    {
        printf("Enter two no");
        scanf("%d%d",&n1,&n2);
        res=n1-n2;
        printf("The difference of the no is %d",res);
    }
}