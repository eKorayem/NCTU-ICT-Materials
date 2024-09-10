#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main()
{
    string a="33";
    int da = stoi(a);
    da++;
    cout << da;
}