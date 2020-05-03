#include<stdio.h>
int nat(int);
int main()
{
	int na,n=50;

	{
		
	   	na=nat(n);
	   	printf("sum of nat from 1 too 50=%d",na);
	}
}
int nat(int n)
{
	if(n==1)
	return 1;
	else
	return(n+nat(n-1));			
}
