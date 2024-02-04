#include <stdio.h>

int main()
{
    int no, last, temp;
    for(no = 10; no <= 1000; no++){
        last = no % 10;
        temp = no;
        while (temp != 0)
        {
            if(temp % 10 != last)
                break;
            temp /= 10;

        }
        if(temp == 0)
            printf("%d ", no);
        
    }
    return 0;
}