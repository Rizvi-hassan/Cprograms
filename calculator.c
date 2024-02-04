#include <stdio.h>

void add(int *, int *, int *);
void subtr(int *, int *, int *);
void mult(int *, int *, int *);
void division(int *, int *, int *);

int main()
{
    int no1, no2, res;
    char choice;
    printf("\n__Welcome to the calculator__");
    printf("\nEnter 2 numbers: ");
    scanf("%d%d", &no1, &no2);
    printf("\nWhich operation do you want(+, -, *, /): \n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    switch (choice)
    {
    case '+':
        add(&no1, &no2, &res);
        printf("Addition of %d and %d is %d", no1, no2, res);
        break;
    case '-':
        subtr(&no1, &no2, &res);
        printf("Subtraction of %d and %d is %d", no1, no2, res);
        break;
    case '*':
        mult(&no1, &no2, &res);
        printf("Multiplicatoin of %d and %d is %d", no1, no2, res);
        break;
    case '/':
        division(&no1, &no2, &res);
        printf("divisionision of %d by %d is %d", no1, no2, res);
        break;

    default:
        printf("Wrong Input\n");
    }

    return 0;
}

int add(int *no1, int *no2, int *res)
{
    *res =  (*no1) + (*no2);
}
int subtr(int *no1, int *no2, int *res)
{
    *res =  (*no1) - (*no2);
}
int mult(int *no1, int *no2, int *res)
{
    *res =  (*no1) * (*no2);
}
int division(int *no1, int *no2, int *res)
{
    *res =  (*no1) / (*no2);
}
