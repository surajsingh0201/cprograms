#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
struct node
{
int element;
struct node *next;
};
typedef struct node stack;
stack *top=NULL;
void push(int);
int pop();
void display();
void main()
{
 clrscr();
 int num1,num2,choice;
 while(1)
 {
  printf("CHOOSE ANY ONE OPTION AMONG THE FOLLOWING:\n");
  printf("[1] PUSH AN ELEMENT IN THE STACK\n");
  printf("[2] POP AN ELEMENT FROM THE STACK\n");
  printf("[3] DISPLAY THE ELEMENTS PRESENT IN THE STACK\n");
  printf("[4] TERMINATE THE EXECUTION OF THE PROGRAM\n");
  printf("ENTER YOUR CHOICE:\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    printf("\nENTER THE ELEMENT TO BE PUSHED IN THE STACK\n");
    scanf("%d",&num1);
    push(num1);
    break;
   }
   case 2:
   {
    num2=pop();
    if(num2==777)
    {
     printf("\nTHE STACK IS EMPTY\n");
     getch();
    }
    else
    {
     printf("\nTHE ELEMENT POPED FROM THE STACK IS = %d",num2);
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
    printf("\nEITHER YOU DON'T KNOW ENGLISH OR YOU ARE INSANE!!\n");
    getch();
    break;
   }
  }
 }
}
void push(int value)
{
 stack *ptr=(stack*)malloc(sizeof(stack));
 ptr->element=value;
 if(top==NULL)                  // CHECKING WHETHER THE STACK IS EMPTY //
 {
  top=ptr;
  ptr->next=NULL;
  return;
 }
 else
 {
  ptr->next=top;               // LINKING THE NEW STACK ELEMENT WITH CURRENT TOP STACK ELEMENT //
  top=ptr;
  return;
 }
}
int pop()
{
 int i;
 if(top==NULL)                // CHECKING IF THE STACK IS EMPTY //
 return(777);
 else
 {
  i=top->element;
  top=top->next;
  return(i);
 }
}
void display()
{
 stack *ptr=NULL;
 ptr=top;
 if(top==NULL)
 {
  printf("\nTHE STACK IS EMPTY!!\n");
  return;
 }
 else
 {
  printf("\nTHE ELEMENTS PRESENT IN THE STACK ARE\n");
  while(ptr!=NULL)
  {
   printf("%d\n",ptr->element);
   ptr=ptr->next;
  }
 }
}