#include<stdio.h>
#include<conio.h>
main()
{
int i,n,a[10],max=0,min=a[0];
clrscr();
printf("enter a number");
scanf("%d",&n);
printf("enter data for array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
 for(i=0;i<n;i++)
 {
 if(max<a[i])
 max=a[i];
 }
 printf("maximum value is %d",max);
    for(i=0;i<n;i++)
 {
 if(min>a[i])
 min=a[i];
 }
 printf("\nminimum value is %d",min);
getch();
 }