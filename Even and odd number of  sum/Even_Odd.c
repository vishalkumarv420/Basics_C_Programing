//Write a program to find the sum of even number and odd number

#include<stdio.h>
#include<conio.h>
int main(){
    int i,n, esum=0,osum=0;
    printf("Enter value of Number ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
            if(i%2==0)
            esum = esum + i;
        
        else
        
            osum = osum + i;
        }

printf("Sum of Even Numbar %d\n", esum);
printf("Sum of Odd Number %d",osum);
}