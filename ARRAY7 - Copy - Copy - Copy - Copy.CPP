#include<stdio.h>
#include<conio.h>
main()
{
int i,a[10],n,s=0,t=0;
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
if(a[i]%2==0)
printf("\neven number is %d",a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
printf("\nodd number is %d",a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
s=s+a[i];
}
printf("\nsum of even numbers is %d",s);
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
t=t+a[i];
}
printf("\nsum of odd numbers is %d",t);
getch();
}



