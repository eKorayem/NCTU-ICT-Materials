#include <iostream>
using namespace std;

struct book
{
    int b_num;
    string b_title;
    string b_author;
};

book arr[3] = {
        {0, "c programming language", "Dennis Ritchie"},
        {1, "c++ primer", "Lipman"},
        {2, "calculus", "Michael Spivak"}
    };

string is_exist(string title, int num){
    for(int i=0; i!=3; ++i){
        if(title == arr[i].b_title && num==arr[i].b_num)
            return arr[i].b_author;
    }
    return "Book Not Found";
}
int main()
{
    cout << "Book Title: ";
    string title;
    getline(cin, title);
    for(char &c:title) c=tolower(c);
    cout << "Book Number: ";
    int number;
    cin >> number;
    cout << is_exist(title, number);
}