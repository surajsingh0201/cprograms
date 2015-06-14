#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,f;
clrscr();
printf("enter a number");
scanf("%d",&n);
f=fact(n);
printf("the factorial of the number is %d",f);
getch();
}
int fact(int a)
{
int t=1,i;
for(i=1;i<=a;i++)
  {
  t=t*i;
  }
return t;
}
