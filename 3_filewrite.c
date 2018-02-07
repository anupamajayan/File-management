/*.............................................................
Title: Create and write a string to file using system call.
Author: Anupama J
Time: Jan 21 2018 18:54:10
Description : The program will creat a file with read and write permission, and writes a string to the file. 
..............................................................*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int fd,f,k;
ssize_t p;
char name[30],h[20],a[30];
FILE *u;
int main()
{
	p=write(1,"enter the file name\n",21);
	//perror("");
	scanf("%s",name);
	fd=creat(name,0666);
	//perror("");
	u=fopen(name,"w+");
	//perror("");
	f=fputs("working correct",u);
	//perror("");
	fclose(u);
	return 0;
}
