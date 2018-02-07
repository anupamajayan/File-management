/*.............................................................
Title:Permission levels of existing file
Author: Anupama J
Time: Jan 22 2018 22:25:38
Description : The program on running, it will ask "enter the file name", which is already existing.if you enter the file name which is not existing, it will reply with "file is not existing". Otherwise, it will show which permission is not having by the file. If a file is having all three permissions, it will show "read,write and executable permission".
..............................................................*/

#include <stdio.h>
#include <unistd.h>

int p,ret1,ret2,ret3,flag=0;
char name[30];

int main()
{
	printf("enter the file name");
	scanf("%s",name);
	p=access(name,F_OK);//If file is existing, return value to 'p' will be '0' 
	ret1=access(name,R_OK);//If file is having read permission, return value to 'ret1' will be '0' 
	ret2=access(name,W_OK);//If file is having write permission, return value to 'ret2' will be '0' 
	ret3=access(name,X_OK);//If file is having executable permission, return value to 'ret3' will be '0' 

	if(p!=0)
	{
		perror("file is not existing");
	}
	else
	{
		if(ret1!=0)
		{
			perror("no read permisson");
			flag=1;
		}
		if(ret2!=0)
		{
			perror("no write permisson");
			flag=1;
		}
		if(ret3!=0)
		{
			perror("no executable permisson");
			flag=1;
		}
		if(flag==0)//If 'flag' is not updated, file is having all three permissions.
		{
			perror("read,write and executable permission");		
		}
	}
	return 0;
}
