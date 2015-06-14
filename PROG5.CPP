#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr[4][4],i,j,temp;
printf("enter the 16 elements in array rowwise");
for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
  scanf("%d",&arr[i][j]);
  }
 }
printf("\nthe entered array is\n");
for(i=0;i<4;i++)
 {
 for(j=0;j<4;j++)
  {
  printf("\t%d",arr[i][j]);
  }
  printf("\n");
 }
 for(j=0;j<4;j++)
 {
 temp=arr[0][j];
 arr[0][j]=arr[3][j];
 arr[3][j]=temp;
 }
for(j=0;j<4;j++)
 {
 temp=arr[1][j];
 arr[1][j]=arr[2][j];
 arr[2][j]=temp;
 }
printf("\nthe array after swapping 1st row with last and 2nd row with 3rd is\n");
for(i=0;i<4;i++)
 {
 for(j=0;j<4;j++)
  {
  printf("\t%d",arr[i][j]);
  }
  printf("\n");
 }
getch();
}










