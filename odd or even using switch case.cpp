#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter n");
	scanf("%d",&n);
	printf("ENtre m");
	scanf("%d",&m);
	switch(m)
	{
		case '1':
				if(n%2==0)
					printf("n is even");
			break;		
		case '2':
			if(n%2==1)
				printf("n is odd");
				break;
					
	}
}
