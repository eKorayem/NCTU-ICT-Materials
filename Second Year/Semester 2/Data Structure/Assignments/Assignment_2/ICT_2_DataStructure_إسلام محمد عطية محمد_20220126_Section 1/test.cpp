#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=0; i!=n-1; i++){
        bool swapped = false;
        for(int j=0; j!=n-i-1; j++){
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
}

int seq_search(int arr[], int arr_size, int element){
    int index = -1;
    for(int i=0; i!=arr_size; i++){
        if(arr[i] == element){
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    int arr[] = {5,4,3,2,1};
    cout << seq_search(arr, 5, 50) << endl<< endl;
    bubble_sort(arr, 5);
    cout << seq_search(arr, 5, 5) << endl<< endl;
    // for(auto n:arr) cout << n << " ";
}