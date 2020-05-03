#include<stdio.h>
int main()
{
	int p=1,b,e,i;
	printf("enter b and e\n");
	scanf("%d %d",&b,&e);
	for(i=1;i<=e;i++)
	{
		p=p*b;
	}
	printf("power =%d",p);
	return 0;
}
