#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void stud_sort()
{
    int i, j, find_val;

    if(header == NULL)
        {
            printf("\n");
            printf("List was empty...!");
            printf("\n");
            sel_choice();
        }

    st* newPrev = NULL;
    st* sort_header = NULL;
    st* temp = header;
    st* temp_next = temp;
    st* temp_prev = NULL;

    for(i=0; temp != NULL; i++)
    {
        temp_prev = temp->next;

        for(j=0; temp_prev != NULL; j++)
        {
            find_val = strcmp(temp->name, temp_prev->name);

            if(find_val > 0)
            {
                st* newNode = (st*) malloc(sizeof(st));

                int t_roll = temp->roll;
                char t_name[50];
                float t_per = temp->per;

                strcpy(t_name, temp->name);

                temp->roll = temp_prev->roll;
                strcpy(temp->name, temp_prev->name);
                temp->per = temp_prev->per;

                temp_prev->roll = t_roll;
                strcpy(temp_prev->name, t_name);
                temp_prev->per = t_per;

            }

            temp_prev = temp_prev->next;
        }

        temp = temp->next;
    }

    printf("\n");
    printf("Roll.no\t\t\t");
    printf("Name\t\t\t\t\t");
    printf("Percentage");
    printf("\n");

    st* sort_temp = sort_header;

    while(sort_temp != NULL)
    {
        printf("%d\t\t\t", sort_temp->roll);
        printf("%s\t\t\t\t\t", sort_temp->name);
        printf("%.2f", sort_temp->per);
        sort_temp = sort_temp->next;
    }

    sel_choice();

}
