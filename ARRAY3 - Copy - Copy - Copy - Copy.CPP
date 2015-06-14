#include<stdio.h>
#include<conio.h>
main()
{
int i,a[6],s=0;
clrscr();
printf("enter data in array");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<6;i++)
{
s=s+a[i];
}
printf("sum of elements of array %d",s);
getch();
}
