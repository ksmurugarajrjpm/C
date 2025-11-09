#include<stdio.h>
#include<string.h>

void stud_mod()
{
        char mod_opt;

        if(header == NULL)
        {
            printf("\n");
            printf("List was empty...!");
            printf("\n");
            sel_choice();
        }

    printf("\n");
    printf("To search Roll.no (R/r)\n");
    printf("To search Name (N/n)\n");

    printf("Enter your choice: ");
    scanf(" %c", &mod_opt);

    if((mod_opt == 'R') || (mod_opt == 'r') )
        mod_roll();
    else if ((mod_opt == 'N') || (mod_opt == 'n') )
        mod_name();
    else{
        printf("Enter valid data...!");
        printf("\n");
        sel_choice();
    }
}

void mod_roll()
{
    int roll_val;
    char alt_name[20], sel_mod;
    float alt_per;

    printf("\n");
    printf("Enter the roll number you want to change: ");
    scanf("%d", &roll_val);

    st* temp = header;
    while(temp != NULL){

        if(roll_val == temp-> roll){

            printf("Need to modify Name (N/n): \n");
            printf("Need to modify Percentage (P/p): \n");
            printf("Enter your choice: ");
            scanf(" %c", &sel_mod);

        switch(sel_mod){

        case 'P':
        case 'p':
                printf("Enter the new percentage: ");
                scanf("%f", &alt_per);

                temp->per = alt_per;
                sel_choice();
                break;

        case 'N':
        case 'n':
                printf("Enter the new name: ");
                scanf(" %[^\n]", alt_name);
                strcpy(temp->name, alt_name);
                sel_choice();
                break;

        default:
                printf("Please enter valid record...!\n");
                sel_choice();
                break;

        }

        }else{
                temp = temp->next;
        }

    }

    if(temp == NULL)
    {
            printf("Please enter valid data...!\n");
            sel_choice();
    }
}


void mod_name()
{
    char sel_name[20], alt_name[20], sel_mod;
    int find_name;
    st* temp = header;
    float alt_per;

    printf("\n");
    printf("Enter the name you want to change: ");
    scanf(" %[^\n]", sel_name);

    printf("Need to modify Name (N/n): \n");
    printf("Need to modify Percentage (P/p): \n");
    printf("Enter your choice: ");
    scanf(" %c", &sel_mod);

    switch(sel_mod){

    case 'P':
    case 'p':

            while(temp != NULL){

                    find_name = strcmp(sel_name, temp->name);

                    if(find_name == 0)
                    {
                        printf("Enter the new percentage: ");
                        scanf("%f", &alt_per);

                        temp->per = alt_per;
                        sel_choice();
                    }else{
                        temp = temp->next;
                    }
            }

                if(temp==NULL)
                    if((find_name == 1) || (find_name <= 0)) {
                        printf("%s name is not found...!", sel_name);
                        printf("\n");
                        sel_choice();
                }
            break;

    case 'N':
    case 'n':

            printf("\n");
                while(temp != NULL){

                    find_name = strcmp(sel_name, temp->name);

                    if(find_name == 0)
                    {
                        printf("Enter the new name: ");
                        scanf(" %[^\n]", alt_name);

                        strcpy(temp->name, alt_name);
                        sel_choice();
                    }else{
                        temp = temp->next;
                    }
            }

                if(temp==NULL)
                    if((find_name == 1) || (find_name <= 0)) {
                        printf("%s name is not found...!", sel_name);
                        printf("\n");
                        sel_choice();
                }

            break;

            default:
                printf("Please enter valid data...!\n");
				sel_choice();
				break;




    }

}
