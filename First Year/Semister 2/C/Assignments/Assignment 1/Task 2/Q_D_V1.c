//d) Execute the previous program but allow the user to enter X and Y
#include <stdio.h>

int main()
{
    char y;
    printf("Enter the symbol: ");
    scanf("%c", &y);
    int x ;
    printf("Enter the X: ");
    scanf("%d", &x);
    
    
    for(int i = 1; i<= x; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c",y);
            
        }
        for(int space=1; space<=(2*x)+1-(2*i); space++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("%c",y);
        }
        
        
        printf("\n");
    }
    
}