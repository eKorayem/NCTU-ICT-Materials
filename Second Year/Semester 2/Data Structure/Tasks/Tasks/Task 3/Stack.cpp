#include <iostream>
using namespace std;

enum Error_Code {
    underflow = -1,
    success = 0,
    overflow = 1
};

#define Max_Stack 100
#define StackEntry int


struct Stack {
    int top;
    StackEntry entry[Max_Stack];
};

void createStack(Stack *ps){
    ps->top = 0;
}

Error_Code push(Stack *ps, StackEntry e){
    if(ps->top==Max_Stack) return overflow;
    ps->entry[ps->top ++] = e;
    return success;
}

Error_Code pop(Stack *ps, StackEntry &e){
    if(ps->top==0) return underflow;
    e = ps->entry[--ps->top];
    return success;
}

void travarse(Stack *ps, void (*pf) (StackEntry)){
    for (int i=ps->top-1; i>=0; --i){
        (*pf)(ps->entry[i]);
    }
}

Error_Code stackTop(Stack *ps, StackEntry &e){
    if(ps->top==0) return underflow;
    e = ps->entry[ps->top-1];
    return success;
}

bool stackEmpty(Stack *ps){
    return !ps->top;
}

bool stackFull(Stack *ps){
    return ps->top == Max_Stack;
}

int stackSize(Stack *ps){
    return ps->top;
}

void clearStack(Stack *ps){
    ps->top = 0;
}

void display(StackEntry e){
    cout << "Item: " << e << endl;
}

int main()
{
    Stack s;
    createStack(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);

    travarse(&s, &display);
    
}