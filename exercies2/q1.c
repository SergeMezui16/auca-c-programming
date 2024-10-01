#include<stdio.h>

/**
 * Write a program to add 3 numbers and display the values of each 
 * variable, the sum and the avg.
 * If the avg > 18 display Grade A
 * _______avg > 17 && < 18 display B
 */
int main(int argc, char const *argv[])
{
    float num1, num2, num3, sum, avg;

    printf("Please enter your numbers.\n\n");
    printf("Num 1: ");
    scanf("%f", &num1);
    printf("Num 2: ");
    scanf("%f", &num2);
    printf("Num 3: ");
    scanf("%f", &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;

    printf("\n\nSUM: %.2f \n", sum);
    printf("AVG: %.2f / 20 \n", avg);

    if (avg > 18)
    {
        printf("Grade: A");
    }
    else if (avg > 17 || avg < 18)
    {
        printf("Grade: B", avg);
    }
    else
    {
        printf("Grade: C", avg);
    }
    return 0;
}
