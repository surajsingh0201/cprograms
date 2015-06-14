#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[10],mid,n,i,temp=0;
printf("enter the no. of elements reqired in the array\n");
scanf("%d",&n);
printf("\nenter the data in array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\nthe entered array is\n");
for(i=0;i<n;i++)
printf("\t%d",arr[i]);
if(n%2!=0)
{
mid=(n/2);
for(i=0;i<mid;i++)
{
temp=arr[i];
arr[i]=arr[mid+1+i];
arr[mid+1+i]=temp;
}
printf("\nthe array after swapping 1st half of original array with 2nd is\n");
for(i=0;i<n;i++)
printf("\t%d",arr[i]);
}
if(n%2==0)
{
mid=(n-1)/2;
for(i=0;i<mid;i++)
{
temp=arr[i];
arr[i]=arr[mid+2+i];
arr[mid+2+i]=temp;
}
printf("\nthe array after swapping 1st half of original array with 2nd is\n");
for(i=0;i<n;i++)
printf("\t%d",arr[i]);
}
getch();
}