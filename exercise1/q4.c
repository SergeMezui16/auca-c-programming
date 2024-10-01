#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_even(int number)
{
    return number % 2 == 0;
}

bool is_prime(int number)
{
    if (number == 1 || number == 2)
        return true;

    if (is_even(number))
        return false;

    for (int i = 2; i <= ceil(sqrt(number)); i++)
    {
        if (number % i == 0)
        {
            return false;
            break;
        }
    }

    return true;
}

/**
 * Write a program to display the prime numbers
 * between 0 and 70
 *
 * Display the even number between 0 and 70
 */
int main()
{
    int limit = 70;

    // Display prime numbers
    printf("Prime numbers: ");

    for (int i = 1; i <= limit; i++)
    {
        if (is_prime(i))
            printf("%d ", i);
    }


    // Display even numbers
    printf("\nEven numbers: ");
    
    for (int i = 0; i <= limit; i++)
    {
        if (is_even(i))
            printf("%d ", i);
    }

    return 0;
}