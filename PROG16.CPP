//program to trim a string//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str1[50],str2[50];
int i=0,j=0,len;
printf("enter the string with a space before the 1st word and after last word\n");
gets(str1);
len=strlen(str1);
for(i=1;i<len-1;i++)
{
str2[j]=str1[i];
j++;
}
printf("\nthe trimmed string is\n");
printf("%s",str2);
getch();
}










