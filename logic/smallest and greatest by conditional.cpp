#include<stdio.h>
int main()
{
	int a,b,c,G,S;
	printf("enter any nos\n");
	scanf("%d %d %d",&a,&b,&c);
	G=(a>b)?(a>c?a:c):(b>c?b:c);
	S=(a<b)?(a<c?a:c):(b<c?b:c);
	printf("greatest=%d\n",G);
	printf("smallest=%d",S);
}
