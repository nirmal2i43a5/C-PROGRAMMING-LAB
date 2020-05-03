#include<stdio.h>
#include<string.h>
int main()
{
	int i,charcount=0,word=1;
	char s[50];
	printf("Enter string\n");
	gets(s);					//ALSO PRACTICE LOGIC TO READ LINE//
	for(i=0;s[i]!='\0';i++)
	{
		
		if(s[i]==' ')
		{
			word++;
			
		}
		else
		{
		charcount++;
		}
	
	}
	printf("character=%d\nword=%d",charcount,word);

}
