#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,i,hcf,lcm;
printf("Enter two positive numbers");
Scanf("%d%d",&a,&b);
for(i=1 ; i<=a&&i<=b ; i++)
{
if(a%i==0&&b%i==0)
hcf=i;
}
lcm=(a*b)/hcf;
printf("The lcm of two numbers %d and %d is %d",a,b,lcm);
getch();
}
