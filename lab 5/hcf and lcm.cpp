#include <stdio.h>
int main()
{
	int a,b,c,d,lcm,hcf,r;
	printf("enter two number\n");
	scanf("%d %d",&a,&b);
	c=a;
	d=b;
	do 
	{
		r = a%b;
		if(r==0)
		{
		hcf=b;
		printf("hcf=%d\n",hcf);	
		}
		else
		{
			a=b;
			b=r;
		}
	}while(r>0); 
	lcm=((c*d)/hcf);
	printf("lcm=%d",lcm);
}
