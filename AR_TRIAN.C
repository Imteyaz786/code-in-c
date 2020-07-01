#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,h;
clrscr();
printf("Program to calculate Area of Triangle\n");
printf("Enter base of triangle :");
scanf("%f",&b);
printf("Enter height of triangle :");
scanf("%f",&h);
a=0.5*b*h;
printf("Area of Triangle is %f",a);
getch();
}