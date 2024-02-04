#include <stdio.h>
#include <stdlib.h>

#define FNAME "history.txt"

struct Record
{
    char date[5];
    char title[40];
    char disc[200];
};

void displayRecord(int, int);
void writeRecord();

int main()
{
    int ch;
    int start, end;
    printf("******Welcome to History directory******\n");
    do
    {
        printf("Chose your option:\n1.Add history event\n2.Display history event.\n0.To exit\n\n");
        printf("Enter your choice(0, 1, 2): ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            writeRecord();
            break;
        case 2:
            printf("Enter the starting and ending date: ");
            scanf("%d%d", &start, &end);
            if(start <= end)
                displayRecord(start, end);
            else 
                printf("Incorrect input!!");
        }

    } while (ch != 0);
    printf("Good Bye!!");
    return 0;
}

void writeRecord()
{
    static FILE *fw;
    struct Record event;
    int i;
    fw = fopen(FNAME, "a");
    if (fw == NULL)
    {
        printf("Databaes not found.");
    }
    else
    {
        printf("Enter date: ");
        scanf("%s", event.date);
        printf("Enter title: ");
        scanf(" %[^\n]s", event.title);
        printf("Enter description: ");
        scanf(" %[^\n]s", event.disc);
        fflush(stdin);
        fputs(event.date, fw);
        fputc(';', fw);
        fputs(event.title, fw);
        fputc(';', fw);
        fputs(event.disc, fw);
        fputc('\n', fw);
    }
    fclose(fw);
    printf("Record added.\n\n");
}

void displayRecord(int start, int end)
{
    static FILE *fr;
    struct Record event;
    int j = 0, size = 0;
    char ch;
    fr = fopen(FNAME, "r");
    if (fr == NULL)
    {
        printf("Database not found.");
    }
    else
    {
        while (1)
        {
            ch = fgetc(fr);
            if(ch == EOF)
                break;
            else if(ch == '\n')
                size++;
        }
        
        printf("The records are: \n");
        fseek(fr, 0, SEEK_SET);

        for(int i = 0; i<size; i++)
        {
            j = 0;
            while (1)
            {
                ch = fgetc(fr);
                if (ch == ';')
                {
                    event.date[j] = '\0';
                    break;
                }
                event.date[j++] = ch;
            }
            j = 0;
            while (1)
            {
                ch = fgetc(fr);
                if (ch == ';')
                {
                    event.title[j] = '\0';
                    break;
                }
                event.title[j++] = ch;
            }
            j = 0;
            while (1)
            {
                ch = fgetc(fr);
                if (ch == '\n')
                {
                    event.disc[j] = '\0';
                    break;
                }
                event.disc[j++] = ch;
            }
            if(atoi(event.date) >= start && atoi(event.date) <= end)
            {
                printf("\n***************************************\n");
                printf("Date: %s\n", event.date);
                printf("Title: %s\n", event.title);
                printf("Discription: %s\n", event.disc);
            }
        }
        printf("\n***************************************\n");
    }
    fclose(fr);
}