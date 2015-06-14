#include<stdio.h>
#include<conio.h>
#define max 6
void main()
{
clrscr();
int arr[10],i,temp;
printf("enter the elements in array");
for(i=0;i<max;i++)
scanf("%d",&arr[i]);
printf("the entered array is\n");
for(i=0;i<max;i++)
printf("\t%d",arr[i]);
for(i=0;i<max/2;i++)
{
temp=arr[i];
arr[i]=arr[max-1-i];
arr[max-1-i]=temp;
}
printf("\nthe array after reversing is\n");
for(i=0;i<max;i++)
printf("\t%d",arr[i]);
getch();
}
