#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[10];
int front=-1,rear=-1;
void insert(int);
int delet();
void display();
void main()
{
clrscr();
int choice;
int num1=0,num2=0;
while(1)
{
 printf("\nCHOOSE AMONG THE FOLLOWING ANY ONE OPTION:\n");
 printf("[1] ADD AN ELEMENT IN THE QUEUE\n");
 printf("[2] DELETE AN ELEMENT FROM QUEUE\n");
 printf("[3] DISPLAY THE ELEMENTS OF THE QUEUE\n");
 printf("[4] TERMINATE THE WHOLE PROCESS\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  {
   printf("\nENTER THE ELEMENT TO BE ADDED IN THE QUEUE\n");
   scanf("%d",&num1);
   insert(num1);
   break;
  }
  case 2:
  {
   num2=delet();
   if(num2==777)
   printf("\nQUEUE IS EMPTY\n");
   else
   printf("\nTHE DELETED ELEMENT IS: %d",num2);
   getch();
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
   printf("\nEITHER YOU DON'T KNOW ENGLISH OR YOU ARE INSANE!!\n");
   break;
  }
 }
}
}
 void insert(int element)
 {
  if(front==-1 && rear==-1)             // ENTERING ELEMENT IN EMPTY QUEUE //
  {
    front=rear=front+1;
    queue[front]=element;
    return;
  }
  if(rear==9)                      // CHECKING IF QUEUE IS ALREADY FULL //
  {
   printf("\nQUEUE IS FULL\n");
   getch();
   return;
  }
   rear=rear+1;
   queue[rear]=element;
 }
 int delet()
 {  int i;
   if(front==-1 && rear==-1)        // CHECKING IF QUEUE IS EMPTY //
   return(777);
   if(front!=-1 && front==rear)             // DELETING THE ONLY ELEMENT IN THE QUEUE //
   {
    i=queue[front];
    rear=-1;
    front=-1;
    return(i);
   }
   return(queue[front++]);         // FIRST RETURNING THE ELEMENT POINTED BY REAR AND THEN INCREMENTING REAR POINTER //
 }
 void display()
 {
  int i;
  if(front==-1)
  {
  printf("\nQUEUE IS EMPTY\n");
  return;
  }
   printf("\nTHE ELEMENTS PRESENT IN THE QUEUE ARE:\n");
   for(i=front;i<=rear;i++)
   printf("\t%d",queue[i]);
 }