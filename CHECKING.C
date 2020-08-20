#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("PROGRAM TO CHECK GIVEN CHARACTER IS ALPHABET OR DIGIT OR SPECIAL CHARACER \n");
printf("Enter any character :");
scanf("%c",&ch);
if(ch>=65&&ch<=90||ch>=97&&ch<=122)
{
printf("it is alphabet ");
}
else if(ch>=48&&ch<=57)
{
printf("it is digit");
}
else
{
printf("it is a special case");
}
getch();
}