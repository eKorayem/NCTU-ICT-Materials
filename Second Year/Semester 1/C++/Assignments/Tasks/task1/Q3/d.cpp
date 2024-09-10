#include <iostream>
using namespace std;
#include <string>

void showChoice();
double add(double a, double b);
double subtract(double a, double b);
double mulitiply(double a, double b);
string divide(double a, double b);


int main()
{
    showChoice();
    cout << add(4, 5) << endl;
    cout << mulitiply(4, 5) << endl;
    cout << subtract(4, 5) << endl;
    cout << divide(4, 2) << endl;
}

void showChoice(){
    cout << "Choose an operation:" << endl;
    cout << "Enter '+' for Addition" << endl;
    cout << "Enter '-' for Subtraction" << endl;
    cout << "Enter '*' for Multiplication" << endl;
    cout << "Enter '/' for Division" << endl;
}
double add(double a, double b){return a+b;}
double subtract(double a, double b){return a-b;}
double mulitiply(double a, double b){return a*b;}
string divide(double a, double b){return (b==0)? "u can't divide by zero" : to_string(a/b);}
