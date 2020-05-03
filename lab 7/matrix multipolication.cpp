
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,c[3][3],s,k;

		printf("enter all elements of first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	printf("\n");
	}
printf("Enter all the elements of second matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	
		for(i=0;i<3;i++)	
		{
			for(j=0;j<3;j++)
			{
				s=0;
				
				for(k=0;k<3;k++)
				{
					s+=a[i][k]*b[k][j];
				}
				c[i][j]=s;
			}
		}
		printf("Multiplication of matrices\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
		
	
}

