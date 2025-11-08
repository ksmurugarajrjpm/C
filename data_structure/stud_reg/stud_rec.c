#include<stdio.h>

typedef struct ST{
	int roll;
	char name[20];
	float per;
	struct ST* next;
}st;

st* header = NULL;
st* prevNode;
int roll_num = 1;

#include "stud_add.c"
#include "stud_choice.c"
#include "stud_show.c"
#include "stud_del.c"
#include "stud_mod.c"
#include "stud_save.c"
#include "stud_sort.c"

int main()
{

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

	sel_choice();

}
