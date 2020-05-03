#include<stdio.h>
int as(int);
int main()
{
	int n,t,s;
	for(n=1;n<=1000;n++)
	{
		t=n;
 		s=as(t);
	if(n==s)
	printf("%d\t",n);
	}
return 0;
}
int as(int t)
{
	int s=0,r;
	while(t!=0)
	{
		r=t%10;
		t=t/10;
    	s=s+r*r*r;
	}
		return s;
}
