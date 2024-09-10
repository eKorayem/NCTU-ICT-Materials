#include <stdio.h>

int main()
{   
    int rows ;
    char symbol;

    printf("Enter symbol: ");
    scanf("%c", &symbol);

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i =1 ; i<= rows; i++)
    {
        for(int j=1; j<=2*rows-1; j++)
        {
            if(j>= rows-i+1 && j<= rows +i-1)
            {
                printf("%c",symbol);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}