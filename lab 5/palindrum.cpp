#include<stdio.h>
int main()
{
	int r,n,t,s=0;
	printf("enter n\n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
	}
	if(t==s)
	{
		printf("palindrum");
	}
	else
	{
		printf("not palindrum");
	}
}
