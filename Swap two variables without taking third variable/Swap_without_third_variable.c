#include<stdio.h>
int main(){
    int a, b;
    
    // Input from user
    printf("Enter value of a: ");
    scanf("%d", &a);
    
    printf("Enter value of b: ");
    scanf("%d", &b);
    
    // Swapping without third variable
    a = a + b; 
    b = a - b; 
    a = a - b; 
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
