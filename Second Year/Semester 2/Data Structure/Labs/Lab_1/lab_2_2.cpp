#include <iostream>
using namespace std;

int abslute(double num){
    if(num<0) num = -num;
    return num;
}

// int sum_even(int strt, int steps){
//     int sum =0;
//     for(int i=0; i!=steps; i++){
//         sum += strt;
//         strt = strt + 2;
//     }
//     return sum;
// }
int sum_even(int steps){
    int sum =0;
    for(int i=0; i!=steps; i++){
        sum += 2;
    }
    return sum;
}

int sum_digits(int num){
    int sum=0;
    while(num!=0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

void max_min(int arr[], int size){
    int min=arr[0];
    int max=arr[0];
    for(int i=0; i!=size; ++i){
        if(min>arr[i]) min = arr[i];
        if(max<arr[i]) max = arr[i];
    }
    cout << "MIN: " << min << endl;
    cout << "MAX: " << max << endl;
}

int iswap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    // int sum_e = sum_digits(321);
    int arr[] = {1,2,3,4,5};
    int size = 5;
    
    for(int i=0; i!=size/2; ++i){
        iswap(&arr[i], &arr[(size-1)-i]);
    }
    for(int i=0; i!=5; ++i){
        cout << arr[i] << " ";
    }
    // max_min(arr, 5);
    
}