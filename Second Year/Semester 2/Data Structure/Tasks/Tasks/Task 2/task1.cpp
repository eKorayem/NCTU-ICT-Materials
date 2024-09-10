#include <iostream>
using namespace std;

int fun(int n1, int n2, int n3, int n4, int n5, int *mult, int *avg, int *sum){
    *mult = n1*n2*n3*n4*n5;
    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
}

int iswap(int *pval1, int *pval2){
    int temp = *pval1;
    *pval1 = *pval2;
    *pval2 = temp;
}
int iswap(int &rval1, int &rval2){
    int temp = rval1;
    rval1 = rval2;
    rval2 = temp;
}

int main()
{
    int n1 = 5;
    int n2 = 5;
    int n3 = 5;
    int n4 = 5;
    int n5 = 5;
    
    int mult;
    int sum;
    int avg;

    int *pmult = &mult;
    int *pavg = &avg;
    int *psum = &sum;

    fun(n1,n2,n3,n4,n5, pmult, pavg, psum);
    cout << "*sum: " << *psum << endl;
    cout << "*avg: " << *pavg<< endl;
    cout << "*mult: " << *pmult << endl;

    int a = 10, b=20;
    iswap(&a, &b);
    cout << "\na: " << a << "\tb: " << b;
    iswap(a, b);
    cout << "\na: " << a << "\tb: " << b;


}
