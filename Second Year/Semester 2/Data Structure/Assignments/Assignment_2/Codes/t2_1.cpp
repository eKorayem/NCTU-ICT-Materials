#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

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