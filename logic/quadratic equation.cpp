#include<stdio.h>
#include<Math.h>
int main()
{
	int a,b,c,d;
	float r1,r2;
	printf("Enter three coefficients\n");
	scanf("%d %d %d",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d==0)
	{
		r1=r2=(-b/2*a);
		printf("Roots are r1=%f\nr2=%f",r1,r2);
	}
	else if(d>0)
	{
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("roots are r1=%f\nr2=%f",r1,r2);
	}
	else
	{
		r1=-b/2*a;
		r2=sqrt(abs(d))/2*a;
		printf("roots are %f+i%f\n%f-i%f",r1,r2,r1,r2);
	}
}
