/l#include<stdio.h>
struct complex
{
	float real;
	float imag;
};
struct complex add(struct complex,struct complex);
int main()
{
		struct complex c1,c2,c3;
	printf("Enter 1st complex no.\n");
	scanf("%f &f",&c1.real,&c1.imag);
	printf("Enter 2nd complex no\n");
	scanf("%f %f",&c2.real,&c2.imag);
	c3.real=c1.real+c2.real;
    c3=	add(c1,c2);
printf("sum=%f+i%f",c3.real,c3.imag);
return 0;
}
struct complex add(struct complex c1,struct complex c2)
{
	struct complex c3;

	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	return c3;
}


