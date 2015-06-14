//program to write a string with only single space btw the words//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str1[50],str2[50];
int i=0,j=0;
printf("enter a string having one or more spaces between the words\n");
gets(str1);
while(str1[i]!='\0')
{
 if(!(str1[i]==' ' && str1[i+1]==' '))
  {
  str2[j]=str1[i];
  j++;
  }
  i++;
}
str2[j]='\0';
printf("\nthe new string having only a single space between the words is\n");
printf("%s",str2);
getch();
}