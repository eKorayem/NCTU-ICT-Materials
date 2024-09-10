//Implement a simple C program that includes the following data:

#include <stdio.h>
#include <math.h>

int main()
{
    int x = 6;
    int y = 60;
    int xy = x*y;

    double z = sqrt(pow(xy,2) + x*pow(y, 2));
    printf("The result = %.3lf", z);
}