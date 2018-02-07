/*.............................................................
Title: n number of data into a file
Author: Anupama J
Time: Feb  7 2018 17:48:50
Description : Copy n number of  Bank details into a file , say like, Name of the person, account number and balance in the account.
..............................................................*/
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct biodata
{
	char name[30];
	int account;
	int balance;
};

int main()
{
	struct biodata bio;
	char ch,file[30];
	int num;
	FILE *fd;
	printf("\nenter the filename :");
	scanf("%s",file);
	creat(file,0666);
	fd=fopen(file,"w+");
	
	printf("\nhow many data you want to enter?");
	scanf("%d",&num);	
	do
	{
		printf("\nenter the name :");
		scanf("%s",bio.name);
		printf("\nenter the account number :");
		scanf("%d",&bio.account);
		printf("\nenter the balace :");
		scanf("%d",&bio.balance);
		num--;
		fprintf(fd,"%s\t%d\t%d\n",bio.name,bio.account,bio.balance);

	}while(num != 0);
	printf("\ndata entry to file is closing...\n");
	fclose(fd);
	return 0;
}
