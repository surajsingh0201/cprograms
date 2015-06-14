#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
void main()
{
clrscr();
int size,*p,*table;
printf("enter the size of table\n");
scanf("%d",&size);
printf("\n");
if((table=(int*)malloc(size*sizeof(int)))==NULL)
{
 printf("No memory space available\n");
 exit(1);
 }
printf("the address of first byte is = %u",table);
printf("\nenter the values for the table\n");
for(p=table;p<size+table;p++)
scanf("%d",p);
printf("\nthe entered values are\n");
for(p=table;p<size+table;p++)
printf("%d is present at address = %u\n",*p,p);
getch();
}

