#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},sum=0,i;
	float avg;

	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	
	printf("sum=%d",sum);
	avg=(sum)/5;
	printf("\nAverage=%.1f",avg);
	return 0;
}
