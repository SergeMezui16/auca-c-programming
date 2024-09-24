#include<stdio.h>


/**
 * write a program to add four numbers execute the values 
 * of each variable, the sum, the average of those four 
 * numbers of double datatypes.
 */
int main(int argc, char const *argv[])
{
    double num1, num2, num3, num4;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    scanf("%lf", &num3);

    printf("Enter the last number: ");
    scanf("%lf", &num4);

    double sum = num1 + num2 + num3 + num4;
    double avg = sum / 4;

    printf("\n\nHere are the SUM and AVG of your numbers:\n");
    printf("SUM: %lf \n", sum);
    printf("AVG: %lf", avg);

    return 0;
}
