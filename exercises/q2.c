#include <stdio.h>

/**
 * Using switch statement display a month of September
 */
int main(int argc, char const *argv[])
{
    int month = 9;

    switch (month)
    {
    case 1:
        printf("Janvier");
        break;
    case 2:
        printf("Fevrier");
        break;
    case 3:
        printf("Mars");
        break;
    case 4:
        printf("Avril");
        break;
    case 5:
        printf("Mai");
        break;
    case 6:
        printf("Juin");
        break;
    case 7:
        printf("Juillet");
        break;
    case 8:
        printf("Aout");
        break;
    case 9:
        printf("Septembre");
        break;
    case 10:
        printf("Octobre");
        break;
    case 11:
        printf("Novembre");
        break;
    case 12:
        printf("Décembre");
        break;
    default:
        printf("Choose a number between 1 and 12.");
        break;
    }
    return 0;
}
