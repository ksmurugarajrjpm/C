#include<stdio.h>
#include<string.h>

void stud_del()
{
    char del_opt;

    if(header == NULL)
        {
            printf("\n");
            printf("List was empty...!");
            printf("\n");
            sel_choice();
        }

    printf("\n");
    printf("Enter Roll.no to delete (R/r)\n");
    printf("Enter Name to delete (N/n)\n");

    printf("Enter your choice: ");
    scanf(" %c", &del_opt);

    if((del_opt == 'R') || (del_opt == 'r') )
        del_roll();
    else if ((del_opt == 'N') || (del_opt == 'n') )
        del_name();
    else{
        printf("Enter valid data...!");
        printf("\n");
        sel_choice();
    }

}

void del_roll()
{
    int roll_val;
    st* temp = header;
    st* temp_prev = NULL;

    printf("Enter Roll.no: ");
    scanf(" %d", &roll_val);

        if((roll_val > roll_num) || (roll_val < 0)){
            printf("%d Roll.no is not found...!", roll_val);
            printf("\n");
            sel_choice();
        }

    while(temp != NULL){


        if(temp->roll == roll_val){

                if(temp == header)
                {
                    header = temp->next;
                    printf("Roll.no %d was deleted", temp->roll);
                    //roll_num--;
                    free(temp);
                    temp = NULL;
                    printf("\n");
                    sel_choice();

                }else{
                    temp_prev->next = temp->next;
                    printf("Roll.no %d was deleted", temp->roll);
                    //roll_num--;
                    free(temp);
                    temp = NULL;
                    printf("\n");
                    sel_choice();
                }



        }else {
            temp_prev = temp;
            temp = temp->next;
        }
    }

}

void del_name()
{
    int find_str;
    char del_name[20];
    st* temp = header;
    st* temp_prev = NULL;

    printf("Enter Name: ");
    scanf(" %[^\n]", del_name);



    while(temp != NULL){

    find_str = strcmp(del_name, temp->name);

        if(find_str==0){

                if(temp == header)
                {
                    header = temp->next;
                    printf("Name %s was deleted", temp->name);
                    free(temp);
                    temp = NULL;
                    printf("\n");
                    sel_choice();

                }else{
                    temp_prev->next = temp->next;
                    printf("Name %s was deleted", temp->name);
                    free(temp);
                    temp = NULL;
                    printf("\n");
                    sel_choice();
                }

        }
        else {
            temp_prev = temp;
            temp = temp->next;
        }


    }

    if(temp==NULL){
        if((find_str == 1) || (find_str <= 0)) {
            printf("%s name is not found...!", del_name);
            printf("\n");
            sel_choice();
        }
    }


}
