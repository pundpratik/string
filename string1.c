//WAP to compare two strings using strcmp ().
#include<stdio.h>
#include<string.h>
int main()
{
	char name1[10],name2[10];
	printf("\n enter any two name");
	scanf("%s%s",name1,name2);
	if(strcmp(name1,name2) ==0)
	{
		printf("\n strings are same");
	}
	else
	{
		printf("\n strings are not same");
	}
	return 0;
}


