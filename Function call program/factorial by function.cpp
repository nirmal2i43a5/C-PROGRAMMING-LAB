#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("enter n\n");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);
	return(0);
}
int fact(int m)
{
	int f=1,i;
	for(i=m;i>=1;i--)
	{
		f=f*i;
	}
	return f;
}
