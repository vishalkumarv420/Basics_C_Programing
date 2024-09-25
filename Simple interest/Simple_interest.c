#include<stdio.h>
int main(){
    float P,R,T,I;
    
    // Input from user
    printf("Enter Principal Amount: ");
    scanf("%f", &P);
    
    printf("Enter of Interest: ");
    scanf("%f", &R);
    
    printf("Enter T (in years): ");
    scanf("%f", &T);
    
    // Simple I formula: SI = (P * R * T) / 100
    I = (P *R * T) / 100;
    
    // Output result
    printf("Simple Interest: %.2f\n", I);
    
    return 0;
}
