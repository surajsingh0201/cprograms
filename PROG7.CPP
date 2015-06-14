#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr1[4][4],arr2[4][4],i,j;
printf("enter the elements in array rowwise");
for(i=0;i<4;i++)
 {
 for(j=0;j<4;j++)
  {
  scanf("%d",&arr1[i][j]);
  }
 }
printf("\nthe entered array is\n");
for(i=0;i<4;i++)
 {
 for(j=0;j<4;j++)
  {
  printf("\t%d",arr1[i][j]);
  }
  printf("\n");
 }
for(i=0;i<4;i++)
{
 for(j=0;j<4;j++)
 {
 arr2[i][j]=arr1[j][i];
 }
}
printf("\nthe transposed array is\n");
for(i=0;i<4;i++)
 {
 for(j=0;j<4;j++)
  {
  printf("\t%d",arr2[i][j]);
  }
  printf("\n");
 }
getch();
}



