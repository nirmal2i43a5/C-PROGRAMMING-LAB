#include <stdio.h>
void main()
{
	int P,T;
	float SI,R;
	printf("Enter the value of P,T,and R\n");
	scanf("%d,%d,%f,&P,&T,&R");
	SI=(P*T*R)/100;
	printf("simple interest=%f",SI);
}
