#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=3;j++)
		{
			printf(" ");
		}
		for(j=1;j<2*i;j++)
		{

			if(j%2==0)
			{
			printf(" ");
			}
				else{
				printf("*");
			}
				
		}
		printf("\n");
	}
	
	for(i=4;i>=1;i--)
	{
		for(j=i;j<4;j++){
			printf(" ");
			
		}
		for(j=1;j<2*i;j++){
//			printf("*");
				if(j%2==0)
			{
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	
}
