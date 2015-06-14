#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[2][2];
clrscr();
printf("enter data in array");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
  {
scanf("%d",&a[i][j]);
  }
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
  {
  printf("\t%d",a[i][j]);
  }
  printf("\n");
}
getch();
}

