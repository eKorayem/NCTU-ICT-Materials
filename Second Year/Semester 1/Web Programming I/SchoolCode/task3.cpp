#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter the grade\n";
    cin >> grade;

    if(90 <= grade && grade<=100){
        cout << "A";
    }
    else if(80 <= grade &&grade<=89){
        cout << "B";
    }
    else if(70<= grade && grade<=79){
        cout << "C";
    }
    else if(60<=grade &&grade<=69){
        cout << "D";
    }
    else if(50<=grade &&grade<=59){
        cout << "D-";
    }
    else if(40<=grade &&grade<=49){
        cout << "F";
    }
    else if(grade<40){
        cout << "F-";
    }
}