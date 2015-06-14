#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
{
 int element;
 struct node *next;
};
typedef struct node queue;
queue *front= NULL;
queue *rear=NULL;
void insert(int);
int delet();
void display();
void main()
{
clrscr();
int num1=0,num2=0,choice;
while(1)
{
printf("CHOOSE ANY ONE OPTION AMONG THE FOLLOWING:\n");
printf("[1] ADD AN ELEMENT IN THE QUEUE\n");
printf("[2] DELETE AN ELEMENT FROM THE QUEUE\n");
printf("[3] DISPLAY THE ELEMENTS PRESENT IN THE QUEUE\n");
printf("[4] TERMINATE THE EXECUTION OF THE PROGRAM\n");
printf("ENTER YOUR CHOICE:\n");
scanf("%d",&choice);
switch(choice)
{
 case 1:
 {
 printf("\nENTER THE ELEMENT YOU WANT TO ADD\n");
 scanf("%d",&num1);
  insert(num1);
  break;
 }
 case 2:
 {
  num2=delet();
  if(num2==777)
  {
   printf("THE QUEUE IS EMPTY!!\n");
   getch();
  }
  else
  {
   printf("THE DELETED ELEMENT IS: %d",num2);
   getch();
  }
  break;
 }
 case 3:
 {
  display();
  getch();
  break;
 }
 case 4:
 {
  exit(1);
  break;
 }
 default:
  {
   printf("\n YOU EITHER DON'T KNOW ENGLISH OR YOU ARE INSANE!!\n");
   break;
  }
 }
}
}
void insert(int value)
{
 queue *ptr=(queue*)malloc(sizeof(queue));
 ptr->element=value;
 if(front==NULL)              // CHECKING IF QUEUE IS EMPTY //
 {
  front=rear=ptr;
  ptr->next=NULL;
  return;
 }
 else
 {
  rear->next=ptr;
  ptr->next=NULL;
  rear=ptr;                // INCREMENTING REAR POINTER //
  return;
 }
}
int delet()
{
  int i;
  if(front==NULL)              // CHECKING IF QUEUE IS EMPTY //
  return(777);
  if(front!=NULL && front==rear)   // CHECKING IF QUEUE CONTAINS A SINGLE ELEMENT ONLY //
  {
   i=front->element;
   front=NULL;
   rear=NULL;
   return(i);
  }
  else
  {
   i=front->element;
   front=front->next;              // INCREMENTING FRONT POINTER //
   return(i);
  }
}
void display()
{
 queue *ptr=front;
 if(front==NULL)
 {
  printf("\nQUEUE IS EMPTY\n");
  return;
 }
 else
 {
  while(ptr!=rear)
   {
    printf("\t%d",ptr->element);
    ptr=ptr->next;                 // INCREMENTING PTR POINTER //
   }
   printf("\t%d",rear->element);
 }
}

