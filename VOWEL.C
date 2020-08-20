#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter any alphabet :");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||'I'||ch=='O'||ch=='U')
{
printf("Alphabet is vowel");
}
else
{
printf("Alphabet is consonent");
}
getch();
}