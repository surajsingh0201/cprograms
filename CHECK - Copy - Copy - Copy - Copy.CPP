#include<stdio.h>
#include<conio.h>
#define max 5
void insert(int *arr,int pos,int num)
{
int i;
for(i=max-1;i>pos;i--)
{
arr[i]=arr[i-1];
 }
arr[i]=num;
}
void main()
{
clrscr();
int arr[10],pos,num,i;
printf("enter the elements in array");
for(i=0;i<max;i++)
scanf("%d",&arr[i]);
printf("enter the element to be inserted and its position");
scanf("%d",&num);
scanf("%d",&pos);
insert(arr,pos,num);
printf("the array after insertion is\n");
for(i=0;i<max;i++)
printf("%d",arr[i]);
getch();
}

