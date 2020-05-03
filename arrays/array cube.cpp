#include<stdio.h>
#include<math.h>
int main()
{
	int a[5]={1,2,3,4,5},i;
	for(i=0;i<5;i++)
	{
		scanf("%d",a+i);
		a[i]=pow(a[i],3);
	}
	for(i=0;i<5;i++){
	printf("%d\t",a[i]);
}
	return 0;
}
