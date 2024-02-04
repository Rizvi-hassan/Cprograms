#include<stdio.h>
int main()
{
    int i ;

    while(1) // here any number except 0 can be written
    {
        printf("I love you...\n");

        scanf("%d", &i);  // taking input from user

        if(i >= 3000)  // checking if the user input is greater than 3000
            break;
    }
    printf("\nI love you 3000");
    return 0;
}