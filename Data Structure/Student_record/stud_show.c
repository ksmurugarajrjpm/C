#include<stdio.h>


void stud_show()
{
    if(header == NULL)
        {
            printf("\n");
            printf("List was empty...!");
            printf("\n");
            sel_choice();
        }

    st* temp = header;

    printf("\n");
    printf("Roll.no\t\t\t");
    printf("Name\t\t\t\t\t\t\t\t");
    printf("Percentage");
    printf("\n");

    while(temp != NULL)
    {
        printf("%d\t\t\t", temp->roll);
        printf("%s\t\t\t\t\t\t\t\t", temp->name);
        printf("%.2f", temp->per);
        temp = temp->next;
        printf("\n");
    }

    sel_choice();

}
