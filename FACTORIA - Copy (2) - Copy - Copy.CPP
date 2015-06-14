#include<stdio.h>
#include<conio.h>
main()
{
int n,i,t=1;
clrscr();
printf("enter a number");
scanf("%d",&n);
for(i=n;i<=n && i!=0;i--)
t=t*i;
printf("factorial of number is %d",t);
getch();
}
