#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi=arr[0], mini=arr[0];

    for(int i=1; i!=n; ++i){
        if(arr[i]>maxi) maxi=arr[i];
        if(arr[i]<mini) mini=arr[i];
    }
    cout << "Maximum: " << maxi << endl;
    cout << "Minimum: " << mini << endl;
}