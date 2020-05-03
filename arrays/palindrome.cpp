#include<stdio.h>
int main()
{
	int n,t,r;
	int sum=0;
	printf("Enter n");
	scanf("%d",&n);
	t=n;
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
		
	}
	if(sum==t){
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}
