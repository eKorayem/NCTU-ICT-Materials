// e) Implement C program that included a structure for each electronic element
//    shown in table (1) 2nd Edition
#include <stdio.h>
#include <string.h>

struct Resistor
{
    char name[20];
    char value[20];
    char more_feature[30];
};

struct Capacitor
{
    char name[20];
    char value[20];
    char more_feature[30];
};

struct Inductor
{
    char name[20];
    char value[20];
    char more_feature[30];
};

int main()
{
    struct Resistor resistor;
    struct Capacitor capacitor;
    struct Inductor inductor;

    strcpy(resistor.name,"Resistor");
    strcpy(resistor.value,"220 OHMs");
    strcpy(resistor.more_feature,"Tolerance = 20%");

    strcpy(capacitor.name,"Capacitor");
    strcpy(capacitor.value,"470 microfarads");
    strcpy(capacitor.more_feature,"Voltage = 25v");

    strcpy(inductor.name,"Inductor");
    strcpy(inductor.value,"1 mH");
    strcpy(inductor.more_feature,"Power = 0.25 w");

    char read[10];
    printf("do u want to print out the data (yes or no)\n");
    scanf("%s", &read);

    if(strcmp(read, "yes")==0)
    {
        printf("%s\t\t%s\t\t%s\n", resistor.name, resistor.value, resistor.more_feature);
        printf("%s\t\t%s\t\t%s\n", capacitor.name, capacitor.value, capacitor.more_feature);
        printf("%s\t\t%s\t\t\t%s\n", inductor.name, inductor.value, inductor.more_feature);
    }
    else if (strcmp(read, "no")==0)
    {
        printf("as u want!!\n");
    }
    else{
        printf("loser!!\n");
    }

}