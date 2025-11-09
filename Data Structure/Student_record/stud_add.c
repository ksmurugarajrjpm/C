#include<stdio.h>
#include<stdlib.h>

void stud_add()
{
    char sel_opt;
    int mis_roll = 1;

	st* newNode = (st*) malloc(sizeof(st));
    if(newNode==NULL){
        printf("Out of memory");
        return;
   }

   st* temp = header;
   st* temp_prev = NULL;

   while(temp!=NULL)
   {
       if(temp->roll != mis_roll)
       {
           if (mis_roll == 1){

                    newNode->roll = mis_roll;

                    printf("\n");
                    printf("Enter Name: ");
                    scanf(" %[^\n]", newNode->name);

                    printf("Enter Percentage: ");
                    scanf("%f", &newNode->per);

                    newNode->next = temp;
                    header = newNode;
                    sel_choice();
           }
           else{
                    newNode->roll = mis_roll;

                    printf("\n");
                    printf("Enter Name: ");
                    scanf(" %[^\n]", newNode->name);

                    printf("Enter Percentage: ");
                    scanf("%f", &newNode->per);

                    newNode->next = temp;
                    temp_prev->next = newNode;
                    sel_choice();
           }

       }else{
            temp_prev = temp;
            temp = temp->next;
            mis_roll++;
       }

   }

	newNode->roll = roll_num++;

    printf("\n");
	printf("Enter Name: ");
	scanf(" %[^\n]", newNode->name);

	printf("Enter Percentage: ");
	scanf("%f", &newNode->per);

	if(header==NULL)
	{
		newNode->next = NULL;
		header = newNode;
		prevNode = newNode;
	}else{
        newNode->next = NULL;
        prevNode->next = newNode;
        prevNode = newNode;
	}

	printf("Do you want to add another record? (y/n): ");
	scanf(" %c", &sel_opt);

	if((sel_opt == 'y') || (sel_opt == 'Y'))
        stud_add();
    else if ((sel_opt == 'N') || (sel_opt == 'n')){
        sel_choice();
    }else{
        printf("Please enter valid option...!");
        printf("\n");
        sel_choice();
    }




}
