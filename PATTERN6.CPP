#include<stdio.h>
#include<conio.h>
main()
{
char i,j;
clrscr();
for(i=65; i<=68;i++)
{
for(j=65;j<=i;j++)
{
printf("\t%c",j);
}
printf("\n");
}
getch();
}
