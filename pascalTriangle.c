#include<stdio.h>
int main(){
    int no, ch = 1;
    printf("Enter the row: ");
    scanf("%d", &no);

    for(int i = 1; i<= no; i++){
        ch = 1;
        for (int j = 1; j <= no-i; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", ch);
            ch = ch*(i-j)/j;
        }
        printf("\n");
    }

    return 0;
}