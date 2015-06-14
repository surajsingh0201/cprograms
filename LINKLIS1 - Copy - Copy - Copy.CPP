//creating and printing a linked list and counting total no. of items//
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
void create(node *list);
void print(node *list);
int count(node *list);
head=(node*)malloc(sizeof(node));
create(head);
printf("\n");
print(head);
printf("\n");
printf("the total no. of items input by the user is = %d",count(head));
getch();
}
void create(node *list)
{
printf("enter 777 at the last to terminate the program\n");
printf("enter the item of your choice\n");
scanf("%d",&list->number);
if(list->number==777)
 list->next=NULL;
else
  {
  list->next=(node*)malloc(sizeof(node));
  create(list->next);
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
return 0;
else
return(1+count(list->next));
}