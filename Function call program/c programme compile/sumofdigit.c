#include<stdio.h>
#include<conio.h>
void  main()
{
int n,r,s=0;
printf("Enter a positive integer:");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("sum of digits:%d",s);
}
