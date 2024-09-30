// Write a program to calculate simple interest.

#include<stdio.h>
void main(){
    float P,R,T,I;
    
    // Input from user
    printf("Enter Principal Amount: ");
    scanf("%f", &P);
    
    printf("Enter of Interest: ");
    scanf("%f", &R);
    
    printf("Enter Time (in years): ");
    scanf("%f", &T);
    
    I = (P *R * T) / 100;
   
    printf("Simple Interest: %.2f\n", I);
    
    
}
