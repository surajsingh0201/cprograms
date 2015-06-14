//checking the use of malloc,realloc and free functions//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0
void main()
{
clrscr();
char *buffer;
//allocating memory space//
if((buffer=(char*)malloc(10))==NULL)
{
 printf("there is not enough space");
 exit(1);
}
printf("A block of contiguous memory space of size %d is created\n",sizeof(buffer));
strcpy(buffer,"hyderabad");
printf("buffer now contains %s\n",buffer);
//reallocating memory space//
if((buffer=(char *)realloc(buffer,14))==NULL)
{
printf("no space available for reallocation");
exit(1);
}
printf("A new memory block of size %d is created\n",sizeof(buffer));
printf("buffer still contains %s\n",buffer);
strcpy(buffer,"secunderabad");
printf("buffer now contains %s\n",buffer);
//freeeing of memory//
free(buffer);
getch();
}
