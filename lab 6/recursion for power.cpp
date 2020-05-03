#include<stdio.h>
int pow(int,int);
int main()
{
	int b,e,p;
	printf("enter base and exponent\n");
	scanf("%d %d",&b,&e);
	p=pow(b,e);
	printf("power=%d",p);
	return 0;
}
int pow(int b,int e)
{
	if(e==0)
	return 1;
	else
	return b*pow(b,e-1);
}
