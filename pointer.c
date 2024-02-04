#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int no1 = *a;
    int no2 = *b;
    (*a) = no1 + no2;
    (*b) = (no1 > no2)? no1 - no2 : no2 - no1; 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}