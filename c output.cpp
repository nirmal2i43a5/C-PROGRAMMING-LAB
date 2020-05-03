#include<stdio.h>
int main()
{
	int i=-3,j=2,k=0,m;
m=++i||++j&&++k;
//	int a=x&&y&&z++;
	printf("%d %d %d %d",i,j,k,m);
}
