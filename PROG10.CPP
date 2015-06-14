#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[3][3],i,j,d[1][1];
printf("enter the elements in array");
for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
  {
  scanf("%d",&arr[i][j]);
  }
 }
  printf("\nthe entered array is\n");
  for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
  {
  printf("\t%d",arr[i][j]);
  }
  printf("\n");
 }d[0][0]=0;
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
 if(j!=i)
 continue;
 d[0][0]+=arr[i][j];
 }
}
printf("\nthe sum of diagonal elements is\n");
printf("%d",d[0][0]);
getch();
}


