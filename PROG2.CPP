#include<stdio.h>
#include<conio.h>
#define max 7
void main()
{
clrscr();
int arr[10],i,big,small;
printf("enter the elements in array");
for(i=0;i<max;i++)
scanf("%d",&arr[i]);
big=arr[0];
for(i=1;i<max;i++)
{
if(arr[i]>big)
big=arr[i];
}
small=arr[0];
for(i=1;i<max;i++)
{
if(arr[i]<small)
small=arr[i];
}
printf("the biggest element in array is %d\n",big);
printf("the smallest element in array is %d",small);
getch();
}