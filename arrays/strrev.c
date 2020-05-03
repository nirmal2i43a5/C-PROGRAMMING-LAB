//reverse string
#include <stdio.h>
#include<string.h>
int main()
{
   char str[50], rev[50];
   int begin, end,count=0;
   printf("Input a string\n");
   gets(str);
   // Calculating string length
   while(str[count]!='\0')
   		count++;
   end = count - 1;
   for (begin = 0; begin < count; begin++)
   {
      rev[begin] = str[end]; //index pointing first and last
      end--;
   }
   rev[begin] = '\0';
   puts(rev);
   
   

   return 0;
}
