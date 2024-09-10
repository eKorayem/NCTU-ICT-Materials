// ================ header file <Stack.h> ================
#pragma once
#define Stack_Entry int
#define Max_Stack 100

enum Error_code {
	underflow = -1,
	success = 0,
	overflow = 1
};
class Stack
{
private:
	Stack_Entry entry[Max_Stack];
	int top;
public:
	Stack();
	bool empty();
	Error_code pop(Stack_Entry &e);
	Error_code push(Stack_Entry e);
	bool full();
	void traverse( void (*pf)(Stack_Entry) );
	Error_code clear();
	int size();
	Error_code ctop(Stack_Entry &e);
};

