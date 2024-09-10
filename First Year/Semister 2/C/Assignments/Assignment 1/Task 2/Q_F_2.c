// f) Improve the program in point (e) using 3 methods as the following
// if the user wants to exit the program, he must enter 0

#include <stdio.h>
#include <string.h>
// 1 Measn cles and 2 means Fahr
float convert(int input, float number)
{
    if(input == 2)
    {
        float cles = (5*(number-32))/9 ;
        return cles;
    }
    else if (input == 1)
    {
        float fahr = (9/5)*number + 32 ;
        return fahr;
    }

}

int main()
{
    while(10)
    {
        int input;
        printf("Enter the type of temp using '1' for cles or '2' fahr Or 0 to quit: ");
        
        scanf("%d", &input);

        if(input == 0)
        {
            break;
        }

        float number;
        printf("Enter the temp: ");
        scanf("%f", &number);
        printf("------------------------------\n");
        printf("%.3f\n", convert(input, number));
        printf("------------------------------\n");
    }
}