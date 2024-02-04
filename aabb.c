#include <stdio.h>
#include<math.h>
int main()
{
    int aabb, aa, bb;
    for(aabb = 1000; aabb <= 9999; aabb++)
    {
        aa = aabb / 100;
        bb = aabb % 100;
        if(ceil(sqrt(aabb)) == floor(sqrt(aabb)))
        {
            if(ceil(sqrt(aa)) == floor(sqrt(aa)) && ceil(sqrt(bb)) == floor(sqrt(bb)))
            {
                printf("%d ", aabb);
            }
            
        }
    }
    return 0;
}