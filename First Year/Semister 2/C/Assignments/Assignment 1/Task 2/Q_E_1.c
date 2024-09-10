//e) Implement C program to convert Fahrenheit to Celsius using 3 methods
// METHOD 1
#include <stdio.h>
#include <string.h>
float convert(char input, float number)
{
    if(input == 'F')
    {
        float cles = (5*(number-32))/9 ;
        return cles;
    }
    else if (input == 'C')
    {
        float fahr = (9/5)*number + 32 ;
        return fahr;
    }

}

int main()
{
    char input;
    printf("Enter the type of temp using 'C' or 'F': ");
    scanf("%c", &input);

    float number;
    printf("Enter the temp: ");
    scanf("%f", &number);

    printf("%.3f", convert(input, number));
}