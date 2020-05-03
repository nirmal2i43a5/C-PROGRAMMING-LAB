#include<stdio.h>
struct employee
{
	char name[20],address[20];
	
	int no_of_employee;
};
void empdet(struct employee);
int main()
{
struct employee e;        //struct employee e={"nirmal","butwal",5};
						//empdet(e);//Whole structure is passed in this way also
printf("Enter the employee details\n");
printf("Enter employee name\n");
scanf("%s",e.name);
printf("Enter employee address\n");
scanf("%s",e.address);
printf("Enter  no of employee\n");
scanf("%d",&e.no_of_employee);
empdet(e);
return 0;

}
void empdet(struct employee e1)
{

printf("Name=%s\nAddres=%s\nNo of employee=%s",e1.name,e1.address,e1.no_of_employee);

}


