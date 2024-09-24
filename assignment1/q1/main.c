#include<stdio.h>
#include<math.h>

/**
 * write a program in c to execute the value of x float type x=(21-26 %9*2%3-sqrt(24)*float(3%4)).
 */
int main(int argc, char const *argv[])
{
    float x = 21 - 26%9 * 2%3 - sqrtf(23) * (3%4);

    printf("%f", x);

    return 0;
}
