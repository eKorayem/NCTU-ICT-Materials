//c) Design Write a program to display the output as the following
#include <stdio.h>

int main()
{
    int rows ;
    printf("Enter the # of rows: ");
    scanf("%d", &rows);
    for(int i = 1; i<= rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
            
        }
        for(int space=1; space<=(2*rows)+1-(2*i); space++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("*");
        }
        
        
        printf("\n");
    }
    
}