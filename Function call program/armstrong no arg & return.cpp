#include<stdio.h>
int armstrong();
int main()
{
	int r,s=0,t,n;
	n=armstrong();
	t=n;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		s=s+r*r*r;		
	}
	if(t==s)
	{
		printf("n is armstrong");		
	}
	else {
		printf("n is not armstrong");
	}
}
int armstrong()
{
	int n;
	printf("enter n\n");
	scanf("%d",&n);
	return n;
}
