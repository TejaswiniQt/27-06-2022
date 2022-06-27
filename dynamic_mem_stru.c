/************************Simple program for dynamic memory allocation for structure***************************************/

#include<stdio.h>
#include<stdlib.h>


typedef struct student
{
	int roll_no;
	char name[30];
	float marks;
}stu;

int main()
{
	int n,i;
	stu *ptr;
	printf("Enter the number of students:");
	scanf("%d",&n);
	ptr = (stu *)malloc(n * sizeof(stu));
	printf("Enter %d students data:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter roll_no:");
		scanf("%d",&(ptr+i)->roll_no);
		printf("Enter name:");
		scanf("%s",(ptr+i)->name);
		printf("Enter marks:");
		scanf("%f",&(ptr+i)->marks);
	}
	printf("Entered student data:\n");
	for(i=0;i<n;i++)
	{
		printf("Roll_no:%d\tName:%s\tMarks:%f\n",(ptr+i)->roll_no,(ptr+i)->name,(ptr+i)->marks);
	}
	free(ptr);
	return 0;
}
