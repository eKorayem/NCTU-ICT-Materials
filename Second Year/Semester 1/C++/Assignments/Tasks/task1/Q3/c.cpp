#include <iostream>
using namespace std;

double power(double n, int p=2){
    double result=1;
    while(p!=0){
        result*=n;
        p--;
    }
    return result;
}

int main()
{
    cout << power(4, 3);
}

