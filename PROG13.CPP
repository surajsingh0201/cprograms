//program to find if one string is a sub string of other string//
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str1[50],str2[50];
int i,j,s1;
printf("enter the string 1\n");
gets(str1);
s1=strlen(str1);
printf("\nenter the substring 2\n");
gets(str2);
for(i=0;i<s1;i++)
{
if(str2[0]==str1[i])
 {
  for(j=1;str2[j]!='\0';j++)
   {
   if(str2[j]==str1[i+j])
   continue;
   else if(str2[j]!=str1[i+j])
   goto pos;
   }
   if(str2[j]=='\0')
   goto aos;
 }
pos:
i++;
}
   if(i==s1)
   printf("second string is not a substring of first\n");
   aos:
   printf("second string is a substringof first");
   getch();
}
