//Write a program to calculate the average temperature of 5 Sunday.

#include<stdio.h>
#include<conio.h>
void main(){
    float a,b,c,d,e,f;

    printf("Enter Temprature of Day 1: ");
    scanf("%d",&a);

    printf("Enter Temprature of Day 2: ");
    scanf("%d",&b);

    printf("Enter Temprature of Day 3: ");
    scanf("%d",&c);

    printf("Enter Temprature of Day 4: ");
    scanf("%d",&d);

    printf("Enter Temprature of Day 5: ");
    scanf("%d",&e);

   f=(a+b+c+d+e)/5;

   printf("Average Temperature of 5 Day %d",f);
}
