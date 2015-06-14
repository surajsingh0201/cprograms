#include<stdio.h>
#include<conio.h>
#define max 7
void main()
{
clrscr();
 int arr[10],i,temp;
 printf("enter the elements in array");
 for(i=1;i<max;i++)
 scanf("%d",&arr[i]);
 printf("the entered array is\n");
 for(i=1;i<max;i++)
 printf("\t%d",arr[i]);
 for(i=1;i<max;i++)
 {
 if(i%2==0)
 continue;
 temp=arr[i];
 arr[i]=arr[i+1];
 arr[i+1]=temp;
 }
printf("\nthe array after swapping 1st and 2nd element, 3rd and 4th element....\n");
for(i=1;i<max;i++)
printf("\t%d",arr[i]);
getch();
}
