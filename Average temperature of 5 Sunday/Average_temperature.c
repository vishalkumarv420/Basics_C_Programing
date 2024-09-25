#include<stdio.h>
int main(){
    float temp, sum = 0, avg;
    int i;

    for(i = 1; i <= 5; i++){
        printf("Enter temperature of Sunday %d: ", i);
        scanf("%f", &temp);
        sum += temp;  
    }

    avg = sum / 5;

    printf("Average temperature of 5 Sundays: %.2f\n", avg);
    
    return 0;
}
