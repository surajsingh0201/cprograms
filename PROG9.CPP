#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr1[3][3],arr2[3][1],i,j,k=0;
printf("enter the elements in array rowwise\n");
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
for(i=0;i<3;i++)
 { arr2[i][k]=0;
  for(j=0;j<3;j++)
  {
  arr2[i][k]+=arr1[i][j];
  }
 }
printf("\nthe array after column addition\n");
for(i=0;i<3;i++)
printf("\n%d",arr2[i][k]);
getch();
}






