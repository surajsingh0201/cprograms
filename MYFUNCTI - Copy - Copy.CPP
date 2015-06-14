#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
int a,b,s;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
s=sum(a,b);
printf("the sum of two numbers is %d",s);
getch();
}
int sum(int x,int y)
{
int t;
t=x+y;
return t;
}

