#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[100],b[100];
printf("enter the string to be tested");
scanf("%s",a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("the entered string is palindrome");
else
printf("entered string is not palindrome");
getch();
}