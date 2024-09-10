#include <iostream>
using namespace std;



int find_element(int arr[], int size, int val){
    int pos=-1;
    for(int i=0; i!=size; ++i){
        if(arr[i] == val){
            pos = i;
            break;
        }
    }
    return pos;
}

int main()
{
    int arr[] = {20, 50, 10, 5, 30, 8, 9, 10, 6, 2};
    bubbleSort(arr, 10);
    for(int i=0; i!=10; ++i){
        cout << arr[i] << " ";
    }cout << endl;

    int index = find_element(arr, 10, 30);
    if(index==-1) cout << "Element not found\n";
    else cout << "Element is found at index " << index;
}