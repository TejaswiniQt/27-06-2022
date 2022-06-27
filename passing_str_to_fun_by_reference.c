/*********************Simple program for passing structure to funcction by reference****************************/

#include<stdio.h>
#include<string.h>

typedef struct student
{
	int roll_no;
	char name[30];
}stu;

void fun(stu *s1_arg);


int main()
{
	stu s1;
	printf("Enter roll_no:");
	scanf("%d",&s1.roll_no);
	printf("Enter name:");
	scanf("%s",s1.name);

	fun(&s1);
	printf("student entered data:\n");
	printf("Roll_no:%d\tName:%s\n",s1.roll_no,s1.name);
	return 0;
}

void fun(stu *s1_arg)
{
	s1_arg->roll_no = 10;
	strcpy(s1_arg->name,"Tejaswini");
}
