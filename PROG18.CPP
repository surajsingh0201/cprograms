#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char str[50];
int i=0,a=0;
printf("enter an integer as a string\n");
gets(str);
while(str[i]!='\0')
{
a=(a*10)+(str[i]-'0');
i++;
}
printf("\nthe eqivalent integer for the entered string is\n");
printf("%d",a);
getch();
}


