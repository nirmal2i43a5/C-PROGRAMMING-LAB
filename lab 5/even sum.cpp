#include<stdio.h>
int main()
{
	int i,a,sum=0,b;
	printf("enter value\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
		sum=sum+i;	
		}
	}
	printf("sum=%d",sum);
}
