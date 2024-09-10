#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Enter the numbers:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1>n2 && n1>n3 && n1>n4)
    {
        printf("\n%d is the biggest", n1);
    }
    else if (n2>n1 && n2>n3 && n2>n4)
    {
        printf("\n%d is the biggest", n2);
    }
    else if (n3>n1 && n3>n2 && n3>n4)
    {
        printf("\n%d is the biggest", n3);
    }
    else if (n4>n2 && n4>n3 && n4>n1)
    {
        printf("\n%d is the biggest", n4);
    }

}