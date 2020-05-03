#include<stdio.h>
int fib(int);
int main()
{
	int n,f;
	printf("enter n\n");
	scanf("%d",&n);
	f=fib(n);
	printf("%d\t",f);

}
int fib(int t)
{
	if(t==1||t==2)
	return t-1;
	else 
	return(fib(t-1)+fib(t-2));
}
