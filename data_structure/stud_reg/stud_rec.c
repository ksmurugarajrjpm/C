#include<stdio.h>

typedef struct ST{
	int roll;
	char name[20];
	float per;
	struct ST* next;
}st;

st* header = NULL;
int roll_num = 0;

#include"stud_add.c"

int main()
{
	char menu_opt; 

	printf("************** STUDENT RECORD MENU **************\n");

	printf("*\t");
	printf("A/a	: Add New Record         ");
	printf("\t*\n");


	printf("*\t");
	printf("D/d	: Delete A Record        ");
	printf("\t*\n");

	printf("*\t");
        printf("S/s	: Show the List          ");
	printf("\t*\n");

        printf("*\t");
        printf("M/m	: Modify A record        ");
        printf("\t*\n");

        printf("*\t");
        printf("V/v	: Save                   ");
        printf("\t*\n");

        printf("*\t");
        printf("E/e	: Exit                   ");
        printf("\t*\n");

        printf("*\t");
        printf("T/t	: Sort the List          ");
        printf("\t*\n");

        printf("*\t");
        printf("L/l	: Delete All the Records");
        printf("\t*\n");

        printf("*\t");
        printf("R/r	: Reverse the List      ");
        printf("\t*\n");

	printf("*************************************************\n");

	printf("Enter your choice: ");
	scanf(" %c", &menu_opt);

	switch(menu_opt)
	{
		case 'A':
		case 'a':
				stud_add();
				break;
		default:	
				printf("Please enter valid record...!\n");
				break;
	}

}
