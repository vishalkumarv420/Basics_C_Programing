//Write a program to find the sum of even number and odd number from 0 to 100

#include<stdio.h>
#include<conio.h>

void main() {
    int evenSum = 0, oddSum = 0;  
    int i;

   
    for(i = 0; i <= 100; i++) {
        if(i % 2 == 0) {  
            evenSum += i;
        } else {  
            oddSum += i;
        }
    }

    
    printf("Sum of Even numbers from 0 to 100: %d\n", evenSum);
    printf("Sum of Odd numbers from 0 to 100: %d\n", oddSum);

}
