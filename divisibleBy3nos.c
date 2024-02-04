#include <stdio.h>

int main()
{
    int no1, no2, no3, res; 
    printf("Enter 3 numebers: ");
    scanf("%d%d%d", &no1, &no2, &no3);
    res = (no1 > no2)? (no1>no3)? no1:no3 : (no2 > no3)? no2:no3 ;
    while (res <= no1 * no2 * no3)
    {
        if(res % no1 == 0 && res % no2 == 0 && res % no3 == 0){
            break;
        }
        res ++;
    }
    printf("The number is: %d", res);
    return 0;
}