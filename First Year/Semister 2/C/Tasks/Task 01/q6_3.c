#include <stdio.h>

int threenum(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    return threenum(n-1) + threenum(n-2) + threenum(n-3);
}

int main()
{
    int n;
    printf("Enter the end: ");
    scanf("%d", &n);

    for(int i =0 ; i<n; i++)
    {
        printf("%d ", threenum(i));
    }

}