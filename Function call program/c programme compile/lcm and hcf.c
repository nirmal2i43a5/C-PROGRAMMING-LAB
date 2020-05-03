#include<stdio.h>
void main()
{
int a,b,c,d,hcf,lcm,r;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
c=a;
d=b;
do
{
r=a%b;
if(r==0)
hcf=b;
print("hcf of two numbers=%d",a,b,hcf);
else
{
    a=b;
    b=r;
}
}while(r>0);
lcm=(c*d)/hcf;
printf("lcm of two numbers=%d",c,d,lcm);
}
