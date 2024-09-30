// Write a program to find the sum of two numbers entered by user

#include<stdio.h>
void main(){
    int num1, num2, sum;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    
}
