/***************Simple program for static memory allocation of structures**********************/

#include<stdio.h>
#include<stdio_ext.h>

typedef struct student
{
	int roll_no;
	char name[30];
	float marks;
}stu;

int main()
{
	int i;
	stu s[5];
	printf("Enter the student information:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Roll_no:");
		scanf("%d",&s[i].roll_no);
		printf("Enter Name:");
		__fpurge(stdin);
		scanf("%s",s[i].name);
		printf("Enter Marks:");
		scanf("%f",&s[i].marks);
	}
	printf("Student information list:\n");
	for(i=0;i<5;i++)
	{
		printf("Roll_no:%d\tName:%s\tMarks:%f\n",s[i].roll_no,s[i].name,s[i].marks);
	}
	return 0;
}
