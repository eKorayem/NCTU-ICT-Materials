// b) Create a pointer to print the elements and address of the sorting array in the
//    above program (a).

#include <stdio.h>

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

    float *ptr = values;

    for(int i=0; i<size; i++)
    {
        printf("Adress: %p\t\tValue: %f\n",ptr, *ptr);
        ptr++;
    }


    
}
