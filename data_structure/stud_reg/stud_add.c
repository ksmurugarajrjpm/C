#include<stdio.h>
#include<stdlib.h>

void stud_add()
{
	st* newNode = (st*) malloc(sizeof(st*));
	st* prevNode;
	
	newNode->roll = roll_num++;

	printf("Enter Name: ");
	scanf("%s", newNode->name);
	
	printf("Enter Percentage: ");
	scanf("%f", &newNode->per);

	if(header==NULL)
	{
		newNode->next = NULL;
		header = newNode;
	}

	newNode->next = NULL;
	prevNode->next = newNode;
	prevNode = newNode;

}
