#include <stdio.h>

/**
 * Write a program to differentiate while and do while
 */
int main(int argc, char const *argv[])
{
    printf("Use of While: (Reject to the next year until the age is 18)\n");
    int age = 12;
    
    while (age < 18)
    {
        printf("\tYou are too young, come next year maybe !\n");
        age = age + 1;
    }
    printf("\t\nNow you can join our club !!!\n\n\n");

    printf("Use of Do While: (Let the kid eat but send him to bed if time is over 21)\n");

    int time = 24;

    do
    {
        printf("\tYou can eat (%i hour) !\n", time);
        time = time + 5;
    } while (time < 21);

    printf("\tNow you have to sleep (%i hour) !\n", time);
    

    return 0;
}
