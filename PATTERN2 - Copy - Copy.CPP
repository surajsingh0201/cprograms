#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("\tX");
}
printf("\n");
}
getch();
}