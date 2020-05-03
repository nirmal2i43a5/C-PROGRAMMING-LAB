#include<stdio.h>
 void empdet(struct employee[],int); 
struct employee
{
	char name[20];
	char address[20];
	
	int no_of_employee;
}; 
int main()
{
struct employee e[2];
int i,n;

for(i=0;i<2;i++)
{
printf("Enter the detail of employee %d  :\n",++i);	
printf("Enter employee name\n");
scanf("%s",e[i].name);
printf("Enter employee address\n");
scanf("%s",e[i].address);
printf("Enter  no of employee\n");
scanf("%d",&e[i].no_of_employee);
}
empdet(e,n);


return 0;

}
void empdet(struct employee e[],int n)
{
	int i;
for(i=0;i<2;i++)
{
printf("Detail information of employee %d\nName=%s\nAddres=%s\nNo of employee=%d",++i,e[i].name,e[i].address,e[i].no_of_employee);	
}

}


