#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	printf("enter any operator\n");
	scanf("%c",&ch);
	printf("enter two operands\n");
	scanf("%d %d ",&a,&b);
	switch(ch)
	{
		case'*':
					printf("%d*%d=%d",a,b,a*b);
					break;
		case'+':
					printf("%d+%d=%d",a,b,a+b);
					break;
		case'-':
					printf("%d-%d=%d",a,b,a-b);
					break;
		case'/':
					printf("%d/%d=%d",a,b,a/b);
					break;
		
		default:
			printf("invalid character");	
	      
	}
	return(0);
}
