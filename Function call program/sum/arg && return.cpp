/*arg and return type*/
#include<stdio.h>
float sum(int,int);
int main()
{
	int a,b;
	float result;
	printf("enter two integer\n");
	scanf("%d %d",&a,&b);
	result=sum(a,b);
	printf("sum=%f",result);
}
float sum(int x,int y)
{
	float s;
	s=(float)x/y;
	return s;
}

