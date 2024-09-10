#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

int main()
{
    int rows;
    cout << "Enter row number\n";
    cin >> rows;
/*


    *
   * *
  *   *
 *     *
*       *      

*/
    int j=0;
    // j=10
    for(int i=rows; i!=0, j!=rows*2; --i, j+=2){
        if(j==0){
            cout << setw(i) << "*" << endl;
        }else{
            cout << setw(i) << "*" << setw(j) << "*" << endl;
            if(i==1) cout << string(j+1, '*') << endl;

        }
    }
    cout << string(j-1, '*')  << endl;
    j-=2;
    for(int i=1; i!=rows, j>=0; ++i, j-=2){
        if(j==0){
            cout << setw(i) << "*" << endl;
        }else{
            cout << setw(i) << "*" << setw(j) << "*" << endl;
        }

    }
    
}