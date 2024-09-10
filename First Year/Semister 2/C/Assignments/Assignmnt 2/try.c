#include "stdio.h"
int a = 20;
int main()
{
    FILE *pfile;
    pfile = fopen("test.txt", "r");
    if (pfile != NULL)
    {
        char my_string[100];
        
        while (fgets(my_string, 100, pfile))
        {
            printf("%s",my_string);
        }
        
    }
    else
    {
        printf("File not exist");
    }
    
}