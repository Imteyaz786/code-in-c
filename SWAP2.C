#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b=6,c;
clrscr();
printf("Before Swapping a=%d and b=%d\n",a,b);
c=a+b;
a=c-a;
b=c-b;
printf("After Swapping a=%d and b=%d\n",a,b);
getch();
}