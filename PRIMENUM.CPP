#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i;
printf("enter the number to be checked");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
 if(n%i==0)
 {
  printf("it is not a prime number");
  break;
 }
}
if(i==n)
printf("the entered number is a prime number");
getch();
}