#include<stdio.h>
#include<conio.h>
main()
{
int i,a[6];
clrscr();
printf("enter data in array");
for(i=0;i<6;i++)
  {
  scanf("%d",&a[i]);
  }
for(i=0;i<6;i++)
  {
  printf("\t%d",a[i]);
  }
getch();
}
