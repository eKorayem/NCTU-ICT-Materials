// ================ implementation file <queue.cpp> ================
#include "Queue.h"
#include <iostream>
using namespace std;
Queue::Queue() {
	front = size = 0;
	rear = -1;
}

bool Queue::empty() {
	return !size;
}
bool Queue::full() {
	return (size == Max_Queue);
}
Error_code Queue::append(Queue_Entry e) {
	if (full()) return overflow;
	rear = (rear + 1) % Max_Queue;
	entry[rear] = e;
	size++;
	return success;
}
Error_code Queue::serve(Queue_Entry &e){
	if (empty()) return underflow;
	e = entry[front];
	front = (front + 1) % Max_Queue;
	size--;
	return success;
}
int Queue::get_size() {
	return size;
}
void Queue::clear() {
	front = size = 0;
	rear = -1;
}
void Queue::traverse(void (*pf)(Queue_Entry) ) {
	int pos = front;
	for (int i = 0; i != size; ++i) {
		(*pf)(entry[pos]);
		pos = (pos + 1) % Max_Queue;
	}
}

void Queue::reverseQueue()
{
	int pos = rear;

	for (int i = size - 1; i >= 0; i--) {
		cout << entry[i] << endl;
		pos = (pos - 1) % Max_Queue;
	}
}
