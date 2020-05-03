/*
 * C program to illustrate how a file stored on the disk is read
 */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char ch;

  
    /*  open the file for reading */
    fp = fopen("emp.rec", "r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(1);
    }
    
    while(!fe0f(fb))
    {
        printf ("%c", ch);
        ch=fgetc(fp);
        
    }
    fclose(fp);
}
