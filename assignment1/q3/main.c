#include<stdio.h>
#include<math.h>

/**
 * Calculate the Area of a circle where r=3.4cm.
 */
int main(int argc, char const *argv[])
{
    double radius = 3.4;

    double area = M_PI * radius * radius;

    printf("The area of the circle of area %.2lf cm is %lfcm².", radius, area);
    return 0;
}
