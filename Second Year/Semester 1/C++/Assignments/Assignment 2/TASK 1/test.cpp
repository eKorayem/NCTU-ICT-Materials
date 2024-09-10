#include <iostream>
using namespace std;
int sumArr(int *arr, int size){
    int sum=0;
    for(int i=0; i!=size; ++i) {sum += *arr; arr++;}
    return sum;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << sumArr(arr, 4);
}