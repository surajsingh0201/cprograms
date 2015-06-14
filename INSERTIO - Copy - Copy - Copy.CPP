#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[20],c,d,t=0,n;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements in array");
for(c=0;c<n;c++)
  {
    scanf("%d",&array[c]);
  }
for(c=1;c<n;c++)
{
  d=c;
  while(d>0 && array[d-1]<array[d])
  {
   t=array[d-1];
   array[d-1]=array[d];
   array[d]=t;
  d--;
  }
}
printf("the elements after sorting in descending order are\n");
for(c=0;c<n;c++)
printf("%d\t",array[c]);
getch();
}
