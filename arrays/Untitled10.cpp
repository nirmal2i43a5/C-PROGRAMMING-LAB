#include<stdio.h>
int main()
{
	int n,i;
	int a[50];
	printf("Enter array number to generate");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<i+n;i++){
		a[i+n]=a[i];
		if(a[i+n]>n)
		{
			a[n]=a[i];
		}
		}
	}
	for(i=0;i<n;i++)
	
	{
		printf("%d",a[i]);
	}
	
}
