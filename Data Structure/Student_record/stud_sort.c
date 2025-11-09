#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void stud_sort()
{
    char sort_opt;

    printf("\n");
    printf("Sort by Name (N/n)\n");
    printf("Sort by Percentage (P/p)\n");
    printf("Enter your choice: ");
    scanf(" %c", &sort_opt);

    if((sort_opt == 'N') || (sort_opt == 'n') )
        sort_name();
    else if ((sort_opt == 'P') || (sort_opt == 'p') )
        sort_per();
    else{
        printf("Enter valid data...!");
        printf("\n");
        sel_choice();
    }
}

void sort_name()
{
    int find_val, temp_roll;
    char temp_name[20];
    float temp_per;

    st* temp = header;
    st* newHeader = NULL;
    st* newPrev = NULL;

    while (temp != NULL)
    {
        st* newNode = (st*) malloc(sizeof(st));
        newNode->roll = temp->roll;
        strcpy(newNode->name, temp->name);
        newNode->per = temp->per;
        newNode->next = NULL;

        if (newHeader == NULL)
        {
            newHeader = newNode;
            newPrev = newNode;
        }
        else
        {
            newPrev->next = newNode;
            newPrev = newNode;
        }

        temp = temp->next;
    }

    st* newNode = newHeader;

    for(newNode = newHeader; newNode != NULL; newNode = newNode->next)
    {
        st* nextNode = newNode->next;
        for(nextNode = newNode->next; nextNode != NULL; nextNode = nextNode->next)
        {
            find_val = strcmp(newNode->name, nextNode->name);

            if(find_val > 0)
            {
                temp_roll = nextNode->roll;
                strcpy(temp_name, nextNode->name);
                temp_per = nextNode->per;

                nextNode->roll = newNode->roll;
                strcpy(nextNode->name, newNode->name);
                nextNode->per = newNode->per;

                newNode->roll = temp_roll;
                strcpy(newNode->name, temp_name);
                newNode->per = temp_per;
            }

        }

    }

    printf("\n");
    printf("Roll.no\t\t\t");
    printf("Name\t\t\t\t\t\t\t\t");
    printf("Percentage");
    printf("\n");

    st* sort_temp = newHeader;

    while(sort_temp != NULL)
    {
        printf("%d\t\t\t", sort_temp->roll);
        printf("%s\t\t\t\t\t\t\t\t", sort_temp->name);
        printf("%.2f", sort_temp->per);
        printf("\n");
        sort_temp = sort_temp->next;
    }

    free(newNode);

    sel_choice();
}

void sort_per()
{
    int temp_roll;
    char temp_name[20];
    float temp_per;

    st* temp = header;
    st* newHeader = NULL;
    st* newPrev = NULL;

    while (temp != NULL)
    {
        st* newNode = (st*) malloc(sizeof(st));
        newNode->roll = temp->roll;
        strcpy(newNode->name, temp->name);
        newNode->per = temp->per;
        newNode->next = NULL;

        if (newHeader == NULL)
        {
            newHeader = newNode;
            newPrev = newNode;
        }
        else
        {
            newPrev->next = newNode;
            newPrev = newNode;
        }

        temp = temp->next;
    }

    st* newNode = newHeader;

    for(newNode = newHeader; newNode != NULL; newNode = newNode->next)
    {
        st* nextNode = newNode->next;
        for(nextNode = newNode->next; nextNode != NULL; nextNode = nextNode->next)
        {

            if(newNode->per <= nextNode->per)
            {
                temp_roll = nextNode->roll;
                strcpy(temp_name, nextNode->name);
                temp_per = nextNode->per;

                nextNode->roll = newNode->roll;
                strcpy(nextNode->name, newNode->name);
                nextNode->per = newNode->per;

                newNode->roll = temp_roll;
                strcpy(newNode->name, temp_name);
                newNode->per = temp_per;
            }

        }

    }

    printf("\n");
    printf("Roll.no\t\t\t");
    printf("Name\t\t\t\t\t\t\t\t");
    printf("Percentage");
    printf("\n");

    st* sort_temp = newHeader;

    while(sort_temp != NULL)
    {
        printf("%d\t\t\t", sort_temp->roll);
        printf("%s\t\t\t\t\t\t\t\t", sort_temp->name);
        printf("%.2f", sort_temp->per);
        printf("\n");
        sort_temp = sort_temp->next;
    }

    free(newNode);

    sel_choice();
}
