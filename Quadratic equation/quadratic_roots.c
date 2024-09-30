//Write a program to find the roots of quadratic equation. 

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
    int a, b, c;
    float D, x_1, x_2;
   
    printf("Enter a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);

    D = b*b - 4*a*c;

    if(D >= 0) {
        if(D > 0) {
            x_1 = (-b + sqrt(D)) / (2 * a);
            x_2 = (-b - sqrt(D)) / (2 * a);

            printf("Roots are: %.2f and %.2f", x_1, x_2);
        } else {
            x_1 = x_2 = -b / (2.0 * a);
            printf("Both roots are: %.2f", x_1);
        }
    } else {
        printf("Roots are imaginary");
    }

}
