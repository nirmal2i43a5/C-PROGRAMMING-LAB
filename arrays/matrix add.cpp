#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,c[2][2];
	printf("matrix a\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[2][2]);
		}
	}
		printf("matrix b\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[2][2]);
		}
	}
	printf("sum\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
