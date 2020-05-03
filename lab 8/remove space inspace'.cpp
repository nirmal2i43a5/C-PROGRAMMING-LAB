
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char s1[50],s2[50];
	printf("Enter string before removing space\n");
	gets(s1);					//ALSO PRACTICE LOGIC TO READ LINE//
	for(i=0;s1[i]!='\0';i++)
	{
	
		if(s1[i]==' ')
		{
		continue;
		}
	
		s2[j]=s1[i];
		j++;
		
	}
	s2[j]='\0';
printf("String after removiing space=%s",s2);

}
