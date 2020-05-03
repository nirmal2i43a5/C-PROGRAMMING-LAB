








#include<stdio.h>
int des(int[]);
int main()
{
	int i,a[5];
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		a[i]=des(a);
	printf("Array elements in descending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nsecond largest=%d",a[1]);
		return 0;
}
int des(int b[])
{
	int i,j,t;
	for(i=0;i<=3;i++)
	{
	for	(j=i+1;i<=4;j++)
	{
		if(b[i]<b[j])
		{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
		}
	}
	}
	return b[i];
	
}
