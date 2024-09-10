// Assignment_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Queue.h"
using namespace std;

void display(int e) {
    cout << "Item : " << e << endl;
}

int main()
{
    /*Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int item;
    s.pop(item);
    s.traverse(&display);*/

    Queue q;
    q.append(1);
    q.append(2);
    q.append(3);
    q.append(4);
    q.reverseQueue();

}

