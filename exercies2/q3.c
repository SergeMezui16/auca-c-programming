#include<stdio.h>

/**
 * Write a program to display if the number is odd or even
 * using ternary/condition operator
 */
int main(int argc, char const *argv[])
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    a % 2 == 0 ? printf("%d is Even.", a) : printf("%d is Odd", a);

    return 0;
}
