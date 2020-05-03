//frequency of characters
#include <stdio.h>
#include<string.h>

int main()
{
   char str[50],s2[50];
  int i, frequency = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%s",&s2);

 if(strcpy(str,s2)==0)
 {
 
 	printf("equal");
 }
else
{
 //  printf("Frequency of %c = %d", ch, frequency);
	printf("not equal");
}

   return 0;
}
