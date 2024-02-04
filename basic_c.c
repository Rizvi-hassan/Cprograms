#include<stdio.h>
main()
{
      int no = 10;
      no += (no++) + (++no) + no;
      printf("The number is %d\n", no);
}
