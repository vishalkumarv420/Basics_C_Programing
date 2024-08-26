#include<stdio.h>
int main(){
    int a,b,i,gcd,lcm;
    printf("Enter two Number: ");
    scanf("%d%d",&a,&b);
    for(i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
lcm = (a * b)/gcd;
printf("HCF = %d and LCM = %d",gcd,lcm);
return 0;
}