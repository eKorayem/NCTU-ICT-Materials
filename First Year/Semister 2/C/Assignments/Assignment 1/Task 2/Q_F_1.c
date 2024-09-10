// f) Improve the program in point (e) using 3 methods as the following
// The program is repeated for infinity.

#include <stdio.h>
#include <string.h>

int main()
{
    while(1)
    {
        float number;
        
        printf("Enter the temp in Fahr: ");
        scanf("%f", &number);

        float cles = (5*(number-32))/9 ;
        printf("-------------------------\n");
        printf("%.3f in Fahr = %.3f in Cels\n", number, cles);
        printf("-------------------------\n");
    }
}