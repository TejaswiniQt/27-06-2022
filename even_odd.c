#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#define N 5
pthread_mutex_t lock;
unsigned int var;
int b[N],c[N]; 
void* thread1(void* p)
{
	int k=0;
	var=pthread_mutex_lock(&lock);
	if(var)
		printf("Lock is not acquired\n");
	else
	{
	printf("Thread1 id=%ld\n",pthread_self());
		for(int i=1;i<100;i++)
		{
			if(i% 2 == 0)
			{
				b[k]=i;
				k++;
			}
		} 
		for(int j=0;j<k;j++)
		{
			printf("%d ",*(b+j));
		}
		pthread_mutex_unlock(&lock);
	}
	printf("\nthread1 terminated\n");
	pthread_exit(NULL);//terminating the calling thread(removing the all the resoureces allocated the thread)
}
void* thread2(void *p)
{
	int l=0;
	var=pthread_mutex_lock(&lock);
	if(var)
		printf("Lock is not acquired\n");
	else
	{
	printf("Thread2 id=%ld\n",pthread_self());
		for(int i=1;i<100;i++)
		{
			if(i%2!= 0)
			{
				c[l]=i;
				l++;
			}
		} 
		for(int j=0;j<l;j++)
		{
			printf("%d ",*(c+j));
		}
		pthread_mutex_unlock(&lock);
	}
	printf("\nthread2 terminated\n");
	pthread_exit(NULL);//terminating the calling thread(removing the all the resoureces allocated the thread)
}


int main()
{
	pthread_t t1,t2;//default type for thread variables
	pthread_create(&t1,0,thread1,NULL);//to create the thread,thread id,thread attributes,thread handler,arguments to the thread handler
	pthread_create(&t2,0,thread2,NULL);
	pthread_join(t1,NULL);//wait for particular thread termination
	pthread_join(t2,NULL);//wait for particular thread termination

}




