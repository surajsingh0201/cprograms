#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int heap[20],c,i,t,j,n,root;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements ");
for(i=0;i<n;i++)
scanf("%d",&heap[i]);
for(i=1;i<n;i++)
{
 c=i;
 do
 {
 root=(c-1)/2;
 if(heap[root]<heap[c])
  {
   t=heap[c];
   heap[c]=heap[root];
   heap[root]=t;
  }
  c=root;
 }while(c!=0);
}
 printf("heap array\n");
 for(i=0;i<n;i++)
 printf("\t%d",heap[i]);
 for(j=n-1;j>=0;j--)
{
 t=heap[0];
 heap[0]=heap[j];
 heap[j]=t;
 root=0;
 do
 {
  c=2*root+1;
  if(heap[c]<heap[c+1] && c<j-1)
  c++;
  if(heap[root]<heap[c] && c<j)
  {
   t=heap[root];
   heap[root]=heap[c];
   heap[c]=t;
  }
 root=c;
 }while(c<j);
}
printf("\nsorted array\n");
for(i=0;i<n;i++)
printf("\t%d",heap[i]);
getch();
}