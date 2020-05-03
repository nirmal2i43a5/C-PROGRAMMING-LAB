#include<stdio.h>
int main()
{
	char ch,UC,LC
	;
	printf("enter alphabet\n");
	scanf("%c",&ch);
	LC = (ch == 'a' ||ch == 'e'|| ch == 'i'|| ch =='o' || ch=='u');
	UC =(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(LC||UC)
	 {
	printf("vowel");
     }
	else
	{
	printf(" not vowel");
	}
}


