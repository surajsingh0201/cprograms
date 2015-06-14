#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[20],c,search,n;
printf("enter the no. of elements in array");
scanf("%d",&n);
printf("enter the elements in array");
for(c=0;c<n;c++)
  {
   scanf("%d",&array[c]);
  }
printf("enter the element to be searched");
scanf("%d",&search);
for(c=0;c<n;c++)
 {
  if(array[c]==search)
   {
    printf("%d is at position=%d",search,c+1);
    break;
   }
 }
if(c==n)
printf("the entered element is not present");
getch();
}