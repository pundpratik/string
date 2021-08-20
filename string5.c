//Demonstrate all string function using library function.
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	char s2[]="Ahmednagar";//here is a another method of initialize string or character array
	char s3[]={'m','a','h','a','r','a','s','h','t','r','a','\0'};//we can intialize string like this also but we need to take \0 manually here;
	char s4[100][100];
	printf("\n enter any name ");
	gets(s);//gets() is used for scan ;
	puts(s);
	printf("\n s2 =%s\n",s2);
	puts(s3);				//puts()is used for print;
	printf("\n length of s2 is =%d",strlen(s2));//strlen use for count the length of the string.
	if(strcmp(s,s2)==0)//here it check each word are same or not;
	{
		printf("\n  s1 and s2 string are same");
		
	}
	else
	{
		printf("\n strings are not same");
	}
	strcat(s,s2);//this function used for concat or connect two string with each other
	printf("\n %s",s);
	strcpy(s4,s2);
	printf("\n after copy s4 and s2 s4=%s",s4);
	printf("\n%s",strchr(s2,'na'));
	
	
}
