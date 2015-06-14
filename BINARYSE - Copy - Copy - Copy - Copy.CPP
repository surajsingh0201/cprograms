#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[100],c,n,search,first,middle,last;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the elements in the array in ascending order");
for(c=0;c<n;c++)
  {
   scanf("%d",&array[c]);
  }
printf("enter the element to be searched");
scanf("%d",&search);
first=0;
last=n;
middle=(first+last)/2;
while(first<=last)
{
 if(array[middle]<search)
 first=middle+1;
 else if(array[middle]==search)
   {
    printf("%d is present at position=%d",search,middle+1);
    break;
   }
 else
 last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("the entered element is not found");
getch();
}


















