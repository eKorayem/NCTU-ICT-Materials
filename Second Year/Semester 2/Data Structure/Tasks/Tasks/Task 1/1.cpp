#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int x; cin >> x;
    for(int i=0; i<=12; ++i){
        cout << i << " x " << x << " = " << i*x << endl;
    }
}