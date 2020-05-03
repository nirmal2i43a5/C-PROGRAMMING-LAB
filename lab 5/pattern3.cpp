#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=4;j++)
		{
			printf(" ");
		}
		for(j=1;j<2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
