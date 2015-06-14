#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],c,n;
printf("enter the no. of elements in fibonacci series that u want");
scanf("%d",&n);
a[0]=0;
a[1]=1;
for(c=2;c<n;c++)
{
a[c]=a[c-2]+a[c-1];
}
printf("the fibonacci series of %d elements is\n",n);
for(c=0;c<n;c++)
printf("%d\t",a[c]);
getch();
}