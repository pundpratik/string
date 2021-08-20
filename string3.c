//WAP to convert uppercase string into lowercase and vice versa .Write your own functions for the same.
#include<stdio.h>
/*#include<string.h>
int main()
{
	char s[20];
	printf("\N enter a string in uppercase\n");    //using default function
	gets(s);
	strlwr(s);
	printf("\n %s",s);
	return 0;
}*/

#include<string.h>
int main()
{
	char s[100];
	int i;
	printf("\n enter string in UPPERCASE\n");
	gets(s);
	for (i = 0; s[i]!='\0'; i++)				//using vice versa
	 {
      if(s[i] >= 'A' && s[i] <= 'Z')
	   	{
         s[i] = s[i] + 32;
      	}
	}
      printf("\n string in lowercase %s",s);
      return 0;
}
