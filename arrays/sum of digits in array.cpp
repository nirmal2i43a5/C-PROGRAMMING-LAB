#include<stdio.h>
int main()
{
	int a[5],i,r,s;
	printf("Enter arrays elements\n");
	for(i=0;i<5;i++)
	{
		s=0;
		scanf("%d",&a[i]);
		while(a[i]!=0)
		{
			r=a[i]%10;
			s=s+r;
			a[i]=a[i]/10;
	}
	a[i]=s;
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
