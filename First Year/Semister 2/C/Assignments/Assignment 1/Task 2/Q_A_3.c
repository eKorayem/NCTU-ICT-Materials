/*
void Main()             --> Synax eror main not Main
{
    printf("%d",sum(10,20));
    }
    int sum(int a, int b)     -->syntax sum is not declared
    {
        return x*y;  --> Logic Eror function u r trying to multiply
                     --> x and y not
    }
*/

#include <stdio.h>
int sum(int x, int y)
{
    int result = x+y;
    return result;
}

int main()
{

    printf("%d\n", sum(10,20));
    printf("%d %d", 10, 20);
}
