#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int main()
{
	pid_t pid;
	int mypipefd[2];
	int ret;
	char buf[20];
	ret=pipe(mypipefd);
	if(ret==-1)
	{
		perror("pipe");
		exit(1);
	}
	pid=fork();
	if(pid==0)
	{
		printf("First Process Start Executing...\n");
		char s[100];
		printf("Enter String : ");
		gets(s);
		int i;
		for(i = 0; s[i] != '\0'; i++);
		close(mypipefd[0]);
		write(mypipefd[1], s, i);
	}
	else
	{
		wait();
		printf("Second Process Start Executing...\n");
		close(mypipefd[1]);
		read(mypipefd[0],buf,100);
		int i;
		for(i=0;buf[i]!='\0';i++)
	    {
	        if(buf[i]>='A'&&buf[i]<='Z')
			{
	        	 buf[i]+=32;
	    	}
			else if(buf[i]>='a'&&buf[i]<='z')
	 		{
     		   buf[i]-=32;
     		}
   		 }
		printf("After Reverses The Case Of Each Character : %s\n",buf);
	}
}
