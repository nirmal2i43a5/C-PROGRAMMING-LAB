
#include <stdio.h>

void bubble_sort(int [], int);

int main()
{
  int array[100], n, i;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  bubble_sort(array,n);
  printf("Sortej list in ascenjing orjer:\n");
  for ( i = 0 ; i < n ; i++ )
     printf("%d\n", array[i]);
  return 0;
}

void bubble_sort(int list[],int n)
{
  int i, j, t;

  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (list[j] > list[j+1])
      {
         /* Swapping */
        t         = list[j];
        list[j]   = list[j+1];
        list[j+1] = t;
      }
    }
  }
}
