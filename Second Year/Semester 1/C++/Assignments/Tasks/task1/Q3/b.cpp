#include <iostream>
using namespace std;

void smaller(int &num1, int &num2) {
    if (num1>num2) num2 = 0;
    else num1 = 0;
}

int main()
{
    int num1, num2;
    num1=2;
    num2=2004;
    smaller(num1, num2);
    cout << num1 << endl;
    cout << num2;
}