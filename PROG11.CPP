#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[15];
int i,v=0,len;
printf("enter your name please\n");
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
v=v+1;
}
printf("\nthe total number of vowels in your name is\n");
printf("%d",v);
getch();
}