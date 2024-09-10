#include <iostream>
using namespace std;

int main()
{
    int num=43243, first, last;
    last = num%10;
    int num0 = num;
    while(num0!=0){
        first = num%10;
        num /= 10;
    }

    int i = 10;

    while(num!=0){
        num /= 10;
        last += (num%10)*i;
        i = i*10;

    }
    cout << last;
}