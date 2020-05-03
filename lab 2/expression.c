#include<stdio.h>
int main()
{
	int x,y,m;
	float d;
	printf("enter the value of x and y:\n
	
	
	");
	scanf("%d %d",&x,&y);
	d=(float)(x+y)/(x-y);
	m=(x+y)*(x-y);
	printf("%f\t%d",d,m);
	return 0;
}
