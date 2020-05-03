#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=1;
printf("Enter a positive integer");
scanf("%d",&n);
i=n;
while(i!=1)
{
f=f*i;
i=i-1;
}
printf("%d!=%d",i,f);
}
