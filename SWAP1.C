#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=8,c;
clrscr();
printf("Before swapping a=%d and b=%d\n",a,b);
c=a;
a=b;
c=a;
printf("After Swapping a=%d and b=%d",a,b);
getch();
}