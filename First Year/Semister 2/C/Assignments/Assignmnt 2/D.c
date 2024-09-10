// d) Write C program to allow the user to enter values of 2 resistors, then define
// and execute a function named “parallel” to print the equivalent parallel
// resistance of the entered resistors. Use return argument function.

#include <stdio.h>

float parallel(float v1, float v2)
{
    float result = (v1*v2)/(v1+v2);
    return result;
}


int main()
{
    float r1;
    float r2;

    printf("Enter the first resistance: ");
    scanf("%f", &r1);
    printf("Enter the second resistance: ");
    scanf("%f", &r2);

    printf("R1 // R2 = %f", parallel(r1, r2));
}