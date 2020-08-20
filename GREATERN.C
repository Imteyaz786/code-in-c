#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Program to check greater no \n");
printf("enter three integers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is greater",a);
}
if(b>a&&b>c)
{
printf("%d is greater",b);
}
if(c>a&&c>b)
{
printf("%d is greater",c);
}
getch();
}