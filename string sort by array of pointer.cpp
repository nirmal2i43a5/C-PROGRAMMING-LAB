#include<stdio.h>
#include<string.h>
main()
{
char *str[10], *t;
int i,j;

for(i=0;i<5;i++)
{
    scanf("%s",&str[i]);
}

for(i=0; i<5; i++)
{
    for(j=i+1; j<5; j++)
    {
        if (strcmp(&str[j-1], &str[j]) > 0)
        {
            t=str[j];
            str[j]=str[j-1];
            str[j-1]=t;
        }
    }
}
printf("\n");

for(i=0;i<5;i++)

{
    printf("%s\n",str[i]);
}
}
