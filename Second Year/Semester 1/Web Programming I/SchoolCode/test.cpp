#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int num;
    cout << "Enter the number to \n";
    cin >> num;

    int _num = num;
    int digits=0;

    //counting the digits
    while(_num!=0){
        _num/=10;
        ++digits;
    }

    int last = num%10;
    last = last * (pow(10,digits-1));
    
    num /= 10;
//    cout << "Num at first " << num << endl;
    int i = 10;
    int remainder;
    while(num != 0){
        remainder = num%10;
        if(num <= 9){
            last+=remainder;
            break;
        }
        last += remainder * i;
        i = i*10;
        num /= 10;
    }

    cout << last;
    
    
    
    
    


}