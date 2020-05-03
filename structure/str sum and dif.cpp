#include<stdio.h>
struct complex
{
	float real;
	float imag;
};
void add_sub(struct complex,struct complex,struct complex*,struct complex*);
int main()
{
	struct complex c1,c2,add,sub;
	
	printf("Enter first complex no\n");
	scanf("%f %f",&c1.real,&c1.imag);
	printf("Enter 2nd complex no\n");
	scanf("%f %f",&c2.real,&c2.imag);
	add_sub(c1,c2,&add,&sub);
	return 0;
	
}
void add_sub(struct complex c1,struct complex  c2,struct complex*add,struct complex*sub)
{
 (*add).real=c1.real+c2.real;
 (*add).imag=c1.imag+c2.imag;
 (*sub).real=c1.real-c2.real;
 (*sub).imag=c1.imag-c2.imag;
 printf("sum=%f+i%f\n",(*add).real,(*add).imag);
 printf("sub=%f-i%f",(*sub).real,(*sub).imag);
}

