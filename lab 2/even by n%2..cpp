
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("By modulus operator even=%d\n",n);
	}
	else
	
	
	{
		printf("By modulus opertor odd=%d\n",n);
    }
	if(n&1==1)
	{
		printf("by bitwise operator");
		printf("By bitwise operator odd=%d\n",n);
	}
	else
	{
		printf("By bitwise operator even=%d\n",n);
	}
     	if(n/2*2==n)
	{
		printf("Without mod and bitwise operator even=%d\n",n);
	}
	else
	{
		printf(" without mod and bitwise operator odd=%d\n",n);
		}	
	n%2 == 0 ? printf("By conditional operator even=%d",n):printf("By conditional operator odd=%d",n);
	return 0;
}


