#include<stdio.h>
#include<math.h>
int pow(int,int);
int main()
{
	int b,e,power;
	printf("enter  b and e\n");
	scanf("%d %d",&b,&e);
	power=pow(b,e);
	printf("power=%d",power);
	return 0;
}
int pow(int b,int e)
{
if(e==0)
return 1;
else 
return b*pow(b,e-1);
}
