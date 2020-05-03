#include<stdio.h>
int pow(int,int);
int main()
{
	int b,e,power;
	printf("enter b and e\n");
	scanf("%d %d",&b,&e);
	power=pow(b,e);
	printf("power=%d",power);
	return 0;
}
int pow(int b,int e)
{
	int p=1,i;
	for(i=1;i<=b;i++)
	{
		p=p*b;
	}
	return p;
}
