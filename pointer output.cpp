#include<stdio.h>
int main()
{

int count = 10, *temp, sum = 0;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	printf("count = %d\n*temp = %d\nsum = %d\n", count, *temp, sum);
    }


