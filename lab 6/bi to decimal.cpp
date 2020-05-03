


#include<stdio.h>
#include<math.h>
 int btd(long long int);
int main()
{
	long long int n,decimal;
	printf("Enter binary no\n");
	scanf("%lld",&n);
	decimal=btd(n);
	printf("Decimal=%d",decimal);
	return 0;
	
}
int btd(long long int n)
{
	int i=0,decimal_no=0,r;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		decimal_no+=r*pow(2,i);
		i++;
	}
	return decimal_no;
}
