#include<stdio.h>
int main()
{
	int r,n,s=0;
	printf("enter n\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s+r;
	}
	printf("sum=%d",s);
	return (0);
}
