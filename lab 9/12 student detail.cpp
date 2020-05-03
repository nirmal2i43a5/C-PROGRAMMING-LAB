#include<stdio.h>
struct student
{
	int Rollno;
	char Name[20];

};
void display(struct student[]);
int main()
{
	struct student s[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter Roll no,name of student \n");
		scanf("%d\n%s\n",&s[i].Rollno,s[i].Name);
	}
	display(s);
}
void display(struct student s[])
{
	int i;
	for(i=0;i<3;i++)
	{
	
printf(" Rollno=%d\nName=%s\n",s[i].Rollno,s[i].Name);
}
}
