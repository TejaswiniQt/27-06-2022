/**************************Simple program for pointers to structures****************************************/

#include<stdio.h>

typedef struct student
{
	int roll_no;
	char name[30];
	float marks;
}stu;

int main()
{
	stu s1,*ptr1;
	ptr1 = &s1;
	printf("Enter roll_no:");
	scanf("%d",&ptr1->roll_no);
	printf("Enter name:");
	scanf("%s",ptr1->name);
	printf("Enter marks:");
	scanf("%f",&ptr1->marks);
	printf("Student data:\n");
	printf("roll_no:%d\nname:%s\nmarks:%f\n",ptr1->roll_no,ptr1->name,ptr1->marks);
	return 0;
}
