#include<stdio.h>
void caseconverter(char*);
int main()
{
	char ch;
	printf("enter ch\n");
	scanf("%c",&ch);
	caseconverter(&ch);	
	printf("opposite case=%c",ch);
}
void caseconverter(char*ch)
{
	char A,Z;
	if(*ch>='A' && *ch<='Z')
	{
		*ch=*ch+32;	
	}
	else
	{
		*ch=*ch-32;
	}
}
