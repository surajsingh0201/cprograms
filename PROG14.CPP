//program to check whether the entered string is a palindrome or not//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str1[30],str2[30];
int a;
printf("enter the string to be checked\n");
gets(str1);
strcpy(str2,str1);
strrev(str2);
a=strcmp(str2,str1);
if(a==0)
printf("\nthe entered string is a palindrome");
else
printf("\nthe enterd string is not a palindrome");
getch();
}