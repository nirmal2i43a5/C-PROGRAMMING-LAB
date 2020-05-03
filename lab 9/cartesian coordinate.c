#include<stdio.h>
#include<math.h>
struct cartesian
{
	int x,y;
};
int main()
{
	struct cartesian a,b;	float dis;
		printf("enter coordinates of a\n");
	scanf("%d %d ",&a.x,&a.y);

	printf("enter coordinates of b\n");
	scanf("%d %d ",&b.x,&b.y);
	
dis=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	printf("Distance=%f",dis);
	return 0;
}
