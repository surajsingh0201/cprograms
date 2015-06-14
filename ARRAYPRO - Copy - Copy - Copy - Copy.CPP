#include<stdio.h>
#include<conio.h>
#define max 6
void main()
{
clrscr();
int arr[10],i;
printf("enter the elements in array");
for(i=1;i<max;i++)
scanf("%d",&arr[i]);
printf("the entered array is\n");
for(i=1;i<max;i++)
printf("\t%d",arr[i]);
for(i=1;i<max;i++)
{
if(i%2==0)
arr[i]=arr[i]*2;
if(i%2!=0)
arr[i]=arr[i]*3;
}
printf("\nThe array after multiplying even places by 2 and odd places by 3 is\n");
for(i=1;i<max;i++)
printf("\t%d",arr[i]);
getch();
}
