#include<stdio.h>
char caseconverter(char);
int main()
{
	char ch;
	printf("enter ch\n");
	scanf("%c",&ch);
	ch=caseconverter(ch);
	printf("opposite case=%c",ch);
	return (0);
}
char caseconverter(char ch)
{
	if(ch>='A' && ch<='Z')
	ch=ch+32;
	else
	if(ch>='a'&&ch<='z')
	h=ch-32;
	return ch;
}
