#include<stdio.h>
#include<string.h>
int ispalindrome(char);

int main()
{
	char s[20];

	printf("Enter string\n");
	gets(s);
	if(ispalindrome(s))
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}

}
int ispalindrome(char s[])
{

	int l,i;
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-1-i])
		{
			return 0;
		}
		
	}
		return 1;
	}
