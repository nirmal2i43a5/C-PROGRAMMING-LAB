#include <stdio.h>
void main()
{
int a,b,gcd;
printf("enter two positive numbers");
scanf("%d%d",&a,&b);
while(a!=b)
{
if(a>b)
{
a=a-b;
}
else
{
b=b-a;
}
}
print("gcd =%d",b);
}
