#include<stdio.h>
int main(){
	int a,b,c,d,HCF,LCM;

	printf("enter a and b");
	scanf("%d %d",&a,&b);
		c=a;
	d=b;
	
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	printf("HCF is %d",a);
	printf("\n");
	LCM=(c*d)/b;
	
	printf("lcm is is %d",LCM);
	
}
