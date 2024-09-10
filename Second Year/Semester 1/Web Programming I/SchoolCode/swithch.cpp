#include <iostream>

using namespace std;

int main()
{
    
    int grade;
    cout << "Enter the grade\n";
    cin >> grade;
    switch (grade/10)
    {
    case 10:
    case 9:
        cout << "A";
        break;
    
    case 8:
        cout << "B";
        break;
    
    case 7:
        cout << "C";
        break;
    
    case 6:
        cout << "D";
        break;
    
    case 5:
        cout << "D-";
        break;
    
    case 4:
        cout << "F";
        break;

    default:
        cout << "F-";
    }

}