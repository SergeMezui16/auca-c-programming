#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/**
 * Write a program to display the prime numbers 
 * between 0 and 70
 * 
 * Display the even number between 0 and 70
 */
int main()
{
    // Display prime numbers
    for (int i = 1; i <= 70; i++)
    {
        int isPrime = 0;

        if(i == 1 || i == 2) {
            printf("%d is Prime\n", i);
            continue;
        }

        if(i%2 == 0) continue;

        for (int j = 2; j <= ceil(sqrt(i)); j++)
        {

            if (i%j == 0) {
                isPrime = isPrime + 1;
            }
        }

        if(isPrime == 0) printf("%d is Prime\n", i);
    }
    

    // Display even numbers
    for (int i = 0; i <= 70; i++)
    {
        if(i%2 == 1) {
            printf("%d ", i);
        }
    }
    
    
    return 0;
}
