//program to convert upper case letters to lower and vice versa
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[30],ch;
int i=0;
printf("enter a string\n");
gets(str);
while(str[i]!='\0')
{
if(str[i]>=65 && str[i]<=90)
str[i]=str[i]+32;
else if(str[i]>=97 && str[i]<=122)
str[i]=str[i]-32;
i++;
}
printf("\nthe string after case transformation is\n");
printf("%s",str);
getch();
}

