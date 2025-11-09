#include<stdio.h>

void sel_choice()
{

    char menu_opt;

    printf("\n");
    printf("Enter your choice: ");
	scanf(" %c", &menu_opt);

	switch(menu_opt)
	{
		case 'A':
		case 'a':
				stud_add();
				break;

        case 'D':
        case 'd':
                stud_del();
                break;

        case 'S':
        case 's':
                stud_show();
                break;

        case 'M':
        case 'm':
                stud_mod();
                break;

        case 'V':
        case 'v':
                stud_save();
                break;

        case 'E':
        case 'e':
                return 0;

        case 'T':
        case 't':
                stud_sort();
                break;

        case 'L':
        case 'l':
                stud_del_rec();

        case 'R':
        case 'r':
                stud_rev();
                break;

		default:
				printf("Please enter valid record...!\n");
				sel_choice();
				break;
	}


}

