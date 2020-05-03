
#include <stdio.h>
void main()
{
 int i,j,k,n;
 printf("Enter the number of lines of * to be printed\n");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
 {
    for (j=n;j>i;j--)//or for(j=i;j<=4;j++)
    {
        printf("+");
    }
    for (j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
 }
}
