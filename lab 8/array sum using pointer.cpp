#include<stdio.h>
int main()
{
int s=0,*p,i,a[5];
 p=a;
printf("Enter array elements\n");
for(i=0;i<5;i++)
{
	scanf("%d\t",&a[i]);	
}

for(i=0;i<5;i++)
{
	scanf("%d\t",&a[i]);	
		s=s + *p;
	p++;	
}


	//p++ means update of address but not increament by 1 

printf("sum=%d",s);
	
}
