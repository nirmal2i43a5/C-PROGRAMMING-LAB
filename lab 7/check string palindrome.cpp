
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l,i;
	printf("Enter string\n");
	scanf("%s",s);      //or gets(s);//
	for(l=0;s[l]!='\0';l++);	// or	l=strlen(s);//
	for(i=0;i<l/2;i++)
	{
		if(s[i]==s[l-1-i])//or if(s[i]!=s[l-1-i]) then use     break;
		{
			continue;
		}
	}
	if(i==l/2)
	printf("palindrome");
	else
	printf("Not palindrome");
}
