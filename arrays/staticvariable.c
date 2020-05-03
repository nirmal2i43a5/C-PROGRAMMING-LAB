#include<stdio.h>
void count()
{
    static int x=0;
    x=x+2;
    printf("value of x: %d\n",x);

}
void main()
{
    int i;
    for(i=0;i<=3;i++)
        count();



}
