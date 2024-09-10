// ================ header file <queue.h> ================
#pragma once
#define Queue_Entry int
#define Max_Queue 10

enum Error_code {
	underflow = -1,
	success = 0,
	overflow = 1
};

class Queue
{
private:
	int front, rear, size;
	Queue_Entry entry[Max_Queue];
public:
	Queue();
	Error_code append(Queue_Entry e);
	Error_code serve(Queue_Entry &e);
	int get_size();
	bool empty();
	bool full();
	void clear();
	void traverse( void (*pf)(Queue_Entry) );
	void reverseQueue();
};

