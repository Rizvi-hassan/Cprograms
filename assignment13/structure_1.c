#include <stdio.h>

struct BOOK{
    char title[30];
    char author[20];
    int pages;
    float price;
};

int main()
{
    struct BOOK bk;
    printf("Enter the title of book: ");
    scanf("%[^\n]s", bk.title);
    printf("Enter the author of book: ");
    scanf(" %[^\n]s", bk.author);
    printf("Enter the number of pages: ");
    scanf("%d", &bk.pages);
    printf("Enter the price of book: ");
    scanf("%f", &bk.price);
    printf("The details of the book are: \n");
    printf("TITLE: %s\nAUTHOR: %s\nNO OF PAGES: %d\nPRICE: %.3f\n", bk.title, bk.author, bk.pages, bk.price);
    return 0;
}