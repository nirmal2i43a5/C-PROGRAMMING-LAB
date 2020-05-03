#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("enter values\n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	return (0);
}
void sum(int x,int y)
{
	int s;
	s=x+y;
	printf("sum=%d",s);
}
