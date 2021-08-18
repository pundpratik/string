//WAP to concatenate two strings without using library function.
#include<stdio.h>
void concat(char n[20],char n2[20])
{
	printf("\n inside concat function");
	int i=0,j,c=0;
	while(	n[c] !='\0')
	{
		c++;
	}
	i=c;
	printf("\n c=%d",c);
	for(j=0;n2[j]!='\0';j++,i++)
	{
		n[i]=n2[j];
	}
	n[i]='\0';
	printf("\nconcatstring  =%s",n);
}
int main()
{
	char name1[10],name2[10];
	printf("\n enter any two name");
	scanf("%s%s",&name1,&name2);
	
	concat(name1,name2);
	return 0;
}

