//Implement a simple C program that includes the following data:

#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float y;
    printf("Enter X: ");
    scanf("%f",&x);
    printf("Enter Y: ");
    scanf("%f",&y);
    float xy = x*y;

    double z = sqrt(pow(xy,2) + x*pow(y, 2));
    printf("The result = %.3lf", z);
}