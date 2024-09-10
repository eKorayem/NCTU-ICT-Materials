//e) Implement C program to convert Fahrenheit to Celsius using 3 methods
// METHOD 2
#include <stdio.h>
#include <string.h>
int main()
{
    float cles;
    float fahr;
    char input;
    printf("Enter the type of temp using 'C' or 'F': ");
    scanf("%c", &input);
    

    float number;
    printf("Enter the temp: ");
    scanf("%f", &number);

    if(input == 'F')
    {
        goto fahr;
    }
    else if (input == 'C')
    {
        goto cles;
    }


fahr:
    cles = (5*(number-32))/9 ;
    printf("%.3f",cles);

cles:
    fahr = (9/5)*number + 32 ;
    printf("%.3f",fahr);
}