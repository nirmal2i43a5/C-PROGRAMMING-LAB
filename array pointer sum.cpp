#include<stdio.h>
int main()
{
int s=0,i,a[5]; 
printf("Enter array elements\n");
for(i=0;i<5;i++)
{
	scanf("%d\t",a+i);	
		s=s + *(a+i);	
}

printf("sum=%d",s);
										//p++ means update of address but not increament by 1
			
}
