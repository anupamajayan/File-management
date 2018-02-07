/*.............................................................
Title: Read a string from file using system call.
Author: Anupama J
Time: Jan 21 2018 18:20:15
Description : The program will read a string from the file. 
..............................................................*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t p;
char name[30],h[20];
FILE *u;
int main()
{
	p=write(1,"enter the file name\n",21);
	//perror("");
	scanf("%s",name);
	u=fopen(name,"r+");
	fgets(h,8,u);
	//perror("");
	printf("%s",h);
	fclose(u);	
	return 0;
}
