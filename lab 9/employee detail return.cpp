#include<stdio.h>
 struct employee empdet(struct employee); 
struct employee
{
	char name[20];
	char address[20];
	
	int no_of_employee;
}; 
int main()
{
struct employee e,e1;
printf("Enter the employee details\n");
printf("Enter employee name\n");
scanf("%s",e.name);
printf("Enter employee address\n");
scanf("%s",e.address);
printf("Enter  no of employee\n");
scanf("%d",&e.no_of_employee);
e1=empdet(e);
printf("Name=%s\nAddres=%s\nNo of employee=%d",e1.name,e1.address,e1.no_of_employee);

return 0;

}
struct employee empdet(struct employee e)
{
return e;
}


