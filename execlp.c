/**************Example for execlp *********************************/

#include<unistd.h>

int main()
{
	char *filename = "ls";
	char *arg1 = "-a";
	char *arg2 = "-s";
	execlp(filename,filename,arg1,arg2,NULL);
	return 0;
}
