#include<stdio.h>

void stud_save()
{
    st* temp = header;
    FILE *fd= fopen("Student_Record.txt","a+");

    fseek(fd,0,SEEK_END);
    if(ftell(fd) == 0)
        fprintf(fd,"RollNo\t\t\tName\t\t\t\tPercentage\n");

    while(temp != NULL)
    {
        fprintf(fd, "%d\t\t\t%s\t\t\t\t%f\n",temp->roll, temp->name, temp->per);
        temp = temp->next ;
    }
    fclose(fd);

    printf("File was saved...!");
    printf("\n");
    sel_choice();
}
