#include<stdio.h>
int sum(int);
int main()
{
	int i,n,s=0,;
	for(i=1;i<=50;i++)
	{
		n=i;
	   	s=sum(n);
	}
	printf("sum=%d",s);
	return 0;
}
int sum(int n)
{
    	int s;
	s=s+n;
	return s;			
}   

