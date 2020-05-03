#include<stdio.h>
int greatest(int*,int*,int*);
int main()
{
	int a,b,c,G;
	printf("enter a,b and c\n");
	scanf("%d %d %d",&a,&b,&c);
	G=greatest(&a,&b,&c);
	printf("Greatest=%d",G);
}
int greatest(int*a,int*b,int*c)
{
	if(*a>*b&&*a>*c)
		return *a;
		else if(*b>*a&&*b>*c)
		return *b;
		else
		return *c;
	
}
