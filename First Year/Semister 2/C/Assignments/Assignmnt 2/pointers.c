#include <stdio.h>
void show(int i)
{
    int n = 0;
    printf("N before adding i= %d\n",n);
    printf("i = %d\n",i);
    n += i;
    printf("N After adding i= %d\n",n);
    printf("%d \n",++n);
    printf("N After adding 1= %d\n",n);

    printf("--------------------\n");

}

int main()
{
    for(int i =0; i<5; i++)
    {
        show(i);
        // show(0) --> 1
        // show(1) --> 
    }
    
}