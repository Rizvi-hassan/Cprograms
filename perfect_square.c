#include<stdio.h>
#include<math.h>
main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    if (ceil(sqrt(no)) == floor(sqrt(no)))
    {
        printf("It is perfect square.");
    }
    else
    {
        printf("It is not a perfect square");
    }
}
