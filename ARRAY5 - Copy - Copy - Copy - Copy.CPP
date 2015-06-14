#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a[10],s=0;
float av;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a[i]=i+1;
s=s+a[i];
}
printf("sum of first n natural numbers is %d",s);
av=s/n;
printf("\naverage is %f",av);
getch();
}


