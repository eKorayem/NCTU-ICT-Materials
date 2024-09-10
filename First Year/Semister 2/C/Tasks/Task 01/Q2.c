#include <stdio.h>

const char * IsLeap(int year)
{
    return (year % 4 == 0)? "Leap Year" : "Not leap Year" ;
}

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("%s",IsLeap(year));
}