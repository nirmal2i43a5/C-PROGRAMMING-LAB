#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0;
	printf("Enter all 3*3 element\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			s=s+(a[i][j]);
		}
	}
	printf("sum=%d",s);
}
