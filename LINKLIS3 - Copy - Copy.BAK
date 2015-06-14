#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct link_list
{
 int num;
 struct link_list *next;
};
 typedef struct link_list node;
void main()
{
 clrscr();
 int key;
 node *head;
 void create(node*);
 void print(node*);
 int count(node*);
 node *insert(node*);
 node *find(node*,int);
 node *delet(node*);
 head=(node*)malloc(sizeof(node));
 create(head);
 printf("\nTHE LINKED LIST BEFORE INSERTION OR DELETION IS\n");
 print(head);
 printf("\nTHE NO. OF ITEMS BEFORE INSERTION  OR DELETION ARE = %d\n",count(head));
 insert(head);
 find(head,key);
 printf("\nTHE LINKED LIST AFTER INSERTION IS\n");
 print(head);
 printf("\nTHE NO. OF ITEMS AFTER INSERTION ARE = %d\n",count(head));
 delet(head);
 find(head,key);
 printf("\nTHE LINKED LIST AFTER DELETING THE DESIRED ITEM IS\n");
 print(head);
 printf("\nTHE NO. OF ITEMS AFTER DELETION ARE = %d\n",count(head));
 getch();
}
void create(node *list)
{
 printf("ENTER 777 AT LAST TO TERMINATE THE LIST\n");
 printf("ENTER THE ITEM FOR THE CURRENT NODE\n");
 scanf("%d",&list->num);
 if(list->num==777)
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
  printf("%d-->",list->num);
  if(list->next->next==NULL)
  printf("%d",list->next->num);
  else
  print(list->next);
 }
}
int count(node *list)
{
 if(list->next==NULL)
 return(NULL);
 else
 return(1+count(list->next));
}
node *insert(node *head)
{
 node *find(node*,int);
 node *NEW;
 node *n1;
 int key,x;
 printf("\nENTER THE KEY ITEM BEFORE WHICH NEW ITEM IS TO BE INSERTED\n");
 scanf("%d",&key);
 printf("\nENTER THE NEW ITEM TO BE INSERTED\n");
 scanf("%d",&x);
 if(head->num==key)
 {
  NEW=(node*)malloc(sizeof(node));
  NEW->num=x;
  NEW->next=head;
  head=NEW;
 }
 else
 {
  n1=find(head,key);
  if(n1==NULL)
  printf("KEY IS NOT FOUND\n");
  else
  {
   NEW=(node*)malloc(sizeof(node));
   NEW->num=x;
   NEW->next=n1->next;
   n1->next=NEW;
  }
 }
return(head);
}
node *find(node *list,int key)
{
 if(list->next->num==key)
 return(list);
 else
 {
 if(list->next->next==NULL)
 return(NULL);
 else
 find(list->next,key);
 }
}
node *delet(node *head)
{
 node *find(node*,int);
 node *n1;
 node *temp;
 int key;
 printf("\nENTER THE KEY ITEM TO BE DELETED FROM THE LIST\n");
 scanf("%d",&key);
 if(head->num==key)
 {
  temp=head->next;
  free(head);
  head=temp;
 }
 else
 {
  n1=find(head,key);
  if(n1==NULL)
  printf("KEY IS NOT FOUND\n");
  else
  {
   temp=n1->next->next;
   free(n1->next);
   n1->next=temp;
  }
 }
return(head);
}




