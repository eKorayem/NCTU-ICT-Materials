#include <stdio.h>

void sort(float arr[], int size)
{
    for(int i =0; i<size-1; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
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
    // Getting the values from user

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    float values[size];
    for(int i=0; i<size; i++)
    {
        printf("Enter num: ");
        scanf("%f", &values[i]);
    }

    sort(values, size);

    FILE *fValues = fopen("values.txt", "r");

    if(fValues == NULL)
    {
        FILE *fValues = fopen("values.txt", "w");
        for(int i=0; i<size; i++)
        {
            fprintf(fValues, "%f\n", values[i]);
        }
        fclose(fValues);
    }

    float *ptr;
    ptr = values;

    for(int i=0; i<size; i++)
    {
        printf("The Value: %f\t\tThe Pointer: %p\n",*ptr, ptr);
        ptr++;
    }

    
    
}