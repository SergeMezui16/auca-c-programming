#include<stdio.h>

/**
 * Write a program to use XOR operator
 */
int main(int argc, char const *argv[])
{
    int a = 2, b = 3;

    // Additional demonstration: Using XOR to swap two numbers
    printf("\nDemonstrating XOR swap:\n");
    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a ^ b; // Step 1: a now holds the XOR of a and b
    b = a ^ b; // Step 2: b is now original a
    a = a ^ b; // Step 3: a is now original b

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
