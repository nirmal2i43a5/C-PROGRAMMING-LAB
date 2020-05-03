/*ret && no arg*/

int sum(int,int);
int main()
{
	int result;
	result=sum();
	printf("sum=%d",result);
	return (0);
}
int sum()
{
	int a,b,s;
	printf("enter two integer\n");
	scanf("%d %d",&a,&b);
	s=a+b;
	return s;
}
