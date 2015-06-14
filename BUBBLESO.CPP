#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[20],n,c,d,t=0;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter elements in array");
for(c=0;c<n;c++)
 {
  scanf("%d",&array[c]);
 }
for(c=0;c<n-1;c++)
{
 for(d=0;d<n-c-1;d++)
  {
   if(array[d]>array[d+1])
    {
     t=array[d];
     array[d]=array[d+1];
     array[d+1]=t;
    }
  }
}
printf("array in sorted order is");
for(c=0;c<n;c++)
printf("%d\t",array[c]);
getch();
}