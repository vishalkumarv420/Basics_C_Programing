// Write a program to check whether the given number is palindrome or not

#include <stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter the any Number: ");
    scanf("%d", &num);

    originalNum = num;

    for (; num != 0; num /= 10)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    if (originalNum == reversedNum)
    {
        printf("%d is a palindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}