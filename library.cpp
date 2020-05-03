#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>		//for system("cls")
 typedef struct book
{
	char title[30];
	char book_writer[30];
	int page_no;
	float price;
}book;
 book *Book;	//Global book type pointer
 int count=0;	//Global count variable
 int size;	//Global variable for Dynamic memory location								
void add_book()
{
	system("cls");
	printf("\n************ADD BOOK DETAIL**************");	
	printf("\nEnter Book Title : ");
	scanf("%s",Book[count].title);
	printf("\nEnter Book Writer : ");
	fflush(stdin);
	gets(Book[count].book_writer);
	printf("\nEnter Book Page : ");
	scanf("%d",&Book[count].page_no);
	printf("\nEnter book price : ");
	scanf("%f",&Book[count].price);
	count++;
}
void show_all_book(){
	int i;
	system("cls");
	printf("\n\n\t\t\t*****$$$$$$$$$$$$********Book Details*******$$$$$$$$$$$$***********\n\n");
	printf("\n\t\t\tBOOK TITLE\t\tBOOK WRITER\t\tBOOK PRICE\t\tBOOK PAGE");
	printf("\n\t\t--------------------------------------------------------------------------------------------");
	for(i=0;i<count;i++)
	{
	
		printf("\n\t\t%s",Book[i].title);
		printf("\t\t\t%s",Book[i].book_writer);
		printf("\t\t\t\t%d",Book[i].page_no);
		printf("\t\t\t%f\n",Book[i].price);
}
}
void search_book()
{
	char book_title[10];
	int i;
	printf("\nEnter Book Title To Be Search : ");
	gets(book_title);
		for(i=0;i<count;i++)
		{
			if(stricmp(Book[i].title,book_title)==0)
			{
			
			system("cls");
			printf("\n\n\t\t>>>>>>>>>>>>Book Details<<<<<<<<<<<<<<<<<<<<<");
			printf("\n\n\tBook title : %s",Book[i].title);
			printf("\n\n\tBook Writer : %s",Book[i].book_writer);
			printf("\n\n\tBook page : %d",Book[i].page_no);
			printf("\t\tBook Price : %f",Book[i].price);
	
			}
			printf("Book not found\n");
		}		
}
	void delete_book()
	{
		char book_title[10];
	int i,j;	//			book *temp;	
	printf("\nEnter Book Title To Be Delete : ");
	gets(book_title);
	for(i=0;i<count;i++)
	{
		if(strcmp(Book[i].title,book_title)==0)
		{
			system("cls");
			printf("\n\n\t\t>>>>>>>>>>>>THIS BOOK WILL BE REMOVED FROM LIST<<<<<<<<<<<<<<<<<<<<<");
			printf("\n\n\tBook title : %s",Book[i].title);
			printf("\n\n\tBook Writer : %s",Book[i].book_writer);
			printf("\n\n\tBook page : %d",Book[i].page_no);
			printf("\n\n\t\tBook Price : %f",Book[i].price);
		}
			for(j=i;j<count-1;j++)
			{
				Book=Book+1;         
			}
			count--;		
	}			
	}
	void update_book()
{
		char book_title[10];
		int i;
									//	book temp;
		printf("\nEnter Book Title to Be update");
		gets(book_title);
	for(i=0;i<count;i++)
	{
		
			if(strcmp(Book[i].title,book_title)==0)
			{
			system("cls");
			printf("\n\n\t\t>>>>>>>>>>>>Update Book Details<<<<<<<<<<<<<<<<<<<<<");
			printf("\n\n\tBook title : %s",Book[i].title);
			printf("\n\n\tBook Writer : %s",Book[i].book_writer);
			printf("\n\n\tBook page : %d",Book[i].page_no);
			printf("\t\tBook Price : %f",Book[i].price);
			
				printf("\n************ADD BOOK DETAIL**************");
				printf("\nEnter Book Title : ");
				gets(Book[i].title);
				printf("\nEnter Book Writer : ");
				fflush(stdin);
				gets(Book[i].book_writer);
				printf("\nEnter Book Page : ");
				scanf("%d",&Book[i].page_no);
				printf("\nEnter Book price : ");
				scanf("%f",&Book[i].price);
		
			}
	}
}
	int main()
		{				                    
		int choice;
		char n;
		system("color 90");
		printf("\n\n");
			printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<WELCOME TO LIBRARY MANAGEMENT PROJECT<<<<<<<<<<<<<<<<<<<<\n\n");
		printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@   SUBMITTED TO  ::DURYODHAN CHAULAGAIN  @@@@@@@@@@@@@@@@@@@@@@\n\n");
		fflush(stdin);
	//	system("cls");
		printf("<<< GROUP OF THIS PROJECT>>>>\n\n");
		printf("1.NIRMAL PANDEY\n2.NIRVAY CHAUDHARY\n3.AMAN THAPA\n4.PRAMIT BHATTARAI\n\n");
		printf("Enter any alphabet ::\n");
		scanf("%c",&n);
		printf("\n\n");	
		fflush(stdin);
		system("cls");
		printf("\n\n");
		system("color 70");
		printf("\t\t>>>>>>>>>>>>>>>>>ENTER THE NUMBER OF BOOK YOU WANT TO ADD IN THE LIBRARY<<<<<<<<<<<<<<<<<<<");
		scanf("\n%d",&size);
		Book=(book*)malloc(sizeof(Book)*size);
			do
		{
			system("cls");
			system("color 70");
			printf("\n1.Add Book\n2.Show All Books\n3.Search Book\n4.Delete Book\n5.Update Book\n6. exit\n");
			printf("Enter choice  : ");
			scanf("%d",&choice);
			fflush(stdin);
			switch(choice)
			{
				case 1:	add_book();
						break;
				case 2:show_all_book();
						break;
				case 3: search_book();
						break;
				case 4:delete_book();
						break;
				case 5:update_book();
						break;				 
				case 6:exit;    
			}
			getch();
		}while(1);
		return 0;
	}
		
	

	
