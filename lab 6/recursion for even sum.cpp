#include<stdio.h>
int evensum(int);
int main()
{
	int n,s;
	printf("enter n\n");
	scanf("%d",&n);
	s=evensum(n);
	printf("evensum=%d",s);
	return 0;	
}
int evensum(int n)
{
	if(n==1)
	return 2;
	else
	return (2*n+evensum(n-1);
}
