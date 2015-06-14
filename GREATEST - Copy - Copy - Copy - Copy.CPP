#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[100],n,c,great=0;
printf("enter the no. of elements to be entered");
scanf("%d",&n);
printf("enter the numbers in array");
for(c=0;c<n;c++)
scanf("%d",&array[c]);
great=array[0];
for(c=0;c<n;c++)
{
if(array[c]>=great)
great=array[c];
}
printf("the greatest number is = %d",great);
getch();
}
