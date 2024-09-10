#include <iostream>
using namespace std;

int func(int &x, int y=10){
    if(x%y==0)
        return ++x;
    else
        return y--;
}

int main()
{
    
}