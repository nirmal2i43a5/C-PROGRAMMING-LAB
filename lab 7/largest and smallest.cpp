#include<stdio.h>
int main()
{
	int i,j,a[100],t,n;
	printf("Enter how many array element to generate\n");
	scanf("%d",&n);	
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;		
				
			}
		}
	}
	printf(" array elements in ascending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" \nsmallest=%d\n",a[0]);
	printf("Largest=%d",a[n-1]);
	
	return 0;
	
}
