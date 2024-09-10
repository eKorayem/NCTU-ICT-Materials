#include <iostream>
using namespace std;
#include <utility>
#include <cassert>

#include <type_traits>
int sum(int x, int y){
    return 0;
}

int main()
{
    // auto (*ptrfunc)(int, int) = sum;

    // int ssum = ptrfunc(3, 5);

    // cout << ssum;

    cout << decltype(1);

}