#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[0];
    arr[0] = arr[n-1];
    arr[n-1] = temp;
    for(int i=0; i!=n; ++i) cout << arr[i] << " ";

}