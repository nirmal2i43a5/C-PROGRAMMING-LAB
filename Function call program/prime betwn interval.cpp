#include<stdio.h>
int prime(int);
int main()
{
	int a,b,co,n,t;
	printf("Enter a and b\n");
	scanf("%d %d",&a,&b);
	for(n=a;n<=b;n++)
	{
		t=n;
		co=prime(t);
		if(co==2)
		{
			printf("%d\t",n);
		}
	}
}
int prime(int t)
{
	int c=0,i;
	for(i=1;i<=t;i++)
	{
		if(t%i==0)
		{
			c++;
		}
	}
	return c;
}
