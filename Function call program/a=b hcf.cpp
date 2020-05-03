#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,g;
	printf(" a and b\n");
	scanf("%d %d",&a,&b);
	g=gcd(a,b);
	printf("GCD of a and b=%d",g);
	}
	int gcd(int a,int b)
	{
		while(a!=b)
		{
			if(a>b)
			 {
			 	a=a-b;
			 }
			 else
			 {
			 	b=b-a;
			 }
		}
		return a;
		
	}
	
