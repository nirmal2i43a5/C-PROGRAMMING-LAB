#include<stdio.h>
void swap(int*,int*);
void swap(int* x, int* y)
{
    int tmp = *x;

    *x = *y;
    *y = tmp;
}

int main()
{
    int m = 6;
    int n = 10;
    printf("Before swapping (m,n) evaluate to: (%d,%d)\n",m,n);
    swap(&m,&n);
    printf("After swapping (m,n) evaluate to: (%d,%d)\n",m,n);
}
