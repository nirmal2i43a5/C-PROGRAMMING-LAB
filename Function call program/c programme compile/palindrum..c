#include <stdio.h>
void main()
{
int t,n,r,s=0;
printf("enter a num");
scanf("%d",&n);
t=n;
while(n!=0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(t==s)
printf("\n%d is palindrum",t);
else
printf("\n%d is not palindrum",t);
}
