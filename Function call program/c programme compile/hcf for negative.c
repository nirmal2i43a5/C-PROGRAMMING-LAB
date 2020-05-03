#include <stdio.h>
void main()
{
int a,b;
printf("enter two positive numbers");
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
printf("gcd=%d",a);
return(0);
}
