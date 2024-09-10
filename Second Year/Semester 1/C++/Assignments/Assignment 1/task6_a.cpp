#include <iostream>
using namespace std;
#include <string>

int main()
{ 

    while(1){
        string name;
        int sum = 0;
        int grade = 0;
        cout << "Enter Student Name: ";
        cin >> name;

        if(name=="q"){
            break;
        }
        cout << "English grade: ";
        cin >> grade;
        sum += grade;

        cout << "Math grade: ";
        cin >> grade;
        sum += grade;

        cout << "Physics grade: ";
        cin >> grade;
        sum += grade;

        cout << "Python grade: ";
        cin >> grade;
        sum += grade;

        cout << "----------\nStudent Name: " << name << endl;
        cout << "Score: " << sum << endl;
        cout << "Average: " << sum/5 << endl;
        cout << "======================\n";
        cout << "Enter q to quit";
        cout << "======================\n";
    }
    
    
}