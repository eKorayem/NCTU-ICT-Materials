#include<stdio.h>

int main()
{
    int n;
    printf("Enter the end of the condition\n");
    scanf("%d", &n);

    for(int i=1; i <= n; i+=2)
    {
        printf("%d, ", i);
    }

}