#include<stdio.h>
#include<string.h>

st* newHeader = NULL;

void stud_rev()
{

    st* temp = header;

    st* newPrev = NULL;

    while(temp != NULL)
    {
        st* newNode = (st*) malloc(sizeof(st));

        newNode->roll = temp->roll;
        strcpy(newNode->name, temp->name);
        newNode->per = temp->per;

        if(newHeader == NULL)
        {
            newHeader = newNode;
            newNode->next = NULL;
            newPrev = newNode;
        }else{
            newNode->next = NULL;
            newPrev->next = newNode;
            newPrev = newNode;
        }

        temp = temp->next;
    }

    printf("\n");
    printf("Roll.no\t\t\t");
    printf("Name\t\t\t\t\t\t\t\t");
    printf("Percentage");
    printf("\n");

    stud_rev_rec(newHeader);

    printf("\n");
    sel_choice();
}

void stud_rev_rec(st* newHeader)
{
    if(newHeader != NULL){
    stud_rev_rec(newHeader->next);

        printf("%d\t\t\t", newHeader->roll);
        printf("%s\t\t\t\t\t\t\t\t", newHeader->name);
        printf("%.2f", newHeader->per);
        printf("\n");
    }

}
