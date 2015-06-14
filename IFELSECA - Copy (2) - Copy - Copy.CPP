#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,o;
clrscr();
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("use operators as +=1,-=2,*=3,/=4");
printf("\nenter operator");
scanf("%d",&o);
if(o==1)
{
c=a+b;
printf("sum of numbers is %d",c);
}
else if(o==2)
{
c=a-b;
printf("difference of numbers is %d",c);
}
else if(o==3)
{
c=a*b;
printf("product of numbers is %d",c);
}
else if(0==4)
{
c=a*b;
printf("division of numbers is %d",c);
}
getch();
}

