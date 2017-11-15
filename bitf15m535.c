#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<errno.h>
int main()
{
	int status; int x[100];
	int sum=0;
	for(int i=0;i<100;i++)
		 x[i]=rand()%30;
	 printf("100 values are:\n");
	 for(int i=0;i<100;i++)
		printf("%d\n",x[i]);
	int pid=fork();
	if(pid<0)
		printf("fail process");
	else if(pid==0)
		for(int j=0;j<25;j++)
			sum+=x[j];
	else
	{
	wait(&status);
	int pid=fork();
	if(pid<0)
		printf("fail process");
	else if(pid==0)
		for(int i=25;i<50;i++)
			sum+=x[i];
	else
	{
	 for(int j=50;j<75;j++)
			sum+=x[jj;
     for(int i=75;i<100;i++)
			sum+=x[i];		
	}
	printf("\n");
	printf("sum of values is:%d",sum);
	}
	return 0;
}