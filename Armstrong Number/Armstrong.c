#include<stdio.h>
void main(){
int num, sum=0, rem, cube, save;
printf("Enter The any Number: ");
scanf("%d", &num);
save=num;
for(num; num>0; num/=10)
{
    rem= num%10;
    cube=rem*rem*rem;
    sum=sum+cube;
}
if(sum==save)
    printf("Armstrong Number");
else
    printf("Not Armstrong Number");
}