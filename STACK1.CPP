#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[10];
int top=-1;
void push(int);
int pop();
void display();
void main()
{
 clrscr();
 int num1=0,num2=0,choice;
 while(1)
 {
  printf("CHOOSE ANY ONE AMONG THE FOLLLOWING OPTIONS:\n");
  printf("[1] PUSH AN ELEMENT IN THE STACK\n");
  printf("[2] POP AN ELEMENT FROM THE STACK\n");
  printf("[3] DISPLAY THE ELEMENTS OF THE STACK\n");
  printf("[4] TERMINATE THE EXECUTION OF THE PROGRAM\n");
  printf("YOUR CHOICE IS:\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    printf("ENTER THE ELEMENT TO BE PUSHED IN THE STACK\n");
    scanf("%d",&num1);
    push(num1);
    break;
   }
   case 2:
   {
    num2=pop();
    if(num2==777)
    {
     printf("\nTHE STACK IS EMPTY!!\n");
     getch();
    }
    else
    {
     printf("THE POPED OUT ELEMENT FROM THE STACK IS : %d\n",num2);
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
void push(int element)
{
 if(top==9)                // CHECKING IF THE STACK IS EMPTY //
 {
  printf("\nTHE STACK IS FULL!!\n");
  getch();
  return;
 }
 else
 {
  top=top+1;
  stack[top]=element;
  return;
 }
}
int pop()
{
 if(top==-1)              // CHECKING IF STACK IS EMPTY //
 return(777);
 else
 return(stack[top--]);     // FIRST RETURN THE ELEMENT POINTED BY TOP POINTER THEN DECRERMENTS THE TOP POINTER //
}
void display()
{
 int i;
 if(top==-1)
 {
  printf("\nTHE STACK IS EMPTY\n");
  return;
 }
 else
 {
 printf("\nTHE ELEMENTS PRESENT IN THE STACK ARE:\n");
 for(i=top;i>=0;i--)
 printf("\t%d\n",stack[i]);
 }
}

