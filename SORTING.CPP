#include<stdio.h>
#include<conio.h>
main()
{
int t,n,i,j,a[10];
clrscr();
printf("enter a number");
scanf("%d",&n);
printf("enter data in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
  {
  if(a[i]>a[j])
  t=a[i];
  a[i]=a[j];
  a[j]=t;
  }
}
  printf("array in ascending order is %d%d",a[i],a[j]);
getch();
}
