#include<stdio.h>
int nat(int);
int main()
{
	int s,n=50;

	s=nat(n);
	printf("sum=%d",s);
}
int nat(int n)
{
	int sum=0,i;
for(i=1;i<=50;i++)
	{
		sum=sum+i;
	}
	return sum;
}
