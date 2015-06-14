#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int arr1[3][3],arr2[3][3],arr3[3][3],i,j;
printf("enter the elements for first array rowwise\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  scanf("%d",&arr1[i][j]);
  }
}
printf("enter the elements for second array rowwise\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  scanf("%d",&arr2[i][j]);
  }
}
printf("\nthe first array is\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  printf("\t%d",arr1[i][j]);
  }
  printf("\n");
}
printf("\nthe second array is\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  printf("\t%d",arr2[i][j]);
  }
  printf("\n");
}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
 arr3[i][j]=arr1[i][j]+arr2[i][j];
 }
}
printf("\nthe resultant array after sum of the arrays is\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  printf("\t%d",arr3[i][j]);
  }
  printf("\n");
}
getch();
}

