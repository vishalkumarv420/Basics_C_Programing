//Write a program to find the factorial of a number. 

#include<stdio.h>
#include<conio.h>

int main() {
    int num, i, fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %d\n", num, fact);

    return 0;
}
