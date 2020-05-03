#include<stdio.h>
void fib(int);
int main()
{
	int n;
	printf("Up to how many term value\n");
	scanf("%d",&n);
	fib(n);
	return 0;
	
}
void fib(int n)
{
	int f=0,s=1,t=1;
	printf("0	1\t");
	
	while(t<=n)
	{
		printf("%d\t",t);
		f=s;
		s=t;
		t=f+s;
	}
}
