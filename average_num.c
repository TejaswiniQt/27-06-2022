/*********************Program to find the average of two numbers using structure***************************************/

#include<stdio.h>

typedef struct average
{
	int num1,num2;
}s1;

float average(s1 avg_arg);


int main()
{
	s1 avg;
	float res;
	printf("Enter the num1:");
	scanf("%d",&avg.num1);
	printf("Enter the num2:");
	scanf("%d",&avg.num2);
	res=average(avg);
	printf("Average of two numbers:%f\n",res);
	return 0;
}

float average(s1 avg_arg)
{
	int sum;
	float res;
	sum = avg_arg.num1 + avg_arg.num2;
	res = (float)sum/2;
	return res;
}
