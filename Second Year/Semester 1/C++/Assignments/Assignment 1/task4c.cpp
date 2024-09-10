#include <iostream>
using namespace std;

int main()
{
    while(true){
        char op;
        int num1;
        int num2, result=0;
        cout << "Enter the operator\n";
        cin >> op;
        if(op == 'q') break;

        cout << "Enter the first number\n";
        cin >> num1;

        cout << "Enter the second number\n";
        cin >> num2;

        if(op == '+') result = num1+num2;
        else if(op == '-') result = num1-num2;
        else if(op == '*') result = num1*num2;
        else if(op == '/') result = num1/num2;
        else cout << "Wrong operator\n";

        cout << num1 << op << num2 << " = "<< result << endl;
        cout << "Enter q to exit OR ";


    }
}