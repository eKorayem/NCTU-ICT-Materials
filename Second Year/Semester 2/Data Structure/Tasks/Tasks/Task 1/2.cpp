#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    for(int i=0; i!=3; ++i){
        cout << "Enter row " << i+1 << " values\n";
        for(int j=0; j!=3; ++j){
            cin >> arr[i][j];
        }
    }
    int diagonal_sum = 0;
    for(int i=0; i!=3; ++i){        
        for(int j=0; j!=3; ++j){
            if(i==j) diagonal_sum += arr[i][j];
        }
    }
    cout << "Diagonal Sum =     " << diagonal_sum;
}