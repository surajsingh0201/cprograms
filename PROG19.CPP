#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[50];
int i=0,v=0,c=0,n=0,s=0;
printf("enter a string\n");
gets(str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
v+=1;
if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
c+=1;
else if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
n+=1;
else if(str[i]==' ')
s+=1;
i++;
}
printf("\nno.of vowels= %d",v);
printf("\nno.of consonants= %d",c);
printf("\nno. of digits= %d",n);
printf("\nno. of spaces= %d",s);
getch();
}