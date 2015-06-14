#includxe<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[50];
int i=1;
printf("enter a string with each word starting with a small letter\n");
gets(str);
str[0]-=32;
while(str[i]!='\0')
 {
 if(str[i]==' ')
  {
   str[i+1]-=32;
   }
   i++;
 }
printf("\nthe string after desired operation is\n");
printf("%s",str);
getch();
}






