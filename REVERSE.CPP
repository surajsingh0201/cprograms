#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,r,sum=0;
printf("enter a no.");
scanf("%d",&n);
while(n!=0)
{
 r=n%10;
 sum=r+(sum*10);
 n=n/10;
}
printf("the reversed number is= %d",sum);
getch();
}
