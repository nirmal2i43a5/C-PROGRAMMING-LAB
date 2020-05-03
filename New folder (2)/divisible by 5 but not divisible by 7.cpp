#include<stdio.h>
int main()
{
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	if(n%5==0 && n%7!=0)
	printf("n is multiple of 5\nn is not divisible by 7");
	else
	printf("Invalid");
}
