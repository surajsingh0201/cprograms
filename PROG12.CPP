#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[100];
int i=0,w=0;
printf("enter a string of your choice\n");
gets(str);
while(str[i]!='\0')
{
if(str[i]==' ')
w=w+1;
i++;
}
printf("\nthe number of words in the string are\n");
printf("%d",w+1);
getch();
}
