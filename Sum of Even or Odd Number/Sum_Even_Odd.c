#include<stdio.h>
#include<math.h>
void main(){
int i,n, esum=0, osum=0;
printf("Enter the value of Even and Odd Sum:-" );
scanf("%d",&n);
for(i=1; i<=n; i++)

{
    if( i%2==0 )
    esum = esum+i;
else

    osum = osum+i;
}
printf("sum of even Number:- %d\n",esum );
printf("sum of Odd Number:- %d\n",osum);
}