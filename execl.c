/**************Example foe execl *********************************/

#include<unistd.h>

int main()
{
	char *path = "/bin/ls";
	char *arg1 = "-al";
	execl(path,"ls",arg1,NULL);
	return 0;
}
