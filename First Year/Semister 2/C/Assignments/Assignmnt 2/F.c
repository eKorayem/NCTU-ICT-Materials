// f) Create C program to design a calculator that calculates a resistor value using
//    colour code method (allow the user to enter the resistor colours).
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
   
    char color[20];
    double values[4];
    float tolerance;
    for(int i=0; i<4; i++)
    {
        printf("Color %d: ",i+1);
        scanf("%s",&color);
        if (strcmp(color,"Black")==0)
        {
            values[i] = 0;
        }
        else if (strcmp(color,"Brown")==0)
        {
            values[i] = 1;
        }
        else if (strcmp(color,"Red")==0)
        {
            values[i] = 2;
        }
        else if (strcmp(color,"Orange")==0)
        {
            values[i] = 3;
        }
        else if (strcmp(color,"Yellow")==0)
        {
            values[i] = 4;
        }
        else if (strcmp(color,"Green")==0)
        {
            if (i==3)
            {
                values[i] = .5;
            }
            else
            {
                values[i] = 5;
            }
            
        }
        else if (strcmp(color,"Blue")==0)
        {
            if (i==3)
            {
                values[i] = .25;
            }
            else
            {
                values[i] = 6;
            }
        }
        else if (strcmp(color,"Violet")==0)
        {
            if (i==3)
            {
                values[i] = .1;
            }
            else
            {
                values[i] = 7;
            }
        }
        else if (strcmp(color,"Gray")==0)
        {
            if (i==3)
            {
                values[i] = .05;
            }
            else
            {
                values[i] = 8;
            }
        }
        else if (strcmp(color,"White")==0)
        {
            if (i==3)
            {
                values[i] = 0;
            }
            else
            {
                values[i] = 9;
            }
            
        }
        else if (strcmp(color,"Gold")==0)
        {
            if (i==3)
            {
                values[i] = 5;
            }
            else
            {
                values[i] = 0;
            }
        }
        else if (strcmp(color,"Silver")==0)
        {
            if (i==3)
            {
                values[i] = 10;
            }
            else
            {
                values[i] = 0;
            }
        }
        
    }
    
    double result = ((values[0]*10) + values[1]) * pow(10,values[2]);

    printf("Resistence = %.3lf (+-) %0.3lf%%", result, values[3]);
    
}