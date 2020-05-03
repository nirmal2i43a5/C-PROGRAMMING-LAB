#include<stdio.h>
int ecount(int);
int ocount(int);
int main()
{
	int n,result1,result2;
	printf("enter n\n");
	scanf("%d",&n);
	result1=ecount(n);
	result2=ocount(n);
	printf("ecount=%d\nocount=%d",result1,result2);
	return (0);
}
int ecount(int n)
{
	int e=0,r;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
	if(r%2==0)
	{
		e=e+1;

	}	
	}
	return e;
}
int ocount(int n)
{
	int r,o=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		if(r%2==1)
		{
			o++;
		}
	}
	return o;
}


