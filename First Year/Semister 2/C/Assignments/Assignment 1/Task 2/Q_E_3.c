//e) Implement C program to convert Fahrenheit to Celsius using 3 methods
// METHOD 3
#include <stdio.h>

int main()
{
    float fahr;
    float cles;
    char input;
    printf("Enter the type of temp using 'C' or 'F': ");
    scanf("%c", &input);
    

    float number;
    printf("Enter the temp: ");
    scanf("%f", &number);

    switch (input)
    {
    case 'C':
        fahr = (9/5)*number + 32 ;
        printf("%.3f\n",fahr);
        break;
    case 'F':
        cles = (5*(number-32))/9 ;
        printf("%.3f",cles);

    }
}