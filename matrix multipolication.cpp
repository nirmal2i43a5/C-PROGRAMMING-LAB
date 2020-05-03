#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],i,j,m,n,o,p,c[10][10],k,s;
	printf("Enter row and column of first matrix\n");
	scanf("%d %d",&m,&n);
		printf("enter first matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter row and column of second matrix\n");
	scanf("%d %d",&o,&p);
	printf("Enter second matrix\n");
	for(i=0;i<o;i++)
	{
		for(j=0;j<=p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	
		for(i=0;i<m;i++)	
		{
			for(j=0;j<p;j++)
			{
				s=0;
				
				for(k=0;k<n;k++)
				{
					s+=a[i][k]*b[k][j];
				}
				c[i][j]=s;
			}
		}
		printf("Multiplication of matrices\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
		
	
}

