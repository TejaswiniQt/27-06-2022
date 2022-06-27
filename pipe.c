#include<stdio.h>
#include<unistd.h>
int main()
{
	int pipecnt[2];
	char writemsg[20]="hii";
	char readmsg[20];
	
	if(pipe(pipecnt)==-1)
	{
		printf("pipe unable to create\n");
		return 1;
	}	


	if(fork())
	{//parent
		close(pipecnt[0]);
		printf("writing done to pipe 1 by %d & message is %s\n",getpid(),writemsg);
		write(pipecnt[1],writemsg,sizeof(writemsg));
	}
	else
	{//child
		close(pipecnt[1]);
		read(pipecnt[0],readmsg,sizeof(readmsg));
		printf("read done to pipe 1 by %d & message is %s\n",getpid(),readmsg);
	}
}
