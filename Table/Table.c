//Write a program to print the table of a number.

#include<stdio.h>
int main(){
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
