#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[20],c,d,n,t=0,position=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements of array");
for(c=0;c<n;c++)
scanf("%d",&array[c]);
for(c=0;c<n-1;c++)
{
 position=c;
 for(d=c+1;d<n;d++)
  {
   if(array[position]>array[d])
   position=d;
  }
 if(position!=c)
 {
  t=array[c];
  array[c]=array[position];
  array[position]=t;
 }
}
printf("array in ascending order is");
for(c=0;c<n;c++)
printf("%d\t",array[c]);
getch();
}