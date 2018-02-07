/*.............................................................
Title:Creating file using System call
Author: Anupama J
Time: Jan 22 2018 22:14:15
Description : The program will creat a file with read and write permission. for executable permission, we can set the permission value to "0777". 
..............................................................*/

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int fd;
char name[30];
mode_t mode;
int main()
{
	write(1,"enter the file name\n",21);
	//perror("");
	read(0,name,7);
	fd=creat(name,0666);
	printf("file description number : %d",fd);
	//perror("");
	return 0;
}
