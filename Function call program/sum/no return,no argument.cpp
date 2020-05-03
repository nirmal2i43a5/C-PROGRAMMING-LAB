#include<stdio.h>
void sum(int,int);
int main()
{
  	sum();
	return (0);
}
void sum()
{
int a,b,s;
printf("enter values\n");
scanf("%d %d",&a,&b);
s=a+b;
printf("sum=%d",s);
}
