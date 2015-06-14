#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr1[3][3],arr2[1][3],i,j,k=0;
printf("enter the elements in array rowwise");
for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
  {
  scanf("%d",&arr1[i][j]);
  }
 }
 printf("\nthe entered array is\n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
  {
  printf("\t%d",arr1[i][j]);
  }
  printf("\n");
 }
for(j=0;j<3;j++)
 {
 for(i=0;i<3;i++)
  {
  arr2[k][j]+=arr1[i][j];
  }
 }
 printf("\nthe array after rowwise addition\n");
 for(j=0;j<3;j++)
  {
  printf("\t%d",arr2[k][j]);
  }
getch();
}








