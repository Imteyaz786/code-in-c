#include<stdio.h>
#include<conio.h>
void main()
{
float english,hindi,math,physics,chemistry,average;
clrscr();
printf("Enter marks in English :");
scanf("%f",&english);
printf("Enter marks in Hindi :");
scanf("%f",&hindi);
printf("Enter marks in Math :");
scanf("%f",&math);
printf("Enter marks in Physics :");
scanf("%f",&physics);
printf("Enter marks in Chemistry :");
scanf("%f",&chemistry);
average=(english+hindi+math+physics+chemistry)/5.0;
printf("Average marks is %f",average);
getch();
}