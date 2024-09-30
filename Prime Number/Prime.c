//Write a program to check whether the entered number is prime or not

#include<stdio.h>
int main(){
    int n, i, count=0;
    printf("Enter the any number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("Prime Number");
    else
    printf("Not Prime Number");
}