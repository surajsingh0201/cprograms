#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct linked_list
{
int number;
struct linked_list *next;
};
typedef struct linked_list node;
void main()
{
clrscr();
 node *head;
 void create(node*);
 void print(node*);
 int count(node*);
 head=(node*)malloc(sizeof(node));
 create(head);
 printf("\n");
 print(head);
 printf("\n");
 printf("the no. of items in the list is = %d",count(head));
 getch();
}
void create(node *list)
{
 printf("enter the number for the current node but input 123 at last\n");
 scanf("%d",&list->number);
 if(list->number==123)
  {
   list->next=NULL;
  }
   else
   {
    list->next=(node*)malloc(sizeof(node));
    create(list->next);      // RECURSION //
   }
}
void print(node *list)
{
 if(list->next!=NULL)
 {
   printf("%d-->",list->number);
   if(list->next->next==NULL)
   printf("%d",list->next->number);
  print(list->next);
 }
}
int count(node *list)
{
   if(list->next==NULL)
   return(0);
   else
   return(1+count(list->next));
}























