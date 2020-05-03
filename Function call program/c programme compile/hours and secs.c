#include <stdio.h>
void main()
{
int tsecs,mins,hrs,secs;
printf("enter total seconds");
scanf("%d",&tsecs);
hrs=tsecs/3600;
mins=(tsecs%3600)/60;
secs=tsecs-((hrs*3600)+(mins*60));
printf("hours=%d\nminutes=%d\nseconds=%d",hrs,mins,secs);
return(0);
}
