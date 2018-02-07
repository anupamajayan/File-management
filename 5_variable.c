/*.............................................................
Title: Variable length string to a file
Author: Anupama J
Time: Feb  7 2018 18:35:01
Description : Enter what ever data you want to enter on getting "enter the data". To terminate entering data, use ctrl+d.
..............................................................*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>

int main()
{
	char file[30],*line=NULL;
	FILE *fd;
	ssize_t rd=0;
	size_t len=0;
	printf("\nEnter the name of file ");
	scanf("%s",file);
	creat(file,0666);
	fd=fopen(file,"w+");
	printf("Enter the data \n");
	rd=getline(&line,&len,fd);
	while(rd=getline(&line,&len,stdin) != -1)
		fprintf(fd,"%s",line);
	fclose(fd);
	printf("\nQuitting writing\n");
	return 0;
	
}



