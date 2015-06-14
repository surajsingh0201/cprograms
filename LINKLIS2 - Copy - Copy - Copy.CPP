#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct link_list                // DEFINING A STRUCTURE FOR THE LIST //
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
 void create(node*);        // FUNCTION DECLARATION //
 void print(node*);         // FUNCTION DECLARATION //
 int count(node*);          // FUNCTION DECLARATION //
 node *insert(node*);        // FUNCTION DECLARATION //
 node *find(node*,int);       // FUNCTION DECLARATION //
 head=(node*)malloc(sizeof(node));      // DYNAMIC MEMORY ALLOCATION //
 create(head);         // FUNCTION CALL //
 printf("THE NODE BEFORE INSERTION IS\n");
 print(head);          // FUNCTION CALL //
 printf("\n");
 printf("NO. OF ITEMS BEFORE INSERTION ARE %d",count(head));    // FUNCTION CALL //
 insert(head);         // FUNCTION CALL //
 find(head,key);    // FUNCTION CALL //
 printf("THE NODE AFTER INSERTION IS\n");
 print(head);          // FUNCTION RECALLED //
 printf("\n");
 printf("THE NO.OF OF ITEMS AFTER INSERTION ARE %d",count(head));  // FUNCTION RECALLED //
 getch();
 }
void create(node *list)            // FUNCTION DEFINITION //
{
 printf("ENTER 777 TO TERMINATE THE LIST\n");
 printf("ENTER THE ITEM FOR CURRENT NODE\n");
 scanf("%d",&list->num);
  if(list->num==777)
  list->next=NULL;              // TERMINATING THE LIST //
   else
   {
    list->next=(node*)malloc(sizeof(node));         // CREATING NEW NODE //
    create(list->next);          // RECURSION ; LIST NEXT IS POINTER TO NEXT NODE //
   }
}
void print(node *list)             // FUNCTION DEFINITION //
{
 if(list->next!=NULL)
 {
  printf("%d-->",list->num);
  if(list->next->next==NULL)
  printf("%d",list->next->num);
  else
  print(list->next);                // RECURSION //
 }
}
int count(node *list)             // FUNCTION DEFINITION //
{
 if(list->next==NULL)
 return(NULL);
 else
 return(1+count(list->next));
}
node *insert(node *head)          // FUNCTION DEFINITION //
{
 node *find(node *head,int key);          // FUNCTION DECLARATION //
 node *NEW;                        // POINTS TO NEW NODE //
 node *n1;                        // POINTS TO NODE PRECEEDING KEY NODE;KEY NODE IS NODE BEFORE WHICH NEW NODE IS TO BE INSERTED //
 int key;                         // KEY IS THE ITEM IN THE KEY NODE OR IT IS ONE OF THE ITEMS IN THE LIST BEFORE WHICH YOU WANT TO INSERT THE NEW ITEM //
 int x;                           // x IS THE ITEM OF THE NEW NODE //
 printf("\nENTER THE KEY ITEM WHICH IS ONE OF THE LIST ITEMS BEFORE WHICH YOU WANT TO INSERT THE NEW ITEM\n");
 scanf("%d",&key);
 printf("ENTER THE NEW ITEM TO BE INSERTED\n");
 scanf("%d",&x);
 if(head->num==key)              // THIS IMPLIES THAT NEW NODE WILL BE FIRST NODE //
 {
  NEW=(node*)malloc(sizeof(node));   // DYNAMICALLY CREATING NEW NODE //
  NEW->num=x;                        // PUTTING ITEM IN NEW NODE //
  NEW->next=head;
  head=NEW;
 }
 else
 {
  n1=find(head,key);             // THE VALUE RETURNED BY THE FIND FUNCTION WILL BE STORED IN VARIABLE n1 //
  if(n1==NULL)
  printf("KEY IS NOT FOUND\n");
  else
   {
    NEW=(node*)malloc(sizeof(node));    // CREATING NEW NODE BEFORE THE KEY NODE // //
    NEW->num=x;                         // PUTTING THE ITEM TO BE INSERTED IN THE NEW NODE //
    NEW->next=n1->next;
    n1->next=NEW;
   }
 }
 return(head);
}
node *find(node*list,int key)         // FUNCTION DEFINITION //
{
 if(list->next->num==key)             // KEY FOUND //
 return(list);                        // HERE LIST IS ACTING AS A POINTER TO THE NODE PRECCEDING THE KEY NODE I.E. WHY IT HAS BEEN RETURNED TO n1 //
 else
 {
  if(list->next->next==NULL)          // THIS IS THE CASE WHEN AFTER RECURSING THE FUNCTION AGAIN AND AGAIN WE HAVE REACHED THE LAST NODE BUT KEY IS NOT FOUND //
  return(NULL);
  else
  find(list->next,key);               // RECURSION //
 }
}