#include<stdio.h>
int main()
{
	int a[100],i,n,m,count=0;
	printf("How many number to generate\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the occurence of he  number \n");
	scanf("%d",&m);	
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		 count++;
	}

	printf("count of %d=%d",m,count);
	return 0;
}

