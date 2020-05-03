#include<stdio.h>
int sum(int);
int main()
{
	int s,n,i;
	for(i=50;i>=1;i--)
	{
		n=i;
		s=sum(n);	
		printf("sum of natural number =%d",s);		
	}
}

int sum(int n)
{
if(n==1)
 {
 	return 1;
	}
	else
	{
		return (n+sum(n-1));
	}	
}
