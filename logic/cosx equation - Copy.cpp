

#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
	int x,k;
	float sum=0.0,cosx;
	printf("enter the value of x\n");
	scanf("%d",&x);
	for(k=0;k<=5;k++)
	{
		sum+=(float)(pow(-1,k)*pow(x,2*k)/fact(2*k));
	}
	printf("sum=%f\n",sum);
	printf("using cos=%f",cosx);
	return(0);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

