#include<stdio.h>
int  main()
{
	int a,b,t;
	printf("enter the value of a & b\n");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d,b=%d",a,b);
	t=b;
	b=a;
	a=t;
	printf("After swaping a=%d,a=%d",a,b);
}
