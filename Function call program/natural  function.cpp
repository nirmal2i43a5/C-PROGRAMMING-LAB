#include<stdio.h>
int nat(int);
int main()
{
	int na,i,n;
	for(i=1;i<=50;i++)
	{
		n=i;
	   	na=nat(n);
	   	printf("%d\t",na);
	}
}
int nat(int n)
{
	return n;			
}
