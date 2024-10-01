#include <stdio.h>

/**
 * Add four numbers, then execute the value of each used var,
 * the sum, avg over 20
 *
 * If AVG > 18 print Grade A
 * If AVG > 16 and < 18 print Grade B
 * else print Grade C
 */
int main(int argc, char const *argv[])
{
    float num1, num2, num3, num4, sum, avg;

    printf("Please enter your marks over 20.\n\n");
    printf("Mark 1: ");
    scanf("%f", &num1);
    printf("Mark 2: ");
    scanf("%f", &num2);
    printf("Mark 3: ");
    scanf("%f", &num3);
    printf("Mark 4: ");
    scanf("%f", &num4);

    sum = num1 + num2 + num3 + num4;
    avg = sum / 4;

    printf("\n\nSUM: %.2f \n", sum);
    printf("AVG: %.2f / 20 \n", avg);

    if (avg > 18)
    {
        printf("Grade: A");
    }
    else if (avg > 16 || avg <= 18)
    {
        printf("Grade: B", avg);
    }
    else
    {
        printf("Grade: C", avg);
    }

    return 0;
}
