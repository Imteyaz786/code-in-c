#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si;
clrscr();
printf("Program to find simple interest :");
printf("Ener principle :");
scanf("%f",&p);
printf("Enter rate of interest :");
scanf("%d",&r);
printf("Enter time :");
scanf("%d",&t);
si=(p*r*t)/100;
printf("simple interest = %f",si);
getch();
}