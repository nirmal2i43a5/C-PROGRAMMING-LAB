#include<stdio.h>
int main()
{
	char s1[20];
	char s3[]="Namaste";
	char s4[]="Hi";
	scanf("%s",s1);
	if(s1=="Aarohan"||s1=="Sanepa")
	{
		printf("%s",s3);
	}
	else
	{
		printf("%s",s4);
	}
}
