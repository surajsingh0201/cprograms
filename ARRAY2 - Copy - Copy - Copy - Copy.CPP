#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a[10];
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
printf("\t%d",a[i]);
}
getch();
}


