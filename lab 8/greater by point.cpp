include<stdio.h>
void greatest(int*,int*,int*);
int main()
{
	int a,b,c;
	printf("enter a,b and c\n");
	scanf("%d %d %d",&a,&b,&c);
	greatest(&a,&b,&c);

}
void greatest(int*a,int*b,int*c)
{
	if(*a>*b&&*a>*c)
		printf(" Greatest=%d",*a);
	else if(*b>*a&&*b>*c)
	  	printf(" Greatest=%d",*c);
	else
		printf(" Greatest=%d",*c);
		
	
}
