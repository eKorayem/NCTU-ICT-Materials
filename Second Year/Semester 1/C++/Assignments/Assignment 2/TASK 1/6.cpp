#include <iostream>
using namespace std;
void sum_grades(string arr[][8], int n){
    for(int i=0; i!= n; ++i){ int result=0;
        for(int j=1; j!=8; ++j) result += stoi(arr[i][j]);
        cout << "Student Name: " << arr[i][0] << endl;
        cout << "Student Score: " << result << endl;
    }
}
int main()
{
    cout << "Enter the number of students\n";
    int n; cin >> n; 
    string arr[n][8];
    for(int i=0; i!=n; ++i){
        cout << "Student Name: "; cin >> arr[i][0];
        cout << "Enter Python, C++, C, C#, Java, DB, Math grades, respective\n";
        for(int j=1; j!=8; ++j) cin >> arr[i][j];        
    }
    sum_grades(arr, n);
}