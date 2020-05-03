#include <stdio.h>
void main()
{
int tdays,years,months,weeks,days,t;
printf("Enter total days");
scanf("%d",&tdays);
years=(tdays/365);
months=(tdays%365)/30;
t=(tdays%365);
weeks=(t%30)/7;
days=tdays-((years*365)+(months*30)+(weeks*7));
printf("years=%d\nmonths=%d\ndays=%d\nweeks=%d",years,months,days,weeks);
getch();
}
