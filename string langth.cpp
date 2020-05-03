#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l=0;
	gets(s);
	while(s[l]!='\0')
	{
		l++;
	}
	
	puts(l);
	return 0;
}
