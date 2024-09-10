#include <stdio.h>

int main()
{
    int rows ;
    int space;
    printf("Enter the # of rows: ");
    scanf("%d", &rows);
    space=rows*2;
    for(int i = 1; i<= rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
            
        }
        for(int z=0; z<space; z++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("*");
        }
        
        space=space-2;
        printf("\n");
    }
    
}