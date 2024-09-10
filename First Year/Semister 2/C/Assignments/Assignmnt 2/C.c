#include <stdio.h>
#include <string.h>

void sort(float arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()

{
    int size;
    printf("How many value will you add? ");
    scanf("%d",&size);
    
    float values[size];

    for(int i=0; i<size; i++ )
    {
        printf("Enter The Value: ");
        scanf("%f", &values[i]);
    }
    sort(values, size);


    FILE *pFValues = fopen("values.txt", "w");
    
    for(int i=0; i<size; i++)
    {
        fprintf(pFValues, "%f\n",values[i]);
    }
    fclose(pFValues);

    char read[10];
    printf("do u want to print the values? yes or no ");
    scanf("%s", &read);

    if (strcmp(read, "yes") == 0)
    {
        FILE *pFValues = fopen("values.txt", "r");
        char line[50];
        while(fgets(line, 50, pFValues)!=NULL)
        {
            printf("%s", line);
        }
        fclose(pFValues);
    }
    else if (strcmp(read, "no") == 0)
    {
        printf("as u want");
    }
    else
    {
        printf("loser!!");
    }
    
    
}
