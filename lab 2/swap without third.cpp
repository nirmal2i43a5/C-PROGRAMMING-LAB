#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap a=%d,b=%d",a,b);
}


