#include <stdio.h>
#include <conio.h>
void main()
{
  int i,n;
  printf("Enter the number") ;
  scanf("%d",&n);
  for(i=2 ; i,n ; i++)
  {
      if(n%i==0)
        break;
  }
  if(n!=i)
    printf("composite=%d"n);
  else
    printf("not composite=%d",n);
  getch();
}
