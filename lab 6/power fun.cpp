#include<stdio.h>
int pow(int,int);
int main()
{
	int b,e,p;
	printf("Enter b and e\n");
	scanf("%d %d",&b,&e);
	p=pow(b,e);
	printf("power=%d",p);
}
int pow(int b,int e)
{
	int pow=1,i;
	for(i=1;i<=e;i++)
	{
		pow=pow*b;
	}
	return pow;
}
