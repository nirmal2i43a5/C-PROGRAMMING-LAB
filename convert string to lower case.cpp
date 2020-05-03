#include<stdio.h>
int main()
{
	char s[20];
	int i;
	printf("enter string in upper case\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		s[i]=s[i]+32;
	}
//	s[i]='\0';
	printf("String in lower case=%s",s);
}
