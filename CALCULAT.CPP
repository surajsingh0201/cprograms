#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
char t;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("enter operator");
scanf("%c",&t);
if(t=='+')
{
c=a+b;
printf("sum is %d",c);
}
else if(t=='-')
{
c=a-b;
printf("difference is %d",c);
}
else if(t=='*')
{
c=a*b;
printf("multiplication is %d",c);
}
getch();
}
