#include<stdio.h>
#include<conio.h>
main()
{
int i,j,s=1;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("\t%d",s);
s=s+1;
}
printf("\n");
}
getch();
}