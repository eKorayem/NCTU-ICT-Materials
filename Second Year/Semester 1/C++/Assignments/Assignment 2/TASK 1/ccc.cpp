#include <iostream>
using namespace std;

void fun(int A, int B){

}

int main()
{

    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nn=n;
    for(int i =0; i!=nn/2; ++i){
        int temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
        n--;
    }
    for(int i=0; i!=nn; ++i) cout << arr[i] << " ";

}