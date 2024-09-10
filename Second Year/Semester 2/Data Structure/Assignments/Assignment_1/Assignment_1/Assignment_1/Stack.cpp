//  ================ Implementation file <Stack.cpp> ================
#include "Stack.h"
Stack::Stack() {
	top = 0;
}

Error_code Stack::pop(Stack_Entry &e) {
	if (empty()) {
		return underflow;
	}
	e = entry[--top];
	return success;
}

bool Stack::empty() {
	return (!top);
}

Error_code Stack::push(Stack_Entry e) {
	if (top==Max_Stack) {
		return overflow;
	}
	entry[top++] = e;
	return success;
}

bool Stack::full() {
	return (top== Max_Stack);
}

Error_code Stack::clear() {
	top = 0;
	return success;
}

int Stack::size() {
	int out = top;
	return out;
}

void Stack::traverse(void (*pf)(Stack_Entry)) {
	for (int i = top - 1; i >= 0; i--) {
		(*pf)(entry[i]);
	}
}

Error_code Stack::ctop(Stack_Entry& e) {
	e = entry[top - 1];
	return success;
}