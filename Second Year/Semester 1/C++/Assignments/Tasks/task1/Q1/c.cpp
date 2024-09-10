#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int revArr[n];
    for(int i=n-1, j=0; i!=-1, j!=n; --i, ++j) revArr[j] = arr[i];
    for(int i=0; i!=n; ++i) cout << revArr[i] << " ";

}