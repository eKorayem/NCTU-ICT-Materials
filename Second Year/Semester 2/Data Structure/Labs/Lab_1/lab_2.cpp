#include <iostream>
using namespace std;

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    cout << "Enter the first Array elements\n";
    for(int i=0; i!=3; ++i){
        cout << "Enter row " << i+1 << " values\n";
        for(int j=0; j!=3; ++j){
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the Second Array elements\n";
    for(int i=0; i!=3; ++i){
        cout << "Enter row " << i+1 << " values\n";
        for(int j=0; j!=3; ++j){
            cin >> arr2[i][j];
        }
    }


    
    int sum_arr[3][3];
    cout << "Sum Array....\n";
    for(int i=0; i!=3; ++i){
        for(int j=0; j!=3; ++j){
            sum_arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i=0; i!=3; ++i){
        for(int j=0; j!=3; ++j){
            cout << sum_arr[i][j] << " " ;
        }
        cout << endl;
    }
}